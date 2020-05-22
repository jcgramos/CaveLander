package ui;
import flash.display.Sprite;
import flash.text.TextField;
import flash.text.TextFormat;
import flash.text.TextFieldAutoSize;
import flash.events.MouseEvent;
import flash.events.TouchEvent;
import flash.ui.Multitouch;

/**
 * ...
 * @author Yo
 */
class TextButon extends Sprite
{
	private var _label:TextField = new TextField();
	var tbFormat:TextFormat = new TextFormat();
	var event:Dynamic;
	
	public function new() 
	{
		super();
		this.buttonMode = true;
		this.useHandCursor = true;
		
	
		//tbFormat.font = "System";
		tbFormat.size = 40;
		_label.defaultTextFormat = tbFormat;
		_label.autoSize = TextFieldAutoSize.LEFT;
		_label.selectable = false;
		addChild(_label);
		
	}
	
	public function onTap( ontap:Dynamic ) {
		
		if (ontap != null ) {
			this.event = ontap;
			
			if (Multitouch.supportsTouchEvents ) {
				this.addEventListener( TouchEvent.TOUCH_BEGIN, ontap);
			}
			this.addEventListener( MouseEvent.CLICK, ontap );
		} else {
			this.removeEventListener(TouchEvent.TOUCH_BEGIN, this.event);
			this.removeEventListener(MouseEvent.CLICK, this.event);
		}
	}
	
	public  function getText():String {
		return _label.text;
	}

	public  function setText(value:String):String {
		_label.text = value;
		return value;
	}	

	public  function getColor():UInt {
		return _label.textColor;
	}

	public  function setColor(value:UInt):UInt {
		_label.textColor = value;
		return value;
	}	

	public  function getSize():Float {
		return tbFormat.size ;
	}

	public  function setSize(value:Float):Float {
		tbFormat.size = value;
		_label.defaultTextFormat = tbFormat;
		return value;
	}	
	
}