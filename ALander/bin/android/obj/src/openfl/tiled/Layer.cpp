#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_CompressionAlgorithm
#include <flash/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl_tiled_Helper
#include <openfl/tiled/Helper.h>
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
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace openfl{
namespace tiled{

Void Layer_obj::__construct(::openfl::tiled::TiledMap parent,::String name,int width,int height,Float opacity,bool visible,Array< int > tiles)
{
HX_STACK_FRAME("openfl.tiled.Layer","new",0xfc94dd4d,"openfl.tiled.Layer.new","Layer.hx",58,0x90c0b5ad)

HX_STACK_ARG(parent,"parent")

HX_STACK_ARG(name,"name")

HX_STACK_ARG(width,"width")

HX_STACK_ARG(height,"height")

HX_STACK_ARG(opacity,"opacity")

HX_STACK_ARG(visible,"visible")

HX_STACK_ARG(tiles,"tiles")
{
	HX_STACK_LINE(59)
	this->parent = parent;
	HX_STACK_LINE(60)
	this->name = name;
	HX_STACK_LINE(61)
	this->width = width;
	HX_STACK_LINE(62)
	this->height = height;
	HX_STACK_LINE(63)
	this->opacity = opacity;
	HX_STACK_LINE(64)
	this->visible = visible;
	HX_STACK_LINE(66)
	this->tiles = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(68)
		while(((_g < tiles->length))){
			HX_STACK_LINE(68)
			int gid = tiles->__get(_g);		HX_STACK_VAR(gid,"gid");
			HX_STACK_LINE(68)
			++(_g);
			HX_STACK_LINE(69)
			this->tiles->push(::openfl::tiled::Tile_obj::fromGID(gid,hx::ObjectPtr<OBJ_>(this)));
		}
	}
}
;
	return null();
}

//Layer_obj::~Layer_obj() { }

Dynamic Layer_obj::__CreateEmpty() { return  new Layer_obj; }
hx::ObjectPtr< Layer_obj > Layer_obj::__new(::openfl::tiled::TiledMap parent,::String name,int width,int height,Float opacity,bool visible,Array< int > tiles)
{  hx::ObjectPtr< Layer_obj > result = new Layer_obj();
	result->__construct(parent,name,width,height,opacity,visible,tiles);
	return result;}

Dynamic Layer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Layer_obj > result = new Layer_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return result;}

::String Layer_obj::toCSV( Dynamic width){
	HX_STACK_FRAME("openfl.tiled.Layer","toCSV",0x6c5cfb38,"openfl.tiled.Layer.toCSV","Layer.hx",135,0x90c0b5ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(width,"width")
	HX_STACK_LINE(136)
	if (((bool((width <= (int)0)) || bool((width == null()))))){
		HX_STACK_LINE(137)
		width = this->width;
	}
	HX_STACK_LINE(140)
	int counter = (int)0;		HX_STACK_VAR(counter,"counter");
	HX_STACK_LINE(141)
	::String csv = HX_CSTRING("");		HX_STACK_VAR(csv,"csv");
	HX_STACK_LINE(143)
	{
		HX_STACK_LINE(143)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(143)
		Array< ::Dynamic > _g1 = this->tiles;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(143)
		while(((_g < _g1->length))){
			HX_STACK_LINE(143)
			::openfl::tiled::Tile tile = _g1->__get(_g).StaticCast< ::openfl::tiled::Tile >();		HX_STACK_VAR(tile,"tile");
			HX_STACK_LINE(143)
			++(_g);
			HX_STACK_LINE(144)
			int tileGID = tile->gid;		HX_STACK_VAR(tileGID,"tileGID");
			HX_STACK_LINE(146)
			if (((counter >= width))){
				HX_STACK_LINE(148)
				csv = csv.substr((int)0,(csv.length - (int)1));
				HX_STACK_LINE(151)
				hx::AddEq(csv,HX_CSTRING("\n"));
				HX_STACK_LINE(152)
				counter = (int)0;
			}
			HX_STACK_LINE(155)
			hx::AddEq(csv,tileGID);
			HX_STACK_LINE(156)
			hx::AddEq(csv,HX_CSTRING(","));
			HX_STACK_LINE(158)
			(counter)++;
		}
	}
	HX_STACK_LINE(162)
	csv = csv.substr((int)0,(csv.length - (int)1));
	HX_STACK_LINE(164)
	return csv;
}


HX_DEFINE_DYNAMIC_FUNC1(Layer_obj,toCSV,return )

::openfl::tiled::Layer Layer_obj::fromGenericXml( ::Xml xml,::openfl::tiled::TiledMap parent){
	HX_STACK_FRAME("openfl.tiled.Layer","fromGenericXml",0x07361e3d,"openfl.tiled.Layer.fromGenericXml","Layer.hx",79,0x90c0b5ad)
	HX_STACK_ARG(xml,"xml")
	HX_STACK_ARG(parent,"parent")
	HX_STACK_LINE(80)
	::String name = xml->get(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(81)
	int width = ::Std_obj::parseInt(xml->get(HX_CSTRING("width")));		HX_STACK_VAR(width,"width");
	HX_STACK_LINE(82)
	int height = ::Std_obj::parseInt(xml->get(HX_CSTRING("height")));		HX_STACK_VAR(height,"height");
	HX_STACK_LINE(83)
	Float opacity = ::Std_obj::parseFloat((  (((xml->get(HX_CSTRING("opacity")) != null()))) ? ::String(xml->get(HX_CSTRING("opacity"))) : ::String(HX_CSTRING("1.0")) ));		HX_STACK_VAR(opacity,"opacity");
	HX_STACK_LINE(85)
	bool visible;		HX_STACK_VAR(visible,"visible");
	HX_STACK_LINE(85)
	if (((xml->get(HX_CSTRING("visible")) == null()))){
		HX_STACK_LINE(86)
		visible = true;
	}
	else{
		HX_STACK_LINE(86)
		if (((::Std_obj::parseInt(xml->get(HX_CSTRING("visible"))) == (int)1))){
			HX_STACK_LINE(87)
			visible = true;
		}
		else{
			HX_STACK_LINE(87)
			visible = false;
		}
	}
	HX_STACK_LINE(89)
	Array< int > tileGIDs = Array_obj< int >::__new();		HX_STACK_VAR(tileGIDs,"tileGIDs");
	HX_STACK_LINE(91)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(xml->iterator());  __it->hasNext(); ){
		::Xml child = __it->next();
		if ((::openfl::tiled::Helper_obj::isValidElement(child))){
			HX_STACK_LINE(93)
			if (((child->get_nodeName() == HX_CSTRING("data")))){
				HX_STACK_LINE(94)
				::String encoding = HX_CSTRING("");		HX_STACK_VAR(encoding,"encoding");
				HX_STACK_LINE(95)
				if ((child->exists(HX_CSTRING("encoding")))){
					HX_STACK_LINE(96)
					encoding = child->get(HX_CSTRING("encoding"));
				}
				HX_STACK_LINE(98)
				::String chunk = HX_CSTRING("");		HX_STACK_VAR(chunk,"chunk");
				HX_STACK_LINE(99)
				::String _switch_1 = (encoding);
				if (  ( _switch_1==HX_CSTRING("base64"))){
					HX_STACK_LINE(101)
					chunk = child->firstChild()->get_nodeValue();
					HX_STACK_LINE(102)
					bool compressed = false;		HX_STACK_VAR(compressed,"compressed");
					HX_STACK_LINE(103)
					if ((child->exists(HX_CSTRING("compression")))){
						HX_STACK_LINE(104)
						::String _g = child->get(HX_CSTRING("compression"));		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(104)
						::String _switch_2 = (_g);
						if (  ( _switch_2==HX_CSTRING("zlib"))){
							HX_STACK_LINE(106)
							compressed = true;
						}
						else  {
							HX_STACK_LINE(108)
							HX_STACK_DO_THROW(HX_CSTRING("TiledMap: data compression type not supported!"));
						}
;
;
					}
					HX_STACK_LINE(111)
					tileGIDs = ::openfl::tiled::Layer_obj::base64ToArray(chunk,width,compressed);
				}
				else if (  ( _switch_1==HX_CSTRING("csv"))){
					HX_STACK_LINE(113)
					chunk = child->firstChild()->get_nodeValue();
					HX_STACK_LINE(114)
					tileGIDs = ::openfl::tiled::Layer_obj::csvToArray(chunk);
				}
				else  {
					HX_STACK_LINE(116)
					for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(child->iterator());  __it->hasNext(); ){
						::Xml tile = __it->next();
						if ((::openfl::tiled::Helper_obj::isValidElement(tile))){
							HX_STACK_LINE(118)
							Dynamic gid = ::Std_obj::parseInt(tile->get(HX_CSTRING("gid")));		HX_STACK_VAR(gid,"gid");
							HX_STACK_LINE(119)
							tileGIDs->push(gid);
						}
;
					}
				}
;
;
			}
		}
;
	}
	HX_STACK_LINE(127)
	return ::openfl::tiled::Layer_obj::__new(parent,name,width,height,opacity,visible,tileGIDs);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Layer_obj,fromGenericXml,return )

Array< int > Layer_obj::csvToArray( ::String input){
	HX_STACK_FRAME("openfl.tiled.Layer","csvToArray",0x0ad01dab,"openfl.tiled.Layer.csvToArray","Layer.hx",167,0x90c0b5ad)
	HX_STACK_ARG(input,"input")
	HX_STACK_LINE(168)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(169)
	Array< ::String > rows = ::StringTools_obj::trim(input).split(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(170)
	::String row;		HX_STACK_VAR(row,"row");
	HX_STACK_LINE(172)
	{
		HX_STACK_LINE(172)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(172)
		while(((_g < rows->length))){
			HX_STACK_LINE(172)
			::String row1 = rows->__get(_g);		HX_STACK_VAR(row1,"row1");
			HX_STACK_LINE(172)
			++(_g);
			HX_STACK_LINE(174)
			if (((row1 == HX_CSTRING("")))){
				HX_STACK_LINE(175)
				continue;
			}
			HX_STACK_LINE(178)
			Array< int > resultRow = Array_obj< int >::__new();		HX_STACK_VAR(resultRow,"resultRow");
			HX_STACK_LINE(179)
			Array< ::String > entries = row1.split(HX_CSTRING(","));		HX_STACK_VAR(entries,"entries");
			HX_STACK_LINE(180)
			::String entry;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(182)
			{
				HX_STACK_LINE(182)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(182)
				while(((_g1 < entries->length))){
					HX_STACK_LINE(182)
					::String entry1 = entries->__get(_g1);		HX_STACK_VAR(entry1,"entry1");
					HX_STACK_LINE(182)
					++(_g1);
					HX_STACK_LINE(184)
					if (((entry1 != HX_CSTRING("")))){
						HX_STACK_LINE(185)
						result->push(::Std_obj::parseInt(entry1));
					}
				}
			}
		}
	}
	HX_STACK_LINE(189)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Layer_obj,csvToArray,return )

Array< int > Layer_obj::base64ToArray( ::String chunk,int lineWidth,bool compressed){
	HX_STACK_FRAME("openfl.tiled.Layer","base64ToArray",0x2d859b7c,"openfl.tiled.Layer.base64ToArray","Layer.hx",193,0x90c0b5ad)
	HX_STACK_ARG(chunk,"chunk")
	HX_STACK_ARG(lineWidth,"lineWidth")
	HX_STACK_ARG(compressed,"compressed")
	HX_STACK_LINE(194)
	Array< int > result = Array_obj< int >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(195)
	::flash::utils::ByteArray data = ::openfl::tiled::Layer_obj::base64ToByteArray(chunk);		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(197)
	if ((compressed)){
		HX_STACK_LINE(202)
		data->uncompress(null());
	}
	HX_STACK_LINE(204)
	data->set_endian(HX_CSTRING("littleEndian"));
	HX_STACK_LINE(206)
	while(((data->position < data->length))){
		HX_STACK_LINE(207)
		result->push(data->readInt());
	}
	HX_STACK_LINE(209)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Layer_obj,base64ToArray,return )

::String Layer_obj::BASE64_CHARS;

::flash::utils::ByteArray Layer_obj::base64ToByteArray( ::String data){
	HX_STACK_FRAME("openfl.tiled.Layer","base64ToByteArray",0xb2ca9cd4,"openfl.tiled.Layer.base64ToByteArray","Layer.hx",214,0x90c0b5ad)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(215)
	::flash::utils::ByteArray output = ::flash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(218)
	Array< int > lookup = Array_obj< int >::__new();		HX_STACK_VAR(lookup,"lookup");
	HX_STACK_LINE(219)
	int c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(220)
	{
		HX_STACK_LINE(220)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(220)
		int _g = HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=").length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(220)
		while(((_g1 < _g))){
			HX_STACK_LINE(220)
			int c1 = (_g1)++;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(221)
			lookup[HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=").charCodeAt(c1)] = c1;
		}
	}
	HX_STACK_LINE(224)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(226)
	while(((i < (data.length - (int)3)))){
		HX_STACK_LINE(228)
		if (((  ((!(((data.charAt(i) == HX_CSTRING(" ")))))) ? bool((data.charAt(i) == HX_CSTRING("\n"))) : bool(true) ))){
			HX_STACK_LINE(229)
			(i)++;
			HX_STACK_LINE(229)
			continue;
		}
		HX_STACK_LINE(233)
		int a0 = lookup->__get(data.charCodeAt(i));		HX_STACK_VAR(a0,"a0");
		HX_STACK_LINE(234)
		int a1 = lookup->__get(data.charCodeAt((i + (int)1)));		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(235)
		int a2 = lookup->__get(data.charCodeAt((i + (int)2)));		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(236)
		int a3 = lookup->__get(data.charCodeAt((i + (int)3)));		HX_STACK_VAR(a3,"a3");
		HX_STACK_LINE(239)
		if (((a1 < (int)64))){
			HX_STACK_LINE(240)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(240)
			output->b[(output->position)++] = (((int(a0) << int((int)2))) + ((int(((int(a1) & int((int)48)))) >> int((int)4))));
		}
		HX_STACK_LINE(241)
		if (((a2 < (int)64))){
			HX_STACK_LINE(242)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(242)
			output->b[(output->position)++] = (((int(((int(a1) & int((int)15)))) << int((int)4))) + ((int(((int(a2) & int((int)60)))) >> int((int)2))));
		}
		HX_STACK_LINE(243)
		if (((a3 < (int)64))){
			HX_STACK_LINE(244)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(244)
			output->b[(output->position)++] = (((int(((int(a2) & int((int)3)))) << int((int)6))) + a3);
		}
		HX_STACK_LINE(246)
		hx::AddEq(i,(int)4);
	}
	HX_STACK_LINE(250)
	output->position = (int)0;
	HX_STACK_LINE(251)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Layer_obj,base64ToByteArray,return )


Layer_obj::Layer_obj()
{
}

void Layer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Layer);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void Layer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic Layer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		if (HX_FIELD_EQ(inName,"toCSV") ) { return toCSV_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"csvToArray") ) { return csvToArray_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"base64ToArray") ) { return base64ToArray_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromGenericXml") ) { return fromGenericXml_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"base64ToByteArray") ) { return base64ToByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Layer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::openfl::tiled::TiledMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Layer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("opacity"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("tiles"));
	outFields->push(HX_CSTRING("parent"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromGenericXml"),
	HX_CSTRING("csvToArray"),
	HX_CSTRING("base64ToArray"),
	HX_CSTRING("BASE64_CHARS"),
	HX_CSTRING("base64ToByteArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Layer_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(Layer_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Layer_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(Layer_obj,opacity),HX_CSTRING("opacity")},
	{hx::fsBool,(int)offsetof(Layer_obj,visible),HX_CSTRING("visible")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Layer_obj,tiles),HX_CSTRING("tiles")},
	{hx::fsObject /*::openfl::tiled::TiledMap*/ ,(int)offsetof(Layer_obj,parent),HX_CSTRING("parent")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("opacity"),
	HX_CSTRING("visible"),
	HX_CSTRING("tiles"),
	HX_CSTRING("parent"),
	HX_CSTRING("toCSV"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Layer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Layer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Layer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#endif

Class Layer_obj::__mClass;

void Layer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.Layer"), hx::TCanCast< Layer_obj> ,sStaticFields,sMemberFields,
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

void Layer_obj::__boot()
{
	BASE64_CHARS= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=");
}

} // end namespace openfl
} // end namespace tiled
