#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif

Void Actor_obj::__construct(Dynamic __o_collisionable)
{
HX_STACK_FRAME("Actor","new",0xa98e6a47,"Actor.new","Actor.hx",8,0x30f9bb09)

HX_STACK_ARG(__o_collisionable,"collisionable")
Dynamic collisionable = __o_collisionable.Default(true);
{
	HX_STACK_LINE(13)
	this->collisionable = true;
	HX_STACK_LINE(14)
	super::__construct();
	HX_STACK_LINE(14)
	this->collisionable = collisionable;
}
;
	return null();
}

//Actor_obj::~Actor_obj() { }

Dynamic Actor_obj::__CreateEmpty() { return  new Actor_obj; }
hx::ObjectPtr< Actor_obj > Actor_obj::__new(Dynamic __o_collisionable)
{  hx::ObjectPtr< Actor_obj > result = new Actor_obj();
	result->__construct(__o_collisionable);
	return result;}

Dynamic Actor_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Actor_obj > result = new Actor_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Actor_obj::update( int elapsedTime){
{
		HX_STACK_FRAME("Actor","update",0x9860d682,"Actor.update","Actor.hx",15,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Actor_obj,update,(void))

Void Actor_obj::init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("Actor","init",0xafc74b49,"Actor.init","Actor.hx",16,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Actor_obj,init,(void))

Void Actor_obj::start( Dynamic hSpeed,Dynamic vSpeed){
{
		HX_STACK_FRAME("Actor","start",0xe48d9609,"Actor.start","Actor.hx",17,0x30f9bb09)
		HX_STACK_THIS(this)
		HX_STACK_ARG(hSpeed,"hSpeed")
		HX_STACK_ARG(vSpeed,"vSpeed")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Actor_obj,start,(void))

Void Actor_obj::clear( ){
{
		HX_STACK_FRAME("Actor","clear",0xa8dd9334,"Actor.clear","Actor.hx",18,0x30f9bb09)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,clear,(void))

Void Actor_obj::destroy( ){
{
		HX_STACK_FRAME("Actor","destroy",0x43114661,"Actor.destroy","Actor.hx",19,0x30f9bb09)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Actor_obj,destroy,(void))


Actor_obj::Actor_obj()
{
}

void Actor_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Actor);
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(collisionable,"collisionable");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Actor_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(collisionable,"collisionable");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Actor_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionable") ) { return collisionable; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Actor_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::Scene >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collisionable") ) { collisionable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Actor_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("collisionable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Scene*/ ,(int)offsetof(Actor_obj,scene),HX_CSTRING("scene")},
	{hx::fsString,(int)offsetof(Actor_obj,type),HX_CSTRING("type")},
	{hx::fsBool,(int)offsetof(Actor_obj,collisionable),HX_CSTRING("collisionable")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("scene"),
	HX_CSTRING("type"),
	HX_CSTRING("collisionable"),
	HX_CSTRING("update"),
	HX_CSTRING("init"),
	HX_CSTRING("start"),
	HX_CSTRING("clear"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Actor_obj::__mClass,"__mClass");
};

#endif

Class Actor_obj::__mClass;

void Actor_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Actor"), hx::TCanCast< Actor_obj> ,sStaticFields,sMemberFields,
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

void Actor_obj::__boot()
{
}

