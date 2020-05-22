package ;

import openfl.Assets;

import spritesheet.AnimatedSprite;
import spritesheet.data.BehaviorData;
import spritesheet.importers.BitmapImporter;
import spritesheet.Spritesheet;

/**
 * ...
 * @author jcgramos
 */
class Volcan extends Actor
{

	var seconds:Int = 3;
	var timer:Float = 0;
	var creationDelay:Float = 0;
	var spritesheet:spritesheet.Spritesheet;
	var fire:AnimatedSprite;
	var force:Float;
	
	public override function new() {
		
		super();
		
		this.type = "Volcan";
		
	}
	
	public override function init( scene:Scene, x:Float, y:Float, ?width:Float, ?height:Float) {
		
		spritesheet = BitmapImporter.create(Assets.getBitmapData("img/fire.png"), 4, 1, 32, 32);		
		spritesheet.addBehavior(new BehaviorData("fire", [0, 1, 2, 3], true , 10));
		fire = new AnimatedSprite( spritesheet, true);
		fire.x = 0;
		fire.y = 0;
		
		this.x = x;
		this.y = y;
		this.scene = scene;
		this.addChild(fire);
		fire.showBehavior("fire");
		scene.addChild(this);
	}
	
	public override function update(elapsedTime:Int):Void { 
		
		fire.update(elapsedTime);
		
		if ( elapsedTime + timer > creationDelay )
			launchObstacle() ;
		else
			timer += elapsedTime;
		
	}
	
	public function setMaxForce( force:Float):Void {
		this.force = force;
	}
	private function launchObstacle() {

		var vSpeed:Float = Math.min( Math.random() * this.force * -1, -1.5);
		var hSpeed:Float = Math.random() * 3 - 2;
		
		
		
		var obstacle:Obstacle = new Obstacle("img/stone.png");
		this.scene.addActor( obstacle);
		obstacle.init( this.scene, this.x, this.y);
		obstacle.start( hSpeed, vSpeed );

		this.creationDelay = Math.random () * 5000;
		this.timer = 0;
		
		
		
	}
}