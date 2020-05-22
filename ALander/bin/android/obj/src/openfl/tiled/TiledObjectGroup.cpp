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
namespace openfl{
namespace tiled{

Void TiledObjectGroup_obj::__construct(::String name,::String color,int width,int height,::haxe::ds::StringMap properties,Array< ::Dynamic > xmlObjects)
{
HX_STACK_FRAME("openfl.tiled.TiledObjectGroup","new",0xa1f01a52,"openfl.tiled.TiledObjectGroup.new","TiledObjectGroup.hx",47,0x7005deb4)

HX_STACK_ARG(name,"name")

HX_STACK_ARG(color,"color")

HX_STACK_ARG(width,"width")

HX_STACK_ARG(height,"height")

HX_STACK_ARG(properties,"properties")

HX_STACK_ARG(xmlObjects,"xmlObjects")
{
	HX_STACK_LINE(49)
	this->name = name;
	HX_STACK_LINE(50)
	this->color = color;
	HX_STACK_LINE(51)
	this->width = width;
	HX_STACK_LINE(52)
	this->height = height;
	HX_STACK_LINE(53)
	this->properties = properties;
	HX_STACK_LINE(55)
	this->objects = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(57)
	{
		HX_STACK_LINE(57)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(57)
		while(((_g < xmlObjects->length))){
			HX_STACK_LINE(57)
			::Xml xml = xmlObjects->__get(_g).StaticCast< ::Xml >();		HX_STACK_VAR(xml,"xml");
			HX_STACK_LINE(57)
			++(_g);
			HX_STACK_LINE(58)
			this->objects->push(::openfl::tiled::TiledObject_obj::fromGenericXml(xml,hx::ObjectPtr<OBJ_>(this)));
		}
	}
	HX_STACK_LINE(61)
	this->objectCounter = (int)0;
}
;
	return null();
}

//TiledObjectGroup_obj::~TiledObjectGroup_obj() { }

Dynamic TiledObjectGroup_obj::__CreateEmpty() { return  new TiledObjectGroup_obj; }
hx::ObjectPtr< TiledObjectGroup_obj > TiledObjectGroup_obj::__new(::String name,::String color,int width,int height,::haxe::ds::StringMap properties,Array< ::Dynamic > xmlObjects)
{  hx::ObjectPtr< TiledObjectGroup_obj > result = new TiledObjectGroup_obj();
	result->__construct(name,color,width,height,properties,xmlObjects);
	return result;}

Dynamic TiledObjectGroup_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledObjectGroup_obj > result = new TiledObjectGroup_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

bool TiledObjectGroup_obj::hasNext( ){
	HX_STACK_FRAME("openfl.tiled.TiledObjectGroup","hasNext",0x4f33d05f,"openfl.tiled.TiledObjectGroup.hasNext","TiledObjectGroup.hx",93,0x7005deb4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(93)
	if (((this->objectCounter < this->objects->length))){
		HX_STACK_LINE(94)
		return true;
	}
	else{
		HX_STACK_LINE(96)
		this->objectCounter = (int)0;
		HX_STACK_LINE(97)
		return false;
	}
	HX_STACK_LINE(93)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledObjectGroup_obj,hasNext,return )

::openfl::tiled::TiledObject TiledObjectGroup_obj::next( ){
	HX_STACK_FRAME("openfl.tiled.TiledObjectGroup","next",0x1026eec1,"openfl.tiled.TiledObjectGroup.next","TiledObjectGroup.hx",102,0x7005deb4)
	HX_STACK_THIS(this)
	HX_STACK_LINE(102)
	return this->objects->__get((this->objectCounter)++).StaticCast< ::openfl::tiled::TiledObject >();
}


HX_DEFINE_DYNAMIC_FUNC0(TiledObjectGroup_obj,next,return )

::openfl::tiled::TiledObjectGroup TiledObjectGroup_obj::fromGenericXml( ::Xml xml){
	HX_STACK_FRAME("openfl.tiled.TiledObjectGroup","fromGenericXml",0x5f972558,"openfl.tiled.TiledObjectGroup.fromGenericXml","TiledObjectGroup.hx",65,0x7005deb4)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_LINE(66)
	::String name = xml->get(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(67)
	::String color = xml->get(HX_CSTRING("color"));		HX_STACK_VAR(color,"color");
	HX_STACK_LINE(68)
	Dynamic width = ::Std_obj::parseInt(xml->get(HX_CSTRING("width")));		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(69)
	Dynamic height = ::Std_obj::parseInt(xml->get(HX_CSTRING("height")));		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(70)
	::haxe::ds::StringMap properties = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(properties,"properties");
	HX_STACK_LINE(71)
	Array< ::Dynamic > objects = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(objects,"objects");
	HX_STACK_LINE(73)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(xml->iterator());  __it->hasNext(); ){
		::Xml child = __it->next();
		if ((::openfl::tiled::Helper_obj::isValidElement(child))){
			HX_STACK_LINE(75)
			if (((child->get_nodeName() == HX_CSTRING("properties")))){
				HX_STACK_LINE(76)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(child->iterator());  __it->hasNext(); ){
					::Xml property = __it->next();
					if ((::openfl::tiled::Helper_obj::isValidElement(property))){
						HX_STACK_LINE(78)
						::String key = property->get(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(78)
						::String value = property->get(HX_CSTRING("value"));		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(78)
						properties->set(key,value);
					}
;
				}
			}
			HX_STACK_LINE(83)
			if (((child->get_nodeName() == HX_CSTRING("object")))){
				HX_STACK_LINE(84)
				objects->push(child);
			}
		}
;
	}
	HX_STACK_LINE(89)
	return ::openfl::tiled::TiledObjectGroup_obj::__new(name,color,width,height,properties,objects);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TiledObjectGroup_obj,fromGenericXml,return )


TiledObjectGroup_obj::TiledObjectGroup_obj()
{
}

void TiledObjectGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledObjectGroup);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(objects,"objects");
	HX_MARK_MEMBER_NAME(objectCounter,"objectCounter");
	HX_MARK_END_CLASS();
}

void TiledObjectGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(objects,"objects");
	HX_VISIT_MEMBER_NAME(objectCounter,"objectCounter");
}

Dynamic TiledObjectGroup_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { return objects; }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return hasNext_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"objectCounter") ) { return objectCounter; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromGenericXml") ) { return fromGenericXml_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledObjectGroup_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"objects") ) { objects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"objectCounter") ) { objectCounter=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledObjectGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("objects"));
	outFields->push(HX_CSTRING("objectCounter"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromGenericXml"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledObjectGroup_obj,name),HX_CSTRING("name")},
	{hx::fsString,(int)offsetof(TiledObjectGroup_obj,color),HX_CSTRING("color")},
	{hx::fsInt,(int)offsetof(TiledObjectGroup_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TiledObjectGroup_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledObjectGroup_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledObjectGroup_obj,objects),HX_CSTRING("objects")},
	{hx::fsInt,(int)offsetof(TiledObjectGroup_obj,objectCounter),HX_CSTRING("objectCounter")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("color"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("properties"),
	HX_CSTRING("objects"),
	HX_CSTRING("objectCounter"),
	HX_CSTRING("hasNext"),
	HX_CSTRING("next"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledObjectGroup_obj::__mClass,"__mClass");
};

#endif

Class TiledObjectGroup_obj::__mClass;

void TiledObjectGroup_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.TiledObjectGroup"), hx::TCanCast< TiledObjectGroup_obj> ,sStaticFields,sMemberFields,
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

void TiledObjectGroup_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
