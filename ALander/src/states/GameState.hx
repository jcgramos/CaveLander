package ;

import flash.display.Sprite;
import flash.display.Stage;
import flash.events.Event;
import flash.events.MouseEvent;

import motion.Actuate;
import flash.Lib;
import flash.events.KeyboardEvent;
import flash.ui.Keyboard;

class GameState extends Sprite {

	// Constructor privado (clase abstracta).
	 private function new () {
		super();
	 }

	// Gestión básica del estado.

	 public function enter () : Void { }
	 public function exit () : Void { }
	 public function pause () : Void { }
	 public function resume () : Void { }

	// Gestión básica de eventos de teclado y ratón.

	public function keyPressed (event:KeyboardEvent) : Void { }
	public function keyReleased (event:KeyboardEvent) : Void { }
	public function mouseClicked (event:MouseEvent) : Void { }

	// Gestión básica para el manejo
	// de eventos antes y después de renderizar un frame.

	public function frameStarted (event:Event) : Void { }
	public function frameEnded (event:Event) : Void { }

	// Gestión básica de transiciones entre estados.
	// Se delega en el GameManager.


	public function pushState (state:GameState) : Void {
		GameManager.getInstance().pushState(state);
	}

	public function popState () : Void {
		GameManager.getInstance().popState();
	}

 }