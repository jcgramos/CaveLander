package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.MovieClip;
import flash.text.Font;
import flash.media.Sound;
import flash.net.URLRequest;
import flash.utils.ByteArray;
import haxe.Unserializer;
import openfl.Assets;

#if (flash || js)
import flash.display.Loader;
import flash.events.Event;
import flash.net.URLLoader;
#end

#if ios
import openfl.utils.SystemPath;
#end


@:access(flash.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public static var className (default, null) = new Map <String, Dynamic> ();
	public static var path (default, null) = new Map <String, String> ();
	public static var type (default, null) = new Map <String, AssetType> ();
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/img/button-face-blue.png", __ASSET__assets_img_button_face_blue_png);
		type.set ("assets/img/button-face-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/button-face-gray.png", __ASSET__assets_img_button_face_gray_png);
		type.set ("assets/img/button-face-gray.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/button-face-green.png", __ASSET__assets_img_button_face_green_png);
		type.set ("assets/img/button-face-green.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/button-face-orange.png", __ASSET__assets_img_button_face_orange_png);
		type.set ("assets/img/button-face-orange.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/button-face-red.png", __ASSET__assets_img_button_face_red_png);
		type.set ("assets/img/button-face-red.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/button-face-yellowpng.png", __ASSET__assets_img_button_face_yellowpng_png);
		type.set ("assets/img/button-face-yellowpng.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/button-face.png", __ASSET__assets_img_button_face_png);
		type.set ("assets/img/button-face.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/button-large-blue.png", __ASSET__assets_img_button_large_blue_png);
		type.set ("assets/img/button-large-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/explosion.png", __ASSET__assets_img_explosion_png);
		type.set ("assets/img/explosion.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/fire.jpg", __ASSET__assets_img_fire_jpg);
		type.set ("assets/img/fire.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/fire.png", __ASSET__assets_img_fire_png);
		type.set ("assets/img/fire.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/key-icon.png", __ASSET__assets_img_key_icon_png);
		type.set ("assets/img/key-icon.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/LandPoint.png", __ASSET__assets_img_landpoint_png);
		type.set ("assets/img/LandPoint.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/logo.png", __ASSET__assets_img_logo_png);
		type.set ("assets/img/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/next-level.png", __ASSET__assets_img_next_level_png);
		type.set ("assets/img/next-level.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/nivel0.tmx", __ASSET__assets_img_nivel0_tmx);
		type.set ("assets/img/nivel0.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/img/nivel1.tmx", __ASSET__assets_img_nivel1_tmx);
		type.set ("assets/img/nivel1.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/img/nivel2.tmx", __ASSET__assets_img_nivel2_tmx);
		type.set ("assets/img/nivel2.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/img/nivel3.tmx", __ASSET__assets_img_nivel3_tmx);
		type.set ("assets/img/nivel3.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/img/nivel4.tmx", __ASSET__assets_img_nivel4_tmx);
		type.set ("assets/img/nivel4.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/img/nivel5.tmx", __ASSET__assets_img_nivel5_tmx);
		type.set ("assets/img/nivel5.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/img/obstacle.png", __ASSET__assets_img_obstacle_png);
		type.set ("assets/img/obstacle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/spaceShip.png", __ASSET__assets_img_spaceship_png);
		type.set ("assets/img/spaceShip.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/spaceShipLR.png", __ASSET__assets_img_spaceshiplr_png);
		type.set ("assets/img/spaceShipLR.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/spaceShipRL.png", __ASSET__assets_img_spaceshiprl_png);
		type.set ("assets/img/spaceShipRL.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/spritesheet.png", __ASSET__assets_img_spritesheet_png);
		type.set ("assets/img/spritesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/start-game.png", __ASSET__assets_img_start_game_png);
		type.set ("assets/img/start-game.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/stone.png", __ASSET__assets_img_stone_png);
		type.set ("assets/img/stone.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/tileset_4.png", __ASSET__assets_img_tileset_4_png);
		type.set ("assets/img/tileset_4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/img/untitled.tmx", __ASSET__assets_img_untitled_tmx);
		type.set ("assets/img/untitled.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/img/willy.png", __ASSET__assets_img_willy_png);
		type.set ("assets/img/willy.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/localization.xml", __ASSET__assets_localization_xml);
		type.set ("assets/localization.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/openfl.svg", __ASSET__assets_openfl_svg);
		type.set ("assets/openfl.svg", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("img/button-face-blue.png", __ASSET__img_button_face_blue_png);
		type.set ("img/button-face-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/button-face-gray.png", __ASSET__img_button_face_gray_png);
		type.set ("img/button-face-gray.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/button-face-green.png", __ASSET__img_button_face_green_png);
		type.set ("img/button-face-green.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/button-face-orange.png", __ASSET__img_button_face_orange_png);
		type.set ("img/button-face-orange.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/button-face-red.png", __ASSET__img_button_face_red_png);
		type.set ("img/button-face-red.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/button-face-yellowpng.png", __ASSET__img_button_face_yellowpng_png);
		type.set ("img/button-face-yellowpng.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/button-face.png", __ASSET__img_button_face_png);
		type.set ("img/button-face.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/button-large-blue.png", __ASSET__img_button_large_blue_png);
		type.set ("img/button-large-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/explosion.png", __ASSET__img_explosion_png);
		type.set ("img/explosion.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/fire.jpg", __ASSET__img_fire_jpg);
		type.set ("img/fire.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/fire.png", __ASSET__img_fire_png);
		type.set ("img/fire.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/key-icon.png", __ASSET__img_key_icon_png);
		type.set ("img/key-icon.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/LandPoint.png", __ASSET__img_landpoint_png);
		type.set ("img/LandPoint.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/logo.png", __ASSET__img_logo_png);
		type.set ("img/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/next-level.png", __ASSET__img_next_level_png);
		type.set ("img/next-level.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/nivel0.tmx", __ASSET__img_nivel0_tmx);
		type.set ("img/nivel0.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("img/nivel1.tmx", __ASSET__img_nivel1_tmx);
		type.set ("img/nivel1.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("img/nivel2.tmx", __ASSET__img_nivel2_tmx);
		type.set ("img/nivel2.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("img/nivel3.tmx", __ASSET__img_nivel3_tmx);
		type.set ("img/nivel3.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("img/nivel4.tmx", __ASSET__img_nivel4_tmx);
		type.set ("img/nivel4.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("img/nivel5.tmx", __ASSET__img_nivel5_tmx);
		type.set ("img/nivel5.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("img/obstacle.png", __ASSET__img_obstacle_png);
		type.set ("img/obstacle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/spaceShip.png", __ASSET__img_spaceship_png);
		type.set ("img/spaceShip.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/spaceShipLR.png", __ASSET__img_spaceshiplr_png);
		type.set ("img/spaceShipLR.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/spaceShipRL.png", __ASSET__img_spaceshiprl_png);
		type.set ("img/spaceShipRL.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/spritesheet.png", __ASSET__img_spritesheet_png);
		type.set ("img/spritesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/start-game.png", __ASSET__img_start_game_png);
		type.set ("img/start-game.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/stone.png", __ASSET__img_stone_png);
		type.set ("img/stone.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/tileset_4.png", __ASSET__img_tileset_4_png);
		type.set ("img/tileset_4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("img/untitled.tmx", __ASSET__img_untitled_tmx);
		type.set ("img/untitled.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("img/willy.png", __ASSET__img_willy_png);
		type.set ("img/willy.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		
		#elseif html5
		
		addExternal("assets/img/button-face-blue.png", "image", "assets/img/button-face-blue.png");
		addExternal("assets/img/button-face-gray.png", "image", "assets/img/button-face-gray.png");
		addExternal("assets/img/button-face-green.png", "image", "assets/img/button-face-green.png");
		addExternal("assets/img/button-face-orange.png", "image", "assets/img/button-face-orange.png");
		addExternal("assets/img/button-face-red.png", "image", "assets/img/button-face-red.png");
		addExternal("assets/img/button-face-yellowpng.png", "image", "assets/img/button-face-yellowpng.png");
		addExternal("assets/img/button-face.png", "image", "assets/img/button-face.png");
		addExternal("assets/img/button-large-blue.png", "image", "assets/img/button-large-blue.png");
		addExternal("assets/img/explosion.png", "image", "assets/img/explosion.png");
		addExternal("assets/img/fire.jpg", "image", "assets/img/fire.jpg");
		addExternal("assets/img/fire.png", "image", "assets/img/fire.png");
		addExternal("assets/img/key-icon.png", "image", "assets/img/key-icon.png");
		addExternal("assets/img/LandPoint.png", "image", "assets/img/LandPoint.png");
		addExternal("assets/img/logo.png", "image", "assets/img/logo.png");
		addExternal("assets/img/next-level.png", "image", "assets/img/next-level.png");
		addExternal("assets/img/nivel0.tmx", "text", "assets/img/nivel0.tmx");
		addExternal("assets/img/nivel1.tmx", "text", "assets/img/nivel1.tmx");
		addExternal("assets/img/nivel2.tmx", "text", "assets/img/nivel2.tmx");
		addExternal("assets/img/nivel3.tmx", "text", "assets/img/nivel3.tmx");
		addExternal("assets/img/nivel4.tmx", "text", "assets/img/nivel4.tmx");
		addExternal("assets/img/nivel5.tmx", "text", "assets/img/nivel5.tmx");
		addExternal("assets/img/obstacle.png", "image", "assets/img/obstacle.png");
		addExternal("assets/img/spaceShip.png", "image", "assets/img/spaceShip.png");
		addExternal("assets/img/spaceShipLR.png", "image", "assets/img/spaceShipLR.png");
		addExternal("assets/img/spaceShipRL.png", "image", "assets/img/spaceShipRL.png");
		addExternal("assets/img/spritesheet.png", "image", "assets/img/spritesheet.png");
		addExternal("assets/img/start-game.png", "image", "assets/img/start-game.png");
		addExternal("assets/img/stone.png", "image", "assets/img/stone.png");
		addExternal("assets/img/tileset_4.png", "image", "assets/img/tileset_4.png");
		addExternal("assets/img/untitled.tmx", "text", "assets/img/untitled.tmx");
		addExternal("assets/img/willy.png", "image", "assets/img/willy.png");
		addExternal("assets/localization.xml", "text", "assets/localization.xml");
		addExternal("assets/openfl.svg", "text", "assets/openfl.svg");
		addExternal("img/button-face-blue.png", "image", "img/button-face-blue.png");
		addExternal("img/button-face-gray.png", "image", "img/button-face-gray.png");
		addExternal("img/button-face-green.png", "image", "img/button-face-green.png");
		addExternal("img/button-face-orange.png", "image", "img/button-face-orange.png");
		addExternal("img/button-face-red.png", "image", "img/button-face-red.png");
		addExternal("img/button-face-yellowpng.png", "image", "img/button-face-yellowpng.png");
		addExternal("img/button-face.png", "image", "img/button-face.png");
		addExternal("img/button-large-blue.png", "image", "img/button-large-blue.png");
		addExternal("img/explosion.png", "image", "img/explosion.png");
		addExternal("img/fire.jpg", "image", "img/fire.jpg");
		addExternal("img/fire.png", "image", "img/fire.png");
		addExternal("img/key-icon.png", "image", "img/key-icon.png");
		addExternal("img/LandPoint.png", "image", "img/LandPoint.png");
		addExternal("img/logo.png", "image", "img/logo.png");
		addExternal("img/next-level.png", "image", "img/next-level.png");
		addExternal("img/nivel0.tmx", "text", "img/nivel0.tmx");
		addExternal("img/nivel1.tmx", "text", "img/nivel1.tmx");
		addExternal("img/nivel2.tmx", "text", "img/nivel2.tmx");
		addExternal("img/nivel3.tmx", "text", "img/nivel3.tmx");
		addExternal("img/nivel4.tmx", "text", "img/nivel4.tmx");
		addExternal("img/nivel5.tmx", "text", "img/nivel5.tmx");
		addExternal("img/obstacle.png", "image", "img/obstacle.png");
		addExternal("img/spaceShip.png", "image", "img/spaceShip.png");
		addExternal("img/spaceShipLR.png", "image", "img/spaceShipLR.png");
		addExternal("img/spaceShipRL.png", "image", "img/spaceShipRL.png");
		addExternal("img/spritesheet.png", "image", "img/spritesheet.png");
		addExternal("img/start-game.png", "image", "img/start-game.png");
		addExternal("img/stone.png", "image", "img/stone.png");
		addExternal("img/tileset_4.png", "image", "img/tileset_4.png");
		addExternal("img/untitled.tmx", "text", "img/untitled.tmx");
		addExternal("img/willy.png", "image", "img/willy.png");
		
		
		#else
		
		#if (windows || mac || linux)
		
		var loadManifest = false;
		
		className.set ("assets/img/button-face-blue.png", __ASSET__assets_img_button_face_blue_png);
		type.set ("assets/img/button-face-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/button-face-gray.png", __ASSET__assets_img_button_face_gray_png);
		type.set ("assets/img/button-face-gray.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/button-face-green.png", __ASSET__assets_img_button_face_green_png);
		type.set ("assets/img/button-face-green.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/button-face-orange.png", __ASSET__assets_img_button_face_orange_png);
		type.set ("assets/img/button-face-orange.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/button-face-red.png", __ASSET__assets_img_button_face_red_png);
		type.set ("assets/img/button-face-red.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/button-face-yellowpng.png", __ASSET__assets_img_button_face_yellowpng_png);
		type.set ("assets/img/button-face-yellowpng.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/button-face.png", __ASSET__assets_img_button_face_png);
		type.set ("assets/img/button-face.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/button-large-blue.png", __ASSET__assets_img_button_large_blue_png);
		type.set ("assets/img/button-large-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/explosion.png", __ASSET__assets_img_explosion_png);
		type.set ("assets/img/explosion.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/fire.jpg", __ASSET__assets_img_fire_jpg);
		type.set ("assets/img/fire.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/fire.png", __ASSET__assets_img_fire_png);
		type.set ("assets/img/fire.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/key-icon.png", __ASSET__assets_img_key_icon_png);
		type.set ("assets/img/key-icon.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/LandPoint.png", __ASSET__assets_img_landpoint_png);
		type.set ("assets/img/LandPoint.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/logo.png", __ASSET__assets_img_logo_png);
		type.set ("assets/img/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/next-level.png", __ASSET__assets_img_next_level_png);
		type.set ("assets/img/next-level.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/nivel0.tmx", __ASSET__assets_img_nivel0_tmx);
		type.set ("assets/img/nivel0.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/img/nivel1.tmx", __ASSET__assets_img_nivel1_tmx);
		type.set ("assets/img/nivel1.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/img/nivel2.tmx", __ASSET__assets_img_nivel2_tmx);
		type.set ("assets/img/nivel2.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/img/nivel3.tmx", __ASSET__assets_img_nivel3_tmx);
		type.set ("assets/img/nivel3.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/img/nivel4.tmx", __ASSET__assets_img_nivel4_tmx);
		type.set ("assets/img/nivel4.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/img/nivel5.tmx", __ASSET__assets_img_nivel5_tmx);
		type.set ("assets/img/nivel5.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/img/obstacle.png", __ASSET__assets_img_obstacle_png);
		type.set ("assets/img/obstacle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/spaceShip.png", __ASSET__assets_img_spaceship_png);
		type.set ("assets/img/spaceShip.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/spaceShipLR.png", __ASSET__assets_img_spaceshiplr_png);
		type.set ("assets/img/spaceShipLR.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/spaceShipRL.png", __ASSET__assets_img_spaceshiprl_png);
		type.set ("assets/img/spaceShipRL.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/spritesheet.png", __ASSET__assets_img_spritesheet_png);
		type.set ("assets/img/spritesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/start-game.png", __ASSET__assets_img_start_game_png);
		type.set ("assets/img/start-game.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/stone.png", __ASSET__assets_img_stone_png);
		type.set ("assets/img/stone.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/tileset_4.png", __ASSET__assets_img_tileset_4_png);
		type.set ("assets/img/tileset_4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/img/untitled.tmx", __ASSET__assets_img_untitled_tmx);
		type.set ("assets/img/untitled.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/img/willy.png", __ASSET__assets_img_willy_png);
		type.set ("assets/img/willy.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/localization.xml", __ASSET__assets_localization_xml);
		type.set ("assets/localization.xml", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/openfl.svg", __ASSET__assets_openfl_svg);
		type.set ("assets/openfl.svg", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("img/button-face-blue.png", __ASSET__img_button_face_blue_png);
		type.set ("img/button-face-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/button-face-gray.png", __ASSET__img_button_face_gray_png);
		type.set ("img/button-face-gray.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/button-face-green.png", __ASSET__img_button_face_green_png);
		type.set ("img/button-face-green.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/button-face-orange.png", __ASSET__img_button_face_orange_png);
		type.set ("img/button-face-orange.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/button-face-red.png", __ASSET__img_button_face_red_png);
		type.set ("img/button-face-red.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/button-face-yellowpng.png", __ASSET__img_button_face_yellowpng_png);
		type.set ("img/button-face-yellowpng.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/button-face.png", __ASSET__img_button_face_png);
		type.set ("img/button-face.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/button-large-blue.png", __ASSET__img_button_large_blue_png);
		type.set ("img/button-large-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/explosion.png", __ASSET__img_explosion_png);
		type.set ("img/explosion.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/fire.jpg", __ASSET__img_fire_jpg);
		type.set ("img/fire.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/fire.png", __ASSET__img_fire_png);
		type.set ("img/fire.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/key-icon.png", __ASSET__img_key_icon_png);
		type.set ("img/key-icon.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/LandPoint.png", __ASSET__img_landpoint_png);
		type.set ("img/LandPoint.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/logo.png", __ASSET__img_logo_png);
		type.set ("img/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/next-level.png", __ASSET__img_next_level_png);
		type.set ("img/next-level.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/nivel0.tmx", __ASSET__img_nivel0_tmx);
		type.set ("img/nivel0.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("img/nivel1.tmx", __ASSET__img_nivel1_tmx);
		type.set ("img/nivel1.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("img/nivel2.tmx", __ASSET__img_nivel2_tmx);
		type.set ("img/nivel2.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("img/nivel3.tmx", __ASSET__img_nivel3_tmx);
		type.set ("img/nivel3.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("img/nivel4.tmx", __ASSET__img_nivel4_tmx);
		type.set ("img/nivel4.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("img/nivel5.tmx", __ASSET__img_nivel5_tmx);
		type.set ("img/nivel5.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("img/obstacle.png", __ASSET__img_obstacle_png);
		type.set ("img/obstacle.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/spaceShip.png", __ASSET__img_spaceship_png);
		type.set ("img/spaceShip.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/spaceShipLR.png", __ASSET__img_spaceshiplr_png);
		type.set ("img/spaceShipLR.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/spaceShipRL.png", __ASSET__img_spaceshiprl_png);
		type.set ("img/spaceShipRL.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/spritesheet.png", __ASSET__img_spritesheet_png);
		type.set ("img/spritesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/start-game.png", __ASSET__img_start_game_png);
		type.set ("img/start-game.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/stone.png", __ASSET__img_stone_png);
		type.set ("img/stone.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/tileset_4.png", __ASSET__img_tileset_4_png);
		type.set ("img/tileset_4.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("img/untitled.tmx", __ASSET__img_untitled_tmx);
		type.set ("img/untitled.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("img/willy.png", __ASSET__img_willy_png);
		type.set ("img/willy.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		
		#else
		
		var loadManifest = true;
		
		#end
		
		if (loadManifest) {
			try {
				
				#if blackberry
				var bytes = ByteArray.readFile ("app/native/manifest");
				#elseif tizen
				var bytes = ByteArray.readFile ("../res/manifest");
				#elseif emscripten
				var bytes = ByteArray.readFile ("assets/manifest");
				#else
				var bytes = ByteArray.readFile ("manifest");
				#end
				
				if (bytes != null) {
					
					bytes.position = 0;
					
					if (bytes.length > 0) {
						
						var data = bytes.readUTFBytes (bytes.length);
						
						if (data != null && data.length > 0) {
							
							var manifest:Array<AssetData> = Unserializer.run (data);
							
							for (asset in manifest) {
								
								if (!className.exists(asset.id)) {
									
									path.set (asset.id, asset.path);
									type.set (asset.id, asset.type);
									
								}
							}
						
						}
					
					}
				
				} else {
				
					trace ("Warning: Could not load asset manifest");
				
				}
			
			} catch (e:Dynamic) {
			
				trace ("Warning: Could not load asset manifest");
			
			}
		
		}
		
		#end
		
	}
	
	
	#if html5
	private function addEmbed(id:String, kind:String, value:Dynamic):Void {
		className.set(id, value);
		type.set(id, Reflect.field(AssetType, kind.toUpperCase()));
	}
	
	
	private function addExternal(id:String, kind:String, value:String):Void {
		path.set(id, value);
		type.set(id, Reflect.field(AssetType, kind.toUpperCase()));
	}
	#end
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = DefaultAssetLibrary.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif openfl_html5
		
		return null;
		
		#elseif js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash

@:keep class __ASSET__assets_img_button_face_blue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_button_face_gray_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_button_face_green_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_button_face_orange_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_button_face_red_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_button_face_yellowpng_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_button_face_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_button_large_blue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_explosion_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_fire_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_fire_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_key_icon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_landpoint_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_next_level_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_nivel0_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_img_nivel1_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_img_nivel2_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_img_nivel3_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_img_nivel4_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_img_nivel5_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_img_obstacle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_spaceship_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_spaceshiplr_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_spaceshiprl_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_spritesheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_start_game_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_stone_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_tileset_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_untitled_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_img_willy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_localization_xml extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_openfl_svg extends flash.utils.ByteArray { }
@:keep class __ASSET__img_button_face_blue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_button_face_gray_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_button_face_green_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_button_face_orange_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_button_face_red_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_button_face_yellowpng_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_button_face_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_button_large_blue_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_explosion_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_fire_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_fire_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_key_icon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_landpoint_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_logo_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_next_level_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_nivel0_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__img_nivel1_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__img_nivel2_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__img_nivel3_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__img_nivel4_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__img_nivel5_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__img_obstacle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_spaceship_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_spaceshiplr_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_spaceshiprl_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_spritesheet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_start_game_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_stone_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_tileset_4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__img_untitled_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__img_willy_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5



































































#elseif (windows || mac || linux)


@:bitmap("assets/img/button-face-blue.png") class __ASSET__assets_img_button_face_blue_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-gray.png") class __ASSET__assets_img_button_face_gray_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-green.png") class __ASSET__assets_img_button_face_green_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-orange.png") class __ASSET__assets_img_button_face_orange_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-red.png") class __ASSET__assets_img_button_face_red_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-yellowpng.png") class __ASSET__assets_img_button_face_yellowpng_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face.png") class __ASSET__assets_img_button_face_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-large-blue.png") class __ASSET__assets_img_button_large_blue_png extends flash.display.BitmapData {}
@:bitmap("assets/img/explosion.png") class __ASSET__assets_img_explosion_png extends flash.display.BitmapData {}
@:bitmap("assets/img/fire.jpg") class __ASSET__assets_img_fire_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/fire.png") class __ASSET__assets_img_fire_png extends flash.display.BitmapData {}
@:bitmap("assets/img/key-icon.png") class __ASSET__assets_img_key_icon_png extends flash.display.BitmapData {}
@:bitmap("assets/img/LandPoint.png") class __ASSET__assets_img_landpoint_png extends flash.display.BitmapData {}
@:bitmap("assets/img/logo.png") class __ASSET__assets_img_logo_png extends flash.display.BitmapData {}
@:bitmap("assets/img/next-level.png") class __ASSET__assets_img_next_level_png extends flash.display.BitmapData {}
@:file("assets/img/nivel0.tmx") class __ASSET__assets_img_nivel0_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel1.tmx") class __ASSET__assets_img_nivel1_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel2.tmx") class __ASSET__assets_img_nivel2_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel3.tmx") class __ASSET__assets_img_nivel3_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel4.tmx") class __ASSET__assets_img_nivel4_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel5.tmx") class __ASSET__assets_img_nivel5_tmx extends flash.utils.ByteArray {}
@:bitmap("assets/img/obstacle.png") class __ASSET__assets_img_obstacle_png extends flash.display.BitmapData {}
@:bitmap("assets/img/spaceShip.png") class __ASSET__assets_img_spaceship_png extends flash.display.BitmapData {}
@:bitmap("assets/img/spaceShipLR.png") class __ASSET__assets_img_spaceshiplr_png extends flash.display.BitmapData {}
@:bitmap("assets/img/spaceShipRL.png") class __ASSET__assets_img_spaceshiprl_png extends flash.display.BitmapData {}
@:bitmap("assets/img/spritesheet.png") class __ASSET__assets_img_spritesheet_png extends flash.display.BitmapData {}
@:bitmap("assets/img/start-game.png") class __ASSET__assets_img_start_game_png extends flash.display.BitmapData {}
@:bitmap("assets/img/stone.png") class __ASSET__assets_img_stone_png extends flash.display.BitmapData {}
@:bitmap("assets/img/tileset_4.png") class __ASSET__assets_img_tileset_4_png extends flash.display.BitmapData {}
@:file("assets/img/untitled.tmx") class __ASSET__assets_img_untitled_tmx extends flash.utils.ByteArray {}
@:bitmap("assets/img/willy.png") class __ASSET__assets_img_willy_png extends flash.display.BitmapData {}
@:file("assets/localization.xml") class __ASSET__assets_localization_xml extends flash.utils.ByteArray {}
@:file("assets/openfl.svg") class __ASSET__assets_openfl_svg extends flash.utils.ByteArray {}
@:bitmap("assets/img/button-face-blue.png") class __ASSET__img_button_face_blue_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-gray.png") class __ASSET__img_button_face_gray_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-green.png") class __ASSET__img_button_face_green_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-orange.png") class __ASSET__img_button_face_orange_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-red.png") class __ASSET__img_button_face_red_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face-yellowpng.png") class __ASSET__img_button_face_yellowpng_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-face.png") class __ASSET__img_button_face_png extends flash.display.BitmapData {}
@:bitmap("assets/img/button-large-blue.png") class __ASSET__img_button_large_blue_png extends flash.display.BitmapData {}
@:bitmap("assets/img/explosion.png") class __ASSET__img_explosion_png extends flash.display.BitmapData {}
@:bitmap("assets/img/fire.jpg") class __ASSET__img_fire_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/fire.png") class __ASSET__img_fire_png extends flash.display.BitmapData {}
@:bitmap("assets/img/key-icon.png") class __ASSET__img_key_icon_png extends flash.display.BitmapData {}
@:bitmap("assets/img/LandPoint.png") class __ASSET__img_landpoint_png extends flash.display.BitmapData {}
@:bitmap("assets/img/logo.png") class __ASSET__img_logo_png extends flash.display.BitmapData {}
@:bitmap("assets/img/next-level.png") class __ASSET__img_next_level_png extends flash.display.BitmapData {}
@:file("assets/img/nivel0.tmx") class __ASSET__img_nivel0_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel1.tmx") class __ASSET__img_nivel1_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel2.tmx") class __ASSET__img_nivel2_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel3.tmx") class __ASSET__img_nivel3_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel4.tmx") class __ASSET__img_nivel4_tmx extends flash.utils.ByteArray {}
@:file("assets/img/nivel5.tmx") class __ASSET__img_nivel5_tmx extends flash.utils.ByteArray {}
@:bitmap("assets/img/obstacle.png") class __ASSET__img_obstacle_png extends flash.display.BitmapData {}
@:bitmap("assets/img/spaceShip.png") class __ASSET__img_spaceship_png extends flash.display.BitmapData {}
@:bitmap("assets/img/spaceShipLR.png") class __ASSET__img_spaceshiplr_png extends flash.display.BitmapData {}
@:bitmap("assets/img/spaceShipRL.png") class __ASSET__img_spaceshiprl_png extends flash.display.BitmapData {}
@:bitmap("assets/img/spritesheet.png") class __ASSET__img_spritesheet_png extends flash.display.BitmapData {}
@:bitmap("assets/img/start-game.png") class __ASSET__img_start_game_png extends flash.display.BitmapData {}
@:bitmap("assets/img/stone.png") class __ASSET__img_stone_png extends flash.display.BitmapData {}
@:bitmap("assets/img/tileset_4.png") class __ASSET__img_tileset_4_png extends flash.display.BitmapData {}
@:file("assets/img/untitled.tmx") class __ASSET__img_untitled_tmx extends flash.utils.ByteArray {}
@:bitmap("assets/img/willy.png") class __ASSET__img_willy_png extends flash.display.BitmapData {}


#end
