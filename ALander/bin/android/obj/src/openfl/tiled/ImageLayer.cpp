#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
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
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_openfl_tiled_Helper
#include <openfl/tiled/Helper.h>
#endif
#ifndef INCLUDED_openfl_tiled_ImageLayer
#include <openfl/tiled/ImageLayer.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledMap
#include <openfl/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_openfl_tiled_TilesetImage
#include <openfl/tiled/TilesetImage.h>
#endif
namespace openfl{
namespace tiled{

Void ImageLayer_obj::__construct(::openfl::tiled::TiledMap tiledMap,::String name,Float opacity,bool visible,::haxe::ds::StringMap properties,::openfl::tiled::TilesetImage image)
{
HX_STACK_FRAME("openfl.tiled.ImageLayer","new",0x448a3a1e,"openfl.tiled.ImageLayer.new","ImageLayer.hx",37,0xdea177e8)

HX_STACK_ARG(tiledMap,"tiledMap")

HX_STACK_ARG(name,"name")

HX_STACK_ARG(opacity,"opacity")

HX_STACK_ARG(visible,"visible")

HX_STACK_ARG(properties,"properties")

HX_STACK_ARG(image,"image")
{
	HX_STACK_LINE(38)
	this->tiledMap = tiledMap;
	HX_STACK_LINE(39)
	this->name = name;
	HX_STACK_LINE(40)
	this->opacity = opacity;
	HX_STACK_LINE(41)
	this->visible = visible;
	HX_STACK_LINE(42)
	this->properties = properties;
	HX_STACK_LINE(43)
	this->image = image;
}
;
	return null();
}

//ImageLayer_obj::~ImageLayer_obj() { }

Dynamic ImageLayer_obj::__CreateEmpty() { return  new ImageLayer_obj; }
hx::ObjectPtr< ImageLayer_obj > ImageLayer_obj::__new(::openfl::tiled::TiledMap tiledMap,::String name,Float opacity,bool visible,::haxe::ds::StringMap properties,::openfl::tiled::TilesetImage image)
{  hx::ObjectPtr< ImageLayer_obj > result = new ImageLayer_obj();
	result->__construct(tiledMap,name,opacity,visible,properties,image);
	return result;}

Dynamic ImageLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageLayer_obj > result = new ImageLayer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::openfl::tiled::ImageLayer ImageLayer_obj::fromGenericXml( ::openfl::tiled::TiledMap tiledMap,::Xml xml){
	HX_STACK_FRAME("openfl.tiled.ImageLayer","fromGenericXml",0x820ec10c,"openfl.tiled.ImageLayer.fromGenericXml","ImageLayer.hx",46,0xdea177e8)
	HX_STACK_ARG(tiledMap,"tiledMap")
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(47)
	::String name = xml->get(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(48)
	Float opacity;		HX_STACK_VAR(opacity,"opacity");
	HX_STACK_LINE(48)
	if ((xml->exists(HX_CSTRING("opacity")))){
		HX_STACK_LINE(48)
		opacity = ::Std_obj::parseFloat(xml->get(HX_CSTRING("opacity")));
	}
	else{
		HX_STACK_LINE(48)
		opacity = 1.0;
	}
	HX_STACK_LINE(49)
	bool visible;		HX_STACK_VAR(visible,"visible");
	HX_STACK_LINE(49)
	if ((xml->exists(HX_CSTRING("visible")))){
		HX_STACK_LINE(49)
		visible = (::Std_obj::parseInt(HX_CSTRING("visible")) == (int)1);
	}
	else{
		HX_STACK_LINE(49)
		visible = false;
	}
	HX_STACK_LINE(51)
	::haxe::ds::StringMap properties = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(properties,"properties");
	HX_STACK_LINE(52)
	::openfl::tiled::TilesetImage image = null();		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(54)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(xml->elements());  __it->hasNext(); ){
		::Xml child = __it->next();
		{
			HX_STACK_LINE(55)
			if ((::openfl::tiled::Helper_obj::isValidElement(child))){
				HX_STACK_LINE(56)
				if (((child->get_nodeName() == HX_CSTRING("properties")))){
					HX_STACK_LINE(57)
					for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(child->iterator());  __it->hasNext(); ){
						::Xml property = __it->next();
						if ((::openfl::tiled::Helper_obj::isValidElement(property))){
							HX_STACK_LINE(59)
							::String key = property->get(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
							HX_STACK_LINE(59)
							::String value = property->get(HX_CSTRING("value"));		HX_STACK_VAR(value,"value");
							HX_STACK_LINE(59)
							properties->set(key,value);
						}
;
					}
				}
			}
			HX_STACK_LINE(65)
			if (((child->get_nodeName() == HX_CSTRING("image")))){
				HX_STACK_LINE(66)
				::String prefix = (::haxe::io::Path_obj::directory(tiledMap->path) + HX_CSTRING("/"));		HX_STACK_VAR(prefix,"prefix");
				HX_STACK_LINE(67)
				::String _g = child->get(HX_CSTRING("source"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(67)
				image = ::openfl::tiled::TilesetImage_obj::__new(_g,child->get(HX_CSTRING("trans")),prefix);
			}
		}
;
	}
	HX_STACK_LINE(71)
	return ::openfl::tiled::ImageLayer_obj::__new(tiledMap,name,opacity,visible,properties,image);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageLayer_obj,fromGenericXml,return )


ImageLayer_obj::ImageLayer_obj()
{
}

void ImageLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageLayer);
	HX_MARK_MEMBER_NAME(tiledMap,"tiledMap");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_END_CLASS();
}

void ImageLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tiledMap,"tiledMap");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(image,"image");
}

Dynamic ImageLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tiledMap") ) { return tiledMap; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromGenericXml") ) { return fromGenericXml_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ImageLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::openfl::tiled::TilesetImage >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tiledMap") ) { tiledMap=inValue.Cast< ::openfl::tiled::TiledMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tiledMap"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("opacity"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("image"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromGenericXml"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::tiled::TiledMap*/ ,(int)offsetof(ImageLayer_obj,tiledMap),HX_CSTRING("tiledMap")},
	{hx::fsString,(int)offsetof(ImageLayer_obj,name),HX_CSTRING("name")},
	{hx::fsFloat,(int)offsetof(ImageLayer_obj,opacity),HX_CSTRING("opacity")},
	{hx::fsBool,(int)offsetof(ImageLayer_obj,visible),HX_CSTRING("visible")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(ImageLayer_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*::openfl::tiled::TilesetImage*/ ,(int)offsetof(ImageLayer_obj,image),HX_CSTRING("image")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tiledMap"),
	HX_CSTRING("name"),
	HX_CSTRING("opacity"),
	HX_CSTRING("visible"),
	HX_CSTRING("properties"),
	HX_CSTRING("image"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageLayer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageLayer_obj::__mClass,"__mClass");
};

#endif

Class ImageLayer_obj::__mClass;

void ImageLayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.ImageLayer"), hx::TCanCast< ImageLayer_obj> ,sStaticFields,sMemberFields,
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

void ImageLayer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
