package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/img/button-face-blue.png", "assets/img/button-face-blue.png");
			type.set ("assets/img/button-face-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/button-face-gray.png", "assets/img/button-face-gray.png");
			type.set ("assets/img/button-face-gray.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/button-face-green.png", "assets/img/button-face-green.png");
			type.set ("assets/img/button-face-green.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/button-face-orange.png", "assets/img/button-face-orange.png");
			type.set ("assets/img/button-face-orange.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/button-face-red.png", "assets/img/button-face-red.png");
			type.set ("assets/img/button-face-red.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/button-face-yellowpng.png", "assets/img/button-face-yellowpng.png");
			type.set ("assets/img/button-face-yellowpng.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/button-face.png", "assets/img/button-face.png");
			type.set ("assets/img/button-face.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/button-large-blue.png", "assets/img/button-large-blue.png");
			type.set ("assets/img/button-large-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/explosion.png", "assets/img/explosion.png");
			type.set ("assets/img/explosion.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/fire.jpg", "assets/img/fire.jpg");
			type.set ("assets/img/fire.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/fire.png", "assets/img/fire.png");
			type.set ("assets/img/fire.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/key-icon.png", "assets/img/key-icon.png");
			type.set ("assets/img/key-icon.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/LandPoint.png", "assets/img/LandPoint.png");
			type.set ("assets/img/LandPoint.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/logo-texto.png", "assets/img/logo-texto.png");
			type.set ("assets/img/logo-texto.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/logo.png", "assets/img/logo.png");
			type.set ("assets/img/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/next-level.png", "assets/img/next-level.png");
			type.set ("assets/img/next-level.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/nivel0.tmx", "assets/img/nivel0.tmx");
			type.set ("assets/img/nivel0.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/nivel1.tmx", "assets/img/nivel1.tmx");
			type.set ("assets/img/nivel1.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/nivel2.tmx", "assets/img/nivel2.tmx");
			type.set ("assets/img/nivel2.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/nivel3.tmx", "assets/img/nivel3.tmx");
			type.set ("assets/img/nivel3.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/nivel4.tmx", "assets/img/nivel4.tmx");
			type.set ("assets/img/nivel4.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/nivel5.tmx", "assets/img/nivel5.tmx");
			type.set ("assets/img/nivel5.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/obstacle.png", "assets/img/obstacle.png");
			type.set ("assets/img/obstacle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/spaceShip.png", "assets/img/spaceShip.png");
			type.set ("assets/img/spaceShip.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/spaceShipLR.png", "assets/img/spaceShipLR.png");
			type.set ("assets/img/spaceShipLR.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/spaceShipRL.png", "assets/img/spaceShipRL.png");
			type.set ("assets/img/spaceShipRL.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/spritesheet.png", "assets/img/spritesheet.png");
			type.set ("assets/img/spritesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/start-game.png", "assets/img/start-game.png");
			type.set ("assets/img/start-game.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/stone.png", "assets/img/stone.png");
			type.set ("assets/img/stone.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/tileset_4.png", "assets/img/tileset_4.png");
			type.set ("assets/img/tileset_4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/untitled.tmx", "assets/img/untitled.tmx");
			type.set ("assets/img/untitled.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/willy.png", "assets/img/willy.png");
			type.set ("assets/img/willy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/localization.xml", "assets/localization.xml");
			type.set ("assets/localization.xml", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/openfl.svg", "assets/openfl.svg");
			type.set ("assets/openfl.svg", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/button-face-blue.png", "img/button-face-blue.png");
			type.set ("img/button-face-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/button-face-gray.png", "img/button-face-gray.png");
			type.set ("img/button-face-gray.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/button-face-green.png", "img/button-face-green.png");
			type.set ("img/button-face-green.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/button-face-orange.png", "img/button-face-orange.png");
			type.set ("img/button-face-orange.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/button-face-red.png", "img/button-face-red.png");
			type.set ("img/button-face-red.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/button-face-yellowpng.png", "img/button-face-yellowpng.png");
			type.set ("img/button-face-yellowpng.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/button-face.png", "img/button-face.png");
			type.set ("img/button-face.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/button-large-blue.png", "img/button-large-blue.png");
			type.set ("img/button-large-blue.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/explosion.png", "img/explosion.png");
			type.set ("img/explosion.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/fire.jpg", "img/fire.jpg");
			type.set ("img/fire.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/fire.png", "img/fire.png");
			type.set ("img/fire.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/key-icon.png", "img/key-icon.png");
			type.set ("img/key-icon.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/LandPoint.png", "img/LandPoint.png");
			type.set ("img/LandPoint.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/logo-texto.png", "img/logo-texto.png");
			type.set ("img/logo-texto.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/logo.png", "img/logo.png");
			type.set ("img/logo.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/next-level.png", "img/next-level.png");
			type.set ("img/next-level.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/nivel0.tmx", "img/nivel0.tmx");
			type.set ("img/nivel0.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/nivel1.tmx", "img/nivel1.tmx");
			type.set ("img/nivel1.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/nivel2.tmx", "img/nivel2.tmx");
			type.set ("img/nivel2.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/nivel3.tmx", "img/nivel3.tmx");
			type.set ("img/nivel3.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/nivel4.tmx", "img/nivel4.tmx");
			type.set ("img/nivel4.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/nivel5.tmx", "img/nivel5.tmx");
			type.set ("img/nivel5.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/obstacle.png", "img/obstacle.png");
			type.set ("img/obstacle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/spaceShip.png", "img/spaceShip.png");
			type.set ("img/spaceShip.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/spaceShipLR.png", "img/spaceShipLR.png");
			type.set ("img/spaceShipLR.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/spaceShipRL.png", "img/spaceShipRL.png");
			type.set ("img/spaceShipRL.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/spritesheet.png", "img/spritesheet.png");
			type.set ("img/spritesheet.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/start-game.png", "img/start-game.png");
			type.set ("img/start-game.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/stone.png", "img/stone.png");
			type.set ("img/stone.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/tileset_4.png", "img/tileset_4.png");
			type.set ("img/tileset_4.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("img/untitled.tmx", "img/untitled.tmx");
			type.set ("img/untitled.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("img/willy.png", "img/willy.png");
			type.set ("img/willy.png", Reflect.field (AssetType, "image".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
