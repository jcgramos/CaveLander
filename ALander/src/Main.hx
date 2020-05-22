package ;
import flash.display.Sprite;
import flash.events.Event;
import motion.Actuate;
import flash.Lib;
import flash.events.KeyboardEvent;
import flash.ui.Keyboard;
import flash.system.Capabilities;

import SpaceShip;
import LanderPoint;
import core.CLocals;


/**
 * ...
 * @author Yo
 */

class Main extends Sprite 
{
	var inited:Bool;
	var gameState:StatePlay;
	var currState:GameState;

	
	function resize(e) 
	{
		if (!inited) init();
	}
	
	function init() 
	{
		if (inited) return;
		inited = true;

		Lib.current.removeChild(this);
		
		GameManager.getInstance().start( new StateStart());
	
	}

	
	public function new() 
	{
		super();	
		addEventListener(Event.ADDED_TO_STAGE, added);
	}

	function added(e) 
	{
		removeEventListener(Event.ADDED_TO_STAGE, added);
		stage.addEventListener(Event.RESIZE, resize);
		#if ios
		haxe.Timer.delay(init, 100); // iOS 6
		#else
		init();
		#end
	}
	
	public static function main() 
	{
		// static entry point
		CLocals.set( Capabilities.language );		
		Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
		Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
		Lib.current.addChild(new Main());
	}
	
}
