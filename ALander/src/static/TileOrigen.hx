package ;

import flash.display.Graphics;
import flash.geom.Rectangle;
import openfl.display.Tilesheet;
import openfl.Assets;


/**
 * ...
 * @author Yo
 */
	enum TileType {
		NONE;
		LEFTTOP;
		TOP;
		RIGHTTOP;
		LEFT;
		MIDDLE;
		RIGTH;
		LEFTBOTTOM;
		BOTTOM;
		RIGHTBOTTOM;
	}

class TileOrigen extends Tilesheet
{

	
		
	public static var tilesheet:Tilesheet = null;
	
	public static override function drawTile(  graphics:Graphics, tile:TileType, x:Float, y:Float )
	{
		if (tile.getIndex() > 0 ) {
			var index:Float = cast( tile.getIndex(), Float) - 1;
			if ( TileOrigen.tilesheet == null ) {
				TileOrigen.tilesheet = new Tilesheet(Assets.getBitmapData("img/background2.png"));
				TileOrigen.tilesheet.addTileRect(new Rectangle(0, 0, 20, 20));			
				TileOrigen.tilesheet.addTileRect(new Rectangle(21, 0, 20, 20));			
				TileOrigen.tilesheet.addTileRect(new Rectangle(42, 0, 20, 20));			
				TileOrigen.tilesheet.addTileRect(new Rectangle(0, 21, 20, 20));			
				TileOrigen.tilesheet.addTileRect(new Rectangle(21, 21, 20, 20));			
				TileOrigen.tilesheet.addTileRect(new Rectangle(42, 21, 20, 20));			
				TileOrigen.tilesheet.addTileRect(new Rectangle(0, 42, 20, 20));			
				TileOrigen.tilesheet.addTileRect(new Rectangle(21, 42, 20, 20));			
				TileOrigen.tilesheet.addTileRect(new Rectangle(42, 42, 20, 20));			
			}
			TileOrigen.tilesheet.drawTiles( graphics, [ x, y, index ]);
		}
		
	}
	
}