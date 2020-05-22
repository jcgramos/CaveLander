#ifndef INCLUDED_openfl_tiled_TiledPolygon
#define INCLUDED_openfl_tiled_TiledPolygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(openfl,tiled,TiledPolygon)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledPolygon_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledPolygon_obj OBJ_;
		TiledPolygon_obj();
		Void __construct(::flash::geom::Point origin,Array< ::Dynamic > points);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TiledPolygon_obj > __new(::flash::geom::Point origin,Array< ::Dynamic > points);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledPolygon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledPolygon"); }

		::flash::geom::Point origin;
		Array< ::Dynamic > points;
};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_TiledPolygon */ 
