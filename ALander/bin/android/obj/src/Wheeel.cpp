#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_Wheeel
#include <Wheeel.h>
#endif
#ifndef INCLUDED_core_RotatingSprite
#include <core/RotatingSprite.h>
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

Void Wheeel_obj::__construct()
{
HX_STACK_FRAME("Wheeel","new",0xb44dfe6a,"Wheeel.new","Wheeel.hx",15,0x258b3c46)
{
	HX_STACK_LINE(20)
	this->angle = (int)0;
	HX_STACK_LINE(18)
	this->actionDelay = (int)3000;
	HX_STACK_LINE(17)
	this->timer = (int)0;
	HX_STACK_LINE(23)
	super::__construct(null());
	HX_STACK_LINE(25)
	this->type = HX_CSTRING("Wheel");
}
;
	return null();
}

//Wheeel_obj::~Wheeel_obj() { }

Dynamic Wheeel_obj::__CreateEmpty() { return  new Wheeel_obj; }
hx::ObjectPtr< Wheeel_obj > Wheeel_obj::__new()
{  hx::ObjectPtr< Wheeel_obj > result = new Wheeel_obj();
	result->__construct();
	return result;}

Dynamic Wheeel_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Wheeel_obj > result = new Wheeel_obj();
	result->__construct();
	return result;}

Void Wheeel_obj::init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("Wheeel","init",0x0ca955c6,"Wheeel.init","Wheeel.hx",27,0x258b3c46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(29)
		this->set_x(x);
		HX_STACK_LINE(30)
		this->set_y(y);
		HX_STACK_LINE(31)
		this->scene = scene;
		HX_STACK_LINE(33)
		this->lineH = ::core::RotatingSprite_obj::__new();
		HX_STACK_LINE(36)
		this->lineH->addChild(::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/obstacle.png"),null()),null(),null()));
		HX_STACK_LINE(38)
		this->lineH->xloc = (int)0;
		HX_STACK_LINE(39)
		this->lineH->yloc = (int)0;
		HX_STACK_LINE(41)
		this->lineH->set_height((int)10);
		HX_STACK_LINE(42)
		this->lineH->set_width(width);
		HX_STACK_LINE(44)
		this->lineH->xcenter = (Float(width) / Float((int)2));
		HX_STACK_LINE(45)
		this->lineH->ycenter = (Float(height) / Float((int)2));
		HX_STACK_LINE(47)
		this->addChild(this->lineH);
	}
return null();
}


Void Wheeel_obj::update( int elapsedTime){
{
		HX_STACK_FRAME("Wheeel","update",0x79b83a3f,"Wheeel.update","Wheeel.hx",54,0x258b3c46)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(56)
		hx::AddEq(this->angle,(int)2);
		HX_STACK_LINE(57)
		this->lineH->rotate(this->angle);
	}
return null();
}


Void Wheeel_obj::destroy( ){
{
		HX_STACK_FRAME("Wheeel","destroy",0x8e312804,"Wheeel.destroy","Wheeel.hx",61,0x258b3c46)
		HX_STACK_THIS(this)
	}
return null();
}



Wheeel_obj::Wheeel_obj()
{
}

void Wheeel_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Wheeel);
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(actionDelay,"actionDelay");
	HX_MARK_MEMBER_NAME(lineH,"lineH");
	HX_MARK_MEMBER_NAME(angle,"angle");
	::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Wheeel_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(actionDelay,"actionDelay");
	HX_VISIT_MEMBER_NAME(lineH,"lineH");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Wheeel_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"lineH") ) { return lineH; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actionDelay") ) { return actionDelay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Wheeel_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lineH") ) { lineH=inValue.Cast< ::core::RotatingSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"actionDelay") ) { actionDelay=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Wheeel_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("actionDelay"));
	outFields->push(HX_CSTRING("lineH"));
	outFields->push(HX_CSTRING("angle"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Wheeel_obj,timer),HX_CSTRING("timer")},
	{hx::fsFloat,(int)offsetof(Wheeel_obj,actionDelay),HX_CSTRING("actionDelay")},
	{hx::fsObject /*::core::RotatingSprite*/ ,(int)offsetof(Wheeel_obj,lineH),HX_CSTRING("lineH")},
	{hx::fsFloat,(int)offsetof(Wheeel_obj,angle),HX_CSTRING("angle")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("timer"),
	HX_CSTRING("actionDelay"),
	HX_CSTRING("lineH"),
	HX_CSTRING("angle"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Wheeel_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Wheeel_obj::__mClass,"__mClass");
};

#endif

Class Wheeel_obj::__mClass;

void Wheeel_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Wheeel"), hx::TCanCast< Wheeel_obj> ,sStaticFields,sMemberFields,
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

void Wheeel_obj::__boot()
{
}

