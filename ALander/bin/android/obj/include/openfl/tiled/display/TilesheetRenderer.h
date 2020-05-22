#ifndef INCLUDED_openfl_tiled_display_TilesheetRenderer
#define INCLUDED_openfl_tiled_display_TilesheetRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/tiled/display/Renderer.h>
HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Rectangle)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(openfl,tiled,ImageLayer)
HX_DECLARE_CLASS2(openfl,tiled,Layer)
HX_DECLARE_CLASS2(openfl,tiled,TiledMap)
HX_DECLARE_CLASS3(openfl,tiled,display,Renderer)
HX_DECLARE_CLASS3(openfl,tiled,display,TilesheetRenderer)
namespace openfl{
namespace tiled{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  TilesheetRenderer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TilesheetRenderer_obj OBJ_;
		TilesheetRenderer_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TilesheetRenderer_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TilesheetRenderer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		inline operator ::openfl::tiled::display::Renderer_obj *()
			{ return new ::openfl::tiled::display::Renderer_delegate_< TilesheetRenderer_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("TilesheetRenderer"); }

		::openfl::tiled::TiledMap map;
		::haxe::ds::IntMap tilesheets;
		Array< ::Dynamic > tileRects;
		virtual Void setTiledMap( ::openfl::tiled::TiledMap map);
		Dynamic setTiledMap_dyn();

		virtual Void drawLayer( Dynamic on,::openfl::tiled::Layer layer);
		Dynamic drawLayer_dyn();

		virtual Void drawImageLayer( Dynamic on,::openfl::tiled::ImageLayer imageLayer);
		Dynamic drawImageLayer_dyn();

		virtual Void clear( Dynamic on);
		Dynamic clear_dyn();

		virtual Void fillBackground( ::flash::display::Sprite sprite);
		Dynamic fillBackground_dyn();

		virtual bool rectEquals( ::flash::geom::Rectangle r1,::flash::geom::Rectangle r2);
		Dynamic rectEquals_dyn();

};

} // end namespace openfl
} // end namespace tiled
} // end namespace display

#endif /* INCLUDED_openfl_tiled_display_TilesheetRenderer */ 
