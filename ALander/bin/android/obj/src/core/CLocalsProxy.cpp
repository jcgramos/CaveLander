#include <hxcpp.h>

#ifndef INCLUDED_core_CLocalsProxy
#include <core/CLocalsProxy.h>
#endif
#ifndef INCLUDED_haxe_xml_Proxy
#include <haxe/xml/Proxy.h>
#endif
namespace core{

Void CLocalsProxy_obj::__construct(Dynamic f)
{
HX_STACK_FRAME("core.CLocalsProxy","new",0x3c74c384,"core.CLocalsProxy.new","core/CLocals.hx",5,0xc86a2843)

HX_STACK_ARG(f,"f")
{
	HX_STACK_LINE(5)
	super::__construct(f);
}
;
	return null();
}

//CLocalsProxy_obj::~CLocalsProxy_obj() { }

Dynamic CLocalsProxy_obj::__CreateEmpty() { return  new CLocalsProxy_obj; }
hx::ObjectPtr< CLocalsProxy_obj > CLocalsProxy_obj::__new(Dynamic f)
{  hx::ObjectPtr< CLocalsProxy_obj > result = new CLocalsProxy_obj();
	result->__construct(f);
	return result;}

Dynamic CLocalsProxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CLocalsProxy_obj > result = new CLocalsProxy_obj();
	result->__construct(inArgs[0]);
	return result;}


CLocalsProxy_obj::CLocalsProxy_obj()
{
}

Dynamic CLocalsProxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic CLocalsProxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void CLocalsProxy_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CLocalsProxy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CLocalsProxy_obj::__mClass,"__mClass");
};

#endif

Class CLocalsProxy_obj::__mClass;

void CLocalsProxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.CLocalsProxy"), hx::TCanCast< CLocalsProxy_obj> ,sStaticFields,sMemberFields,
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

void CLocalsProxy_obj::__boot()
{
}

} // end namespace core
