import flash.Lib;
import flash.events.Event;
import flash.events.MouseEvent;
import flash.events.KeyboardEvent;
import flash.display.Stage;
import flash.display.StageScaleMode;


class GameManager {

	// Variable estática para implementar Singleton.
	public static var instance:GameManager;
	// Pila de estados.
	private var states:Array<GameState>;
	private var currstate:GameState;
	private var gameWidth:Float = 800;
	private var gameHeight:Float = 480;
	private var lives:Int = 3;
	private var points:Float = 0;
	private var nivel:Int = 1;

	
	private function new () {
		states = new Array<GameState>();
	}

 // Patrón Singleton.
	public static function getInstance() : GameManager {
		if (GameManager.instance == null)
			GameManager.instance = new GameManager();
			return GameManager.instance;
	}

	public function setNivel(nivel:Int):Void {
		this.nivel = nivel;
	}
	public function addNivel() {
		this.nivel ++;
	}
	
	public function getNivel():Int {
		return this.nivel;
	}

	public function setLives(lives:Int):Void {
		this.lives = lives;
	}
	public function removeLive() {
		this.lives --;
	}
	
	public function getLives():Int {
		return this.lives;
	}
	
	public function setPoints(points:Float):Void {
		this.points = points;
	}
	public function addPoints(points:Float) {
		this.points += points;
	}
	
	public function getPoints():Float {
		return this.points;
	}
	
	public function getGameWidth():Float {
		return this.gameWidth;
	}


	public function getGameHeight():Float {
		return this.gameHeight;
	}
	
	public function start (state:GameState) : Void {

		try {
			if (currstate != null ) {
				currstate.exit();
				Lib.current.removeChild(currstate);
				this.clear();
			}
		}
		this.currstate = state;
		Lib.current.addChild(state);
		currstate.enter();
	}	

	private function clear() {
		while (states.length > 0) {
			var state:GameState = states.pop();
			state.exit();
			Lib.current.removeChild(state);
		}
	}
	public function pushState (state:GameState) : Void {

		// Transición al nuevo estado.
		if (currstate != null ) {
			currstate.exit();
			states.push(currstate);
		}
		currstate = state;
		Lib.current.addChild(state);
		state.enter();
	}

	public function popState () : Void {

		// recupera estado anterior
		if (currstate != null ) {
			currstate.exit();
			Lib.current.removeChild(currstate);
		}
		var state:GameState = states.pop();
		currstate = state;
		Lib.current.addChild(state);
		state.enter();
	}
	
 }