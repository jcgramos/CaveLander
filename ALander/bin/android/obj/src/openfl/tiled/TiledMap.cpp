#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
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
#ifndef INCLUDED_openfl_tiled_Layer
#include <openfl/tiled/Layer.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledMap
#include <openfl/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledMapOrientation
#include <openfl/tiled/TiledMapOrientation.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledObject
#include <openfl/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledObjectGroup
#include <openfl/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_openfl_tiled_Tileset
#include <openfl/tiled/Tileset.h>
#endif
#ifndef INCLUDED_openfl_tiled_display_Renderer
#include <openfl/tiled/display/Renderer.h>
#endif
#ifndef INCLUDED_openfl_tiled_display_TilesheetRenderer
#include <openfl/tiled/display/TilesheetRenderer.h>
#endif
namespace openfl{
namespace tiled{

Void TiledMap_obj::__construct(::String path,::openfl::tiled::display::Renderer renderer,Dynamic __o_render)
{
HX_STACK_FRAME("openfl.tiled.TiledMap","new",0x8b4e72ee,"openfl.tiled.TiledMap.new","TiledMap.hx",47,0xe22c4798)

HX_STACK_ARG(path,"path")

HX_STACK_ARG(renderer,"renderer")

HX_STACK_ARG(__o_render,"render")
Dynamic render = __o_render.Default(true);
{
	HX_STACK_LINE(91)
	this->backgroundColorSet = false;
	HX_STACK_LINE(96)
	super::__construct();
	HX_STACK_LINE(98)
	this->path = path;
	HX_STACK_LINE(100)
	::String xml = ::openfl::tiled::Helper_obj::getText(path,null());		HX_STACK_VAR(xml,"xml");
	HX_STACK_LINE(102)
	this->parseXML(xml);
	HX_STACK_LINE(104)
	this->renderer = renderer;
	HX_STACK_LINE(106)
	renderer->setTiledMap(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(108)
	if ((render)){
		HX_STACK_LINE(109)
		this->addEventListener(::flash::events::Event_obj::ADDED_TO_STAGE,this->onAddedToStage_dyn(),null(),null(),null());
	}
}
;
	return null();
}

//TiledMap_obj::~TiledMap_obj() { }

Dynamic TiledMap_obj::__CreateEmpty() { return  new TiledMap_obj; }
hx::ObjectPtr< TiledMap_obj > TiledMap_obj::__new(::String path,::openfl::tiled::display::Renderer renderer,Dynamic __o_render)
{  hx::ObjectPtr< TiledMap_obj > result = new TiledMap_obj();
	result->__construct(path,renderer,__o_render);
	return result;}

Dynamic TiledMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledMap_obj > result = new TiledMap_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void TiledMap_obj::onAddedToStage( ::flash::events::Event e){
{
		HX_STACK_FRAME("openfl.tiled.TiledMap","onAddedToStage",0x9517ee54,"openfl.tiled.TiledMap.onAddedToStage","TiledMap.hx",113,0xe22c4798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
		HX_STACK_LINE(114)
		this->renderer->clear(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(116)
		{
			HX_STACK_LINE(116)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(116)
			Array< ::Dynamic > _g1 = this->layers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(116)
			while(((_g < _g1->length))){
				HX_STACK_LINE(116)
				::openfl::tiled::Layer layer = _g1->__get(_g).StaticCast< ::openfl::tiled::Layer >();		HX_STACK_VAR(layer,"layer");
				HX_STACK_LINE(116)
				++(_g);
				HX_STACK_LINE(117)
				this->renderer->drawLayer(hx::ObjectPtr<OBJ_>(this),layer);
			}
		}
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(120)
			Array< ::Dynamic > _g1 = this->imageLayers;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(120)
			while(((_g < _g1->length))){
				HX_STACK_LINE(120)
				::openfl::tiled::ImageLayer imageLayer = _g1->__get(_g).StaticCast< ::openfl::tiled::ImageLayer >();		HX_STACK_VAR(imageLayer,"imageLayer");
				HX_STACK_LINE(120)
				++(_g);
				HX_STACK_LINE(121)
				this->renderer->drawImageLayer(hx::ObjectPtr<OBJ_>(this),imageLayer);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,onAddedToStage,(void))

Void TiledMap_obj::parseXML( ::String xml){
{
		HX_STACK_FRAME("openfl.tiled.TiledMap","parseXML",0xd864b616,"openfl.tiled.TiledMap.parseXML","TiledMap.hx",152,0xe22c4798)
		HX_STACK_THIS(this)
		HX_STACK_ARG(xml,"xml")
		HX_STACK_LINE(153)
		::Xml xml1 = ::Xml_obj::parse(xml)->firstElement();		HX_STACK_VAR(xml1,"xml1");
		HX_STACK_LINE(155)
		this->widthInTiles = ::Std_obj::parseInt(xml1->get(HX_CSTRING("width")));
		HX_STACK_LINE(156)
		this->heightInTiles = ::Std_obj::parseInt(xml1->get(HX_CSTRING("height")));
		HX_STACK_LINE(157)
		if (((xml1->get(HX_CSTRING("orientation")) == HX_CSTRING("orthogonal")))){
			HX_STACK_LINE(157)
			this->orientation = ::openfl::tiled::TiledMapOrientation_obj::Orthogonal;
		}
		else{
			HX_STACK_LINE(157)
			this->orientation = ::openfl::tiled::TiledMapOrientation_obj::Isometric;
		}
		HX_STACK_LINE(159)
		this->tileWidth = ::Std_obj::parseInt(xml1->get(HX_CSTRING("tilewidth")));
		HX_STACK_LINE(160)
		this->tileHeight = ::Std_obj::parseInt(xml1->get(HX_CSTRING("tileheight")));
		HX_STACK_LINE(161)
		this->tilesets = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(162)
		this->layers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(163)
		this->objectGroups = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(164)
		this->imageLayers = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(165)
		this->properties = ::haxe::ds::StringMap_obj::__new();
		HX_STACK_LINE(168)
		::String backgroundColor = xml1->get(HX_CSTRING("backgroundcolor"));		HX_STACK_VAR(backgroundColor,"backgroundColor");
		HX_STACK_LINE(171)
		if (((backgroundColor != null()))){
			HX_STACK_LINE(172)
			this->backgroundColorSet = true;
			HX_STACK_LINE(175)
			backgroundColor = ::StringTools_obj::replace(backgroundColor,HX_CSTRING("#"),HX_CSTRING("0xff"));
			HX_STACK_LINE(177)
			this->backgroundColor = ::Std_obj::parseInt(backgroundColor);
		}
		else{
			HX_STACK_LINE(179)
			this->backgroundColor = (int)0;
		}
		HX_STACK_LINE(182)
		for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(xml1->iterator());  __it->hasNext(); ){
			::Xml child = __it->next();
			if ((::openfl::tiled::Helper_obj::isValidElement(child))){
				HX_STACK_LINE(184)
				if (((child->get_nodeName() == HX_CSTRING("tileset")))){
					HX_STACK_LINE(185)
					::openfl::tiled::Tileset tileset = null();		HX_STACK_VAR(tileset,"tileset");
					HX_STACK_LINE(187)
					if (((child->get(HX_CSTRING("source")) != null()))){
						HX_STACK_LINE(188)
						::String prefix = (::haxe::io::Path_obj::directory(this->path) + HX_CSTRING("/"));		HX_STACK_VAR(prefix,"prefix");
						HX_STACK_LINE(189)
						tileset = ::openfl::tiled::Tileset_obj::fromGenericXml(hx::ObjectPtr<OBJ_>(this),::openfl::tiled::Helper_obj::getText(child->get(HX_CSTRING("source")),prefix));
					}
					else{
						HX_STACK_LINE(191)
						tileset = ::openfl::tiled::Tileset_obj::fromGenericXml(hx::ObjectPtr<OBJ_>(this),child->toString());
					}
					HX_STACK_LINE(194)
					tileset->setFirstGID(::Std_obj::parseInt(child->get(HX_CSTRING("firstgid"))));
					HX_STACK_LINE(196)
					this->tilesets->push(tileset);
				}
				else{
					HX_STACK_LINE(197)
					if (((child->get_nodeName() == HX_CSTRING("properties")))){
						HX_STACK_LINE(198)
						for(::cpp::FastIterator_obj< ::Xml > *__it = ::cpp::CreateFastIterator< ::Xml >(child->iterator());  __it->hasNext(); ){
							::Xml property = __it->next();
							{
								HX_STACK_LINE(199)
								if ((!(::openfl::tiled::Helper_obj::isValidElement(property)))){
									HX_STACK_LINE(200)
									continue;
								}
								HX_STACK_LINE(201)
								{
									HX_STACK_LINE(201)
									::String key = property->get(HX_CSTRING("name"));		HX_STACK_VAR(key,"key");
									HX_STACK_LINE(201)
									::String value = property->get(HX_CSTRING("value"));		HX_STACK_VAR(value,"value");
									HX_STACK_LINE(201)
									this->properties->set(key,value);
								}
							}
;
						}
					}
					else{
						HX_STACK_LINE(203)
						if (((child->get_nodeName() == HX_CSTRING("layer")))){
							HX_STACK_LINE(204)
							::openfl::tiled::Layer layer = ::openfl::tiled::Layer_obj::fromGenericXml(child,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(layer,"layer");
							HX_STACK_LINE(206)
							this->layers->push(layer);
						}
						else{
							HX_STACK_LINE(207)
							if (((child->get_nodeName() == HX_CSTRING("objectgroup")))){
								HX_STACK_LINE(208)
								::openfl::tiled::TiledObjectGroup objectGroup = ::openfl::tiled::TiledObjectGroup_obj::fromGenericXml(child);		HX_STACK_VAR(objectGroup,"objectGroup");
								HX_STACK_LINE(210)
								this->objectGroups->push(objectGroup);
							}
							else{
								HX_STACK_LINE(211)
								if (((child->get_nodeName() == HX_CSTRING("imagelayer")))){
									HX_STACK_LINE(212)
									::openfl::tiled::ImageLayer imageLayer = ::openfl::tiled::ImageLayer_obj::fromGenericXml(hx::ObjectPtr<OBJ_>(this),child);		HX_STACK_VAR(imageLayer,"imageLayer");
									HX_STACK_LINE(214)
									this->imageLayers->push(imageLayer);
								}
							}
						}
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,parseXML,(void))

::openfl::tiled::Tileset TiledMap_obj::getTilesetByGID( int gid){
	HX_STACK_FRAME("openfl.tiled.TiledMap","getTilesetByGID",0x876071db,"openfl.tiled.TiledMap.getTilesetByGID","TiledMap.hx",224,0xe22c4798)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gid,"gid")
	HX_STACK_LINE(225)
	::openfl::tiled::Tileset tileset = null();		HX_STACK_VAR(tileset,"tileset");
	HX_STACK_LINE(227)
	{
		HX_STACK_LINE(227)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		Array< ::Dynamic > _g1 = this->tilesets;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(227)
		while(((_g < _g1->length))){
			HX_STACK_LINE(227)
			::openfl::tiled::Tileset t = _g1->__get(_g).StaticCast< ::openfl::tiled::Tileset >();		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(227)
			++(_g);
			HX_STACK_LINE(228)
			if (((gid >= t->firstGID))){
				HX_STACK_LINE(229)
				tileset = t;
			}
		}
	}
	HX_STACK_LINE(233)
	return tileset;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getTilesetByGID,return )

int TiledMap_obj::get_totalWidth( ){
	HX_STACK_FRAME("openfl.tiled.TiledMap","get_totalWidth",0xa5cca01d,"openfl.tiled.TiledMap.get_totalWidth","TiledMap.hx",241,0xe22c4798)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	return (this->widthInTiles * this->tileWidth);
}


HX_DEFINE_DYNAMIC_FUNC0(TiledMap_obj,get_totalWidth,return )

int TiledMap_obj::get_totalHeight( ){
	HX_STACK_FRAME("openfl.tiled.TiledMap","get_totalHeight",0x238ef1f0,"openfl.tiled.TiledMap.get_totalHeight","TiledMap.hx",249,0xe22c4798)
	HX_STACK_THIS(this)
	HX_STACK_LINE(249)
	return (this->heightInTiles * this->tileHeight);
}


HX_DEFINE_DYNAMIC_FUNC0(TiledMap_obj,get_totalHeight,return )

::openfl::tiled::Layer TiledMap_obj::getLayerByName( ::String name){
	HX_STACK_FRAME("openfl.tiled.TiledMap","getLayerByName",0x2cf193af,"openfl.tiled.TiledMap.getLayerByName","TiledMap.hx",257,0xe22c4798)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(258)
	{
		HX_STACK_LINE(258)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(258)
		Array< ::Dynamic > _g1 = this->layers;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(258)
		while(((_g < _g1->length))){
			HX_STACK_LINE(258)
			::openfl::tiled::Layer layer = _g1->__get(_g).StaticCast< ::openfl::tiled::Layer >();		HX_STACK_VAR(layer,"layer");
			HX_STACK_LINE(258)
			++(_g);
			HX_STACK_LINE(259)
			if (((layer->name == name))){
				HX_STACK_LINE(260)
				return layer;
			}
		}
	}
	HX_STACK_LINE(264)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getLayerByName,return )

::openfl::tiled::TiledObjectGroup TiledMap_obj::getObjectGroupByName( ::String name){
	HX_STACK_FRAME("openfl.tiled.TiledMap","getObjectGroupByName",0xcc95441e,"openfl.tiled.TiledMap.getObjectGroupByName","TiledMap.hx",272,0xe22c4798)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(273)
	{
		HX_STACK_LINE(273)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(273)
		Array< ::Dynamic > _g1 = this->objectGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(273)
		while(((_g < _g1->length))){
			HX_STACK_LINE(273)
			::openfl::tiled::TiledObjectGroup objectGroup = _g1->__get(_g).StaticCast< ::openfl::tiled::TiledObjectGroup >();		HX_STACK_VAR(objectGroup,"objectGroup");
			HX_STACK_LINE(273)
			++(_g);
			HX_STACK_LINE(274)
			if (((objectGroup->name == name))){
				HX_STACK_LINE(275)
				return objectGroup;
			}
		}
	}
	HX_STACK_LINE(279)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getObjectGroupByName,return )

::openfl::tiled::TiledObject TiledMap_obj::getObjectByName( ::String name,::openfl::tiled::TiledObjectGroup inObjectGroup){
	HX_STACK_FRAME("openfl.tiled.TiledMap","getObjectByName",0xa56dcd25,"openfl.tiled.TiledMap.getObjectByName","TiledMap.hx",288,0xe22c4798)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(inObjectGroup,"inObjectGroup")
	HX_STACK_LINE(289)
	for(::cpp::FastIterator_obj< ::openfl::tiled::TiledObject > *__it = ::cpp::CreateFastIterator< ::openfl::tiled::TiledObject >(inObjectGroup);  __it->hasNext(); ){
		::openfl::tiled::TiledObject object = __it->next();
		if (((object->name == name))){
			HX_STACK_LINE(291)
			return object;
		}
;
	}
	HX_STACK_LINE(295)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TiledMap_obj,getObjectByName,return )

::openfl::tiled::TiledMap TiledMap_obj::fromAssets( ::String path,Dynamic __o_render){
Dynamic render = __o_render.Default(true);
	HX_STACK_FRAME("openfl.tiled.TiledMap","fromAssets",0x5dc038bf,"openfl.tiled.TiledMap.fromAssets","TiledMap.hx",131,0xe22c4798)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(render,"render")
{
		HX_STACK_LINE(133)
		::openfl::tiled::display::TilesheetRenderer renderer = ::openfl::tiled::display::TilesheetRenderer_obj::__new();		HX_STACK_VAR(renderer,"renderer");
		HX_STACK_LINE(138)
		return ::openfl::tiled::TiledMap_obj::__new(path,renderer,render);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(TiledMap_obj,fromAssets,return )

::openfl::tiled::TiledMap TiledMap_obj::fromAssetsWithAlternativeRenderer( ::String path,::openfl::tiled::display::Renderer renderer,Dynamic __o_render){
Dynamic render = __o_render.Default(true);
	HX_STACK_FRAME("openfl.tiled.TiledMap","fromAssetsWithAlternativeRenderer",0x4e21b6eb,"openfl.tiled.TiledMap.fromAssetsWithAlternativeRenderer","TiledMap.hx",149,0xe22c4798)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(renderer,"renderer")
	HX_STACK_ARG(render,"render")
{
		HX_STACK_LINE(149)
		return ::openfl::tiled::TiledMap_obj::__new(path,renderer,render);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(TiledMap_obj,fromAssetsWithAlternativeRenderer,return )


TiledMap_obj::TiledMap_obj()
{
}

void TiledMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMap);
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_MARK_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_MARK_MEMBER_NAME(totalWidth,"totalWidth");
	HX_MARK_MEMBER_NAME(totalHeight,"totalHeight");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(objectGroups,"objectGroups");
	HX_MARK_MEMBER_NAME(imageLayers,"imageLayers");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(backgroundColorSet,"backgroundColorSet");
	HX_MARK_MEMBER_NAME(renderer,"renderer");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TiledMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(widthInTiles,"widthInTiles");
	HX_VISIT_MEMBER_NAME(heightInTiles,"heightInTiles");
	HX_VISIT_MEMBER_NAME(totalWidth,"totalWidth");
	HX_VISIT_MEMBER_NAME(totalHeight,"totalHeight");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(backgroundColor,"backgroundColor");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(objectGroups,"objectGroups");
	HX_VISIT_MEMBER_NAME(imageLayers,"imageLayers");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(backgroundColorSet,"backgroundColorSet");
	HX_VISIT_MEMBER_NAME(renderer,"renderer");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TiledMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { return tilesets; }
		if (HX_FIELD_EQ(inName,"renderer") ) { return renderer; }
		if (HX_FIELD_EQ(inName,"parseXML") ) { return parseXML_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromAssets") ) { return fromAssets_dyn(); }
		if (HX_FIELD_EQ(inName,"totalWidth") ) { return inCallProp ? get_totalWidth() : totalWidth; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalHeight") ) { return inCallProp ? get_totalHeight() : totalHeight; }
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"imageLayers") ) { return imageLayers; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { return widthInTiles; }
		if (HX_FIELD_EQ(inName,"objectGroups") ) { return objectGroups; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { return heightInTiles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onAddedToStage") ) { return onAddedToStage_dyn(); }
		if (HX_FIELD_EQ(inName,"get_totalWidth") ) { return get_totalWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayerByName") ) { return getLayerByName_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { return backgroundColor; }
		if (HX_FIELD_EQ(inName,"getTilesetByGID") ) { return getTilesetByGID_dyn(); }
		if (HX_FIELD_EQ(inName,"get_totalHeight") ) { return get_totalHeight_dyn(); }
		if (HX_FIELD_EQ(inName,"getObjectByName") ) { return getObjectByName_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundColorSet") ) { return backgroundColorSet; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectGroupByName") ) { return getObjectGroupByName_dyn(); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"fromAssetsWithAlternativeRenderer") ) { return fromAssetsWithAlternativeRenderer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderer") ) { renderer=inValue.Cast< ::openfl::tiled::display::Renderer >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"totalWidth") ) { totalWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalHeight") ) { totalHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::openfl::tiled::TiledMapOrientation >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imageLayers") ) { imageLayers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"widthInTiles") ) { widthInTiles=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"objectGroups") ) { objectGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"heightInTiles") ) { heightInTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"backgroundColor") ) { backgroundColor=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"backgroundColorSet") ) { backgroundColorSet=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("path"));
	outFields->push(HX_CSTRING("widthInTiles"));
	outFields->push(HX_CSTRING("heightInTiles"));
	outFields->push(HX_CSTRING("totalWidth"));
	outFields->push(HX_CSTRING("totalHeight"));
	outFields->push(HX_CSTRING("orientation"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("backgroundColor"));
	outFields->push(HX_CSTRING("tilesets"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("objectGroups"));
	outFields->push(HX_CSTRING("imageLayers"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("backgroundColorSet"));
	outFields->push(HX_CSTRING("renderer"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromAssets"),
	HX_CSTRING("fromAssetsWithAlternativeRenderer"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledMap_obj,path),HX_CSTRING("path")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,widthInTiles),HX_CSTRING("widthInTiles")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,heightInTiles),HX_CSTRING("heightInTiles")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,totalWidth),HX_CSTRING("totalWidth")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,totalHeight),HX_CSTRING("totalHeight")},
	{hx::fsObject /*::openfl::tiled::TiledMapOrientation*/ ,(int)offsetof(TiledMap_obj,orientation),HX_CSTRING("orientation")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,tileWidth),HX_CSTRING("tileWidth")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,tileHeight),HX_CSTRING("tileHeight")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,backgroundColor),HX_CSTRING("backgroundColor")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,tilesets),HX_CSTRING("tilesets")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,layers),HX_CSTRING("layers")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,objectGroups),HX_CSTRING("objectGroups")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,imageLayers),HX_CSTRING("imageLayers")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledMap_obj,properties),HX_CSTRING("properties")},
	{hx::fsBool,(int)offsetof(TiledMap_obj,backgroundColorSet),HX_CSTRING("backgroundColorSet")},
	{hx::fsObject /*::openfl::tiled::display::Renderer*/ ,(int)offsetof(TiledMap_obj,renderer),HX_CSTRING("renderer")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("path"),
	HX_CSTRING("widthInTiles"),
	HX_CSTRING("heightInTiles"),
	HX_CSTRING("totalWidth"),
	HX_CSTRING("totalHeight"),
	HX_CSTRING("orientation"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("backgroundColor"),
	HX_CSTRING("tilesets"),
	HX_CSTRING("layers"),
	HX_CSTRING("objectGroups"),
	HX_CSTRING("imageLayers"),
	HX_CSTRING("properties"),
	HX_CSTRING("backgroundColorSet"),
	HX_CSTRING("renderer"),
	HX_CSTRING("onAddedToStage"),
	HX_CSTRING("parseXML"),
	HX_CSTRING("getTilesetByGID"),
	HX_CSTRING("get_totalWidth"),
	HX_CSTRING("get_totalHeight"),
	HX_CSTRING("getLayerByName"),
	HX_CSTRING("getObjectGroupByName"),
	HX_CSTRING("getObjectByName"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#endif

Class TiledMap_obj::__mClass;

void TiledMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.TiledMap"), hx::TCanCast< TiledMap_obj> ,sStaticFields,sMemberFields,
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

void TiledMap_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
