#include <hxcpp.h>

#ifndef INCLUDED_openfl_tiled_TerrainType
#include <openfl/tiled/TerrainType.h>
#endif
namespace openfl{
namespace tiled{

Void TerrainType_obj::__construct(::String name,int tileId)
{
HX_STACK_FRAME("openfl.tiled.TerrainType","new",0xa5773f0b,"openfl.tiled.TerrainType.new","TerrainType.hx",29,0xcb04612f)

HX_STACK_ARG(name,"name")

HX_STACK_ARG(tileId,"tileId")
{
	HX_STACK_LINE(30)
	this->name = name;
	HX_STACK_LINE(31)
	this->tileId = tileId;
}
;
	return null();
}

//TerrainType_obj::~TerrainType_obj() { }

Dynamic TerrainType_obj::__CreateEmpty() { return  new TerrainType_obj; }
hx::ObjectPtr< TerrainType_obj > TerrainType_obj::__new(::String name,int tileId)
{  hx::ObjectPtr< TerrainType_obj > result = new TerrainType_obj();
	result->__construct(name,tileId);
	return result;}

Dynamic TerrainType_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TerrainType_obj > result = new TerrainType_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


TerrainType_obj::TerrainType_obj()
{
}

void TerrainType_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TerrainType);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(tileId,"tileId");
	HX_MARK_END_CLASS();
}

void TerrainType_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(tileId,"tileId");
}

Dynamic TerrainType_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tileId") ) { return tileId; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TerrainType_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tileId") ) { tileId=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TerrainType_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("tileId"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TerrainType_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(TerrainType_obj,tileId),HX_CSTRING("tileId")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("tileId"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TerrainType_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TerrainType_obj::__mClass,"__mClass");
};

#endif

Class TerrainType_obj::__mClass;

void TerrainType_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.TerrainType"), hx::TCanCast< TerrainType_obj> ,sStaticFields,sMemberFields,
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

void TerrainType_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
