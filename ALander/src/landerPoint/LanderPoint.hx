package ;
import flash.display.Sprite;
import flash.display.Bitmap;
import flash.display.Stage;
import openfl.Assets;
import flash.Lib;


/**
 * ...
 * @author Yo
 */
class LanderPoint extends Actor
{
	var target:Bool;
	var startPoint:Bool;
	public override function new() 
	{
		
		super(false);
		this.addChild(new Bitmap(Assets.getBitmapData( "img/LandPoint.png")));
		this.name = "landingPoint";

	}
	
	public function setTarget( target:Bool):Void {
		this.target = target;
	}

	public function isTarget():Bool {
		return this.target;
	}

	public function setStartPoint( startPoint:Bool):Void {
		this.startPoint = startPoint;
	}

	public function isStartPoint():Bool {
		return this.startPoint;
	}
	
	public override function init( sprite:Sprite,  x:Float, y:Float, ?width:Float, ?height:Float) {
		
		this.x = x;
		this.y = y;
		this.width = width;
		this.height = 5;
		sprite.addChild(this);
	}
	
	
}