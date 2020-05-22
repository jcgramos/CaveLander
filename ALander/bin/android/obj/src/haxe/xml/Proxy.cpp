#include <hxcpp.h>

#ifndef INCLUDED_haxe_xml_Proxy
#include <haxe/xml/Proxy.h>
#endif
namespace haxe{
namespace xml{

Void Proxy_obj::__construct(Dynamic f)
{
HX_STACK_FRAME("haxe.xml.Proxy","new",0x04ae6ea1,"haxe.xml.Proxy.new","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Proxy.hx",47,0x11a9a678)

HX_STACK_ARG(f,"f")
{
	HX_STACK_LINE(47)
	this->__f = f;
}
;
	return null();
}

//Proxy_obj::~Proxy_obj() { }

Dynamic Proxy_obj::__CreateEmpty() { return  new Proxy_obj; }
hx::ObjectPtr< Proxy_obj > Proxy_obj::__new(Dynamic f)
{  hx::ObjectPtr< Proxy_obj > result = new Proxy_obj();
	result->__construct(f);
	return result;}

Dynamic Proxy_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Proxy_obj > result = new Proxy_obj();
	result->__construct(inArgs[0]);
	return result;}

Dynamic Proxy_obj::resolve( ::String k){
	HX_STACK_FRAME("haxe.xml.Proxy","resolve",0x5d6d65ad,"haxe.xml.Proxy.resolve","C:\\HaxeToolkit\\haxe\\std/haxe/xml/Proxy.hx",51,0x11a9a678)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(51)
	return this->__f(k);
}


HX_DEFINE_DYNAMIC_FUNC1(Proxy_obj,resolve,return )


Proxy_obj::Proxy_obj()
{
}

void Proxy_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Proxy);
	HX_MARK_MEMBER_NAME(__f,"__f");
	HX_MARK_END_CLASS();
}

void Proxy_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__f,"__f");
}

Dynamic Proxy_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { return __f; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Proxy_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__f") ) { __f=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Proxy_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Proxy_obj,__f),HX_CSTRING("__f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__f"),
	HX_CSTRING("resolve"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Proxy_obj::__mClass,"__mClass");
};

#endif

Class Proxy_obj::__mClass;

void Proxy_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.xml.Proxy"), hx::TCanCast< Proxy_obj> ,sStaticFields,sMemberFields,
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

void Proxy_obj::__boot()
{
}

} // end namespace haxe
} // end namespace xml
