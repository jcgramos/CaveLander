package ;
import flash.display.Sprite;
import spritesheet.AnimatedSprite;
import spritesheet.data.BehaviorData;
import spritesheet.importers.BitmapImporter;
import spritesheet.Spritesheet;
import flash.events.Event ;
import openfl.Assets;


import flash.Lib;


/**
 * ...
 * @author Yo
 */
class Explosion extends Actor
{

	var animated:AnimatedSprite;
	var spritesheet:Spritesheet;
	var previousTime:Int;

	
	public override function new() 
	{
		super(false);
		
		this.type = "Explosion";
		
		spritesheet = BitmapImporter.create(Assets.getBitmapData("img/explosion.png"), 7, 1, 25, 25);		
		spritesheet.addBehavior(new BehaviorData("bang", [0, 1, 2, 3, 4, 5, 6], false, 10));
		animated = new AnimatedSprite(spritesheet, true);
		this.addChild(animated);
		
		this.name = "explosion";
	}
	
	public override function init( scene:Scene, x:Float, y:Float, ?width:Float, ?height:Float) {
		
		this.scene = scene;
		this.x = x;
		this.y = y;

		animated.showBehavior("bang");
		scene.addActor(this);
		
	}
	
	
	public override function update(elapsedTime:Int):Void { 
		
		animated.update(elapsedTime);
  
		if (  animated.currentBehavior.name == "bang" && animated.currentFrameIndex == 6 ) {
				scene.removeActor(this);
			}
	}
	
	
}