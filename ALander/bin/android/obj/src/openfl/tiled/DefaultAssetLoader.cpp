#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_tiled_AssetLoader
#include <openfl/tiled/AssetLoader.h>
#endif
#ifndef INCLUDED_openfl_tiled_DefaultAssetLoader
#include <openfl/tiled/DefaultAssetLoader.h>
#endif
namespace openfl{
namespace tiled{

Void DefaultAssetLoader_obj::__construct()
{
HX_STACK_FRAME("openfl.tiled.DefaultAssetLoader","new",0xbe5bdc8a,"openfl.tiled.DefaultAssetLoader.new","DefaultAssetLoader.hx",34,0xd8deccfc)
{
}
;
	return null();
}

//DefaultAssetLoader_obj::~DefaultAssetLoader_obj() { }

Dynamic DefaultAssetLoader_obj::__CreateEmpty() { return  new DefaultAssetLoader_obj; }
hx::ObjectPtr< DefaultAssetLoader_obj > DefaultAssetLoader_obj::__new()
{  hx::ObjectPtr< DefaultAssetLoader_obj > result = new DefaultAssetLoader_obj();
	result->__construct();
	return result;}

Dynamic DefaultAssetLoader_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DefaultAssetLoader_obj > result = new DefaultAssetLoader_obj();
	result->__construct();
	return result;}

hx::Object *DefaultAssetLoader_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::tiled::AssetLoader_obj)) return operator ::openfl::tiled::AssetLoader_obj *();
	return super::__ToInterface(inType);
}

::String DefaultAssetLoader_obj::getText( ::String assetPath){
	HX_STACK_FRAME("openfl.tiled.DefaultAssetLoader","getText",0x7f4ee58d,"openfl.tiled.DefaultAssetLoader.getText","DefaultAssetLoader.hx",39,0xd8deccfc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assetPath,"assetPath")
	HX_STACK_LINE(39)
	return ::openfl::Assets_obj::getText(assetPath);
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultAssetLoader_obj,getText,return )

::flash::display::BitmapData DefaultAssetLoader_obj::getBitmapData( ::String assetPath){
	HX_STACK_FRAME("openfl.tiled.DefaultAssetLoader","getBitmapData",0xb9bfb699,"openfl.tiled.DefaultAssetLoader.getBitmapData","DefaultAssetLoader.hx",44,0xd8deccfc)
	HX_STACK_THIS(this)
	HX_STACK_ARG(assetPath,"assetPath")
	HX_STACK_LINE(44)
	return ::openfl::Assets_obj::getBitmapData(assetPath,null());
}


HX_DEFINE_DYNAMIC_FUNC1(DefaultAssetLoader_obj,getBitmapData,return )


DefaultAssetLoader_obj::DefaultAssetLoader_obj()
{
}

Dynamic DefaultAssetLoader_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DefaultAssetLoader_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultAssetLoader_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("getText"),
	HX_CSTRING("getBitmapData"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultAssetLoader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultAssetLoader_obj::__mClass,"__mClass");
};

#endif

Class DefaultAssetLoader_obj::__mClass;

void DefaultAssetLoader_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.DefaultAssetLoader"), hx::TCanCast< DefaultAssetLoader_obj> ,sStaticFields,sMemberFields,
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

void DefaultAssetLoader_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
