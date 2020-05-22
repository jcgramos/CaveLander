#ifndef INCLUDED_openfl_tiled_TiledObjectGroup
#define INCLUDED_openfl_tiled_TiledObjectGroup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,tiled,TiledObject)
HX_DECLARE_CLASS2(openfl,tiled,TiledObjectGroup)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TiledObjectGroup_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TiledObjectGroup_obj OBJ_;
		TiledObjectGroup_obj();
		Void __construct(::String name,::String color,int width,int height,::haxe::ds::StringMap properties,Array< ::Dynamic > xmlObjects);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TiledObjectGroup_obj > __new(::String name,::String color,int width,int height,::haxe::ds::StringMap properties,Array< ::Dynamic > xmlObjects);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TiledObjectGroup_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TiledObjectGroup"); }

		::String name;
		::String color;
		int width;
		int height;
		::haxe::ds::StringMap properties;
		Array< ::Dynamic > objects;
		int objectCounter;
		virtual bool hasNext( );
		Dynamic hasNext_dyn();

		virtual ::openfl::tiled::TiledObject next( );
		Dynamic next_dyn();

		static ::openfl::tiled::TiledObjectGroup fromGenericXml( ::Xml xml);
		static Dynamic fromGenericXml_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_TiledObjectGroup */ 
