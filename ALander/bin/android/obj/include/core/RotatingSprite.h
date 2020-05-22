#ifndef INCLUDED_core_RotatingSprite
#define INCLUDED_core_RotatingSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS1(core,RotatingSprite)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  RotatingSprite_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef RotatingSprite_obj OBJ_;
		RotatingSprite_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RotatingSprite_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RotatingSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("RotatingSprite"); }

		Float xloc;
		Float yloc;
		Float xcenter;
		Float ycenter;
		virtual Void rotate( Float angle);
		Dynamic rotate_dyn();

};

} // end namespace core

#endif /* INCLUDED_core_RotatingSprite */ 
