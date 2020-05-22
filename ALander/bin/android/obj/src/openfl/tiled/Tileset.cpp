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
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
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
#ifndef INCLUDED_openfl_tiled_PropertyTile
#include <openfl/tiled/PropertyTile.h>
#endif
#ifndef INCLUDED_openfl_tiled_TerrainType
#include <openfl/tiled/TerrainType.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledMap
#include <openfl/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_openfl_tiled_Tileset
#include <openfl/tiled/Tileset.h>
#endif
#ifndef INCLUDED_openfl_tiled_TilesetImage
#include <openfl/tiled/TilesetImage.h>
#endif
namespace openfl{
namespace tiled{

Void Tileset_obj::__construct(::openfl::tiled::TiledMap tiledMap,::String name,int tileWidth,int tileHeight,int spacing,::haxe::ds::StringMap properties,Array< ::Dynamic > terrainTypes,::openfl::tiled::TilesetImage image,::flash::geom::Point offset)
{
HX_STACK_FRAME("openfl.tiled.Tileset","new",0xbbc1e0b0,"openfl.tiled.Tileset.new","Tileset.hx",74,0x96067e2a)

HX_STACK_ARG(tiledMap,"tiledMap")

HX_STACK_ARG(name,"name")

HX_STACK_ARG(tileWidth,"tileWidth")

HX_STACK_ARG(tileHeight,"tileHeight")

HX_STACK_ARG(spacing,"spacing")

HX_STACK_ARG(properties,"properties")

HX_STACK_ARG(terrainTypes,"terrainTypes")

HX_STACK_ARG(image,"image")

HX_STACK_ARG(offset,"offset")
{
	HX_STACK_LINE(75)
	this->tiledMap = tiledMap;
	HX_STACK_LINE(76)
	this->name = name;
	HX_STACK_LINE(77)
	this->tileWidth = tileWidth;
	HX_STACK_LINE(78)
	this->tileHeight = tileHeight;
	HX_STACK_LINE(79)
	this->spacing = spacing;
	HX_STACK_LINE(80)
	this->properties = properties;
	HX_STACK_LINE(81)
	this->terrainTypes = terrainTypes;
	HX_STACK_LINE(82)
	this->image = image;
	HX_STACK_LINE(83)
	this->offset = offset;
}
;
	return null();
}

//Tileset_obj::~Tileset_obj() { }

Dynamic Tileset_obj::__CreateEmpty() { return  new Tileset_obj; }
hx::ObjectPtr< Tileset_obj > Tileset_obj::__new(::openfl::tiled::TiledMap tiledMap,::String name,int tileWidth,int tileHeight,int spacing,::haxe::ds::StringMap properties,Array< ::Dynamic > terrainTypes,::openfl::tiled::TilesetImage image,::flash::geom::Point offset)
{  hx::ObjectPtr< Tileset_obj > result = new Tileset_obj();
	result->__construct(tiledMap,name,tileWidth,tileHeight,spacing,properties,terrainTypes,image,offset);
	return result;}

Dynamic Tileset_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tileset_obj > result = new Tileset_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8]);
	return result;}

Void Tileset_obj::setFirstGID( int gid){
{
		HX_STACK_FRAME("openfl.tiled.Tileset","setFirstGID",0xfcdd8fc4,"openfl.tiled.Tileset.setFirstGID","Tileset.hx",88,0x96067e2a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(gid,"gid")
		HX_STACK_LINE(88)
		this->firstGID = gid;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,setFirstGID,(void))

::flash::geom::Rectangle Tileset_obj::getTileRectByGID( int gid){
	HX_STACK_FRAME("openfl.tiled.Tileset","getTileRectByGID",0x0456b0d3,"openfl.tiled.Tileset.getTileRectByGID","Tileset.hx",167,0x96067e2a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(168)
	Float texturePositionX = this->getTexturePositionByGID(gid)->x;		HX_STACK_VAR(texturePositionX,"texturePositionX");
	HX_STACK_LINE(169)
	Float texturePositionY = this->getTexturePositionByGID(gid)->y;		HX_STACK_VAR(texturePositionY,"texturePositionY");
	HX_STACK_LINE(171)
	Float spacingX = (int)0;		HX_STACK_VAR(spacingX,"spacingX");
	HX_STACK_LINE(172)
	Float spacingY = (int)0;		HX_STACK_VAR(spacingY,"spacingY");
	HX_STACK_LINE(174)
	if (((this->spacing > (int)0))){
		HX_STACK_LINE(175)
		spacingX = (texturePositionX + this->spacing);
		HX_STACK_LINE(176)
		spacingY = (texturePositionY + this->spacing);
	}
	HX_STACK_LINE(179)
	::flash::geom::Rectangle rect = ::flash::geom::Rectangle_obj::__new((((texturePositionX * this->tileWidth) + spacingX) + this->offset->x),(((texturePositionY * this->tileHeight) + spacingY) + this->offset->y),this->tileWidth,this->tileHeight);		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(185)
	return rect;
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,getTileRectByGID,return )

::flash::geom::Point Tileset_obj::getTexturePositionByGID( int gid){
	HX_STACK_FRAME("openfl.tiled.Tileset","getTexturePositionByGID",0xb6bb832d,"openfl.tiled.Tileset.getTexturePositionByGID","Tileset.hx",189,0x96067e2a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(190)
	int number = (gid - this->firstGID);		HX_STACK_VAR(number,"number");
	HX_STACK_LINE(192)
	int _g = this->getInnerTexturePositionX(number);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(192)
	return ::flash::geom::Point_obj::__new(_g,this->getInnerTexturePositionY(number));
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,getTexturePositionByGID,return )

int Tileset_obj::getInnerTexturePositionX( int tileNumber){
	HX_STACK_FRAME("openfl.tiled.Tileset","getInnerTexturePositionX",0x10492224,"openfl.tiled.Tileset.getInnerTexturePositionX","Tileset.hx",197,0x96067e2a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileNumber,"tileNumber")
	HX_STACK_LINE(197)
	return hx::Mod(tileNumber,::Std_obj::_int((Float(this->get_width()) / Float(this->tileWidth))));
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,getInnerTexturePositionX,return )

int Tileset_obj::getInnerTexturePositionY( int tileNumber){
	HX_STACK_FRAME("openfl.tiled.Tileset","getInnerTexturePositionY",0x10492225,"openfl.tiled.Tileset.getInnerTexturePositionY","Tileset.hx",202,0x96067e2a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tileNumber,"tileNumber")
	HX_STACK_LINE(202)
	return ::Std_obj::_int((Float(tileNumber) / Float(::Std_obj::_int((Float(this->get_width()) / Float(this->tileWidth))))));
}


HX_DEFINE_DYNAMIC_FUNC1(Tileset_obj,getInnerTexturePositionY,return )

int Tileset_obj::get_width( ){
	HX_STACK_FRAME("openfl.tiled.Tileset","get_width",0x661b3ead,"openfl.tiled.Tileset.get_width","Tileset.hx",206,0x96067e2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(206)
	return this->image->get_width();
}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,get_width,return )

int Tileset_obj::get_height( ){
	HX_STACK_FRAME("openfl.tiled.Tileset","get_height",0xa80b1160,"openfl.tiled.Tileset.get_height","Tileset.hx",210,0x96067e2a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(210)
	return this->image->get_height();
}


HX_DEFINE_DYNAMIC_FUNC0(Tileset_obj,get_height,return )

::openfl::tiled::Tileset Tileset_obj::fromGenericXml( ::openfl::tiled::TiledMap tiledMap,::String content){
	HX_STACK_FRAME("openfl.tiled.Tileset","fromGenericXml",0x98795fba,"openfl.tiled.Tileset.fromGenericXml","Tileset.hx",92,0x96067e2a)
	HX_STACK_ARG(tiledMap,"tiledMap")
	HX_STACK_ARG(content,"content")
	HX_STACK_LINE(93)
	::Xml xml = ::Xml_obj::parse(content)->firstElement();		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(95)
	::String name = xml->get(HX_CSTRING("name"));		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(96)
	int tileWidth = ::Std_obj::parseInt(xml->get(HX_CSTRING("tilewidth")));		HX_STACK_VAR(tileWidth,"tileWidth");
	HX_STACK_LINE(97)
	int tileHeight = ::Std_obj::parseInt(xml->get(HX_CSTRING("tileheight")));		HX_STACK_VAR(tileHeight,"tileHeight");
	HX_STACK_LINE(98)
	int spacing;		HX_STACK_VAR(spacing,"spacing");
	HX_STACK_LINE(98)
	if ((xml->exists(HX_CSTRING("spacing")))){
		HX_STACK_LINE(98)
		spacing = ::Std_obj::parseInt(xml->get(HX_CSTRING("spacing")));
	}
	else{
		HX_STACK_LINE(98)
		spacing = (int)0;
	}
	HX_STACK_LINE(99)
	::haxe::ds::StringMap properties = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(properties,"properties");
	HX_STACK_LINE(100)
	::haxe::ds::IntMap propertyTiles = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(propertyTiles,"propertyTiles");
	HX_STACK_LINE(101)
	Array< ::Dynamic > terrainTypes = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(terrainTypes,"terrainTypes");
	HX_STACK_LINE(102)
	::openfl::tiled::TilesetImage image = null();		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(104)
	int tileOffsetX = (int)0;		HX_STACK_VAR(tileOffsetX,"tileOffsetX");
	HX_STACK_LINE(105)
	int tileOffsetY = (int)0;		HX_STACK_VAR(tileOffsetY,"tileOffsetY");
	HX_STACK_LINE(107)
	for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(xml->elements());  __it->hasNext(); ){
		::Xml child = __it->next();
		if ((::openfl::tiled::Helper_obj::isValidElement(child))){
			HX_STACK_LINE(109)
			if (((child->get_nodeName() == HX_CSTRING("properties")))){
				HX_STACK_LINE(110)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(child->iterator());  __it->hasNext(); ){
					::Xml property = __it->next();
					if ((::openfl::tiled::Helper_obj::isValidElement(property))){
						HX_STACK_LINE(112)
						::String key = property->get(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
						HX_STACK_LINE(112)
						::String value = property->get(HX_CSTRING("value"));		HX_STACK_VAR(value,"value");
						HX_STACK_LINE(112)
						properties->set(key,value);
					}
;
				}
			}
			HX_STACK_LINE(117)
			if (((child->get_nodeName() == HX_CSTRING("tileoffset")))){
				HX_STACK_LINE(118)
				tileOffsetX = ::Std_obj::parseInt(child->get(HX_CSTRING("x")));
				HX_STACK_LINE(119)
				tileOffsetY = ::Std_obj::parseInt(child->get(HX_CSTRING("y")));
			}
			HX_STACK_LINE(122)
			if (((child->get_nodeName() == HX_CSTRING("image")))){
				HX_STACK_LINE(123)
				::String prefix = (::haxe::io::Path_obj::directory(tiledMap->path) + HX_CSTRING("/"));		HX_STACK_VAR(prefix,"prefix");
				HX_STACK_LINE(124)
				::String _g = child->get(HX_CSTRING("source"));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(124)
				image = ::openfl::tiled::TilesetImage_obj::__new(_g,child->get(HX_CSTRING("trans")),prefix);
			}
			HX_STACK_LINE(127)
			if (((child->get_nodeName() == HX_CSTRING("terraintypes")))){
				HX_STACK_LINE(128)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(child->iterator());  __it->hasNext(); ){
					::Xml element = __it->next();
					if ((::openfl::tiled::Helper_obj::isValidElement(element))){
						HX_STACK_LINE(131)
						if (((element->get_nodeName() == HX_CSTRING("terrain")))){
							HX_STACK_LINE(132)
							::String _g1 = element->get(HX_CSTRING("name"));		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(132)
							terrainTypes->push(::openfl::tiled::TerrainType_obj::__new(_g1,::Std_obj::parseInt(element->get(HX_CSTRING("tile")))));
						}
					}
;
				}
			}
			HX_STACK_LINE(138)
			if (((child->get_nodeName() == HX_CSTRING("tile")))){
				HX_STACK_LINE(139)
				int id = ::Std_obj::parseInt(child->get(HX_CSTRING("id")));		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(140)
				::haxe::ds::StringMap properties1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(properties1,"properties1");
				HX_STACK_LINE(142)
				for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(child->iterator());  __it->hasNext(); ){
					::Xml element = __it->next();
					if ((::openfl::tiled::Helper_obj::isValidElement(element))){
						HX_STACK_LINE(145)
						if (((element->get_nodeName() == HX_CSTRING("properties")))){
							HX_STACK_LINE(146)
							for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(element->iterator());  __it->hasNext(); ){
								::Xml property = __it->next();
								{
									HX_STACK_LINE(147)
									if ((!(::openfl::tiled::Helper_obj::isValidElement(property)))){
										HX_STACK_LINE(148)
										continue;
									}
									HX_STACK_LINE(151)
									{
										HX_STACK_LINE(151)
										::String key = property->get(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
										HX_STACK_LINE(151)
										::String value = property->get(HX_CSTRING("value"));		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(151)
										properties1->set(key,value);
									}
								}
;
							}
						}
					}
;
				}
				HX_STACK_LINE(157)
				{
					HX_STACK_LINE(157)
					::openfl::tiled::PropertyTile value = ::openfl::tiled::PropertyTile_obj::__new(id,properties1);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(157)
					propertyTiles->set(id,value);
				}
			}
		}
;
	}
	HX_STACK_LINE(162)
	return ::openfl::tiled::Tileset_obj::__new(tiledMap,name,tileWidth,tileHeight,spacing,properties,terrainTypes,image,::flash::geom::Point_obj::__new(tileOffsetX,tileOffsetY));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Tileset_obj,fromGenericXml,return )


Tileset_obj::Tileset_obj()
{
}

void Tileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tileset);
	HX_MARK_MEMBER_NAME(tiledMap,"tiledMap");
	HX_MARK_MEMBER_NAME(firstGID,"firstGID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(propertyTiles,"propertyTiles");
	HX_MARK_MEMBER_NAME(terrainTypes,"terrainTypes");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_END_CLASS();
}

void Tileset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(tiledMap,"tiledMap");
	HX_VISIT_MEMBER_NAME(firstGID,"firstGID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(propertyTiles,"propertyTiles");
	HX_VISIT_MEMBER_NAME(terrainTypes,"terrainTypes");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(offset,"offset");
}

Dynamic Tileset_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tiledMap") ) { return tiledMap; }
		if (HX_FIELD_EQ(inName,"firstGID") ) { return firstGID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setFirstGID") ) { return setFirstGID_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"terrainTypes") ) { return terrainTypes; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"propertyTiles") ) { return propertyTiles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromGenericXml") ) { return fromGenericXml_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getTileRectByGID") ) { return getTileRectByGID_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getTexturePositionByGID") ) { return getTexturePositionByGID_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"getInnerTexturePositionX") ) { return getInnerTexturePositionX_dyn(); }
		if (HX_FIELD_EQ(inName,"getInnerTexturePositionY") ) { return getInnerTexturePositionY_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tileset_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::openfl::tiled::TilesetImage >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tiledMap") ) { tiledMap=inValue.Cast< ::openfl::tiled::TiledMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firstGID") ) { firstGID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"terrainTypes") ) { terrainTypes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"propertyTiles") ) { propertyTiles=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tiledMap"));
	outFields->push(HX_CSTRING("firstGID"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("spacing"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("propertyTiles"));
	outFields->push(HX_CSTRING("terrainTypes"));
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("offset"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromGenericXml"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::tiled::TiledMap*/ ,(int)offsetof(Tileset_obj,tiledMap),HX_CSTRING("tiledMap")},
	{hx::fsInt,(int)offsetof(Tileset_obj,firstGID),HX_CSTRING("firstGID")},
	{hx::fsString,(int)offsetof(Tileset_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(Tileset_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(Tileset_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(Tileset_obj,tileWidth),HX_CSTRING("tileWidth")},
	{hx::fsInt,(int)offsetof(Tileset_obj,tileHeight),HX_CSTRING("tileHeight")},
	{hx::fsInt,(int)offsetof(Tileset_obj,spacing),HX_CSTRING("spacing")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Tileset_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(Tileset_obj,propertyTiles),HX_CSTRING("propertyTiles")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Tileset_obj,terrainTypes),HX_CSTRING("terrainTypes")},
	{hx::fsObject /*::openfl::tiled::TilesetImage*/ ,(int)offsetof(Tileset_obj,image),HX_CSTRING("image")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Tileset_obj,offset),HX_CSTRING("offset")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tiledMap"),
	HX_CSTRING("firstGID"),
	HX_CSTRING("name"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("spacing"),
	HX_CSTRING("properties"),
	HX_CSTRING("propertyTiles"),
	HX_CSTRING("terrainTypes"),
	HX_CSTRING("image"),
	HX_CSTRING("offset"),
	HX_CSTRING("setFirstGID"),
	HX_CSTRING("getTileRectByGID"),
	HX_CSTRING("getTexturePositionByGID"),
	HX_CSTRING("getInnerTexturePositionX"),
	HX_CSTRING("getInnerTexturePositionY"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_height"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tileset_obj::__mClass,"__mClass");
};

#endif

Class Tileset_obj::__mClass;

void Tileset_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.Tileset"), hx::TCanCast< Tileset_obj> ,sStaticFields,sMemberFields,
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

void Tileset_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
