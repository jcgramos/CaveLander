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
#ifndef INCLUDED_StateEnd
#include <StateEnd.h>
#endif
#ifndef INCLUDED_core_CLocals
#include <core/CLocals.h>
#endif
#ifndef INCLUDED_core_CLocalsProxy
#include <core/CLocalsProxy.h>
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
#ifndef INCLUDED_haxe_xml_Proxy
#include <haxe/xml/Proxy.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_ui_TextButon
#include <ui/TextButon.h>
#endif

Void StateEnd_obj::__construct()
{
HX_STACK_FRAME("StateEnd","new",0x9bb3805c,"StateEnd.new","StateEnd.hx",21,0x5917be94)
{
	HX_STACK_LINE(21)
	super::__construct();
}
;
	return null();
}

//StateEnd_obj::~StateEnd_obj() { }

Dynamic StateEnd_obj::__CreateEmpty() { return  new StateEnd_obj; }
hx::ObjectPtr< StateEnd_obj > StateEnd_obj::__new()
{  hx::ObjectPtr< StateEnd_obj > result = new StateEnd_obj();
	result->__construct();
	return result;}

Dynamic StateEnd_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StateEnd_obj > result = new StateEnd_obj();
	result->__construct();
	return result;}

Void StateEnd_obj::enter( ){
{
		HX_STACK_FRAME("StateEnd","enter",0x672f1414,"StateEnd.enter","StateEnd.hx",23,0x5917be94)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		int _g = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(25)
		this->set_scaleX((Float(_g) / Float(::GameManager_obj::getInstance()->getGameWidth())));
		HX_STACK_LINE(26)
		int _g1 = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(26)
		this->set_scaleY((Float(_g1) / Float(::GameManager_obj::getInstance()->getGameHeight())));
		HX_STACK_LINE(29)
		::flash::display::Bitmap fondo = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/next-level.png"),null()),null(),null());		HX_STACK_VAR(fondo,"fondo");
		HX_STACK_LINE(30)
		this->addChild(fondo);
		HX_STACK_LINE(32)
		::flash::display::Bitmap logo = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/logo-texto.png"),null()),null(),null());		HX_STACK_VAR(logo,"logo");
		HX_STACK_LINE(33)
		logo->set_x((int)40);
		HX_STACK_LINE(34)
		logo->set_y((int)40);
		HX_STACK_LINE(35)
		this->addChild(logo);
		HX_STACK_LINE(39)
		::ui::TextButon btnPlay = ::ui::TextButon_obj::__new();		HX_STACK_VAR(btnPlay,"btnPlay");
		HX_STACK_LINE(40)
		btnPlay->setText(::core::CLocals_obj::text->resolve(HX_CSTRING("gameover")));
		HX_STACK_LINE(41)
		btnPlay->setSize((int)150);
		HX_STACK_LINE(42)
		btnPlay->setColor((int)16777215);
		HX_STACK_LINE(43)
		btnPlay->set_x((int)80);
		HX_STACK_LINE(44)
		btnPlay->set_y((int)100);
		HX_STACK_LINE(45)
		btnPlay->onTap(this->btnPlay_Tap_dyn());
		HX_STACK_LINE(46)
		this->addChild(btnPlay);
		HX_STACK_LINE(48)
		::ui::TextButon btnPremium = ::ui::TextButon_obj::__new();		HX_STACK_VAR(btnPremium,"btnPremium");
		HX_STACK_LINE(49)
		btnPremium->setText(::core::CLocals_obj::text->resolve(HX_CSTRING("buylives")));
		HX_STACK_LINE(50)
		btnPremium->setColor((int)16777215);
		HX_STACK_LINE(51)
		btnPremium->set_x((int)90);
		HX_STACK_LINE(52)
		btnPremium->set_y((int)160);
		HX_STACK_LINE(53)
		btnPremium->onTap(this->btnPremium_Tap_dyn());
		HX_STACK_LINE(54)
		this->addChild(btnPremium);
		HX_STACK_LINE(57)
		Float _g2 = (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()) / Float((int)2));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(57)
		Float _g3 = (Float(_g2) / Float(this->get_scaleX()));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(57)
		this->set_x((_g3 - (Float(this->get_width()) / Float((int)2))));
		HX_STACK_LINE(58)
		Float _g4 = (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()) / Float((int)2));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(58)
		Float _g5 = (Float(_g4) / Float(this->get_scaleY()));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(58)
		this->set_y((_g5 - (Float(this->get_height()) / Float((int)2))));
		HX_STACK_LINE(61)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->keyReleased_dyn(),null(),null(),null());
	}
return null();
}


Void StateEnd_obj::exit( ){
{
		HX_STACK_FRAME("StateEnd","exit",0x9b7843a2,"StateEnd.exit","StateEnd.hx",66,0x5917be94)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->keyReleased_dyn(),null());
	}
return null();
}


Void StateEnd_obj::btnPlay_Tap( Dynamic event){
{
		HX_STACK_FRAME("StateEnd","btnPlay_Tap",0x775fd5b0,"StateEnd.btnPlay_Tap","StateEnd.hx",74,0x5917be94)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(74)
		::GameManager_obj::getInstance()->start(::StartGame_obj::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StateEnd_obj,btnPlay_Tap,(void))

Void StateEnd_obj::btnPremium_Tap( Dynamic event){
{
		HX_STACK_FRAME("StateEnd","btnPremium_Tap",0x3b5fe5a3,"StateEnd.btnPremium_Tap","StateEnd.hx",78,0x5917be94)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(80)
		::GameManager_obj::getInstance()->setLives((int)3);
		HX_STACK_LINE(81)
		::GameManager_obj::getInstance()->popState();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StateEnd_obj,btnPremium_Tap,(void))

Void StateEnd_obj::keyReleased( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("StateEnd","keyReleased",0xfdd61178,"StateEnd.keyReleased","StateEnd.hx",88,0x5917be94)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(88)
		if (((event->keyCode == (int)27))){
			HX_STACK_LINE(89)
			event->stopImmediatePropagation();
			HX_STACK_LINE(90)
			::GameManager_obj::getInstance()->start(::StartGame_obj::__new());
		}
	}
return null();
}



StateEnd_obj::StateEnd_obj()
{
}

Dynamic StateEnd_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { return enter_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"btnPlay_Tap") ) { return btnPlay_Tap_dyn(); }
		if (HX_FIELD_EQ(inName,"keyReleased") ) { return keyReleased_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"btnPremium_Tap") ) { return btnPremium_Tap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StateEnd_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void StateEnd_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("exit"),
	HX_CSTRING("btnPlay_Tap"),
	HX_CSTRING("btnPremium_Tap"),
	HX_CSTRING("keyReleased"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StateEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StateEnd_obj::__mClass,"__mClass");
};

#endif

Class StateEnd_obj::__mClass;

void StateEnd_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StateEnd"), hx::TCanCast< StateEnd_obj> ,sStaticFields,sMemberFields,
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

void StateEnd_obj::__boot()
{
}

