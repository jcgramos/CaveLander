package ;

import flash.display.Sprite;
import flash.display.Bitmap;
import flash.display.Stage;
import flash.text.TextField;
import openfl.Assets;
import flash.Lib;
/**
 * ...
 * @author jcgramos
 */
class Key extends Actor
{

	public var portico:String;

	public override function new() {
		super();

		this.type = "Key";

	}
	public override function init( scene:Scene, x:Float, y:Float, ?width:Float, ?height:Float) {
	
	this.addChild(new Bitmap(Assets.getBitmapData( "img/key-icon.png")));

	this.x = x;
	this.y = y;
	
	this.scene = scene;
	
}
	
}