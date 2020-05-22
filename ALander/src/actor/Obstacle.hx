package ;
import core.RotataingAnimatedSprite;
import flash.display.Sprite;
import flash.display.Sprite;
import flash.display.DisplayObject;
import flash.display.Stage;
import flash.events.Event ;
import flash.display.Bitmap;
import flash.geom.Point;
import flash.Lib;
import openfl.Assets;
import spritesheet.AnimatedSprite;
import spritesheet.data.BehaviorData;
import spritesheet.importers.BitmapImporter;
import spritesheet.Spritesheet;
/**
 * ...
 * @author Yo
 */
class Obstacle extends Actor
{

	var verticalAceleration:Float = 0;
	var horizontalAceleration:Float = 0;
	var gravity:Float = 0.01;
	var image:RotataingAnimatedSprite;
	var spritesheet:Spritesheet;
	public override function new( imageName:String) 	{

		super();
		
		this.type = "Obstacle";
		
		spritesheet = BitmapImporter.create(Assets.getBitmapData("img/stone.png"), 1, 1, 17, 24);		
		spritesheet.addBehavior(new BehaviorData("on", [0],false  ));
		image = new RotataingAnimatedSprite(spritesheet, true);		
		image.xloc = 0;
		image.yloc = 0;
		image.rotation = 1;
		image.xcenter = 8.5;
		image.ycenter = 12;		
		this.addChild(image);
		
	}
	
	public override function init( scene:Scene, x:Float, y:Float, ?width:Float, ?height:Float) {
		
		this.x = x;
		this.y = y;
		this.scene = scene;
		image.showBehavior("on");
		scene.addChild(this);
	}
	
	public override function start(  ?hSpeed:Float, ?vSpeed:Float) {

		this.horizontalAceleration = hSpeed;
		this.verticalAceleration = vSpeed;
	}
	
	
	public override function update(elapsedTime:Int):Void { 
		
		
		if (this.x < 12 || this.x + 12  > this.scene.width || this.y < 12 || this.y + 12 > this.scene.height )
			this.destroy();

		verticalAceleration += gravity;

		var angle:Float;
		if (horizontalAceleration > 0 )
			angle = ( Math.atan( verticalAceleration / horizontalAceleration ) *  180 / Math.PI ) + 90;
		else
			angle = ( Math.atan( verticalAceleration / horizontalAceleration ) *  180 / Math.PI ) - 90;
		
		//this.scene.texto.text  = " " + angle;
		this.image.rotate(angle);
				
		this.y += verticalAceleration;
		this.x += horizontalAceleration;		
	}	

	
	public override function destroy() {
		this.scene.removeActor(this);
		var explosion = new Explosion();
		explosion.init( scene, this.x, this.y); 
		
	}
}