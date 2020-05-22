package ;
import flash.display.Sprite;

/**
 * ...
 * @author Yo
 */
class Actor extends Sprite
{
	var scene:Scene;
	public var type:String;
	
	public var collisionable:Bool = true;
	public function new(?collisionable:Bool = true):Void 	{ super(); this.collisionable = collisionable; }
	public function update(elapsedTime:Int):Void { }
	public function init( scene:Scene, x:Float, y:Float, ?width:Float, ?height:Float):Void { }
	public function start(  ?hSpeed:Float, ?vSpeed:Float):Void { }
	public function clear():Void { };
	public function destroy():Void { };
	
}