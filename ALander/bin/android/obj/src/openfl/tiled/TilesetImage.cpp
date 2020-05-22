#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_tiled_Helper
#include <openfl/tiled/Helper.h>
#endif
#ifndef INCLUDED_openfl_tiled_TilesetImage
#include <openfl/tiled/TilesetImage.h>
#endif
namespace openfl{
namespace tiled{

Void TilesetImage_obj::__construct(::String source,::String trans,::String mapPrefix)
{
HX_STACK_FRAME("openfl.tiled.TilesetImage","new",0x98add92f,"openfl.tiled.TilesetImage.new","TilesetImage.hx",45,0xcde18777)

HX_STACK_ARG(source,"source")

HX_STACK_ARG(trans,"trans")

HX_STACK_ARG(mapPrefix,"mapPrefix")
{
	HX_STACK_LINE(46)
	this->source = source;
	HX_STACK_LINE(48)
	this->fileName = source.substr((source.lastIndexOf(HX_CSTRING("/"),null()) + (int)1),source.length);
	HX_STACK_LINE(50)
	bool useTransparentColor = false;		HX_STACK_VAR(useTransparentColor,"useTransparentColor");
	HX_STACK_LINE(51)
	int threshold = (int)-1;		HX_STACK_VAR(threshold,"threshold");
	HX_STACK_LINE(52)
	int transparent = (int)0;		HX_STACK_VAR(transparent,"transparent");
	HX_STACK_LINE(54)
	if (((trans != null()))){
		HX_STACK_LINE(55)
		useTransparentColor = true;
		HX_STACK_LINE(58)
		trans = (HX_CSTRING("0xff") + trans);
		HX_STACK_LINE(60)
		threshold = ::Std_obj::parseInt(trans);
	}
	HX_STACK_LINE(64)
	this->texture = ::openfl::tiled::Helper_obj::getBitmapData(this->source,mapPrefix);
	HX_STACK_LINE(66)
	if ((useTransparentColor)){
		HX_STACK_LINE(67)
		int _g = this->texture->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(67)
		::flash::geom::Rectangle rect = ::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g,this->texture->get_height());		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(68)
		::flash::geom::Point point = ::flash::geom::Point_obj::__new((int)0,(int)0);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(70)
		this->texture->threshold(this->texture,rect,point,HX_CSTRING("=="),threshold,transparent,(int)-1,true);
	}
}
;
	return null();
}

//TilesetImage_obj::~TilesetImage_obj() { }

Dynamic TilesetImage_obj::__CreateEmpty() { return  new TilesetImage_obj; }
hx::ObjectPtr< TilesetImage_obj > TilesetImage_obj::__new(::String source,::String trans,::String mapPrefix)
{  hx::ObjectPtr< TilesetImage_obj > result = new TilesetImage_obj();
	result->__construct(source,trans,mapPrefix);
	return result;}

Dynamic TilesetImage_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TilesetImage_obj > result = new TilesetImage_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

int TilesetImage_obj::get_width( ){
	HX_STACK_FRAME("openfl.tiled.TilesetImage","get_width",0xb177206c,"openfl.tiled.TilesetImage.get_width","TilesetImage.hx",76,0xcde18777)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	return this->texture->get_width();
}


HX_DEFINE_DYNAMIC_FUNC0(TilesetImage_obj,get_width,return )

int TilesetImage_obj::get_height( ){
	HX_STACK_FRAME("openfl.tiled.TilesetImage","get_height",0x4d14b6c1,"openfl.tiled.TilesetImage.get_height","TilesetImage.hx",80,0xcde18777)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return this->texture->get_height();
}


HX_DEFINE_DYNAMIC_FUNC0(TilesetImage_obj,get_height,return )


TilesetImage_obj::TilesetImage_obj()
{
}

void TilesetImage_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TilesetImage);
	HX_MARK_MEMBER_NAME(source,"source");
	HX_MARK_MEMBER_NAME(fileName,"fileName");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(texture,"texture");
	HX_MARK_END_CLASS();
}

void TilesetImage_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(source,"source");
	HX_VISIT_MEMBER_NAME(fileName,"fileName");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(texture,"texture");
}

Dynamic TilesetImage_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { return source; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { return texture; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { return fileName; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TilesetImage_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"source") ) { source=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"texture") ) { texture=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fileName") ) { fileName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TilesetImage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("source"));
	outFields->push(HX_CSTRING("fileName"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("texture"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TilesetImage_obj,source),HX_CSTRING("source")},
	{hx::fsString,(int)offsetof(TilesetImage_obj,fileName),HX_CSTRING("fileName")},
	{hx::fsInt,(int)offsetof(TilesetImage_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TilesetImage_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(TilesetImage_obj,texture),HX_CSTRING("texture")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("source"),
	HX_CSTRING("fileName"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("texture"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TilesetImage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TilesetImage_obj::__mClass,"__mClass");
};

#endif

Class TilesetImage_obj::__mClass;

void TilesetImage_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.TilesetImage"), hx::TCanCast< TilesetImage_obj> ,sStaticFields,sMemberFields,
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

void TilesetImage_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
