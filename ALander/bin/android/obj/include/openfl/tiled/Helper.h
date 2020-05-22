#ifndef INCLUDED_openfl_tiled_Helper
#define INCLUDED_openfl_tiled_Helper

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,tiled,AssetLoader)
HX_DECLARE_CLASS2(openfl,tiled,Helper)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  Helper_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Helper_obj OBJ_;
		Helper_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Helper_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Helper_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Helper"); }

		static ::openfl::tiled::AssetLoader assetLoader;
		static bool isValidElement( ::Xml element);
		static Dynamic isValidElement_dyn();

		static Void setAssetLoader( ::openfl::tiled::AssetLoader assetLoader);
		static Dynamic setAssetLoader_dyn();

		static ::String getText( ::String assetPath,::String prefix);
		static Dynamic getText_dyn();

		static ::flash::display::BitmapData getBitmapData( ::String assetPath,::String prefix);
		static Dynamic getBitmapData_dyn();

		static ::String joinPath( ::String path1,::String path2);
		static Dynamic joinPath_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_Helper */ 
