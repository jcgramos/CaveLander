#ifndef INCLUDED_openfl_tiled_PropertyTile
#define INCLUDED_openfl_tiled_PropertyTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(openfl,tiled,PropertyTile)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  PropertyTile_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef PropertyTile_obj OBJ_;
		PropertyTile_obj();
		Void __construct(int id,::haxe::ds::StringMap properties);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PropertyTile_obj > __new(int id,::haxe::ds::StringMap properties);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PropertyTile_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PropertyTile"); }

		int id;
		::haxe::ds::StringMap properties;
};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_PropertyTile */ 
