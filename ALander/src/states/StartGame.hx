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
class StartGame extends GameState
{
	var scene:Scene;
	var previousTime:Int;

	public override function enter()  {
		
		this.scaleX = Lib.current.stage.stageWidth / GameManager.getInstance().getGameWidth();
		this.scaleY = Lib.current.stage.stageHeight / GameManager.getInstance().getGameHeight();		

		this.show();
		
		
		Lib.current.stage.addEventListener (KeyboardEvent.KEY_DOWN, keyPressed);
		Lib.current.stage.addEventListener (KeyboardEvent.KEY_UP, keyReleased);		
		Lib.current.stage.addEventListener( Event.ENTER_FRAME, frameStarted );
		if (Multitouch.supportsTouchEvents ) {
			Lib.current.stage.addEventListener( TouchEvent.TOUCH_BEGIN, touchBegin);
		}
		
	}
	
	private function show() {
		
		this.scene = Scene.load(0);
		this.scene.start(this);
		
		this.addChild(scene);

		var logo:Bitmap =  new Bitmap( Assets.getBitmapData("img/logo-texto.png"));
		logo.x = 40;
		logo.y = 40;
		this.addChild(logo);
		
		var btnPlay:TextButon = new TextButon();
		btnPlay.setText( CLocals.text.start );
		btnPlay.setColor(0x0000ff);
		btnPlay.x = 80;
		btnPlay.y = 140;
		btnPlay.onTap( btnPlay_Tap );
		this.addChild(btnPlay);

		var btnPremium:TextButon = new TextButon();
		btnPremium.setText( CLocals.text.goPremium );
		btnPremium.setColor(0x0000ff);
		btnPremium.x = 90;
		btnPremium.y = 200;
		this.addChild(btnPremium);
		
		var btnExit:TextButon = new TextButon();
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
		//Lib.current.stage.removeEventListener( Event.ENTER_FRAME, frameStarted );
		
		
		if (Multitouch.supportsTouchEvents ) {
			Lib.current.stage.removeEventListener( TouchEvent.TOUCH_BEGIN, touchBegin);
		}	
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
		
		this.scene.exit(this);
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
			GameManager.getInstance().start( new StatePlay());
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
	
	public function touchBegin( event:TouchEvent):Void {
		GameManager.getInstance().popState();
	}	
	
	
}