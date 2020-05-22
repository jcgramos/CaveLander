#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Key
#include <Key.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void Key_obj::__construct()
{
HX_STACK_FRAME("Key","new",0x5b0d0df1,"Key.new","Key.hx",18,0x745aba9f)
{
	HX_STACK_LINE(19)
	super::__construct(null());
	HX_STACK_LINE(21)
	this->type = HX_CSTRING("Key");
}
;
	return null();
}

//Key_obj::~Key_obj() { }

Dynamic Key_obj::__CreateEmpty() { return  new Key_obj; }
hx::ObjectPtr< Key_obj > Key_obj::__new()
{  hx::ObjectPtr< Key_obj > result = new Key_obj();
	result->__construct();
	return result;}

Dynamic Key_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Key_obj > result = new Key_obj();
	result->__construct();
	return result;}

Void Key_obj::init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("Key","init",0x4d17dc5f,"Key.init","Key.hx",24,0x745aba9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(26)
		this->addChild(::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/key-icon.png"),null()),null(),null()));
		HX_STACK_LINE(28)
		this->set_x(x);
		HX_STACK_LINE(29)
		this->set_y(y);
		HX_STACK_LINE(31)
		this->scene = scene;
	}
return null();
}



Key_obj::Key_obj()
{
}

void Key_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Key);
	HX_MARK_MEMBER_NAME(portico,"portico");
	::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Key_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(portico,"portico");
	::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Key_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"portico") ) { return portico; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Key_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"portico") ) { portico=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Key_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("portico"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Key_obj,portico),HX_CSTRING("portico")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("portico"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Key_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Key_obj::__mClass,"__mClass");
};

#endif

Class Key_obj::__mClass;

void Key_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Key"), hx::TCanCast< Key_obj> ,sStaticFields,sMemberFields,
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

void Key_obj::__boot()
{
}

