#include <hxcpp.h>

#ifndef INCLUDED_GameManager
#include <GameManager.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_StartGame
#include <StartGame.h>
#endif
#ifndef INCLUDED_StatePlay
#include <StatePlay.h>
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
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_ui_Keyboard
#include <flash/ui/Keyboard.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
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

Void StartGame_obj::__construct()
{
HX_STACK_FRAME("StartGame","new",0xecb42846,"StartGame.new","StartGame.hx",21,0xc31201ea)
{
	HX_STACK_LINE(21)
	super::__construct();
}
;
	return null();
}

//StartGame_obj::~StartGame_obj() { }

Dynamic StartGame_obj::__CreateEmpty() { return  new StartGame_obj; }
hx::ObjectPtr< StartGame_obj > StartGame_obj::__new()
{  hx::ObjectPtr< StartGame_obj > result = new StartGame_obj();
	result->__construct();
	return result;}

Dynamic StartGame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StartGame_obj > result = new StartGame_obj();
	result->__construct();
	return result;}

Void StartGame_obj::enter( ){
{
		HX_STACK_FRAME("StartGame","enter",0x77990a7e,"StartGame.enter","StartGame.hx",26,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		int _g = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(28)
		this->set_scaleX((Float(_g) / Float(::GameManager_obj::getInstance()->getGameWidth())));
		HX_STACK_LINE(29)
		int _g1 = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(29)
		this->set_scaleY((Float(_g1) / Float(::GameManager_obj::getInstance()->getGameHeight())));
		HX_STACK_LINE(31)
		this->show();
		HX_STACK_LINE(34)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->keyPressed_dyn(),null(),null(),null());
		HX_STACK_LINE(35)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->keyReleased_dyn(),null(),null(),null());
		HX_STACK_LINE(36)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->frameStarted_dyn(),null(),null(),null());
		HX_STACK_LINE(37)
		if ((::flash::ui::Multitouch_obj::get_supportsTouchEvents())){
			HX_STACK_LINE(38)
			::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->touchBegin_dyn(),null(),null(),null());
		}
	}
return null();
}


Void StartGame_obj::show( ){
{
		HX_STACK_FRAME("StartGame","show",0x343f6657,"StartGame.show","StartGame.hx",43,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		this->scene = ::Scene_obj::load((int)0);
		HX_STACK_LINE(46)
		this->scene->start(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(48)
		this->addChild(this->scene);
		HX_STACK_LINE(50)
		::flash::display::Bitmap logo = ::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/logo-texto.png"),null()),null(),null());		HX_STACK_VAR(logo,"logo");
		HX_STACK_LINE(51)
		logo->set_x((int)40);
		HX_STACK_LINE(52)
		logo->set_y((int)40);
		HX_STACK_LINE(53)
		this->addChild(logo);
		HX_STACK_LINE(55)
		::ui::TextButon btnPlay = ::ui::TextButon_obj::__new();		HX_STACK_VAR(btnPlay,"btnPlay");
		HX_STACK_LINE(56)
		btnPlay->setText(::core::CLocals_obj::text->resolve(HX_CSTRING("start")));
		HX_STACK_LINE(57)
		btnPlay->setColor((int)255);
		HX_STACK_LINE(58)
		btnPlay->set_x((int)80);
		HX_STACK_LINE(59)
		btnPlay->set_y((int)140);
		HX_STACK_LINE(60)
		btnPlay->onTap(this->btnPlay_Tap_dyn());
		HX_STACK_LINE(61)
		this->addChild(btnPlay);
		HX_STACK_LINE(63)
		::ui::TextButon btnPremium = ::ui::TextButon_obj::__new();		HX_STACK_VAR(btnPremium,"btnPremium");
		HX_STACK_LINE(64)
		btnPremium->setText(::core::CLocals_obj::text->resolve(HX_CSTRING("goPremium")));
		HX_STACK_LINE(65)
		btnPremium->setColor((int)255);
		HX_STACK_LINE(66)
		btnPremium->set_x((int)90);
		HX_STACK_LINE(67)
		btnPremium->set_y((int)200);
		HX_STACK_LINE(68)
		this->addChild(btnPremium);
		HX_STACK_LINE(70)
		::ui::TextButon btnExit = ::ui::TextButon_obj::__new();		HX_STACK_VAR(btnExit,"btnExit");
		HX_STACK_LINE(71)
		btnExit->setText(::core::CLocals_obj::text->resolve(HX_CSTRING("exit")));
		HX_STACK_LINE(72)
		btnExit->setColor((int)255);
		HX_STACK_LINE(73)
		btnExit->set_x((int)100);
		HX_STACK_LINE(74)
		btnExit->set_y((int)260);
		HX_STACK_LINE(75)
		btnExit->onTap(this->btnExit_Tap_dyn());
		HX_STACK_LINE(76)
		this->addChild(btnExit);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StartGame_obj,show,(void))

Void StartGame_obj::exit( ){
{
		HX_STACK_FRAME("StartGame","exit",0x2b0a8878,"StartGame.exit","StartGame.hx",80,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->keyPressed_dyn(),null());
		HX_STACK_LINE(83)
		::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->keyReleased_dyn(),null());
		HX_STACK_LINE(87)
		if ((::flash::ui::Multitouch_obj::get_supportsTouchEvents())){
			HX_STACK_LINE(88)
			::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->touchBegin_dyn(),null());
		}
	}
return null();
}


Void StartGame_obj::looop( int elapsedTime){
{
		HX_STACK_FRAME("StartGame","looop",0x800c8e13,"StartGame.looop","StartGame.hx",94,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(94)
		this->scene->update(elapsedTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartGame_obj,looop,(void))

Void StartGame_obj::frameStarted( ::flash::events::Event event){
{
		HX_STACK_FRAME("StartGame","frameStarted",0x6eea63ee,"StartGame.frameStarted","StartGame.hx",98,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(100)
		int now = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(101)
		int elapsedTime = (now - this->previousTime);		HX_STACK_VAR(elapsedTime,"elapsedTime");
		HX_STACK_LINE(103)
		if (((elapsedTime > (int)10))){
			HX_STACK_LINE(104)
			this->looop(elapsedTime);
			HX_STACK_LINE(105)
			this->previousTime = now;
		}
	}
return null();
}


Void StartGame_obj::btnPlay_Tap( Dynamic event){
{
		HX_STACK_FRAME("StartGame","btnPlay_Tap",0x1489779a,"StartGame.btnPlay_Tap","StartGame.hx",109,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(111)
		this->scene->exit(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(112)
		::GameManager_obj::getInstance()->start(::StatePlay_obj::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartGame_obj,btnPlay_Tap,(void))

Void StartGame_obj::btnExit_Tap( Dynamic event){
{
		HX_STACK_FRAME("StartGame","btnExit_Tap",0xe43a1dc4,"StartGame.btnExit_Tap","StartGame.hx",116,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(118)
		event->__Field(HX_CSTRING("stopImmediatePropagation"),true)();
		HX_STACK_LINE(120)
		::flash::Lib_obj::exit();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartGame_obj,btnExit_Tap,(void))

Void StartGame_obj::keyPressed( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("StartGame","keyPressed",0x9029839d,"StartGame.keyPressed","StartGame.hx",131,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(131)
		if (((event->keyCode == ::flash::ui::Keyboard_obj::ENTER))){
			HX_STACK_LINE(132)
			::GameManager_obj::getInstance()->start(::StatePlay_obj::__new());
		}
	}
return null();
}


Void StartGame_obj::keyReleased( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("StartGame","keyReleased",0x9affb362,"StartGame.keyReleased","StartGame.hx",138,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(138)
		if (((event->keyCode == (int)27))){
			HX_STACK_LINE(139)
			event->stopImmediatePropagation();
			HX_STACK_LINE(141)
			::flash::Lib_obj::exit();
		}
	}
return null();
}


Void StartGame_obj::touchBegin( ::flash::events::TouchEvent event){
{
		HX_STACK_FRAME("StartGame","touchBegin",0x91a1dec4,"StartGame.touchBegin","StartGame.hx",151,0xc31201ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(151)
		::GameManager_obj::getInstance()->popState();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StartGame_obj,touchBegin,(void))


StartGame_obj::StartGame_obj()
{
}

void StartGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StartGame);
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(previousTime,"previousTime");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StartGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(previousTime,"previousTime");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StartGame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"enter") ) { return enter_dyn(); }
		if (HX_FIELD_EQ(inName,"looop") ) { return looop_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyPressed") ) { return keyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"touchBegin") ) { return touchBegin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"btnPlay_Tap") ) { return btnPlay_Tap_dyn(); }
		if (HX_FIELD_EQ(inName,"btnExit_Tap") ) { return btnExit_Tap_dyn(); }
		if (HX_FIELD_EQ(inName,"keyReleased") ) { return keyReleased_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { return previousTime; }
		if (HX_FIELD_EQ(inName,"frameStarted") ) { return frameStarted_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StartGame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::Scene >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { previousTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StartGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("previousTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Scene*/ ,(int)offsetof(StartGame_obj,scene),HX_CSTRING("scene")},
	{hx::fsInt,(int)offsetof(StartGame_obj,previousTime),HX_CSTRING("previousTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("scene"),
	HX_CSTRING("previousTime"),
	HX_CSTRING("enter"),
	HX_CSTRING("show"),
	HX_CSTRING("exit"),
	HX_CSTRING("looop"),
	HX_CSTRING("frameStarted"),
	HX_CSTRING("btnPlay_Tap"),
	HX_CSTRING("btnExit_Tap"),
	HX_CSTRING("keyPressed"),
	HX_CSTRING("keyReleased"),
	HX_CSTRING("touchBegin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StartGame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StartGame_obj::__mClass,"__mClass");
};

#endif

Class StartGame_obj::__mClass;

void StartGame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StartGame"), hx::TCanCast< StartGame_obj> ,sStaticFields,sMemberFields,
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

void StartGame_obj::__boot()
{
}

