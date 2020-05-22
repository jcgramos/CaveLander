#ifndef INCLUDED_core_RotataingAnimatedSprite
#define INCLUDED_core_RotataingAnimatedSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <spritesheet/AnimatedSprite.h>
HX_DECLARE_CLASS1(core,RotataingAnimatedSprite)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(spritesheet,AnimatedSprite)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  RotataingAnimatedSprite_obj : public ::spritesheet::AnimatedSprite_obj{
	public:
		typedef ::spritesheet::AnimatedSprite_obj super;
		typedef RotataingAnimatedSprite_obj OBJ_;
		RotataingAnimatedSprite_obj();
		Void __construct(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< RotataingAnimatedSprite_obj > __new(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~RotataingAnimatedSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("RotataingAnimatedSprite"); }

		Float xloc;
		Float yloc;
		Float xcenter;
		Float ycenter;
		virtual Void rotate( Float angle);
		Dynamic rotate_dyn();

};

} // end namespace core

#endif /* INCLUDED_core_RotataingAnimatedSprite */ 
