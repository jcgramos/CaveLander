#ifndef INCLUDED_openfl_tiled_TilesetImage
#define INCLUDED_openfl_tiled_TilesetImage

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,tiled,TilesetImage)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TilesetImage_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TilesetImage_obj OBJ_;
		TilesetImage_obj();
		Void __construct(::String source,::String trans,::String mapPrefix);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TilesetImage_obj > __new(::String source,::String trans,::String mapPrefix);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TilesetImage_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TilesetImage"); }

		::String source;
		::String fileName;
		int width;
		int height;
		::flash::display::BitmapData texture;
		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_TilesetImage */ 
