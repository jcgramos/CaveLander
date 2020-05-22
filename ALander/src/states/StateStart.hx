package ;
import core.CLocals;
import flash.display.Bitmap;
import flash.events.KeyboardEvent;
import flash.events.TouchEvent;
import flash.events.Event;
import flash.Lib;
import flash.system.System;
import flash.ui.Keyboard;
import flash.ui.Multitouch;
import openfl.Assets;
import openfl.tiled.TiledMap;
import ui.TextButon;



/**
 * ...
 * @author jcgramos
 */
class StateStart extends GameState
{
	var scene:Scene;
	var previousTime:Int;
	var btnPlay:TextButon = new TextButon();	
	var btnPremium:TextButon = new TextButon();
	var btnExit:TextButon = new TextButon();

	public override function enter()  {
		
		this.scaleX = Lib.current.stage.stageWidth / GameManager.getInstance().getGameWidth();
		this.scaleY = Lib.current.stage.stageHeight / GameManager.getInstance().getGameHeight();		

		this.show();
		
		
		Lib.current.stage.addEventListener (KeyboardEvent.KEY_DOWN, keyPressed);
		Lib.current.stage.addEventListener (KeyboardEvent.KEY_UP, keyReleased);		
		
	}
	
	private function show() {
		
		this.scene = Scene.load(0);
		this.scene.start(this);
		
		this.addChild(scene);

		var logo:Bitmap =  new Bitmap( Assets.getBitmapData("img/logo-texto.png"));
		logo.x = 40;
		logo.y = 40;
		this.addChild(logo);
		
	
		btnPlay.setText( CLocals.text.start );
		btnPlay.setColor(0x0000ff);
		btnPlay.x = 80;
		btnPlay.y = 140;
		btnPlay.onTap( btnPlay_Tap );
		this.addChild(btnPlay);

		btnPremium.setText( CLocals.text.goPremium );
		btnPremium.setColor(0x0000ff);
		btnPremium.x = 90;
		btnPremium.y = 200;
		this.addChild(btnPremium);
		
		btnExit.setText( CLocals.text.exit );
		btnExit.setColor(0x0000ff);
		btnExit.x = 100;
		btnExit.y = 260;
		btnExit.onTap(btnExit_Tap);
		this.addChild(btnExit);
		
	}
	
	public override function exit() {
		
		Lib.current.stage.removeEventListener (KeyboardEvent.KEY_DOWN, keyPressed);
		Lib.current.stage.removeEventListener (KeyboardEvent.KEY_UP, keyReleased);	
		
		btnPlay.onTap(null);
		btnExit.onTap(null);
		
		
	}
	
	public function looop( elapsedTime:Int) {
		
		this.scene.update( elapsedTime) ;
		
	}

	public override function frameStarted (event:Event) {
		
		var now = Lib.getTimer(); 
		var elapsedTime = now - previousTime;
		
		if (elapsedTime > 10 ) {
			this.looop( elapsedTime);
			previousTime = now;
		}
	}
		
	public function btnPlay_Tap( event:Dynamic) {
		
	
		GameManager.getInstance().start( new StatePlay());
		
	}

	public function btnExit_Tap( event:Dynamic) {
		
			event.stopImmediatePropagation ();
			#if android
				Lib.exit();
			#end 
			#if flash
				System.exit(0);
			#end 
		
	}
	
	public override function keyPressed (event:KeyboardEvent):Void {
		

		if (event.keyCode == Keyboard.ENTER ) {
			GameManager.getInstance().pushState( new StatePlay());
		}
	}

	public override function keyReleased (event:KeyboardEvent):Void {

		if (event.keyCode == 27) {
			event.stopImmediatePropagation ();
			#if android
				Lib.exit();
			#end 
			#if flash
				System.exit(0);
			#end 
		}

	}
	
}