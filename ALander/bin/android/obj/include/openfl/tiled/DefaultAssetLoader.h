#ifndef INCLUDED_openfl_tiled_DefaultAssetLoader
#define INCLUDED_openfl_tiled_DefaultAssetLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <openfl/tiled/AssetLoader.h>
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,tiled,AssetLoader)
HX_DECLARE_CLASS2(openfl,tiled,DefaultAssetLoader)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  DefaultAssetLoader_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DefaultAssetLoader_obj OBJ_;
		DefaultAssetLoader_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DefaultAssetLoader_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DefaultAssetLoader_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		inline operator ::openfl::tiled::AssetLoader_obj *()
			{ return new ::openfl::tiled::AssetLoader_delegate_< DefaultAssetLoader_obj >(this); }
		hx::Object *__ToInterface(const hx::type_info &inType);
		::String __ToString() const { return HX_CSTRING("DefaultAssetLoader"); }

		virtual ::String getText( ::String assetPath);
		Dynamic getText_dyn();

		virtual ::flash::display::BitmapData getBitmapData( ::String assetPath);
		Dynamic getBitmapData_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_DefaultAssetLoader */ 
