#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
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
#ifndef INCLUDED_openfl_display_Tilesheet
#include <openfl/display/Tilesheet.h>
#endif
#ifndef INCLUDED_openfl_tiled_ImageLayer
#include <openfl/tiled/ImageLayer.h>
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
#ifndef INCLUDED_openfl_tiled_TiledMapOrientation
#include <openfl/tiled/TiledMapOrientation.h>
#endif
#ifndef INCLUDED_openfl_tiled_Tileset
#include <openfl/tiled/Tileset.h>
#endif
#ifndef INCLUDED_openfl_tiled_TilesetImage
#include <openfl/tiled/TilesetImage.h>
#endif
#ifndef INCLUDED_openfl_tiled_display_Renderer
#include <openfl/tiled/display/Renderer.h>
#endif
#ifndef INCLUDED_openfl_tiled_display_TilesheetRenderer
#include <openfl/tiled/display/TilesheetRenderer.h>
#endif
namespace openfl{
namespace tiled{
namespace display{

Void TilesheetRenderer_obj::__construct()
{
HX_STACK_FRAME("openfl.tiled.display.TilesheetRenderer","new",0xd66f8de4,"openfl.tiled.display.TilesheetRenderer.new","TilesheetRenderer.hx",16,0xc656e84a)
{
	HX_STACK_LINE(17)
	this->tilesheets = ::haxe::ds::IntMap_obj::__new();
	HX_STACK_LINE(18)
	this->tileRects = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//TilesheetRenderer_obj::~TilesheetRenderer_obj() { }

Dynamic TilesheetRenderer_obj::__CreateEmpty() { return  new TilesheetRenderer_obj; }
hx::ObjectPtr< TilesheetRenderer_obj > TilesheetRenderer_obj::__new()
{  hx::ObjectPtr< TilesheetRenderer_obj > result = new TilesheetRenderer_obj();
	result->__construct();
	return result;}

Dynamic TilesheetRenderer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TilesheetRenderer_obj > result = new TilesheetRenderer_obj();
	result->__construct();
	return result;}

hx::Object *TilesheetRenderer_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::tiled::display::Renderer_obj)) return operator ::openfl::tiled::display::Renderer_obj *();
	return super::__ToInterface(inType);
}

Void TilesheetRenderer_obj::setTiledMap( ::openfl::tiled::TiledMap map){
{
		HX_STACK_FRAME("openfl.tiled.display.TilesheetRenderer","setTiledMap",0xa9fcbe0c,"openfl.tiled.display.TilesheetRenderer.setTiledMap","TilesheetRenderer.hx",21,0xc656e84a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(map,"map")
		HX_STACK_LINE(22)
		this->map = map;
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(24)
			Array< ::Dynamic > _g1 = map->tilesets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(24)
			while(((_g < _g1->length))){
				HX_STACK_LINE(24)
				::openfl::tiled::Tileset tileset = _g1->__get(_g).StaticCast< ::openfl::tiled::Tileset >();		HX_STACK_VAR(tileset,"tileset");
				HX_STACK_LINE(24)
				++(_g);
				HX_STACK_LINE(25)
				{
					HX_STACK_LINE(25)
					::openfl::display::Tilesheet value = ::openfl::display::Tilesheet_obj::__new(tileset->image->texture);		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(25)
					this->tilesheets->set(tileset->firstGID,value);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TilesheetRenderer_obj,setTiledMap,(void))

Void TilesheetRenderer_obj::drawLayer( Dynamic on,::openfl::tiled::Layer layer){
{
		HX_STACK_FRAME("openfl.tiled.display.TilesheetRenderer","drawLayer",0xdde46fb1,"openfl.tiled.display.TilesheetRenderer.drawLayer","TilesheetRenderer.hx",29,0xc656e84a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_ARG(layer,"layer")
		HX_STACK_LINE(30)
		::flash::display::Sprite sprite = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(32)
		Array< Float > drawList = Array_obj< Float >::__new();		HX_STACK_VAR(drawList,"drawList");
		HX_STACK_LINE(33)
		int gidCounter = (int)0;		HX_STACK_VAR(gidCounter,"gidCounter");
		HX_STACK_LINE(35)
		if ((layer->visible)){
			HX_STACK_LINE(36)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(36)
			int _g = this->map->heightInTiles;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			while(((_g1 < _g))){
				HX_STACK_LINE(36)
				int y = (_g1)++;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(37)
				{
					HX_STACK_LINE(37)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(37)
					int _g2 = this->map->widthInTiles;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(37)
					while(((_g3 < _g2))){
						HX_STACK_LINE(37)
						int x = (_g3)++;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(38)
						int nextGID = layer->tiles->__get(gidCounter).StaticCast< ::openfl::tiled::Tile >()->gid;		HX_STACK_VAR(nextGID,"nextGID");
						HX_STACK_LINE(40)
						if (((nextGID != (int)0))){
							HX_STACK_LINE(41)
							::flash::geom::Point point = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(43)
							{
								HX_STACK_LINE(43)
								::openfl::tiled::TiledMapOrientation _g4 = this->map->orientation;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(43)
								switch( (int)(_g4->__Index())){
									case (int)0: {
										HX_STACK_LINE(45)
										point = ::flash::geom::Point_obj::__new((x * this->map->tileWidth),(y * this->map->tileHeight));
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(47)
										point = ::flash::geom::Point_obj::__new(((((((this->map->get_width() + x) - y) - (int)1)) * this->map->tileWidth) * 0.5),((((y + x)) * this->map->tileHeight) * 0.5));
									}
									;break;
								}
							}
							HX_STACK_LINE(50)
							::openfl::tiled::Tileset tileset = this->map->getTilesetByGID(nextGID);		HX_STACK_VAR(tileset,"tileset");
							HX_STACK_LINE(52)
							::openfl::display::Tilesheet tilesheet = this->tilesheets->get(tileset->firstGID);		HX_STACK_VAR(tilesheet,"tilesheet");
							HX_STACK_LINE(54)
							::flash::geom::Rectangle rect = tileset->getTileRectByGID(nextGID);		HX_STACK_VAR(rect,"rect");
							HX_STACK_LINE(56)
							int tileId = (int)-1;		HX_STACK_VAR(tileId,"tileId");
							HX_STACK_LINE(58)
							bool foundSomething = false;		HX_STACK_VAR(foundSomething,"foundSomething");
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(60)
								Array< ::Dynamic > _g5 = this->tileRects;		HX_STACK_VAR(_g5,"_g5");
								HX_STACK_LINE(60)
								while(((_g4 < _g5->length))){
									HX_STACK_LINE(60)
									::flash::geom::Rectangle r = _g5->__get(_g4).StaticCast< ::flash::geom::Rectangle >();		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(60)
									++(_g4);
									HX_STACK_LINE(61)
									if ((this->rectEquals(r,rect))){
										HX_STACK_LINE(62)
										tileId = ::Lambda_obj::indexOf(this->tileRects,r);
										HX_STACK_LINE(64)
										foundSomething = true;
										HX_STACK_LINE(66)
										break;
									}
								}
							}
							HX_STACK_LINE(70)
							if ((!(foundSomething))){
								HX_STACK_LINE(71)
								this->tileRects->push(rect);
							}
							HX_STACK_LINE(74)
							if (((tileId < (int)0))){
								HX_STACK_LINE(75)
								tileId = this->tilesheets->get(tileset->firstGID)->__Field(HX_CSTRING("addTileRect"),true)(rect,null());
							}
							HX_STACK_LINE(79)
							drawList->push(point->x);
							HX_STACK_LINE(80)
							drawList->push(point->y);
							HX_STACK_LINE(81)
							drawList->push(tileId);
							HX_STACK_LINE(82)
							drawList->push(layer->opacity);
						}
						HX_STACK_LINE(85)
						(gidCounter)++;
					}
				}
			}
		}
		HX_STACK_LINE(90)
		if ((this->map->backgroundColorSet)){
			HX_STACK_LINE(91)
			this->fillBackground(sprite);
		}
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(95)
			Array< ::Dynamic > _g1 = this->map->tilesets;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(95)
			while(((_g < _g1->length))){
				HX_STACK_LINE(95)
				::openfl::tiled::Tileset tileset = _g1->__get(_g).StaticCast< ::openfl::tiled::Tileset >();		HX_STACK_VAR(tileset,"tileset");
				HX_STACK_LINE(95)
				++(_g);
				HX_STACK_LINE(96)
				::openfl::display::Tilesheet tilesheet = this->tilesheets->get(tileset->firstGID);		HX_STACK_VAR(tilesheet,"tilesheet");
				HX_STACK_LINE(98)
				tilesheet->drawTiles(sprite->get_graphics(),drawList,true,(int)8,null());
			}
		}
		HX_STACK_LINE(101)
		on->__Field(HX_CSTRING("addChild"),true)(sprite);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TilesheetRenderer_obj,drawLayer,(void))

Void TilesheetRenderer_obj::drawImageLayer( Dynamic on,::openfl::tiled::ImageLayer imageLayer){
{
		HX_STACK_FRAME("openfl.tiled.display.TilesheetRenderer","drawImageLayer",0x13000e96,"openfl.tiled.display.TilesheetRenderer.drawImageLayer","TilesheetRenderer.hx",104,0xc656e84a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_ARG(imageLayer,"imageLayer")
		HX_STACK_LINE(105)
		::flash::display::Sprite sprite = ::flash::display::Sprite_obj::__new();		HX_STACK_VAR(sprite,"sprite");
		HX_STACK_LINE(107)
		::openfl::display::Tilesheet tilesheet = ::openfl::display::Tilesheet_obj::__new(imageLayer->image->texture);		HX_STACK_VAR(tilesheet,"tilesheet");
		HX_STACK_LINE(109)
		int _g = imageLayer->image->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(109)
		int id = tilesheet->addTileRect(::flash::geom::Rectangle_obj::__new((int)0,(int)0,_g,imageLayer->image->get_height()),null());		HX_STACK_VAR(id,"id");
		HX_STACK_LINE(111)
		Array< Float > drawList = Array_obj< Float >::__new();		HX_STACK_VAR(drawList,"drawList");
		HX_STACK_LINE(113)
		drawList->push((int)0);
		HX_STACK_LINE(114)
		drawList->push((int)0);
		HX_STACK_LINE(115)
		drawList->push(id);
		HX_STACK_LINE(116)
		drawList->push(imageLayer->opacity);
		HX_STACK_LINE(118)
		tilesheet->drawTiles(sprite->get_graphics(),drawList,true,(int)8,null());
		HX_STACK_LINE(120)
		on->__Field(HX_CSTRING("addChild"),true)(sprite);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(TilesheetRenderer_obj,drawImageLayer,(void))

Void TilesheetRenderer_obj::clear( Dynamic on){
{
		HX_STACK_FRAME("openfl.tiled.display.TilesheetRenderer","clear",0xab049811,"openfl.tiled.display.TilesheetRenderer.clear","TilesheetRenderer.hx",124,0xc656e84a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(on,"on")
		HX_STACK_LINE(124)
		while(((on->__Field(HX_CSTRING("numChildren"),true) > (int)0))){
			HX_STACK_LINE(125)
			on->__Field(HX_CSTRING("removeChildAt"),true)((int)0);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TilesheetRenderer_obj,clear,(void))

Void TilesheetRenderer_obj::fillBackground( ::flash::display::Sprite sprite){
{
		HX_STACK_FRAME("openfl.tiled.display.TilesheetRenderer","fillBackground",0x18d0b14d,"openfl.tiled.display.TilesheetRenderer.fillBackground","TilesheetRenderer.hx",129,0xc656e84a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(130)
		sprite->get_graphics()->beginFill(this->map->backgroundColor,null());
		HX_STACK_LINE(132)
		if (((this->map->orientation == ::openfl::tiled::TiledMapOrientation_obj::Orthogonal))){
			HX_STACK_LINE(133)
			int _g = this->map->get_totalWidth();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(133)
			sprite->get_graphics()->drawRect((int)0,(int)0,_g,this->map->get_totalHeight());
		}
		else{
			HX_STACK_LINE(135)
			Float _g1 = (Float(-(this->map->get_totalWidth())) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(135)
			int _g2 = this->map->get_totalWidth();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(135)
			sprite->get_graphics()->drawRect(_g1,(int)0,_g2,this->map->get_totalHeight());
		}
		HX_STACK_LINE(138)
		sprite->get_graphics()->endFill();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TilesheetRenderer_obj,fillBackground,(void))

bool TilesheetRenderer_obj::rectEquals( ::flash::geom::Rectangle r1,::flash::geom::Rectangle r2){
	HX_STACK_FRAME("openfl.tiled.display.TilesheetRenderer","rectEquals",0x74b3dd7f,"openfl.tiled.display.TilesheetRenderer.rectEquals","TilesheetRenderer.hx",142,0xc656e84a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r1,"r1")
	HX_STACK_ARG(r2,"r2")
	HX_STACK_LINE(142)
	return (bool((bool((bool((r1->x == r2->x)) && bool((r1->y == r2->y)))) && bool((r1->width == r2->width)))) && bool((r1->height == r2->height)));
}


HX_DEFINE_DYNAMIC_FUNC2(TilesheetRenderer_obj,rectEquals,return )


TilesheetRenderer_obj::TilesheetRenderer_obj()
{
}

void TilesheetRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TilesheetRenderer);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(tilesheets,"tilesheets");
	HX_MARK_MEMBER_NAME(tileRects,"tileRects");
	HX_MARK_END_CLASS();
}

void TilesheetRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(tilesheets,"tilesheets");
	HX_VISIT_MEMBER_NAME(tileRects,"tileRects");
}

Dynamic TilesheetRenderer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileRects") ) { return tileRects; }
		if (HX_FIELD_EQ(inName,"drawLayer") ) { return drawLayer_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tilesheets") ) { return tilesheets; }
		if (HX_FIELD_EQ(inName,"rectEquals") ) { return rectEquals_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setTiledMap") ) { return setTiledMap_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"drawImageLayer") ) { return drawImageLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"fillBackground") ) { return fillBackground_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TilesheetRenderer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::openfl::tiled::TiledMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileRects") ) { tileRects=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tilesheets") ) { tilesheets=inValue.Cast< ::haxe::ds::IntMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TilesheetRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("tilesheets"));
	outFields->push(HX_CSTRING("tileRects"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::tiled::TiledMap*/ ,(int)offsetof(TilesheetRenderer_obj,map),HX_CSTRING("map")},
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(int)offsetof(TilesheetRenderer_obj,tilesheets),HX_CSTRING("tilesheets")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TilesheetRenderer_obj,tileRects),HX_CSTRING("tileRects")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("tilesheets"),
	HX_CSTRING("tileRects"),
	HX_CSTRING("setTiledMap"),
	HX_CSTRING("drawLayer"),
	HX_CSTRING("drawImageLayer"),
	HX_CSTRING("clear"),
	HX_CSTRING("fillBackground"),
	HX_CSTRING("rectEquals"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TilesheetRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TilesheetRenderer_obj::__mClass,"__mClass");
};

#endif

Class TilesheetRenderer_obj::__mClass;

void TilesheetRenderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.display.TilesheetRenderer"), hx::TCanCast< TilesheetRenderer_obj> ,sStaticFields,sMemberFields,
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

void TilesheetRenderer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
} // end namespace display
