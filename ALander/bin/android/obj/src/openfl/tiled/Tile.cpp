#include <hxcpp.h>

#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_tiled_Layer
#include <openfl/tiled/Layer.h>
#endif
#ifndef INCLUDED_openfl_tiled_Tile
#include <openfl/tiled/Tile.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledMap
#include <openfl/tiled/TiledMap.h>
#endif
namespace openfl{
namespace tiled{

Void Tile_obj::__construct(int gid,::openfl::tiled::Layer parent)
{
HX_STACK_FRAME("openfl.tiled.Tile","new",0xe832ac56,"openfl.tiled.Tile.new","Tile.hx",33,0x12b05030)

HX_STACK_ARG(gid,"gid")

HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(34)
	this->gid = gid;
	HX_STACK_LINE(35)
	this->parent = parent;
}
;
	return null();
}

//Tile_obj::~Tile_obj() { }

Dynamic Tile_obj::__CreateEmpty() { return  new Tile_obj; }
hx::ObjectPtr< Tile_obj > Tile_obj::__new(int gid,::openfl::tiled::Layer parent)
{  hx::ObjectPtr< Tile_obj > result = new Tile_obj();
	result->__construct(gid,parent);
	return result;}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tile_obj > result = new Tile_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

int Tile_obj::get_width( ){
	HX_STACK_FRAME("openfl.tiled.Tile","get_width",0x02a14ad3,"openfl.tiled.Tile.get_width","Tile.hx",43,0x12b05030)
	HX_STACK_THIS(this)
	HX_STACK_LINE(43)
	return this->parent->parent->tileWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_width,return )

int Tile_obj::get_height( ){
	HX_STACK_FRAME("openfl.tiled.Tile","get_height",0x00cfa67a,"openfl.tiled.Tile.get_height","Tile.hx",47,0x12b05030)
	HX_STACK_THIS(this)
	HX_STACK_LINE(47)
	return this->parent->parent->tileHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,get_height,return )

::openfl::tiled::Tile Tile_obj::fromGID( int gid,::openfl::tiled::Layer parent){
	HX_STACK_FRAME("openfl.tiled.Tile","fromGID",0xec7447ae,"openfl.tiled.Tile.fromGID","Tile.hx",39,0x12b05030)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_ARG(parent,"parent")
	HX_STACK_LINE(39)
	return ::openfl::tiled::Tile_obj::__new(gid,parent);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,fromGID,return )


Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
}

Dynamic Tile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { return gid; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromGID") ) { return fromGID_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::tiled::Layer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("gid"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromGID"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Tile_obj,gid),HX_CSTRING("gid")},
	{hx::fsObject /*::openfl::tiled::Layer*/ ,(int)offsetof(Tile_obj,parent),HX_CSTRING("parent")},
	{hx::fsInt,(int)offsetof(Tile_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Tile_obj,height),HX_CSTRING("height")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("gid"),
	HX_CSTRING("parent"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#endif

Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.Tile"), hx::TCanCast< Tile_obj> ,sStaticFields,sMemberFields,
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

void Tile_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
