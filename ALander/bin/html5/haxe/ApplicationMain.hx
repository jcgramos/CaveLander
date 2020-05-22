package;


import openfl.Assets;


#if (!macro && !display)


import flash.display.Loader;
import flash.events.Event;
import flash.events.IOErrorEvent;
import flash.media.Sound;
import flash.net.URLLoader;
import flash.net.URLRequest;
import haxe.io.Path;
import js.html.HtmlElement;
import js.html.Image;
import flash.Lib;

@:access(flash.Lib) class ApplicationMain {
	
	
	public static var images (default, null) = new Map<String, Image> ();
	public static var urlLoaders = new Map <String, URLLoader> ();
	
	private static var assetsLoaded = 0;
	private static var preloader:NMEPreloader;
	private static var total = 0;
	
	//public static var loaders:Map <String, Loader>;
	//public static var urlLoaders:Map <String, URLLoader>;
	
	
	static function main () {
		
		#if munit
		var element = null;
		#else
		var element:HtmlElement = cast js.Browser.document.getElementById ("openfl-embed");
		#end
		
		flash.Lib.create (750, 450, element, 0);
		
		preloader = new NMEPreloader ();
		Lib.current.addChild (preloader);
		preloader.onInit ();
		
		var sounds = [];
		var id;
		
		
		var image = new Image ();
		id = "assets/img/button-face-blue.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/button-face-blue.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/button-face-gray.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/button-face-gray.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/button-face-green.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/button-face-green.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/button-face-orange.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/button-face-orange.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/button-face-red.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/button-face-red.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/button-face-yellowpng.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/button-face-yellowpng.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/button-face.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/button-face.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/button-large-blue.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/button-large-blue.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/explosion.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/explosion.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/fire.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/fire.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/fire.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/fire.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/key-icon.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/key-icon.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/LandPoint.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/LandPoint.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/logo.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/logo.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/next-level.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/next-level.png", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/img/nivel1.tmx", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/img/nivel2.tmx", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/img/nivel3.tmx", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/img/nivel4.tmx", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/img/nivel5.tmx", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/obstacle.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/obstacle.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/spaceShip.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/spaceShip.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/spaceShipLR.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/spaceShipLR.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/spaceShipRL.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/spaceShipRL.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/spritesheet.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/spritesheet.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/start-game.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/start-game.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/stone.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/stone.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/tileset_4.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/tileset_4.png", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/img/untitled.tmx", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/willy.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/willy.png", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/localization.xml", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/openfl.svg", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/button-face-blue.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/button-face-blue.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/button-face-gray.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/button-face-gray.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/button-face-green.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/button-face-green.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/button-face-orange.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/button-face-orange.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/button-face-red.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/button-face-red.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/button-face-yellowpng.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/button-face-yellowpng.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/button-face.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/button-face.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/button-large-blue.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/button-large-blue.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/explosion.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/explosion.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/fire.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/fire.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/fire.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/fire.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/key-icon.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/key-icon.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/LandPoint.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/LandPoint.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/logo.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/logo.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/next-level.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/next-level.png", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("img/nivel1.tmx", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("img/nivel2.tmx", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("img/nivel3.tmx", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("img/nivel4.tmx", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("img/nivel5.tmx", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/obstacle.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/obstacle.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/spaceShip.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/spaceShip.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/spaceShipLR.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/spaceShipLR.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/spaceShipRL.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/spaceShipRL.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/spritesheet.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/spritesheet.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/start-game.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/start-game.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/stone.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/stone.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/tileset_4.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/tileset_4.png", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("img/untitled.tmx", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "img/willy.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("img/willy.png", loader);
		total ++;
		
		
		
		if (total == 0) {
			
			start ();
			
		} else {
			
			for (path in urlLoaders.keys ()) {
				
				var urlLoader = urlLoaders.get (path);
				urlLoader.addEventListener ("complete", loader_onComplete);
				urlLoader.load (new URLRequest (path));
				
			}
			
			for (soundName in sounds) {
				
				var sound = new Sound ();
				sound.addEventListener (Event.COMPLETE, sound_onComplete);
				sound.addEventListener (IOErrorEvent.IO_ERROR, sound_onIOError);
				sound.load (new URLRequest (soundName + ".ogg"));
				
			}
			
			
			
		}
		
	}
	
	
	private static function start ():Void {
		
		preloader.addEventListener (Event.COMPLETE, preloader_onComplete);
		preloader.onLoaded ();
		
	}
	
	
	private static function image_onLoad (_):Void {
		
		assetsLoaded++;
		
		preloader.onUpdate (assetsLoaded, total);
		
		if (assetsLoaded == total) {
			
			start ();
			
		}
		
	}
	
	
	private static function loader_onComplete (event:Event):Void {
		
		assetsLoaded++;
		
		preloader.onUpdate (assetsLoaded, total);
		
		if (assetsLoaded == total) {
			
			start ();
			
		}
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		preloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		Lib.current.removeChild (preloader);
		preloader = null;
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields (Main)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		if (hasMain) {
			
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance(DocumentClass, []);
			
			if (Std.is (instance, flash.display.DisplayObject)) {
				
				flash.Lib.current.addChild (cast instance);
				
			} else {
				
				trace ("Error: No entry point found");
				trace ("If you are using DCE with a static main, you may need to @:keep the function");
				
			}
			
		}
		
	}
	
	
	private static function sound_onComplete (event:Event):Void {
		
		assetsLoaded++;
		
		preloader.onUpdate (assetsLoaded, total);
		
		if (assetsLoaded == total) {
			
			start ();
			
		}
		
	}
	
	
	private static function sound_onIOError (event:IOErrorEvent):Void {
		
		// if it is actually valid, it will load later when requested
		
		assetsLoaded++;
		
		preloader.onUpdate (assetsLoaded, total);
		
		if (assetsLoaded == total) {
			
			start ();
			
		}
		
	}
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#elseif macro


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				var method = macro { this.stage = flash.Lib.current.stage; super (); }
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#else


import Main;

class ApplicationMain {
	
	
	public static function main () {
		
		
		
	}
	
	
}


#end