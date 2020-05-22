#include <hxcpp.h>

#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_spritesheet_data_SpritesheetFrame
#include <spritesheet/data/SpritesheetFrame.h>
#endif
namespace spritesheet{
namespace data{

Void SpritesheetFrame_obj::__construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY)
{
HX_STACK_FRAME("spritesheet.data.SpritesheetFrame","new",0x9b5727b5,"spritesheet.data.SpritesheetFrame.new","spritesheet/data/SpritesheetFrame.hx",19,0x37dde4fb)

HX_STACK_ARG(__o_x,"x")

HX_STACK_ARG(__o_y,"y")

HX_STACK_ARG(__o_width,"width")

HX_STACK_ARG(__o_height,"height")

HX_STACK_ARG(__o_offsetX,"offsetX")

HX_STACK_ARG(__o_offsetY,"offsetY")
int x = __o_x.Default(0);
int y = __o_y.Default(0);
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
{
	HX_STACK_LINE(21)
	this->x = x;
	HX_STACK_LINE(22)
	this->y = y;
	HX_STACK_LINE(23)
	this->width = width;
	HX_STACK_LINE(24)
	this->height = height;
	HX_STACK_LINE(25)
	this->offsetX = offsetX;
	HX_STACK_LINE(26)
	this->offsetY = offsetY;
}
;
	return null();
}

//SpritesheetFrame_obj::~SpritesheetFrame_obj() { }

Dynamic SpritesheetFrame_obj::__CreateEmpty() { return  new SpritesheetFrame_obj; }
hx::ObjectPtr< SpritesheetFrame_obj > SpritesheetFrame_obj::__new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY)
{  hx::ObjectPtr< SpritesheetFrame_obj > result = new SpritesheetFrame_obj();
	result->__construct(__o_x,__o_y,__o_width,__o_height,__o_offsetX,__o_offsetY);
	return result;}

Dynamic SpritesheetFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpritesheetFrame_obj > result = new SpritesheetFrame_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}


SpritesheetFrame_obj::SpritesheetFrame_obj()
{
}

void SpritesheetFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpritesheetFrame);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void SpritesheetFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic SpritesheetFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return bitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpritesheetFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpritesheetFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmapData"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("offsetX"));
	outFields->push(HX_CSTRING("offsetY"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(SpritesheetFrame_obj,bitmapData),HX_CSTRING("bitmapData")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,offsetX),HX_CSTRING("offsetX")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,offsetY),HX_CSTRING("offsetY")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(SpritesheetFrame_obj,y),HX_CSTRING("y")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitmapData"),
	HX_CSTRING("height"),
	HX_CSTRING("offsetX"),
	HX_CSTRING("offsetY"),
	HX_CSTRING("width"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpritesheetFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpritesheetFrame_obj::__mClass,"__mClass");
};

#endif

Class SpritesheetFrame_obj::__mClass;

void SpritesheetFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spritesheet.data.SpritesheetFrame"), hx::TCanCast< SpritesheetFrame_obj> ,sStaticFields,sMemberFields,
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

void SpritesheetFrame_obj::__boot()
{
}

} // end namespace spritesheet
} // end namespace data
