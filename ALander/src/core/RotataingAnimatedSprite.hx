package core;
import spritesheet.AnimatedSprite;
import spritesheet.Spritesheet;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.geom.Matrix;


/**
 * ...
 * @author jcgramos
 */
class RotataingAnimatedSprite extends AnimatedSprite 
{
	public var xloc:Float;
	public var yloc:Float;

	public var xcenter:Float;
	public var ycenter:Float;
	
	public function new(sheet:Spritesheet, smoothing:Bool=false) 
	{
		super( sheet, smoothing);
	}
	
public function rotate(angle:Float) {
	// here's where the magic happens

	this.rotation = angle;
	// define the rotation parms
	var mymatrix:Matrix = new Matrix();
	mymatrix.rotate(Math.PI*(angle)/180);

	// create a point to represent the center
	var mypoint = new flash.geom.Point(xcenter,ycenter);

	// transform into a new point
	var newpoint:flash.geom.Point = mymatrix.transformPoint(mypoint);
	// move the bitmap to the proper new location
	this.x = xloc - newpoint.x + xcenter;
	this.y = yloc - newpoint.y + ycenter;
	//this.parent.width = 25;
	//this.parent.height = 25;
	
  
 }	
}