#ifndef INCLUDED_openfl_tiled_Tile
#define INCLUDED_openfl_tiled_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,tiled,Layer)
HX_DECLARE_CLASS2(openfl,tiled,Tile)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(int gid,::openfl::tiled::Layer parent);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tile_obj > __new(int gid,::openfl::tiled::Layer parent);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tile"); }

		int gid;
		::openfl::tiled::Layer parent;
		int width;
		int height;
		virtual int get_width( );
		Dynamic get_width_dyn();

		virtual int get_height( );
		Dynamic get_height_dyn();

		static ::openfl::tiled::Tile fromGID( int gid,::openfl::tiled::Layer parent);
		static Dynamic fromGID_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_Tile */ 
