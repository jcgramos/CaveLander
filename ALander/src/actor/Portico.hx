package ;

import flash.display.Sprite;
import flash.display.Bitmap;
import flash.display.Stage;
import flash.text.TextField;
import openfl.Assets;
import flash.Lib;


/**
 * ...
 * @author Yo
 */
class Portico extends Actor
{
	var timer:Float = 0;
	var creationDelay:Float = 3000;
	var open:Bool = false;
	var changing:Bool = false;
	var xwidth:Float;
	var xheight:Float;

	public var closed:Bool;
	
	
	public override function new() {
		super();
		
		this.type = "Portico";
	}
	public override function init( scene:Scene, x:Float, y:Float, ?width:Float, ?height:Float) {
		
		this.addChild(new Bitmap(Assets.getBitmapData( "img/obstacle.png")));

		this.x = x;
		this.y = y;
		
		this.xwidth = (width > height ? width : 10);
		this.xheight = (height > width ? height : 10);

		
		this.width = this.xwidth;		
		this.height = this.xheight;
		
		this.scene = scene;
		
	}
		
	public override function update(elapsedTime:Int):Void { 
		
		if ( elapsedTime + timer > creationDelay && !this.closed ) 
			changeState() ;
			
		else
			timer += elapsedTime;
			
			
		if (this.changing )
			refresh();
		
	}	
	
	public function openNow() {
		refresh();
	}
	public override  function destroy() {
	
		this.open = false;
		refresh();
		 //this.scene.removeActor(this);
	}
	
	private function changeState() {
		
		this.timer = 0;
		this.changing = true;

		this.open = !this.open;
	}
	
	private function refresh() {

		this.timer = 0;

		if (this.open) {
			if (this.xwidth > this.xheight ) {
				if (this.width < this.xwidth) 
					this.width +=10;
				else
					this.changing = false;
			} else {
				if (this.height < this.xheight) 
					this.height +=10;
				else
					this.changing = false;
			}
		} else {
			if (this.xwidth > this.xheight ) {
				if (this.width > 5 )
					this.width -=  Math.min(10, this.width);
				else
					this.changing = false;
			} else {
				if (this.height > 5 )
					this.height  -= Math.min(10, this.height);
				else
					this.changing = false;
			}
		}
		
	}
}