package ;

import flash.display.Sprite;
import flash.ui.Keyboard;
import flash.events.TouchEvent;
import flash.events.AccelerometerEvent;
import flash.events.KeyboardEvent;

import flash.display.DisplayObject;
import flash.display.Stage;
import flash.events.Event ;
import flash.display.Bitmap;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.geom.Matrix;
import flash.Lib;
import openfl.Assets;
import core.RotataingAnimatedSprite;
import spritesheet.AnimatedSprite;
import spritesheet.data.BehaviorData;
import spritesheet.importers.BitmapImporter;
import spritesheet.Spritesheet;

import boards.SpaceShipBoard;

/**
 * ...
 * @author Yo
 */
class SpaceShip extends Actor
{

	var spaceshipboard:SpaceShipBoard = new SpaceShipBoard();
	var verticalAceleration:Float = 0;
	var horizontalAceleration:Float = 0;
	var angle:Float = 0;
	var enginePower:Bool ;
	var turnLeft:Bool = false;
	var turnRight:Bool = false;
	var engineAceleration:Float = 0.1;
	var gravity:Float = 0.015;
	var animated:RotataingAnimatedSprite;
	var spritesheet:Spritesheet;
	var dead:Bool = false; 
	var land:Bool = false;
	var fuel:Float = 600;
	var hscreen:Float = 1;
	var vscreen:Float = 1;
	var timerAngle:Float = 0;
	var success:Bool = false;
	var firstTime:Bool = true;
	
	public var takinoff:Bool = false;
	
	public override function new() 
	{
		super();
		
		spritesheet = BitmapImporter.create(Assets.getBitmapData("img/spritesheet.png"), 2, 1, 25, 25);		
		spritesheet.addBehavior(new BehaviorData("off", [0],false ));
		spritesheet.addBehavior(new BehaviorData("on", [1],false  ));
		animated = new RotataingAnimatedSprite(spritesheet, true);
		animated.xloc = 0;
		animated.yloc = 0;
		this.hscreen = 0;
		this.vscreen = 0;
		this.angle = 0;
		this.success = false;
		this.land = false;
		animated.rotation = 1;
		animated.xcenter = 12.5;
		animated.ycenter = 12.5;


		this.name = "spaceShip";
		this.addChild(animated);
		
	}
	
	public function isDead():Bool {
		return this.dead;
	}
	
	public function isLand():Bool {
		return this.land;
	}
	public function getFuel():Float {
		return this.fuel;
	}
	public function isSuccess():Bool {
		return this.success;
	}
	public override function init( scene:Scene, x:Float, y:Float, ?width:Float, ?height:Float) {
		
		this.scene = scene;
		this.angle = 0;
		this.fuel = 600;
		this.verticalAceleration = 0;
		this.horizontalAceleration = 0;
		
		animated.showBehavior("off");

		this.putInStart();

		spaceshipboard.init( scene, 40, 40);
		
		scene.addChild(this);
		scene.setPlayer(this);
	}
	

	public override function clear() {
		
		if (spaceshipboard.parent != null )
			this.scene.removeChild(spaceshipboard);
		
	}
	
	public override function update( elapsedTime:Int )  {
		
		animated.update(elapsedTime);
  
		scrollWindow();
		this.spaceshipboard.setFuel( this.scene, 400 );
			
		if (!land) {
			checkLanding();
		} else {
			if (angle > 0)
				angle-= 5;
			if (angle < 0)
				angle+= 5;
		}

		if ( scene.checkCollision( this, horizontalAceleration, verticalAceleration))  {
			destroy();
		}

		
			
		this.angle += (turnLeft ?  -5: 0 ) + (turnRight ? 5: 0);

		if (this.fuel <= 0 )
			enginePower = false;
		else
			if (enginePower)
				this.fuel --;
				
					
		var engineAcelerationX = (enginePower  ? engineAceleration: 0) * Math.cos( (angle + 90) * Math.PI / 180 );
		var engineAcelerationY = (enginePower ? engineAceleration: 0) * Math.sin( (angle + 90) * Math.PI / 180 );
		verticalAceleration += gravity - (enginePower ? engineAcelerationY: 0);
		verticalAceleration = Math.min( Math.abs(verticalAceleration) , 4) * ( verticalAceleration > 0 ? 1: -1);		
		
		horizontalAceleration -=  (enginePower ? engineAcelerationX: 0);
		horizontalAceleration = Math.min( Math.abs(horizontalAceleration) , 4) * ( horizontalAceleration > 0 ? 1: -1);
			
		if ( this.animated.rotation != angle) {
			this.animated.rotate( angle);
			this.angle = angle % 360;
		}
		trace( "" + verticalAceleration);
		this.y += verticalAceleration;
		this.x += horizontalAceleration;
		
	}

	private function scrollWindow() {

		if ( Lib.current.stage.stageWidth <  this.scene.width * this.scene.parent.scaleX ) {
			var screens:Float = (this.scene.width  * this.scene.parent.scaleX ) / ( Lib.current.stage.stageWidth / 2);
			var screen:Float = this.hscreen;
			var x:Float = this.x / screen;
			if (x * this.scene.parent.scaleX  < Lib.current.stage.stageWidth / 3 )
				if ( screen >  1 )
					screen --;
			if (x  * this.scene.parent.scaleX > Lib.current.stage.stageWidth / 3 * 2)
				if ( screen <  screens )
					screen ++;
			
			if (screen != this.hscreen ) {
				this.hscreen = screen;
				this.scene.x = (Lib.current.stage.stageWidth / 2 / this.scene.parent.scaleX * (this.hscreen -1) * -1)  ;
			}
		}

		if ( Lib.current.stage.stageHeight < this.scene.height * this.scene.parent.scaleY ) {
			var screens:Float = this.scene.height * this.scene.parent.scaleY / ( Lib.current.stage.stageHeight / 2);
			var screen:Float = this.vscreen;
			var y:Float = this.y / screen;
			if (y * this.scene.parent.scaleY < Lib.current.stage.stageHeight / 3 )
				if ( screen >  1 )
					screen --;
			if (y * this.scene.parent.scaleY > Lib.current.stage.stageHeight / 3 * 2)
				if ( screen <  screens )
					screen ++;
			
			if (screen != this.vscreen ) {
				this.vscreen = screen;
				this.scene.y = (Lib.current.stage.stageHeight / 2 / this.scene.parent.scaleY *  (this.vscreen -1) * -1);
			}
		}
		
	}
	
	private function removeStartPoint() {

		for ( object in this.scene.getTargets()) {
			if (object.isStartPoint()) {
				object.clear();
				this.scene.removeActor(object);
				this.scene.removeTarget(object);
			}
		}		
		firstTime = false;
	}
	private function putInStart() {

		for ( object in this.scene.getTargets()) {
			if (object.isStartPoint()) {
				this.y = object.y - this.height;
				this.x = (object.width / 2 ) + object.x - this.width / 2;
				this.land = true;
				
				while (new Rectangle( this.x, this.y, this.width, this.height).intersects(object.getRect(this.scene))) {
					this.y --;
				}

			}
		}		
	
	}
	private function checkLanding() :Bool {

		var origen:Rectangle = new Rectangle( this.x, this.y, this.width, this.height);
		
		for ( object in this.scene.getTargets()) {
			if (origen.intersects(object.getRect(this.scene))) {
				if (origen.x >= object.x && origen.x + origen.width <= object.x + object.width  && Math.abs(this.angle) < 45) {
					if ( verticalAceleration < 1.5  && this.y < object.y) {
						this.horizontalAceleration = 0;
						this.verticalAceleration = 0;
						//this.y = object.y - this.height + 1;
						if (object.isTarget() ) {
							this.success = true;
							GameManager.getInstance().addPoints(this.fuel);
						}
						land = true;
						this.fuel = 600;
						
						return true;
						break;
					} else {
						if (!land )
							destroy();
					}
				} else {
					destroy();
				}
			}
			
		}
		land = false;
		return false;
	}

	
	public override  function destroy() {
		
		var explosion = new Explosion();
		explosion.init( scene, this.x, this.y); 
		this.dead = true;
	}
	
	
	
	public  function keyPressed (event:KeyboardEvent):Void {

			switch (event.keyCode) {

				case Keyboard.SPACE, Keyboard.UP : 
					if (this.fuel > 0 ) {
						animated.showBehavior("on");
						enginePower = true;
					}
				case Keyboard.LEFT:
					turnRight = false;
					turnLeft = true;
				case Keyboard.RIGHT:
					turnRight = true;
					turnLeft = false;

			}
	}

	public  function keyReleased (event:KeyboardEvent):Void {

		switch (event.keyCode) {

			case Keyboard.SPACE, Keyboard.UP: 
				animated.showBehavior("off");
				enginePower = false;
			case Keyboard.LEFT:
				turnLeft = false;
			case Keyboard.RIGHT:
				turnRight = false;

		}
	}	
	
	public function touchBegin( event:TouchEvent):Void {
		if (this.fuel > 0 ) {
			animated.showBehavior("on");
			enginePower = true;
		}
		
	}
	
	public function touchEnd( event:TouchEvent):Void {
		animated.showBehavior("off");
		enginePower = false;
	}

	public function updateAccelerometer( event:AccelerometerEvent) {
		
		if (!land) {
			this.angle = event.accelerationY * 200;
		}
		
	}

	
}