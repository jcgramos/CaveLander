#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledPolyline
#include <openfl/tiled/TiledPolyline.h>
#endif
namespace openfl{
namespace tiled{

Void TiledPolyline_obj::__construct(::flash::geom::Point origin,Array< ::Dynamic > points)
{
HX_STACK_FRAME("openfl.tiled.TiledPolyline","new",0x0feb27d2,"openfl.tiled.TiledPolyline.new","TiledPolyline.hx",31,0x97d5dcc8)

HX_STACK_ARG(origin,"origin")

HX_STACK_ARG(points,"points")
{
	HX_STACK_LINE(32)
	this->origin = origin;
	HX_STACK_LINE(33)
	this->points = points;
}
;
	return null();
}

//TiledPolyline_obj::~TiledPolyline_obj() { }

Dynamic TiledPolyline_obj::__CreateEmpty() { return  new TiledPolyline_obj; }
hx::ObjectPtr< TiledPolyline_obj > TiledPolyline_obj::__new(::flash::geom::Point origin,Array< ::Dynamic > points)
{  hx::ObjectPtr< TiledPolyline_obj > result = new TiledPolyline_obj();
	result->__construct(origin,points);
	return result;}

Dynamic TiledPolyline_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledPolyline_obj > result = new TiledPolyline_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TiledPolyline_obj::TiledPolyline_obj()
{
}

void TiledPolyline_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledPolyline);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_END_CLASS();
}

void TiledPolyline_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(points,"points");
}

Dynamic TiledPolyline_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledPolyline_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledPolyline_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("points"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(TiledPolyline_obj,origin),HX_CSTRING("origin")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledPolyline_obj,points),HX_CSTRING("points")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("origin"),
	HX_CSTRING("points"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledPolyline_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledPolyline_obj::__mClass,"__mClass");
};

#endif

Class TiledPolyline_obj::__mClass;

void TiledPolyline_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.TiledPolyline"), hx::TCanCast< TiledPolyline_obj> ,sStaticFields,sMemberFields,
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

void TiledPolyline_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
