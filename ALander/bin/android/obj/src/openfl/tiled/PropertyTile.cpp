#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_tiled_PropertyTile
#include <openfl/tiled/PropertyTile.h>
#endif
namespace openfl{
namespace tiled{

Void PropertyTile_obj::__construct(int id,::haxe::ds::StringMap properties)
{
HX_STACK_FRAME("openfl.tiled.PropertyTile","new",0x36b1b3cb,"openfl.tiled.PropertyTile.new","PropertyTile.hx",29,0x6bdcf45b)

HX_STACK_ARG(id,"id")

HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(30)
	this->id = id;
	HX_STACK_LINE(31)
	this->properties = properties;
}
;
	return null();
}

//PropertyTile_obj::~PropertyTile_obj() { }

Dynamic PropertyTile_obj::__CreateEmpty() { return  new PropertyTile_obj; }
hx::ObjectPtr< PropertyTile_obj > PropertyTile_obj::__new(int id,::haxe::ds::StringMap properties)
{  hx::ObjectPtr< PropertyTile_obj > result = new PropertyTile_obj();
	result->__construct(id,properties);
	return result;}

Dynamic PropertyTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PropertyTile_obj > result = new PropertyTile_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


PropertyTile_obj::PropertyTile_obj()
{
}

void PropertyTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PropertyTile);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void PropertyTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic PropertyTile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return id; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PropertyTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PropertyTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("id"));
	outFields->push(HX_CSTRING("properties"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(PropertyTile_obj,id),HX_CSTRING("id")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(PropertyTile_obj,properties),HX_CSTRING("properties")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("id"),
	HX_CSTRING("properties"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PropertyTile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PropertyTile_obj::__mClass,"__mClass");
};

#endif

Class PropertyTile_obj::__mClass;

void PropertyTile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.PropertyTile"), hx::TCanCast< PropertyTile_obj> ,sStaticFields,sMemberFields,
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

void PropertyTile_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
