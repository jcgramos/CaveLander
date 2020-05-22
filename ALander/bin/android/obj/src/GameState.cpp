#include <hxcpp.h>

#ifndef INCLUDED_GameManager
#include <GameManager.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
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
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
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

Void GameState_obj::__construct()
{
HX_STACK_FRAME("GameState","new",0xb65d2111,"GameState.new","GameState.hx",17,0x62656b7f)
{
	HX_STACK_LINE(17)
	super::__construct();
}
;
	return null();
}

//GameState_obj::~GameState_obj() { }

Dynamic GameState_obj::__CreateEmpty() { return  new GameState_obj; }
hx::ObjectPtr< GameState_obj > GameState_obj::__new()
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Dynamic GameState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameState_obj > result = new GameState_obj();
	result->__construct();
	return result;}

Void GameState_obj::enter( ){
{
		HX_STACK_FRAME("GameState","enter",0xb80a0c09,"GameState.enter","GameState.hx",22,0x62656b7f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,enter,(void))

Void GameState_obj::exit( ){
{
		HX_STACK_FRAME("GameState","exit",0xd53b414d,"GameState.exit","GameState.hx",23,0x62656b7f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,exit,(void))

Void GameState_obj::pause( ){
{
		HX_STACK_FRAME("GameState","pause",0x04db75e7,"GameState.pause","GameState.hx",24,0x62656b7f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,pause,(void))

Void GameState_obj::resume( ){
{
		HX_STACK_FRAME("GameState","resume",0x542bdd9c,"GameState.resume","GameState.hx",25,0x62656b7f)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,resume,(void))

Void GameState_obj::keyPressed( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("GameState","keyPressed",0x05100a32,"GameState.keyPressed","GameState.hx",29,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,keyPressed,(void))

Void GameState_obj::keyReleased( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("GameState","keyReleased",0x6fceef2d,"GameState.keyReleased","GameState.hx",30,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,keyReleased,(void))

Void GameState_obj::mouseClicked( ::flash::events::MouseEvent event){
{
		HX_STACK_FRAME("GameState","mouseClicked",0xd59b5831,"GameState.mouseClicked","GameState.hx",31,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,mouseClicked,(void))

Void GameState_obj::frameStarted( ::flash::events::Event event){
{
		HX_STACK_FRAME("GameState","frameStarted",0xcf6f79c3,"GameState.frameStarted","GameState.hx",36,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,frameStarted,(void))

Void GameState_obj::frameEnded( ::flash::events::Event event){
{
		HX_STACK_FRAME("GameState","frameEnded",0xb04214fc,"GameState.frameEnded","GameState.hx",37,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,frameEnded,(void))

Void GameState_obj::pushState( ::GameState state){
{
		HX_STACK_FRAME("GameState","pushState",0xa0634948,"GameState.pushState","GameState.hx",44,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(44)
		::GameManager_obj::getInstance()->pushState(state);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameState_obj,pushState,(void))

Void GameState_obj::popState( ){
{
		HX_STACK_FRAME("GameState","popState",0x0871486f,"GameState.popState","GameState.hx",48,0x62656b7f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(48)
		::GameManager_obj::getInstance()->popState();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameState_obj,popState,(void))


GameState_obj::GameState_obj()
{
}

Dynamic GameState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"enter") ) { return enter_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resume") ) { return resume_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"popState") ) { return popState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pushState") ) { return pushState_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyPressed") ) { return keyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"frameEnded") ) { return frameEnded_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyReleased") ) { return keyReleased_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mouseClicked") ) { return mouseClicked_dyn(); }
		if (HX_FIELD_EQ(inName,"frameStarted") ) { return frameStarted_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void GameState_obj::__GetFields(Array< ::String> &outFields)
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
	HX_CSTRING("pause"),
	HX_CSTRING("resume"),
	HX_CSTRING("keyPressed"),
	HX_CSTRING("keyReleased"),
	HX_CSTRING("mouseClicked"),
	HX_CSTRING("frameStarted"),
	HX_CSTRING("frameEnded"),
	HX_CSTRING("pushState"),
	HX_CSTRING("popState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameState_obj::__mClass,"__mClass");
};

#endif

Class GameState_obj::__mClass;

void GameState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameState"), hx::TCanCast< GameState_obj> ,sStaticFields,sMemberFields,
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

void GameState_obj::__boot()
{
}

