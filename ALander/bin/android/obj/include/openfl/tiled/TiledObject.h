#ifndef INCLUDED_openfl_tiled_TiledObject
#define INCLUDED_openfl_tiled_TiledObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,tiled,TiledObject)
HX_DECLARE_CLASS2(openfl,tiled,TiledObjectGroup)
HX_DECLARE_CLASS2(openfl,tiled,TiledPolygon)
HX_DECLARE_CLASS2(openfl,tiled,TiledPolyline)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledObject_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledObject_obj OBJ_;
		TiledObject_obj();
		Void __construct(::openfl::tiled::TiledObjectGroup parent,int gid,::String name,::String type,int x,int y,int width,int height,::openfl::tiled::TiledPolygon polygon,::openfl::tiled::TiledPolyline polyline,::haxe::ds::StringMap properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TiledObject_obj > __new(::openfl::tiled::TiledObjectGroup parent,int gid,::String name,::String type,int x,int y,int width,int height,::openfl::tiled::TiledPolygon polygon,::openfl::tiled::TiledPolyline polyline,::haxe::ds::StringMap properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledObject_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledObject"); }

		::openfl::tiled::TiledObjectGroup parent;
		int gid;
		::String name;
		::String type;
		int x;
		int y;
		int width;
		int height;
		bool hasPolygon;
		bool hasPolyline;
		::openfl::tiled::TiledPolygon polygon;
		::openfl::tiled::TiledPolyline polyline;
		::haxe::ds::StringMap properties;
		virtual bool get_hasPolygon( );
		Dynamic get_hasPolygon_dyn();

		virtual bool get_hasPolyline( );
		Dynamic get_hasPolyline_dyn();

		static ::openfl::tiled::TiledObject fromGenericXml( ::Xml xml,::openfl::tiled::TiledObjectGroup parent);
		static Dynamic fromGenericXml_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_TiledObject */ 
