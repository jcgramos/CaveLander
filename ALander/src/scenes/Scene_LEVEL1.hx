package ;
import core.RotataingAnimatedSprite;
import flash.display.DisplayObject;
import flash.display.Graphics;
import flash.display.Sprite;
import flash.geom.Transform;
import flash.Lib;
import flash.geom.Rectangle;
import flash.text.TextField;
import motion.Actuate;
import openfl.tiled.TiledMap;

import openfl.tiled.TiledObject;
import openfl.tiled.TiledPolygon;
import openfl.tiled.TiledMap;
import openfl.tiled.Tile;
import openfl.tiled.TiledObjectGroup;
import openfl.tiled.TiledObject;


/**
 * ...
 * @author Yo
 */
class Scene_LEVEL1 extends Scene
{
	

	public override function start( sprite:Sprite ) 
	{
		
		map = TiledMap.fromAssets("img/nivel1.tmx");

		map.x = 1;
		map.y = 1;

		this.addChild(map);
		this.loadSpecialObjects();
		
		sprite.addChild(this);
		
	}
	
}