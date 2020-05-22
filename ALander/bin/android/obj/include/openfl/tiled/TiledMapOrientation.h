#ifndef INCLUDED_openfl_tiled_TiledMapOrientation
#define INCLUDED_openfl_tiled_TiledMapOrientation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,tiled,TiledMapOrientation)
namespace openfl{
namespace tiled{


class TiledMapOrientation_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TiledMapOrientation_obj OBJ_;

	public:
		TiledMapOrientation_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("openfl.tiled.TiledMapOrientation"); }
		::String __ToString() const { return HX_CSTRING("TiledMapOrientation.") + tag; }

		static ::openfl::tiled::TiledMapOrientation Isometric;
		static inline ::openfl::tiled::TiledMapOrientation Isometric_dyn() { return Isometric; }
		static ::openfl::tiled::TiledMapOrientation Orthogonal;
		static inline ::openfl::tiled::TiledMapOrientation Orthogonal_dyn() { return Orthogonal; }
};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_TiledMapOrientation */ 
