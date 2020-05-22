package ;

import flash.display.Graphics;
import flash.display.Sprite;
import flash.display.DisplayObject;
import flash.geom.Point;
import flash.geom.Rectangle;
import flash.Lib;
import flash.text.TextField;
import openfl.tiled.TiledObject;
import openfl.tiled.TiledPolygon;
import openfl.tiled.TiledMap;
import openfl.tiled.Tile;
import openfl.tiled.TiledObjectGroup;
import openfl.tiled.TiledObject;

import core.RotataingAnimatedSprite;

/**
 * ...
 * @author Yo
 */
class Scene extends Sprite
{
	
	var player:Actor = null;
	var targets:List<LanderPoint> = new List();
	var actors:List<Actor> = new List();
	var map:TiledMap;
	public var startPoint:LanderPoint;
	public var gravityOrigen:Point;
	
	public function new():Void { super(); }
	public function setPlayer( player:Actor) { this.player = player; }
	public function getPlayer():Actor { return this.player; }
	public function addTarget( actor:LanderPoint):Void { this.targets.add(actor); }
	public function addActor( actor:Actor):Void { this.actors.add(actor); this.addChild(actor); }
	public function removeActor( actor:Actor):Void { this.actors.remove(actor); this.removeChild(actor); actor = null; }
	public function getTargets():List<LanderPoint> { return this.targets; }
	public function removeTarget( actor:LanderPoint):Void { this.targets.remove(actor); }
	
	
	public static function load( level:Int):Scene {
		
		var scene = new Scene();
		scene.map = TiledMap.fromAssets("img/nivel" + level +".tmx");
		return scene;
		
		//switch( level ) {
			//case 1:
				//var scene = new Scene();
				//scene.map = TiledMap.fromAssets("img/nivel1.tmx");
				//return scene;
			//case 2:
				//var scene = new Scene();
				//scene.map = TiledMap.fromAssets("img/nivel2.tmx");
				//return scene;
			//case 3:
				//var scene = new Scene();
				//scene.map = TiledMap.fromAssets("img/nivel3.tmx");
				//return scene;
			//case 4:
				//var scene = new Scene();
				//scene.map = TiledMap.fromAssets("img/nivel4.tmx");
				//return scene;
		//}
	}
	
	public function start( sprite:Sprite ) 
	{
		

		map.x = 1;
		map.y = 1;

		this.gravityOrigen = new Point( Lib.current.stage.stageWidth / 2, -1 / 0);
		this.addChild(map);
		this.loadSpecialObjects();
		
		sprite.addChild(this);
		
	}
	
	public function exit( sprite:Sprite ) {
		sprite.removeChild(this);
		
	}
	public function update(elapsedTime:Int) {

		for ( object in this.actors) {
			object.update(elapsedTime);
		}
	}
	
	public function checkBackgroundCollision(actor:Actor, hSpeed:Float, vSpeed:Float ):Bool {

		
		var collision:Bool = false;
		var origen:Rectangle = new Rectangle( actor.x, actor.y, actor.width, actor.height);

		for( objectgroup in map.objectGroups ) {
			while (objectgroup.hasNext()) {
				var object:TiledObject = objectgroup.next();
				if (object.type == null ) {
					var rectangle:Rectangle = new Rectangle( object.x, object.y, object.width, object.height);
					if (origen.intersects(rectangle)) {
							collision = true;
							break;
					}
				}
			}
		}
		
		return collision;
		
	}

	public  function checkCollision( actor:Actor, hSpeed:Float, vSpeed:Float ):Bool  {

		var collision:Bool = this.checkBackgroundCollision (actor, hSpeed, vSpeed);
		var origen:Rectangle = new Rectangle( actor.x, actor.y, actor.width, actor.height);
		
		for ( object in this.actors) {
			if (object != actor && object.collisionable) {
			if (object.x < 0 || object.x + object.width > this.width || object.y < 0 || object.y + object.height > this.height )
					object.destroy();
				var rectangle:Rectangle = object.getRect(this);
				if (origen.intersects(rectangle)) {
					switch( object.type ) {
						case "Key":
							var key:Key = cast(object, Key);
							var portico:Portico = cast(this.getActorByName( key.portico ), Portico);
							portico.openNow();
							break;
						default :
							object.destroy();
							collision = true;
							break;
					}
				}
			}
		}
		
		return collision;
			
	}

	public function getActorByName(name:String):Actor {
			for ( object in this.actors) { 
				if (object.name == name ) {
					return object;
					break;
				}
			}
			return null;
	}

	private function loadSpecialObjects() {

		for( objectgroup in map.objectGroups ) {
			while (objectgroup.hasNext()) {
				var object:TiledObject = objectgroup.next();
				if (object.type == "volcan" ) {
					var volcan:Volcan = new Volcan();
					volcan.name = (object.name != null ? object.name: "");
					volcan.init( this, object.x, object.y );
					volcan.setMaxForce( Std.parseFloat(object.properties.get("force")));
					volcan.start(0, 0);
					this.addActor(volcan);
				}
				//if (object.type == "startPoint")  {
					//this.startPoint = new Actor();
					//this.startPoint.x = object.x;
					//this.startPoint.y = object.y;
				//}
				
				if (object.type == "landerPoint")  {
					var landerPoint = new LanderPoint();
					landerPoint.name = (object.name != null ? object.name: "");
					landerPoint.init( this, object.x, object.y, object.width, object.height );
					landerPoint.setStartPoint( object.properties.exists("start"));
					landerPoint.setTarget( object.properties.exists("target"));
					this.addTarget(landerPoint);
				}
				if (object.type == "portico")  {
					var portico:Portico =  new Portico();
					portico.name = (object.name != null ? object.name: "");
					portico.init( this, object.x, object.y, object.width, object.height );
					if (object.properties.exists("closed"))
						portico.closed = true;
					portico.start(0, 0);
					this.addActor( portico );
				}
				if (object.type == "wheel")  {
					var wheel = new Wheeel();
					wheel.name = (object.name != null ? object.name: "");

					wheel.init( this, object.x, object.y, object.width, object.height );
					this.addActor( wheel);				
				}
				if (object.type == "key")  {
					var key = new Key();
					key.name = (object.name != null ? object.name: "");
					key.init( this, object.x, object.y );
					key.portico = object.properties.get("portico");
					this.addActor( key);				
				}
			}
				
		}
	}
}