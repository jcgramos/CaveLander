package core;
import flash.display.Sprite;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.geom.Matrix;


/**
 * ...
 * @author jcgramos
 */

class RotatingSprite extends Sprite
{
	public var xloc:Float;
	public var yloc:Float;

	public var xcenter:Float;
	public var ycenter:Float;
	
	public function new() 
	{
		super();
	}
	
	
	public function rotate(angle:Float) {

		this.rotation = angle;
		var mymatrix:Matrix = new Matrix();
		mymatrix.rotate(Math.PI*(angle)/180);
		var mypoint = new flash.geom.Point(xcenter,ycenter);
		var newpoint:flash.geom.Point = mymatrix.transformPoint(mypoint);
		this.x = xloc - newpoint.x + xcenter;
		this.y = yloc - newpoint.y + ycenter;
	
  
 }	
}