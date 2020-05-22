#ifndef INCLUDED_openfl_tiled_TerrainType
#define INCLUDED_openfl_tiled_TerrainType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,tiled,TerrainType)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  TerrainType_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef TerrainType_obj OBJ_;
		TerrainType_obj();
		Void __construct(::String name,int tileId);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TerrainType_obj > __new(::String name,int tileId);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TerrainType_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TerrainType"); }

		::String name;
		int tileId;
};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_TerrainType */ 
