#ifndef INCLUDED_spritesheet_AnimatedSprite
#define INCLUDED_spritesheet_AnimatedSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,Bitmap)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(spritesheet,AnimatedSprite)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)
HX_DECLARE_CLASS2(spritesheet,data,BehaviorData)
namespace spritesheet{


class HXCPP_CLASS_ATTRIBUTES  AnimatedSprite_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef AnimatedSprite_obj OBJ_;
		AnimatedSprite_obj();
		Void __construct(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AnimatedSprite_obj > __new(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AnimatedSprite_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AnimatedSprite"); }

		::flash::display::Bitmap bitmap;
		::spritesheet::data::BehaviorData currentBehavior;
		int currentFrameIndex;
		bool smoothing;
		::spritesheet::Spritesheet spritesheet;
		bool behaviorComplete;
		Array< ::Dynamic > behaviorQueue;
		::spritesheet::data::BehaviorData behavior;
		int loopTime;
		int timeElapsed;
		virtual Dynamic getFrameData( int index);
		Dynamic getFrameData_dyn();

		virtual Void queueBehavior( Dynamic behavior);
		Dynamic queueBehavior_dyn();

		virtual ::spritesheet::data::BehaviorData resolveBehavior( Dynamic behavior);
		Dynamic resolveBehavior_dyn();

		virtual Void showBehavior( Dynamic behavior,hx::Null< bool >  restart);
		Dynamic showBehavior_dyn();

		virtual Void showBehaviors( Dynamic behaviors);
		Dynamic showBehaviors_dyn();

		virtual Void update( int deltaTime);
		Dynamic update_dyn();

		virtual Void updateBehavior( ::spritesheet::data::BehaviorData behavior,hx::Null< bool >  restart);
		Dynamic updateBehavior_dyn();

};

} // end namespace spritesheet

#endif /* INCLUDED_spritesheet_AnimatedSprite */ 
