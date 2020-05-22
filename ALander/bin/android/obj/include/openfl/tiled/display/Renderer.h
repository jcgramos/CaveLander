#ifndef INCLUDED_openfl_tiled_display_Renderer
#define INCLUDED_openfl_tiled_display_Renderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,tiled,ImageLayer)
HX_DECLARE_CLASS2(openfl,tiled,Layer)
HX_DECLARE_CLASS2(openfl,tiled,TiledMap)
HX_DECLARE_CLASS3(openfl,tiled,display,Renderer)
namespace openfl{
namespace tiled{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  Renderer_obj : public hx::Interface{
	public:
		typedef hx::Interface super;
		typedef Renderer_obj OBJ_;
		HX_DO_INTERFACE_RTTI;
		static void __boot();
virtual Void setTiledMap( ::openfl::tiled::TiledMap map)=0;
		Dynamic setTiledMap_dyn();
virtual Void drawLayer( Dynamic on,::openfl::tiled::Layer layer)=0;
		Dynamic drawLayer_dyn();
virtual Void drawImageLayer( Dynamic on,::openfl::tiled::ImageLayer imageLayer)=0;
		Dynamic drawImageLayer_dyn();
virtual Void clear( Dynamic on)=0;
		Dynamic clear_dyn();
};

#define DELEGATE_openfl_tiled_display_Renderer \
virtual Void setTiledMap( ::openfl::tiled::TiledMap map) { return mDelegate->setTiledMap(map);}  \
virtual Dynamic setTiledMap_dyn() { return mDelegate->setTiledMap_dyn();}  \
virtual Void drawLayer( Dynamic on,::openfl::tiled::Layer layer) { return mDelegate->drawLayer(on,layer);}  \
virtual Dynamic drawLayer_dyn() { return mDelegate->drawLayer_dyn();}  \
virtual Void drawImageLayer( Dynamic on,::openfl::tiled::ImageLayer imageLayer) { return mDelegate->drawImageLayer(on,imageLayer);}  \
virtual Dynamic drawImageLayer_dyn() { return mDelegate->drawImageLayer_dyn();}  \
virtual Void clear( Dynamic on) { return mDelegate->clear(on);}  \
virtual Dynamic clear_dyn() { return mDelegate->clear_dyn();}  \


template<typename IMPL>
class Renderer_delegate_ : public Renderer_obj
{
	protected:
		IMPL *mDelegate;
	public:
		Renderer_delegate_(IMPL *inDelegate) : mDelegate(inDelegate) {}
		hx::Object *__GetRealObject() { return mDelegate; }
		void __Visit(HX_VISIT_PARAMS) { HX_VISIT_OBJECT(mDelegate); }
		DELEGATE_openfl_tiled_display_Renderer
};

} // end namespace openfl
} // end namespace tiled
} // end namespace display

#endif /* INCLUDED_openfl_tiled_display_Renderer */ 
