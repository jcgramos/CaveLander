#ifndef INCLUDED_openfl_tiled_TiledMap
#define INCLUDED_openfl_tiled_TiledMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,tiled,ImageLayer)
HX_DECLARE_CLASS2(openfl,tiled,Layer)
HX_DECLARE_CLASS2(openfl,tiled,TiledMap)
HX_DECLARE_CLASS2(openfl,tiled,TiledMapOrientation)
HX_DECLARE_CLASS2(openfl,tiled,TiledObject)
HX_DECLARE_CLASS2(openfl,tiled,TiledObjectGroup)
HX_DECLARE_CLASS2(openfl,tiled,Tileset)
HX_DECLARE_CLASS3(openfl,tiled,display,Renderer)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledMap_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef TiledMap_obj OBJ_;
		TiledMap_obj();
		Void __construct(::String path,::openfl::tiled::display::Renderer renderer,Dynamic __o_render);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TiledMap_obj > __new(::String path,::openfl::tiled::display::Renderer renderer,Dynamic __o_render);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledMap"); }

		::String path;
		int widthInTiles;
		int heightInTiles;
		int totalWidth;
		int totalHeight;
		::openfl::tiled::TiledMapOrientation orientation;
		int tileWidth;
		int tileHeight;
		int backgroundColor;
		Array< ::Dynamic > tilesets;
		Array< ::Dynamic > layers;
		Array< ::Dynamic > objectGroups;
		Array< ::Dynamic > imageLayers;
		::haxe::ds::StringMap properties;
		bool backgroundColorSet;
		::openfl::tiled::display::Renderer renderer;
		virtual Void onAddedToStage( ::flash::events::Event e);
		Dynamic onAddedToStage_dyn();

		virtual Void parseXML( ::String xml);
		Dynamic parseXML_dyn();

		virtual ::openfl::tiled::Tileset getTilesetByGID( int gid);
		Dynamic getTilesetByGID_dyn();

		virtual int get_totalWidth( );
		Dynamic get_totalWidth_dyn();

		virtual int get_totalHeight( );
		Dynamic get_totalHeight_dyn();

		virtual ::openfl::tiled::Layer getLayerByName( ::String name);
		Dynamic getLayerByName_dyn();

		virtual ::openfl::tiled::TiledObjectGroup getObjectGroupByName( ::String name);
		Dynamic getObjectGroupByName_dyn();

		virtual ::openfl::tiled::TiledObject getObjectByName( ::String name,::openfl::tiled::TiledObjectGroup inObjectGroup);
		Dynamic getObjectByName_dyn();

		static ::openfl::tiled::TiledMap fromAssets( ::String path,Dynamic render);
		static Dynamic fromAssets_dyn();

		static ::openfl::tiled::TiledMap fromAssetsWithAlternativeRenderer( ::String path,::openfl::tiled::display::Renderer renderer,Dynamic render);
		static Dynamic fromAssetsWithAlternativeRenderer_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_TiledMap */ 
