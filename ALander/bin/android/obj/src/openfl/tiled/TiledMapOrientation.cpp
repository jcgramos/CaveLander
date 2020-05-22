#include <hxcpp.h>

#ifndef INCLUDED_openfl_tiled_TiledMapOrientation
#include <openfl/tiled/TiledMapOrientation.h>
#endif
namespace openfl{
namespace tiled{

::openfl::tiled::TiledMapOrientation TiledMapOrientation_obj::Isometric;

::openfl::tiled::TiledMapOrientation TiledMapOrientation_obj::Orthogonal;

HX_DEFINE_CREATE_ENUM(TiledMapOrientation_obj)

int TiledMapOrientation_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Isometric")) return 1;
	if (inName==HX_CSTRING("Orthogonal")) return 0;
	return super::__FindIndex(inName);
}

int TiledMapOrientation_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Isometric")) return 0;
	if (inName==HX_CSTRING("Orthogonal")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TiledMapOrientation_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Isometric")) return Isometric;
	if (inName==HX_CSTRING("Orthogonal")) return Orthogonal;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Orthogonal"),
	HX_CSTRING("Isometric"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMapOrientation_obj::Isometric,"Isometric");
	HX_MARK_MEMBER_NAME(TiledMapOrientation_obj::Orthogonal,"Orthogonal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMapOrientation_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledMapOrientation_obj::Isometric,"Isometric");
	HX_VISIT_MEMBER_NAME(TiledMapOrientation_obj::Orthogonal,"Orthogonal");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
Class TiledMapOrientation_obj::__mClass;

Dynamic __Create_TiledMapOrientation_obj() { return new TiledMapOrientation_obj; }

void TiledMapOrientation_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.TiledMapOrientation"), hx::TCanCast< TiledMapOrientation_obj >,sStaticFields,sMemberFields,
	&__Create_TiledMapOrientation_obj, &__Create,
	&super::__SGetClass(), &CreateTiledMapOrientation_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void TiledMapOrientation_obj::__boot()
{
hx::Static(Isometric) = hx::CreateEnum< TiledMapOrientation_obj >(HX_CSTRING("Isometric"),1);
hx::Static(Orthogonal) = hx::CreateEnum< TiledMapOrientation_obj >(HX_CSTRING("Orthogonal"),0);
}


} // end namespace openfl
} // end namespace tiled
