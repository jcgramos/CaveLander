package boards;
import flash.display.Sprite;
import flash.text.TextField;
import flash.text.TextFieldAutoSize;
import flash.text.TextFormat;

import flash.Lib;
import openfl.Assets;
import openfl.Assets;
import flash.Lib;
import flash.display.Bitmap;

/**
 * ...
 * @author Yo
 */
class PauseMessage extends Sprite
{

	public function new() 
	{
		super();
		
		this.addChild( new Bitmap( Assets.getBitmapData("img/next-level.png")));
		var x:Float = 20;
		for ( live in 0...GameManager.getInstance().getLives()) {
			var live:Bitmap = new Bitmap(Assets.getBitmapData("img/spaceShip.png", true));
			live.x = x ;
			x += 40;
			live.y = 15;
			this.addChild(live);
		}
		
		var textBox:TextField = new TextField();
		var textboxformat:TextFormat = new TextFormat();
		//
		textboxformat.size = 30;
		textBox.defaultTextFormat = textboxformat;
		//
		textBox.autoSize = TextFieldAutoSize.RIGHT  ;
		textBox.textColor = 0x00ff00;
		textBox.x = 260;
		textBox.y = 15;
		textBox.text = "" + GameManager.getInstance().getPoints();
		//
		this.addChild( textBox);
		
		var nivel:Int = 1;
		for ( fila in 1...5) {
			for (col in 1...6) {
				var bmp:Bitmap;
				if (nivel++ <=  GameManager.getInstance().getNivel() ) {
					bmp = new Bitmap(Assets.getBitmapData("img/button-face-green.png", true));
				}else {
					bmp = new Bitmap(Assets.getBitmapData("img/button-face-gray.png", true));					
				}
				bmp.x = col * 55 - 40;
				bmp.y = fila * 55 + 20;
				this.addChild(bmp);
			}
		}
		
//
		//
		//var textBox2:TextField = new TextField();
		//textboxformat.size = 24;
		//textBox2.defaultTextFormat = textboxformat;
		//textBox2.autoSize = TextFieldAutoSize.LEFT  ;
		//textBox2.text = "Press 'P' or Tap";
		//textBox2.y = 50;
		//this.addChild( textBox2);
		//
		//
		//this.graphics.beginFill( 0xffffff, 0.5);
		//this.graphics.drawRect( -50, -50, this.width + 100  , this.height + 100 );
		//this.graphics.endFill();
//
		//this.x = (Lib.current.stage.stageWidth / 2 - this.width  / 2);
		//this.y = (Lib.current.stage.stageHeight / 2 - this.height  / 2);
//

		this.x = (Lib.current.stage.stageWidth / 2 - this.width  / 2);
		this.y = (Lib.current.stage.stageHeight / 2 - this.height  / 2);

		
	}
}