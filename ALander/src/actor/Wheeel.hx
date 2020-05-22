package ;

import core.RotatingSprite;
import flash.display.Bitmap;
import flash.display.Stage;
import openfl.Assets;
import flash.Lib;



/**
 * ...
 * @author Yo
 */
class Wheeel extends Actor
{
	var timer:Float = 0;
	var actionDelay:Float = 3000;
	var lineH:core.RotatingSprite;
	var angle:Float = 0;
	
	public override function new() {
		super();
		
		this.type = "Wheel";
	}
	public override function init( scene:Scene, x:Float, y:Float, ?width:Float, ?height:Float) {
		
		this.x = x;
		this.y = y;
		this.scene = scene;
		
		this.lineH = new core.RotatingSprite();
		

		this.lineH.addChild(new Bitmap(Assets.getBitmapData( "img/obstacle.png")));
		
		this.lineH.xloc = 0;
		this.lineH.yloc = 0;
		
		this.lineH.height = 10;
		this.lineH.width = width;
		
		this.lineH.xcenter = width / 2;
		this.lineH.ycenter = height / 2;		
		
		this.addChild( this.lineH);
	
		
	
		
	}
		
	public override function update(elapsedTime:Int):Void { 
		
			this.angle += 2;
			this.lineH.rotate(this.angle);
	}	

	
	public override  function destroy() {
	
		 //this.scene.removeActor(this);
	}
	
}