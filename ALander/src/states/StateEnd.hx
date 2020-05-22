package ;
import core.CLocals;
import flash.display.Bitmap;
import flash.events.KeyboardEvent;
import flash.events.TouchEvent;
import flash.Lib;
import flash.system.Capabilities;
import flash.system.System;
import flash.ui.Keyboard;
import flash.ui.Multitouch;
import openfl.Assets;
import ui.TextButon;




/**
 * ...
 * @author Yo
 */
class StateEnd extends GameState
{
	var btnPlay:TextButon = new TextButon();
	var btnPremium:TextButon = new TextButon();
	
	public override function enter()  {

		
		Lib.current.stage.addEventListener (KeyboardEvent.KEY_UP, keyReleased);		
		this.show();
	}
	
	private function show() {
		
		this.scaleX = Lib.current.stage.stageWidth / GameManager.getInstance().getGameWidth();
		this.scaleY = Lib.current.stage.stageHeight / GameManager.getInstance().getGameHeight();		

		
		var fondo:Bitmap =  new Bitmap( Assets.getBitmapData("img/next-level.png"));
		this.addChild(fondo);
		
		var logo:Bitmap =  new Bitmap( Assets.getBitmapData("img/logo-texto.png"));
		logo.x = 40;
		logo.y = 40;
		this.addChild(logo);

		
		
		
		btnPlay.setText( CLocals.text.gameover );
		btnPlay.setSize(150);
		btnPlay.setColor(0xffffff);
		btnPlay.x = 80;
		btnPlay.y = 100;
		btnPlay.onTap(btnPlay_Tap);
		this.addChild(btnPlay);
		
		btnPremium.setText( CLocals.text.buylives );
		btnPremium.setColor(0xffffff);
		btnPremium.x = 90;
		btnPremium.y = 160;
		btnPremium.onTap(btnPremium_Tap);
		this.addChild(btnPremium);
		
		
		this.x = (Lib.current.stage.stageWidth / 2 / this.scaleX - this.width  / 2);
		this.y = (Lib.current.stage.stageHeight / 2 / this.scaleY - this.height  / 2);
		
	}
	public override function exit() {
		
		Lib.current.stage.removeEventListener (KeyboardEvent.KEY_UP, keyReleased);		
		btnPlay.onTap(null);
		btnPremium.onTap(null);
		
	}
	
	
	
	public function btnPlay_Tap( event:Dynamic) {
		
		GameManager.getInstance().start( new StateStart());
		
	}	

	public function btnPremium_Tap( event:Dynamic) {
		
		GameManager.getInstance().setLives(3);
		GameManager.getInstance().popState();
		
	}	
	
	
	public override function keyReleased (event:KeyboardEvent):Void {

	if (event.keyCode == 27) {
			event.stopImmediatePropagation ();
			GameManager.getInstance().start(new StateStart());
		}

	}
	
}
	
