#ifndef INCLUDED_openfl_tiled_Tileset
#define INCLUDED_openfl_tiled_Tileset

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,tiled,TerrainType)
HX_DECLARE_CLASS2(openfl,tiled,TiledMap)
HX_DECLARE_CLASS2(openfl,tiled,Tileset)
HX_DECLARE_CLASS2(openfl,tiled,TilesetImage)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  Tileset_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tileset_obj OBJ_;
		Tileset_obj();
		Void __construct(::openfl::tiled::TiledMap tiledMap,::String name,int tileWidth,int tileHeight,int spacing,::haxe::ds::StringMap properties,Array< ::Dynamic > terrainTypes,::openfl::tiled::TilesetImage image,::flash::geom::Point offset);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tileset_obj > __new(::openfl::tiled::TiledMap tiledMap,::String name,int tileWidth,int tileHeight,int spacing,::haxe::ds::StringMap properties,Array< ::Dynamic > terrainTypes,::openfl::tiled::TilesetImage image,::flash::geom::Point offset);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tileset_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tileset"); }

		::openfl::tiled::TiledMap tiledMap;
		int firstGID;
		::String name;
		int width;
		int height;
		int tileWidth;
		int tileHeight;
		int spacing;
		::haxe::ds::StringMap properties;
		::haxe::ds::IntMap propertyTiles;
		Array< ::Dynamic > terrainTypes;
		::openfl::tiled::TilesetImage image;
		::flash::geom::Point offset;
		virtual Void setFirstGID( int gid);
		Dynamic setFirstGID_dyn();

		virtual ::flash::geom::Rectangle getTileRectByGID( int gid);
		Dynamic getTileRectByGID_dyn();

		virtual ::flash::geom::Point getTexturePositionByGID( int gid);
		Dynamic getTexturePositionByGID_dyn();

		virtual int getInnerTexturePositionX( int tileNumber);
		Dynamic getInnerTexturePositionX_dyn();

		virtual int getInnerTexturePositionY( int tileNumber);
		Dynamic getInnerTexturePositionY_dyn();

		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		static ::openfl::tiled::Tileset fromGenericXml( ::openfl::tiled::TiledMap tiledMap,::String content);
		static Dynamic fromGenericXml_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_Tileset */ 
