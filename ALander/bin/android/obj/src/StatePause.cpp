#include <hxcpp.h>

#ifndef INCLUDED_GameManager
#include <GameManager.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_StartGame
#include <StartGame.h>
#endif
#ifndef INCLUDED_StatePause
#include <StatePause.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldAutoSize
#include <flash/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_ui_Keyboard
#include <flash/ui/Keyboard.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void StatePause_obj::__construct()
{
HX_STACK_FRAME("StatePause","new",0xbf395eb7,"StatePause.new","StatePause.hx",22,0x7a8b2499)
{
	HX_STACK_LINE(22)
	super::__construct();
}
;
	return null();
}

//StatePause_obj::~StatePause_obj() { }

Dynamic StatePause_obj::__CreateEmpty() { return  new StatePause_obj; }
hx::ObjectPtr< StatePause_obj > StatePause_obj::__new()
{  hx::ObjectPtr< StatePause_obj > result = new StatePause_obj();
	result->__construct();
	return result;}

Dynamic StatePause_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StatePause_obj > result = new StatePause_obj();
	result->__construct();
	return result;}

Void StatePause_obj::enter( ){
{
		HX_STACK_FRAME("StatePause","enter",0xdead7f2f,"StatePause.enter","StatePause.hx",24,0x7a8b2499)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		this->show();
		HX_STACK_LINE(29)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->keyPressed_dyn(),null(),null(),null());
		HX_STACK_LINE(30)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->keyReleased_dyn(),null(),null(),null());
		HX_STACK_LINE(31)
		if ((::flash::ui::Multitouch_obj::get_supportsTouchEvents())){
			HX_STACK_LINE(32)
			::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->touchBegin_dyn(),null(),null(),null());
		}
	}
return null();
}


Void StatePause_obj::show( ){
{
		HX_STACK_FRAME("StatePause","show",0x9649d2c6,"StatePause.show","StatePause.hx",36,0x7a8b2499)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		int _g = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(38)
		this->set_scaleX((Float(_g) / Float(::GameManager_obj::getInstance()->getGameWidth())));
		HX_STACK_LINE(39)
		int _g1 = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		this->set_scaleY((Float(_g1) / Float(::GameManager_obj::getInstance()->getGameHeight())));
		HX_STACK_LINE(41)
		this->addChild(::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/next-level.png"),null()),null(),null()));
		HX_STACK_LINE(42)
		Float x = (int)20;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(43)
		{
			HX_STACK_LINE(43)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(43)
			int _g2 = ::GameManager_obj::getInstance()->getLives();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(43)
			while(((_g11 < _g2))){
				HX_STACK_LINE(43)
				int live = (_g11)++;		HX_STACK_VAR(live,"live");
				HX_STACK_LINE(44)
				::flash::display::Bitmap live1 = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/spaceShip.png"),true),null(),null());		HX_STACK_VAR(live1,"live1");
				HX_STACK_LINE(45)
				live1->set_x(x);
				HX_STACK_LINE(46)
				hx::AddEq(x,(int)40);
				HX_STACK_LINE(47)
				live1->set_y((int)15);
				HX_STACK_LINE(48)
				this->addChild(live1);
			}
		}
		HX_STACK_LINE(51)
		::flash::text::TextField textBox = ::flash::text::TextField_obj::__new();		HX_STACK_VAR(textBox,"textBox");
		HX_STACK_LINE(52)
		::flash::text::TextFormat textboxformat = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(textboxformat,"textboxformat");
		HX_STACK_LINE(54)
		textboxformat->size = (int)30;
		HX_STACK_LINE(55)
		textBox->set_defaultTextFormat(textboxformat);
		HX_STACK_LINE(57)
		textBox->set_autoSize(::flash::text::TextFieldAutoSize_obj::RIGHT);
		HX_STACK_LINE(58)
		textBox->set_textColor((int)65280);
		HX_STACK_LINE(59)
		textBox->set_x((int)260);
		HX_STACK_LINE(60)
		textBox->set_y((int)15);
		HX_STACK_LINE(61)
		textBox->set_text((HX_CSTRING("") + ::GameManager_obj::getInstance()->getPoints()));
		HX_STACK_LINE(63)
		this->addChild(textBox);
		HX_STACK_LINE(65)
		int nivel = (int)1;		HX_STACK_VAR(nivel,"nivel");
		HX_STACK_LINE(66)
		{
			HX_STACK_LINE(66)
			int _g2 = (int)1;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(66)
			while(((_g2 < (int)5))){
				HX_STACK_LINE(66)
				int fila = (_g2)++;		HX_STACK_VAR(fila,"fila");
				HX_STACK_LINE(67)
				{
					HX_STACK_LINE(67)
					int _g11 = (int)1;		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(67)
					while(((_g11 < (int)6))){
						HX_STACK_LINE(67)
						int col = (_g11)++;		HX_STACK_VAR(col,"col");
						HX_STACK_LINE(68)
						::flash::display::Bitmap bmp;		HX_STACK_VAR(bmp,"bmp");
						HX_STACK_LINE(69)
						int _g21 = (nivel)++;		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(69)
						if (((_g21 <= ::GameManager_obj::getInstance()->getNivel()))){
							HX_STACK_LINE(70)
							bmp = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/button-face-green.png"),true),null(),null());
						}
						else{
							HX_STACK_LINE(72)
							bmp = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/button-face-gray.png"),true),null(),null());
						}
						HX_STACK_LINE(74)
						bmp->set_x(((col * (int)50) - (int)20));
						HX_STACK_LINE(75)
						bmp->set_y(((fila * (int)50) + (int)20));
						HX_STACK_LINE(76)
						this->addChild(bmp);
					}
				}
			}
		}
		HX_STACK_LINE(99)
		Float _g3 = (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()) / Float((int)2));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(99)
		this->set_x((_g3 - (Float(this->get_width()) / Float((int)2))));
		HX_STACK_LINE(100)
		Float _g4 = (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(100)
		this->set_y((_g4 - (Float(this->get_height()) / Float((int)2))));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatePause_obj,show,(void))

Void StatePause_obj::exit( ){
{
		HX_STACK_FRAME("StatePause","exit",0x8d14f4e7,"StatePause.exit","StatePause.hx",103,0x7a8b2499)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->keyPressed_dyn(),null());
		HX_STACK_LINE(106)
		::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->keyReleased_dyn(),null());
		HX_STACK_LINE(107)
		if ((::flash::ui::Multitouch_obj::get_supportsTouchEvents())){
			HX_STACK_LINE(108)
			::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->touchBegin_dyn(),null());
		}
	}
return null();
}


Void StatePause_obj::keyPressed( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("StatePause","keyPressed",0x2b9b6d4c,"StatePause.keyPressed","StatePause.hx",114,0x7a8b2499)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(114)
		if (((event->keyCode == ::flash::ui::Keyboard_obj::ENTER))){
			HX_STACK_LINE(115)
			::GameManager_obj::getInstance()->popState();
		}
	}
return null();
}


Void StatePause_obj::touchBegin( ::flash::events::TouchEvent event){
{
		HX_STACK_FRAME("StatePause","touchBegin",0x2d13c873,"StatePause.touchBegin","StatePause.hx",119,0x7a8b2499)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(119)
		::GameManager_obj::getInstance()->popState();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatePause_obj,touchBegin,(void))

Void StatePause_obj::keyReleased( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("StatePause","keyReleased",0x033a42d3,"StatePause.keyReleased","StatePause.hx",124,0x7a8b2499)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(124)
		if (((event->keyCode == (int)27))){
			HX_STACK_LINE(125)
			event->stopImmediatePropagation();
			HX_STACK_LINE(126)
			::GameManager_obj::getInstance()->start(::StartGame_obj::__new());
		}
	}
return null();
}



StatePause_obj::StatePause_obj()
{
}

Dynamic StatePause_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { return enter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyPressed") ) { return keyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"touchBegin") ) { return touchBegin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyReleased") ) { return keyReleased_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StatePause_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StatePause_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("enter"),
	HX_CSTRING("show"),
	HX_CSTRING("exit"),
	HX_CSTRING("keyPressed"),
	HX_CSTRING("touchBegin"),
	HX_CSTRING("keyReleased"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatePause_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatePause_obj::__mClass,"__mClass");
};

#endif

Class StatePause_obj::__mClass;

void StatePause_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StatePause"), hx::TCanCast< StatePause_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void StatePause_obj::__boot()
{
}

