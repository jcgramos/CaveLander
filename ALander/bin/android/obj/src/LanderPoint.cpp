#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_LanderPoint
#include <LanderPoint.h>
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

Void LanderPoint_obj::__construct()
{
HX_STACK_FRAME("LanderPoint","new",0xc9dd12ea,"LanderPoint.new","LanderPoint.hx",18,0x235837c6)
{
	HX_STACK_LINE(20)
	super::__construct(false);
	HX_STACK_LINE(21)
	this->addChild(::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/LandPoint.png"),null()),null(),null()));
	HX_STACK_LINE(22)
	this->set_name(HX_CSTRING("landingPoint"));
}
;
	return null();
}

//LanderPoint_obj::~LanderPoint_obj() { }

Dynamic LanderPoint_obj::__CreateEmpty() { return  new LanderPoint_obj; }
hx::ObjectPtr< LanderPoint_obj > LanderPoint_obj::__new()
{  hx::ObjectPtr< LanderPoint_obj > result = new LanderPoint_obj();
	result->__construct();
	return result;}

Dynamic LanderPoint_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< LanderPoint_obj > result = new LanderPoint_obj();
	result->__construct();
	return result;}

Void LanderPoint_obj::setTarget( bool target){
{
		HX_STACK_FRAME("LanderPoint","setTarget",0xf00d2e9d,"LanderPoint.setTarget","LanderPoint.hx",27,0x235837c6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(27)
		this->target = target;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LanderPoint_obj,setTarget,(void))

bool LanderPoint_obj::isTarget( ){
	HX_STACK_FRAME("LanderPoint","isTarget",0xa03dd811,"LanderPoint.isTarget","LanderPoint.hx",31,0x235837c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(31)
	return this->target;
}


HX_DEFINE_DYNAMIC_FUNC0(LanderPoint_obj,isTarget,return )

Void LanderPoint_obj::setStartPoint( bool startPoint){
{
		HX_STACK_FRAME("LanderPoint","setStartPoint",0xc2745dda,"LanderPoint.setStartPoint","LanderPoint.hx",35,0x235837c6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(startPoint,"startPoint")
		HX_STACK_LINE(35)
		this->startPoint = startPoint;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(LanderPoint_obj,setStartPoint,(void))

bool LanderPoint_obj::isStartPoint( ){
	HX_STACK_FRAME("LanderPoint","isStartPoint",0xcd28d14e,"LanderPoint.isStartPoint","LanderPoint.hx",39,0x235837c6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(39)
	return this->startPoint;
}


HX_DEFINE_DYNAMIC_FUNC0(LanderPoint_obj,isStartPoint,return )

Void LanderPoint_obj::init( ::Scene _tmp_sprite,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("LanderPoint","init",0xd44c3146,"LanderPoint.init","LanderPoint.hx",42,0x235837c6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(_tmp_sprite,"_tmp_sprite")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(44)
		::flash::display::Sprite sprite = _tmp_sprite;		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(44)
		this->set_x(x);
		HX_STACK_LINE(45)
		this->set_y(y);
		HX_STACK_LINE(46)
		this->set_width(width);
		HX_STACK_LINE(47)
		this->set_height((int)5);
		HX_STACK_LINE(48)
		sprite->addChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}



LanderPoint_obj::LanderPoint_obj()
{
}

Dynamic LanderPoint_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return target; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isTarget") ) { return isTarget_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setTarget") ) { return setTarget_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startPoint") ) { return startPoint; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isStartPoint") ) { return isStartPoint_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setStartPoint") ) { return setStartPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic LanderPoint_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"startPoint") ) { startPoint=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LanderPoint_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("target"));
	outFields->push(HX_CSTRING("startPoint"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(LanderPoint_obj,target),HX_CSTRING("target")},
	{hx::fsBool,(int)offsetof(LanderPoint_obj,startPoint),HX_CSTRING("startPoint")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("target"),
	HX_CSTRING("startPoint"),
	HX_CSTRING("setTarget"),
	HX_CSTRING("isTarget"),
	HX_CSTRING("setStartPoint"),
	HX_CSTRING("isStartPoint"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LanderPoint_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LanderPoint_obj::__mClass,"__mClass");
};

#endif

Class LanderPoint_obj::__mClass;

void LanderPoint_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("LanderPoint"), hx::TCanCast< LanderPoint_obj> ,sStaticFields,sMemberFields,
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

void LanderPoint_obj::__boot()
{
}

