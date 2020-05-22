package ;
import flash.display.Bitmap;
import flash.display.Sprite;
import flash.system.Capabilities;
import openfl.Assets;
import flash.Lib;
import ui.TextButon;

import flash.text.TextField;
import flash.text.TextFieldAutoSize;
import flash.text.TextFormat;

import core.CLocals;

/**
 * ...
 * @author Yo
 */
class StartMessage extends Sprite
{

	public function new() 
	{
		super();
		
		CLocals.set( Capabilities.language );


		var buton:TextButon = new TextButon();
		buton.setText( CLocals.text.start );
		buton.setColor(0xffffff);
		buton.x = 10;
		buton.y = 50;
		this.addChild(buton);
		
		//var x:Float = 20;
		//for ( live in 0...GameManager.getInstance().getLives()) {
			//var live:Bitmap = new Bitmap(Assets.getBitmapData("img/spaceship.png", true));
			//live.x = x ;
			//x += 40;
			//live.y = 15;
			//this.addChild(live);
		//}
//
		//var nivel:Int = 1;
		//for ( fila in 1...5) {
			//for (col in 1...6) {
				//var bmp:Bitmap;
				//if (nivel++ <=  GameManager.getInstance().getNivel() ) {
					//bmp = new Bitmap(Assets.getBitmapData("img/button-face-green.png", true));
				//}else {
					//bmp = new Bitmap(Assets.getBitmapData("img/button-face-gray.png", true));					
				//}
				//bmp.x = col * 55 - 40;
				//bmp.y = fila * 55 + 20;
				//this.addChild(bmp);
			//}
		//}
		//var textBox:TextField = new TextField();
		//var textboxformat:TextFormat = new TextFormat();
		//
		//textboxformat.size = 48;
		//textBox.defaultTextFormat = textboxformat;
		//
		//textBox.autoSize = TextFieldAutoSize.LEFT ;
		//textBox.textColor = 0xffffff;
		//textBox.x =  18;
		//textBox.y = 3;
		//textBox.text = "P";
		//
		//this.addChild( textBox);
		//
		this.graphics.beginFill( 0xffffff, 1);
		this.graphics.drawRect( -50, -50, this.width + 100  , this.height + 100 );
		this.graphics.beginFill( 0x000000, 1);
		this.graphics.drawRect( -40, -40, this.width -20  , this.height -20 );
		this.graphics.endFill();

		this.x = (Lib.current.stage.stageWidth / 2 - this.width  / 2);
		this.y = (Lib.current.stage.stageHeight / 2 - this.height  / 2);
		
	}
	
}