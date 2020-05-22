package ;
import flash.display.Sprite;
import flash.events.Event;
import flash.events.TouchEvent;
import motion.Actuate;
import flash.Lib;
import flash.display.StageAlign;
import flash.display.StageScaleMode;
import flash.events.KeyboardEvent;
import flash.ui.Keyboard;
import flash.ui.GameInputFinger;
import flash.ui.Multitouch;
import flash.ui.MultitouchInputMode;
import flash.events.AccelerometerEvent;
import flash.sensors.Accelerometer;
import flash.events.FocusEvent;



import SpaceShip;
import LanderPoint;
import Scene;


/**
 * ...
 * @author Yo
 */

class StatePlay extends GameState 
{
	var spaceShip:SpaceShip;
	var scene:Scene;
	var previousTime:Int;
	var accelerometer: Accelerometer;
	var nivel:Int=0;

	/* ENTRY POINT */
	
	function resize(e) 
	{
		// else (resize or orientation change)
	}
	
	public override function new() {
		super();
		
		this.nivel = 1;

		this.scaleX = Lib.current.stage.stageWidth / GameManager.getInstance().getGameWidth();
		this.scaleY = Lib.current.stage.stageHeight / GameManager.getInstance().getGameHeight();
		

		GameManager.getInstance().setPoints(0);
		GameManager.getInstance().setLives(3);
		this.scene = Scene.load(this.nivel);
		this.scene.start(this);
		spaceShip = new SpaceShip();
		spaceShip.init( this.scene, 100, 100);

		
	}
	public override function enter() 
	{

		Lib.current.stage.align = StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = StageScaleMode.NO_SCALE;
		
		Lib.current.stage.addEventListener (KeyboardEvent.KEY_DOWN, keyPressed);
		Lib.current.stage.addEventListener (KeyboardEvent.KEY_UP, keyReleased);		
		Lib.current.stage.addEventListener( Event.ENTER_FRAME, frameStarted );
		Lib.current.stage.addEventListener( FocusEvent.FOCUS_OUT, focusOut );
		
	
		
		if (Multitouch.supportsTouchEvents ) {
			Lib.current.stage.addEventListener( TouchEvent.TOUCH_BEGIN, touchBegin);
			Lib.current.stage.addEventListener( TouchEvent.TOUCH_END, touchEnd);
		}
		
		if (Accelerometer.isSupported) {
			 accelerometer = new Accelerometer();
			 accelerometer.addEventListener( AccelerometerEvent.UPDATE, this.updateAccelerometer );
		}
	}
	public override function exit() {
		
		Lib.current.stage.removeEventListener (KeyboardEvent.KEY_DOWN, keyPressed);
		Lib.current.stage.removeEventListener (KeyboardEvent.KEY_UP, keyReleased);		
		Lib.current.stage.removeEventListener( Event.ENTER_FRAME, frameStarted );

		if (Multitouch.supportsTouchEvents ) {
			Lib.current.stage.removeEventListener( TouchEvent.TOUCH_BEGIN, touchBegin);
			Lib.current.stage.removeEventListener( TouchEvent.TOUCH_END, touchEnd);
		}
		
		if (Accelerometer.isSupported) {
			 accelerometer.removeEventListener( AccelerometerEvent.UPDATE, this.updateAccelerometer );
		}
		
	}
	
	private function nextLevel() {

		this.nivel++;
		GameManager.getInstance().addNivel();
		this.scene.removeChild(spaceShip);
		this.exit();

			
		this.scene.exit(this);
		this.scene = Scene.load(this.nivel);
		this.scene.start(this);

		this.newLife();
		GameManager.getInstance().pushState( new StatePause());
		
	}
	private function endLife() {

		spaceShip.clear();
		this.scene.removeChild(spaceShip);
		GameManager.getInstance().removeLive();
		if (GameManager.getInstance().getLives() > 0)
			GameManager.getInstance().pushState( new StatePause());
		else
			GameManager.getInstance().pushState( new StateEnd());
		
		
	}
	private function newLife() {

		spaceShip = new SpaceShip();
		spaceShip.init( scene, 100, 100);
		
	}
	
	public function looop( elapsedTime:Int) {
		
		this.scene.update( elapsedTime) ;
		if (spaceShip.isDead()) {
			this.endLife();
			this.newLife();
		} else {
			if (this.spaceShip.isSuccess()) {
				this.nextLevel();
			} else {
				spaceShip.update(elapsedTime);
			}
		}
		
	}

	public override function frameStarted (event:Event) {
		
		var now = Lib.getTimer(); 
		var elapsedTime = now - previousTime;
		
		if (elapsedTime > 10 ) {
			this.looop( elapsedTime);
			previousTime = now;
		}
	}
	
	public override function keyPressed (event:KeyboardEvent):Void {
		
		spaceShip.keyPressed(event);
	}

	public override function keyReleased (event:KeyboardEvent):Void {

		if (event.keyCode == 27) {
			event.stopImmediatePropagation ();
			var gameState = new StatePause();
			GameManager.getInstance().pushState( gameState);
		}
		
		spaceShip.keyReleased(event);

	}

	public function focusOut( event:FocusEvent ) {
		var gameState = new StatePause();
		GameManager.getInstance().pushState( gameState);
		
	}
	public function touchBegin( event:TouchEvent):Void {
		spaceShip.touchBegin(event);
	}
	
	public function touchEnd( event:TouchEvent):Void {
		spaceShip.touchEnd(event);
	}
	
	public function updateAccelerometer( event:AccelerometerEvent) {

		spaceShip.updateAccelerometer(event);
	}
}
