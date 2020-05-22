#include <hxcpp.h>

#ifndef INCLUDED_core_RotatingSprite
#include <core/RotatingSprite.h>
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
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace core{

Void RotatingSprite_obj::__construct()
{
HX_STACK_FRAME("core.RotatingSprite","new",0xbb39c3be,"core.RotatingSprite.new","core/RotatingSprite.hx",23,0xc89c6c51)
{
	HX_STACK_LINE(23)
	super::__construct();
}
;
	return null();
}

//RotatingSprite_obj::~RotatingSprite_obj() { }

Dynamic RotatingSprite_obj::__CreateEmpty() { return  new RotatingSprite_obj; }
hx::ObjectPtr< RotatingSprite_obj > RotatingSprite_obj::__new()
{  hx::ObjectPtr< RotatingSprite_obj > result = new RotatingSprite_obj();
	result->__construct();
	return result;}

Dynamic RotatingSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RotatingSprite_obj > result = new RotatingSprite_obj();
	result->__construct();
	return result;}

Void RotatingSprite_obj::rotate( Float angle){
{
		HX_STACK_FRAME("core.RotatingSprite","rotate",0x0a5641bd,"core.RotatingSprite.rotate","core/RotatingSprite.hx",27,0xc89c6c51)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(29)
		this->set_rotation(angle);
		HX_STACK_LINE(30)
		::flash::geom::Matrix mymatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mymatrix,"mymatrix");
		HX_STACK_LINE(31)
		mymatrix->rotate((Float((::Math_obj::PI * angle)) / Float((int)180)));
		HX_STACK_LINE(32)
		::flash::geom::Point mypoint = ::flash::geom::Point_obj::__new(this->xcenter,this->ycenter);		HX_STACK_VAR(mypoint,"mypoint");
		HX_STACK_LINE(33)
		::flash::geom::Point newpoint = mymatrix->transformPoint(mypoint);		HX_STACK_VAR(newpoint,"newpoint");
		HX_STACK_LINE(34)
		this->set_x(((this->xloc - newpoint->x) + this->xcenter));
		HX_STACK_LINE(35)
		this->set_y(((this->yloc - newpoint->y) + this->ycenter));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RotatingSprite_obj,rotate,(void))


RotatingSprite_obj::RotatingSprite_obj()
{
}

Dynamic RotatingSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xloc") ) { return xloc; }
		if (HX_FIELD_EQ(inName,"yloc") ) { return yloc; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xcenter") ) { return xcenter; }
		if (HX_FIELD_EQ(inName,"ycenter") ) { return ycenter; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RotatingSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"xloc") ) { xloc=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yloc") ) { yloc=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xcenter") ) { xcenter=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ycenter") ) { ycenter=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RotatingSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("xloc"));
	outFields->push(HX_CSTRING("yloc"));
	outFields->push(HX_CSTRING("xcenter"));
	outFields->push(HX_CSTRING("ycenter"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(RotatingSprite_obj,xloc),HX_CSTRING("xloc")},
	{hx::fsFloat,(int)offsetof(RotatingSprite_obj,yloc),HX_CSTRING("yloc")},
	{hx::fsFloat,(int)offsetof(RotatingSprite_obj,xcenter),HX_CSTRING("xcenter")},
	{hx::fsFloat,(int)offsetof(RotatingSprite_obj,ycenter),HX_CSTRING("ycenter")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("xloc"),
	HX_CSTRING("yloc"),
	HX_CSTRING("xcenter"),
	HX_CSTRING("ycenter"),
	HX_CSTRING("rotate"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RotatingSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RotatingSprite_obj::__mClass,"__mClass");
};

#endif

Class RotatingSprite_obj::__mClass;

void RotatingSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.RotatingSprite"), hx::TCanCast< RotatingSprite_obj> ,sStaticFields,sMemberFields,
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

void RotatingSprite_obj::__boot()
{
}

} // end namespace core
