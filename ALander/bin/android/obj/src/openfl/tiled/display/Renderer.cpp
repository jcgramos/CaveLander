#include <hxcpp.h>

#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_tiled_ImageLayer
#include <openfl/tiled/ImageLayer.h>
#endif
#ifndef INCLUDED_openfl_tiled_Layer
#include <openfl/tiled/Layer.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledMap
#include <openfl/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_openfl_tiled_display_Renderer
#include <openfl/tiled/display/Renderer.h>
#endif
namespace openfl{
namespace tiled{
namespace display{

HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,setTiledMap,)

HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,drawLayer,)

HX_DEFINE_DYNAMIC_FUNC2(Renderer_obj,drawImageLayer,)

HX_DEFINE_DYNAMIC_FUNC1(Renderer_obj,clear,)


static ::String sMemberFields[] = {
	HX_CSTRING("setTiledMap"),
	HX_CSTRING("drawLayer"),
	HX_CSTRING("drawImageLayer"),
	HX_CSTRING("clear"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Renderer_obj::__mClass,"__mClass");
};

#endif

Class Renderer_obj::__mClass;

void Renderer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.tiled.display.Renderer"), hx::TCanCast< Renderer_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Renderer_obj::__boot()
{
}

} // end namespace openfl
} // end namespace tiled
} // end namespace display
