package;


import flash.display.Sprite;    
import flash.display.Bitmap;
// This is what we need to retrieve the image
import flash.display.Loader;    
// This is how we specify the location of the image
import flash.net.URLRequest;    

// Downloading an image can dispatch a lot of different event types!
import flash.events.Event;              
import flash.events.ProgressEvent;
import flash.events.SecurityErrorEvent;
import flash.events.HTTPStatusEvent;
import flash.events.IOErrorEvent;

// For timing
import flash.Lib; 


class Main extends Sprite {
        
        
        private var request:URLRequest;
        private var loader:Loader;
        private var status:Int; // This will store the last HTTP status
        
        private var lastTime:Float;
        private var loading:Bool;
        
        public function new () {
                super ();
                
                // Instantiate the guys!
                request = new URLRequest( 'http://vancam.ca/vancam.jpg' );
                loader = new Loader();
                
                // Prepare for loader.load()'s billion events
                loader.contentLoaderInfo.addEventListener( Event.COMPLETE, onComplete );
                loader.contentLoaderInfo.addEventListener( Event.OPEN, onOpen );
                loader.contentLoaderInfo.addEventListener( ProgressEvent.PROGRESS, onProgress );
                loader.contentLoaderInfo.addEventListener( SecurityErrorEvent.SECURITY_ERROR, onSecurity );
                loader.contentLoaderInfo.addEventListener( HTTPStatusEvent.HTTP_STATUS, onHTTPStatus );
                loader.contentLoaderInfo.addEventListener( IOErrorEvent.IO_ERROR, onIOError );
                loader.load( request );
                
                // Don't want to load more than one at a time that would be ridiculous
                loading = true;
                
                // Prepare for timing
                lastTime = Lib.getTimer();
                addEventListener( Event.ENTER_FRAME, onFrame );
                
        }
        
        
        private function onFrame( e:Event ) {
                var time = Lib.getTimer();
                var delta = time - lastTime;
                if ( delta > 1000 * 60 ) { // Should be about 1 minute, if my guesses were correct
                        if ( !loading ) { // If it's already loading we shouldn't initiate a new load
                                loader.load( request );
                                lastTime = time;
                        }
                }
        }
        
        
         private function onComplete(event:Event):Void {
                if ( status == 200 ) {  // 200 is a successful HTTP status
                        
                        var b:Bitmap = event.target.content;    // This is where the bitmap lives
                
                        // I cut out some scaling and positioning logic here
                        // ...
                        
                        // Remove the old children (older versions of the bitmap).. You know, for memory reasons
                        while( this.numChildren > 0 ) {
                                var a:Bitmap = cast( image.removeChildAt( 0 ), Bitmap );
                                a.bitmapData.dispose();                         
                        }
                        
                        // Add the new one
                        image.addChild( b );
                        
                } 
                
                // Loading process is now complete
                loading = false;
        }
        
        private function onOpen(event:Event):Void {
                // The download has begun!
                loading = true;
        }

        private function onProgress(event:ProgressEvent):Void {
                var p = event.bytesLoaded/event.bytesTotal;
                // Math.round(p*100) is the current percent of bytes retrieved
        }

        private function onSecurity(event:SecurityErrorEvent):Void {
                trace("securityErrorHandler: " + event);
                loading = false;
        }

        private function onHTTPStatus(event:HTTPStatusEvent):Void {
                // Hopefully this is 200
                status = event.status;
        }

        private function onIOError(event:IOErrorEvent):Void {
                trace("ioErrorHandler: " + event);
                loading = false;
        }

}