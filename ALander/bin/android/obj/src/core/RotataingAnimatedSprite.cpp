#include <hxcpp.h>

#ifndef INCLUDED_core_RotataingAnimatedSprite
#include <core/RotataingAnimatedSprite.h>
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
#ifndef INCLUDED_spritesheet_AnimatedSprite
#include <spritesheet/AnimatedSprite.h>
#endif
#ifndef INCLUDED_spritesheet_Spritesheet
#include <spritesheet/Spritesheet.h>
#endif
namespace core{

Void RotataingAnimatedSprite_obj::__construct(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("core.RotataingAnimatedSprite","new",0x43038216,"core.RotataingAnimatedSprite.new","core/RotataingAnimatedSprite.hx",23,0x64458f5b)

HX_STACK_ARG(sheet,"sheet")

HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(23)
	super::__construct(sheet,smoothing);
}
;
	return null();
}

//RotataingAnimatedSprite_obj::~RotataingAnimatedSprite_obj() { }

Dynamic RotataingAnimatedSprite_obj::__CreateEmpty() { return  new RotataingAnimatedSprite_obj; }
hx::ObjectPtr< RotataingAnimatedSprite_obj > RotataingAnimatedSprite_obj::__new(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< RotataingAnimatedSprite_obj > result = new RotataingAnimatedSprite_obj();
	result->__construct(sheet,__o_smoothing);
	return result;}

Dynamic RotataingAnimatedSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RotataingAnimatedSprite_obj > result = new RotataingAnimatedSprite_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void RotataingAnimatedSprite_obj::rotate( Float angle){
{
		HX_STACK_FRAME("core.RotataingAnimatedSprite","rotate",0x96e20a65,"core.RotataingAnimatedSprite.rotate","core/RotataingAnimatedSprite.hx",26,0x64458f5b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(angle,"angle")
		HX_STACK_LINE(29)
		this->set_rotation(angle);
		HX_STACK_LINE(31)
		::flash::geom::Matrix mymatrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(mymatrix,"mymatrix");
		HX_STACK_LINE(32)
		mymatrix->rotate((Float((::Math_obj::PI * angle)) / Float((int)180)));
		HX_STACK_LINE(35)
		::flash::geom::Point mypoint = ::flash::geom::Point_obj::__new(this->xcenter,this->ycenter);		HX_STACK_VAR(mypoint,"mypoint");
		HX_STACK_LINE(38)
		::flash::geom::Point newpoint = mymatrix->transformPoint(mypoint);		HX_STACK_VAR(newpoint,"newpoint");
		HX_STACK_LINE(40)
		this->set_x(((this->xloc - newpoint->x) + this->xcenter));
		HX_STACK_LINE(41)
		this->set_y(((this->yloc - newpoint->y) + this->ycenter));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(RotataingAnimatedSprite_obj,rotate,(void))


RotataingAnimatedSprite_obj::RotataingAnimatedSprite_obj()
{
}

Dynamic RotataingAnimatedSprite_obj::__Field(const ::String &inName,bool inCallProp)
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

Dynamic RotataingAnimatedSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void RotataingAnimatedSprite_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsFloat,(int)offsetof(RotataingAnimatedSprite_obj,xloc),HX_CSTRING("xloc")},
	{hx::fsFloat,(int)offsetof(RotataingAnimatedSprite_obj,yloc),HX_CSTRING("yloc")},
	{hx::fsFloat,(int)offsetof(RotataingAnimatedSprite_obj,xcenter),HX_CSTRING("xcenter")},
	{hx::fsFloat,(int)offsetof(RotataingAnimatedSprite_obj,ycenter),HX_CSTRING("ycenter")},
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
	HX_MARK_MEMBER_NAME(RotataingAnimatedSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RotataingAnimatedSprite_obj::__mClass,"__mClass");
};

#endif

Class RotataingAnimatedSprite_obj::__mClass;

void RotataingAnimatedSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.RotataingAnimatedSprite"), hx::TCanCast< RotataingAnimatedSprite_obj> ,sStaticFields,sMemberFields,
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

void RotataingAnimatedSprite_obj::__boot()
{
}

} // end namespace core
