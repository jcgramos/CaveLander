#ifndef INCLUDED_openfl_tiled_ImageLayer
#define INCLUDED_openfl_tiled_ImageLayer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,tiled,ImageLayer)
HX_DECLARE_CLASS2(openfl,tiled,TiledMap)
HX_DECLARE_CLASS2(openfl,tiled,TilesetImage)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  ImageLayer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef ImageLayer_obj OBJ_;
		ImageLayer_obj();
		Void __construct(::openfl::tiled::TiledMap tiledMap,::String name,Float opacity,bool visible,::haxe::ds::StringMap properties,::openfl::tiled::TilesetImage image);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< ImageLayer_obj > __new(::openfl::tiled::TiledMap tiledMap,::String name,Float opacity,bool visible,::haxe::ds::StringMap properties,::openfl::tiled::TilesetImage image);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ImageLayer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("ImageLayer"); }

		::openfl::tiled::TiledMap tiledMap;
		::String name;
		Float opacity;
		bool visible;
		::haxe::ds::StringMap properties;
		::openfl::tiled::TilesetImage image;
		static ::openfl::tiled::ImageLayer fromGenericXml( ::openfl::tiled::TiledMap tiledMap,::Xml xml);
		static Dynamic fromGenericXml_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_ImageLayer */ 
