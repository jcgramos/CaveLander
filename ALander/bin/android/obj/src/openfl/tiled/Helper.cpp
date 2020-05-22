#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_XmlType
#include <XmlType.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_openfl_tiled_AssetLoader
#include <openfl/tiled/AssetLoader.h>
#endif
#ifndef INCLUDED_openfl_tiled_DefaultAssetLoader
#include <openfl/tiled/DefaultAssetLoader.h>
#endif
#ifndef INCLUDED_openfl_tiled_Helper
#include <openfl/tiled/Helper.h>
#endif
namespace openfl{
namespace tiled{

Void Helper_obj::__construct()
{
HX_STACK_FRAME("openfl.tiled.Helper","new",0xfc79b816,"openfl.tiled.Helper.new","Helper.hx",32,0xaac93df0)
{
}
;
	return null();
}

//Helper_obj::~Helper_obj() { }

Dynamic Helper_obj::__CreateEmpty() { return  new Helper_obj; }
hx::ObjectPtr< Helper_obj > Helper_obj::__new()
{  hx::ObjectPtr< Helper_obj > result = new Helper_obj();
	result->__construct();
	return result;}

Dynamic Helper_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Helper_obj > result = new Helper_obj();
	result->__construct();
	return result;}

::openfl::tiled::AssetLoader Helper_obj::assetLoader;

bool Helper_obj::isValidElement( ::Xml element){
	HX_STACK_FRAME("openfl.tiled.Helper","isValidElement",0xbeeb8034,"openfl.tiled.Helper.isValidElement","Helper.hx",37,0xaac93df0)
	HX_STACK_ARG(element,"element")
	HX_STACK_LINE(37)
	return (::Std_obj::string(element->nodeType) == HX_CSTRING("element"));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Helper_obj,isValidElement,return )

Void Helper_obj::setAssetLoader( ::openfl::tiled::AssetLoader assetLoader){
{
		HX_STACK_FRAME("openfl.tiled.Helper","setAssetLoader",0x6b8cddab,"openfl.tiled.Helper.setAssetLoader","Helper.hx",42,0xaac93df0)
		HX_STACK_ARG(assetLoader,"assetLoader")
		HX_STACK_LINE(42)
		::openfl::tiled::Helper_obj::assetLoader = assetLoader;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Helper_obj,setAssetLoader,(void))

::String Helper_obj::getText( ::String assetPath,::String prefix){
	HX_STACK_FRAME("openfl.tiled.Helper","getText",0xed0f7719,"openfl.tiled.Helper.getText","Helper.hx",47,0xaac93df0)
	HX_STACK_ARG(assetPath,"assetPath")
	HX_STACK_ARG(prefix,"prefix")
	HX_STACK_LINE(48)
	if (((::openfl::tiled::Helper_obj::assetLoader == null()))){
		HX_STACK_LINE(49)
		::openfl::tiled::Helper_obj::assetLoader = ::openfl::tiled::DefaultAssetLoader_obj::__new();
	}
	HX_STACK_LINE(52)
	return ::openfl::tiled::Helper_obj::assetLoader->getText(::openfl::tiled::Helper_obj::joinPath(prefix,assetPath));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Helper_obj,getText,return )

::flash::display::BitmapData Helper_obj::getBitmapData( ::String assetPath,::String prefix){
	HX_STACK_FRAME("openfl.tiled.Helper","getBitmapData",0x5d7ff925,"openfl.tiled.Helper.getBitmapData","Helper.hx",57,0xaac93df0)
	HX_STACK_ARG(assetPath,"assetPath")
	HX_STACK_ARG(prefix,"prefix")
	HX_STACK_LINE(58)
	if (((::openfl::tiled::Helper_obj::assetLoader == null()))){
		HX_STACK_LINE(59)
		::openfl::tiled::Helper_obj::assetLoader = ::openfl::tiled::DefaultAssetLoader_obj::__new();
	}
	HX_STACK_LINE(62)
	return ::openfl::tiled::Helper_obj::assetLoader->getBitmapData(::openfl::tiled::Helper_obj::joinPath(prefix,assetPath));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Helper_obj,getBitmapData,return )

::String Helper_obj::joinPath( ::String path1,::String path2){
	HX_STACK_FRAME("openfl.tiled.Helper","joinPath",0x5071e739,"openfl.tiled.Helper.joinPath","Helper.hx",65,0xaac93df0)
	HX_STACK_ARG(path1,"path1")
	HX_STACK_ARG(path2,"path2")
	HX_STACK_LINE(66)
	if (((path1 == null()))){
		HX_STACK_LINE(67)
		path1 = HX_CSTRING("");
	}
	HX_STACK_LINE(70)
	if (((path2 == null()))){
		HX_STACK_LINE(71)
		path2 = HX_CSTRING("");
	}
	HX_STACK_LINE(74)
	return ::haxe::io::Path_obj::normalize((path1 + path2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Helper_obj,joinPath,return )


Helper_obj::Helper_obj()
{
}

Dynamic Helper_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"joinPath") ) { return joinPath_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"assetLoader") ) { return assetLoader; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"isValidElement") ) { return isValidElement_dyn(); }
		if (HX_FIELD_EQ(inName,"setAssetLoader") ) { return setAssetLoader_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Helper_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"assetLoader") ) { assetLoader=inValue.Cast< ::openfl::tiled::AssetLoader >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Helper_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("assetLoader"),
	HX_CSTRING("isValidElement"),
	HX_CSTRING("setAssetLoader"),
	HX_CSTRING("getText"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("joinPath"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Helper_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Helper_obj::assetLoader,"assetLoader");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Helper_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Helper_obj::assetLoader,"assetLoader");
};

#endif

Class Helper_obj::__mClass;

void Helper_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.Helper"), hx::TCanCast< Helper_obj> ,sStaticFields,sMemberFields,
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

void Helper_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
