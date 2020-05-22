package boards;

import flash.display.Shape;
import flash.display.Sprite;
import flash.text.TextField;
import flash.text.TextFieldAutoSize;
import flash.text.TextFormat;
import flash.text.TextFormatAlign;
import flash.Lib;

/**
 * ...
 * @author Yo
 */
class SpaceShipBoard extends Sprite
{

	var label:TextField;
	var textFormat:TextFormat;
	var scene:Scene;
	var startX:Float;
	var startY:Float;
	
	public function new() 
	{
		super();
		
		label = new TextField();
		label.defaultTextFormat = new TextFormat( "Helvetica" , 12);

		label.width = 100;
		label.textColor = 0xffffff;
		label.text = "Fuel: ";
		label.x = 0;
		label.y = 0;

		this.addChild( label );
		
	}
	
	public function init( scene:Scene, x:Float, y:Float, ?width:Float, ?height:Float) {
		
		this.scaleX = Lib.current.stage.stageWidth / GameManager.getInstance().getGameWidth();
		this.scaleY = Lib.current.stage.stageHeight / GameManager.getInstance().getGameHeight();		
		
		this.scene = scene;
		this.x = x;
		this.y = y;
		this.startX = x;
		this.startY = y;

		scene.addChild( this );
		
	}
	public function setFuel( scene:Scene,  fuel:Dynamic) {
		
		this.x = Math.abs(scene.x) + startX;
		this.y = Math.abs(scene.y) + startY;
		
		
		this.label.text = "Fuel: " + fuel;
		
	}
	
	public function exit() {
		this.scene.removeChild(this);
	}
	
	
	
}