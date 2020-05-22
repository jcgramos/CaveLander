#ifndef INCLUDED_openfl_tiled_AssetLoader
#define INCLUDED_openfl_tiled_AssetLoader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,tiled,AssetLoader)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  AssetLoader_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef AssetLoader_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual ::String getText( ::String assetPath)=0;
		Dynamic getText_dyn();
virtual ::flash::display::BitmapData getBitmapData( ::String assetPath)=0;
		Dynamic getBitmapData_dyn();
};

#define DELEGATE_openfl_tiled_AssetLoader \
virtual ::String getText( ::String assetPath) { return mDelegate->getText(assetPath);}  \
virtual Dynamic getText_dyn() { return mDelegate->getText_dyn();}  \
virtual ::flash::display::BitmapData getBitmapData( ::String assetPath) { return mDelegate->getBitmapData(assetPath);}  \
virtual Dynamic getBitmapData_dyn() { return mDelegate->getBitmapData_dyn();}  \


template<typename IMPL>
class AssetLoader_delegate_ : public AssetLoader_obj
{
	protected:
		IMPL *mDelegate;
	public:
		AssetLoader_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl_tiled_AssetLoader
};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_AssetLoader */ 
