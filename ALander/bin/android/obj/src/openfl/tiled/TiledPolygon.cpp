#include <hxcpp.h>

#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledPolygon
#include <openfl/tiled/TiledPolygon.h>
#endif
namespace openfl{
namespace tiled{

Void TiledPolygon_obj::__construct(::flash::geom::Point origin,Array< ::Dynamic > points)
{
HX_STACK_FRAME("openfl.tiled.TiledPolygon","new",0x4b18e1cc,"openfl.tiled.TiledPolygon.new","TiledPolygon.hx",31,0x2839417a)

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

//TiledPolygon_obj::~TiledPolygon_obj() { }

Dynamic TiledPolygon_obj::__CreateEmpty() { return  new TiledPolygon_obj; }
hx::ObjectPtr< TiledPolygon_obj > TiledPolygon_obj::__new(::flash::geom::Point origin,Array< ::Dynamic > points)
{  hx::ObjectPtr< TiledPolygon_obj > result = new TiledPolygon_obj();
	result->__construct(origin,points);
	return result;}

Dynamic TiledPolygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledPolygon_obj > result = new TiledPolygon_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TiledPolygon_obj::TiledPolygon_obj()
{
}

void TiledPolygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledPolygon);
	HX_MARK_MEMBER_NAME(origin,"origin");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_END_CLASS();
}

void TiledPolygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(origin,"origin");
	HX_VISIT_MEMBER_NAME(points,"points");
}

Dynamic TiledPolygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledPolygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledPolygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("origin"));
	outFields->push(HX_CSTRING("points"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(TiledPolygon_obj,origin),HX_CSTRING("origin")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledPolygon_obj,points),HX_CSTRING("points")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("origin"),
	HX_CSTRING("points"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledPolygon_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledPolygon_obj::__mClass,"__mClass");
};

#endif

Class TiledPolygon_obj::__mClass;

void TiledPolygon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.TiledPolygon"), hx::TCanCast< TiledPolygon_obj> ,sStaticFields,sMemberFields,
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

void TiledPolygon_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
