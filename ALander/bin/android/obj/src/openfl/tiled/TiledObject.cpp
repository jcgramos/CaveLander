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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_tiled_Helper
#include <openfl/tiled/Helper.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledObject
#include <openfl/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledObjectGroup
#include <openfl/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledPolygon
#include <openfl/tiled/TiledPolygon.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledPolyline
#include <openfl/tiled/TiledPolyline.h>
#endif
namespace openfl{
namespace tiled{

Void TiledObject_obj::__construct(::openfl::tiled::TiledObjectGroup parent,int gid,::String name,::String type,int x,int y,int width,int height,::openfl::tiled::TiledPolygon polygon,::openfl::tiled::TiledPolyline polyline,::haxe::ds::StringMap properties)
{
HX_STACK_FRAME("openfl.tiled.TiledObject","new",0xe9b2bdd1,"openfl.tiled.TiledObject.new","TiledObject.hx",69,0x13a55d29)

HX_STACK_ARG(parent,"parent")

HX_STACK_ARG(gid,"gid")

HX_STACK_ARG(name,"name")

HX_STACK_ARG(type,"type")

HX_STACK_ARG(x,"x")

HX_STACK_ARG(y,"y")

HX_STACK_ARG(width,"width")

HX_STACK_ARG(height,"height")

HX_STACK_ARG(polygon,"polygon")

HX_STACK_ARG(polyline,"polyline")

HX_STACK_ARG(properties,"properties")
{
	HX_STACK_LINE(70)
	this->parent = parent;
	HX_STACK_LINE(71)
	this->gid = gid;
	HX_STACK_LINE(72)
	this->name = name;
	HX_STACK_LINE(73)
	this->type = type;
	HX_STACK_LINE(74)
	this->x = x;
	HX_STACK_LINE(75)
	this->y = y;
	HX_STACK_LINE(76)
	this->width = width;
	HX_STACK_LINE(77)
	this->height = height;
	HX_STACK_LINE(78)
	this->polygon = polygon;
	HX_STACK_LINE(79)
	this->polyline = polyline;
	HX_STACK_LINE(80)
	this->properties = properties;
}
;
	return null();
}

//TiledObject_obj::~TiledObject_obj() { }

Dynamic TiledObject_obj::__CreateEmpty() { return  new TiledObject_obj; }
hx::ObjectPtr< TiledObject_obj > TiledObject_obj::__new(::openfl::tiled::TiledObjectGroup parent,int gid,::String name,::String type,int x,int y,int width,int height,::openfl::tiled::TiledPolygon polygon,::openfl::tiled::TiledPolyline polyline,::haxe::ds::StringMap properties)
{  hx::ObjectPtr< TiledObject_obj > result = new TiledObject_obj();
	result->__construct(parent,gid,name,type,x,y,width,height,polygon,polyline,properties);
	return result;}

Dynamic TiledObject_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObject_obj > result = new TiledObject_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return result;}

bool TiledObject_obj::get_hasPolygon( ){
	HX_STACK_FRAME("openfl.tiled.TiledObject","get_hasPolygon",0x489808b8,"openfl.tiled.TiledObject.get_hasPolygon","TiledObject.hx",133,0x13a55d29)
	HX_STACK_THIS(this)
	HX_STACK_LINE(133)
	return (this->polygon != null());
}


HX_DEFINE_DYNAMIC_FUNC0(TiledObject_obj,get_hasPolygon,return )

bool TiledObject_obj::get_hasPolyline( ){
	HX_STACK_FRAME("openfl.tiled.TiledObject","get_hasPolyline",0x3fb91c42,"openfl.tiled.TiledObject.get_hasPolyline","TiledObject.hx",137,0x13a55d29)
	HX_STACK_THIS(this)
	HX_STACK_LINE(137)
	return (this->polyline != null());
}


HX_DEFINE_DYNAMIC_FUNC0(TiledObject_obj,get_hasPolyline,return )

::openfl::tiled::TiledObject TiledObject_obj::fromGenericXml( ::Xml xml,::openfl::tiled::TiledObjectGroup parent){
	HX_STACK_FRAME("openfl.tiled.TiledObject","fromGenericXml",0x0bd8c439,"openfl.tiled.TiledObject.fromGenericXml","TiledObject.hx",84,0x13a55d29)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(parent,"parent")
	HX_STACK_LINE(85)
	int gid;		HX_STACK_VAR(gid,"gid");
	HX_STACK_LINE(85)
	if (((xml->get(HX_CSTRING("gid")) != null()))){
		HX_STACK_LINE(85)
		gid = ::Std_obj::parseInt(xml->get(HX_CSTRING("gid")));
	}
	else{
		HX_STACK_LINE(85)
		gid = (int)0;
	}
	HX_STACK_LINE(86)
	::String name = xml->get(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(87)
	::String type = xml->get(HX_CSTRING("type"));		HX_STACK_VAR(type,"type");
	HX_STACK_LINE(88)
	int x = ::Std_obj::parseInt(xml->get(HX_CSTRING("x")));		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(89)
	int y = ::Std_obj::parseInt(xml->get(HX_CSTRING("y")));		HX_STACK_VAR(y,"y");
	HX_STACK_LINE(90)
	int width = ::Std_obj::parseInt(xml->get(HX_CSTRING("width")));		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(91)
	int height = ::Std_obj::parseInt(xml->get(HX_CSTRING("height")));		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(92)
	::openfl::tiled::TiledPolygon polygon = null();		HX_STACK_VAR(polygon,"polygon");
	HX_STACK_LINE(93)
	::openfl::tiled::TiledPolyline polyline = null();		HX_STACK_VAR(polyline,"polyline");
	HX_STACK_LINE(94)
	::haxe::ds::StringMap properties = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(properties,"properties");
	HX_STACK_LINE(96)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(xml->iterator());  __it->hasNext(); ){
		::Xml child = __it->next();
		if ((::openfl::tiled::Helper_obj::isValidElement(child))){
			HX_STACK_LINE(98)
			if (((child->get_nodeName() == HX_CSTRING("properties")))){
				HX_STACK_LINE(99)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(child->iterator());  __it->hasNext(); ){
					::Xml property = __it->next();
					if ((::openfl::tiled::Helper_obj::isValidElement(property))){
						HX_STACK_LINE(101)
						::String key = property->get(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(101)
						::String value = property->get(HX_CSTRING("value"));		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(101)
						properties->set(key,value);
					}
;
				}
			}
			HX_STACK_LINE(106)
			if (((  ((!(((child->get_nodeName() == HX_CSTRING("polygon")))))) ? bool((child->get_nodeName() == HX_CSTRING("polyline"))) : bool(true) ))){
				HX_STACK_LINE(107)
				::flash::geom::Point origin = ::flash::geom::Point_obj::__new(x,y);		HX_STACK_VAR(origin,"origin");
				HX_STACK_LINE(108)
				Array< ::Dynamic > points = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(points,"points");
				HX_STACK_LINE(110)
				::String pointsAsString = child->get(HX_CSTRING("points"));		HX_STACK_VAR(pointsAsString,"pointsAsString");
				HX_STACK_LINE(112)
				Array< ::String > pointsAsStringArray = pointsAsString.split(HX_CSTRING(" "));		HX_STACK_VAR(pointsAsStringArray,"pointsAsStringArray");
				HX_STACK_LINE(114)
				{
					HX_STACK_LINE(114)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(114)
					while(((_g < pointsAsStringArray->length))){
						HX_STACK_LINE(114)
						::String p = pointsAsStringArray->__get(_g);		HX_STACK_VAR(p,"p");
						HX_STACK_LINE(114)
						++(_g);
						HX_STACK_LINE(115)
						Array< ::String > coords = p.split(HX_CSTRING(","));		HX_STACK_VAR(coords,"coords");
						HX_STACK_LINE(116)
						Dynamic _g1 = ::Std_obj::parseInt(coords->__get((int)0));		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(116)
						points->push(::flash::geom::Point_obj::__new(_g1,::Std_obj::parseInt(coords->__get((int)1))));
					}
				}
				HX_STACK_LINE(119)
				if (((child->get_nodeName() == HX_CSTRING("polygon")))){
					HX_STACK_LINE(120)
					polygon = ::openfl::tiled::TiledPolygon_obj::__new(origin,points);
				}
				else{
					HX_STACK_LINE(121)
					if (((child->get_nodeName() == HX_CSTRING("polyline")))){
						HX_STACK_LINE(122)
						polyline = ::openfl::tiled::TiledPolyline_obj::__new(origin,points);
					}
				}
			}
		}
;
	}
	HX_STACK_LINE(128)
	return ::openfl::tiled::TiledObject_obj::__new(parent,gid,name,type,x,y,width,height,polygon,polyline,properties);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TiledObject_obj,fromGenericXml,return )


TiledObject_obj::TiledObject_obj()
{
}

void TiledObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObject);
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(gid,"gid");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(hasPolygon,"hasPolygon");
	HX_MARK_MEMBER_NAME(hasPolyline,"hasPolyline");
	HX_MARK_MEMBER_NAME(polygon,"polygon");
	HX_MARK_MEMBER_NAME(polyline,"polyline");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_END_CLASS();
}

void TiledObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(gid,"gid");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(hasPolygon,"hasPolygon");
	HX_VISIT_MEMBER_NAME(hasPolyline,"hasPolyline");
	HX_VISIT_MEMBER_NAME(polygon,"polygon");
	HX_VISIT_MEMBER_NAME(polyline,"polyline");
	HX_VISIT_MEMBER_NAME(properties,"properties");
}

Dynamic TiledObject_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { return gid; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { return polygon; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"polyline") ) { return polyline; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasPolygon") ) { return inCallProp ? get_hasPolygon() : hasPolygon; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPolyline") ) { return inCallProp ? get_hasPolyline() : hasPolyline; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromGenericXml") ) { return fromGenericXml_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hasPolygon") ) { return get_hasPolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_hasPolyline") ) { return get_hasPolyline_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObject_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"gid") ) { gid=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::tiled::TiledObjectGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"polygon") ) { polygon=inValue.Cast< ::openfl::tiled::TiledPolygon >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"polyline") ) { polyline=inValue.Cast< ::openfl::tiled::TiledPolyline >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"hasPolygon") ) { hasPolygon=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasPolyline") ) { hasPolyline=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("gid"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("hasPolygon"));
	outFields->push(HX_CSTRING("hasPolyline"));
	outFields->push(HX_CSTRING("polygon"));
	outFields->push(HX_CSTRING("polyline"));
	outFields->push(HX_CSTRING("properties"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromGenericXml"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::tiled::TiledObjectGroup*/ ,(int)offsetof(TiledObject_obj,parent),HX_CSTRING("parent")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,gid),HX_CSTRING("gid")},
	{hx::fsString,(int)offsetof(TiledObject_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(TiledObject_obj,type),HX_CSTRING("type")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TiledObject_obj,height),HX_CSTRING("height")},
	{hx::fsBool,(int)offsetof(TiledObject_obj,hasPolygon),HX_CSTRING("hasPolygon")},
	{hx::fsBool,(int)offsetof(TiledObject_obj,hasPolyline),HX_CSTRING("hasPolyline")},
	{hx::fsObject /*::openfl::tiled::TiledPolygon*/ ,(int)offsetof(TiledObject_obj,polygon),HX_CSTRING("polygon")},
	{hx::fsObject /*::openfl::tiled::TiledPolyline*/ ,(int)offsetof(TiledObject_obj,polyline),HX_CSTRING("polyline")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledObject_obj,properties),HX_CSTRING("properties")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("parent"),
	HX_CSTRING("gid"),
	HX_CSTRING("name"),
	HX_CSTRING("type"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("hasPolygon"),
	HX_CSTRING("hasPolyline"),
	HX_CSTRING("polygon"),
	HX_CSTRING("polyline"),
	HX_CSTRING("properties"),
	HX_CSTRING("get_hasPolygon"),
	HX_CSTRING("get_hasPolyline"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObject_obj::__mClass,"__mClass");
};

#endif

Class TiledObject_obj::__mClass;

void TiledObject_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.TiledObject"), hx::TCanCast< TiledObject_obj> ,sStaticFields,sMemberFields,
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

void TiledObject_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
