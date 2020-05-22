#ifndef INCLUDED_Obstacle
#define INCLUDED_Obstacle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Actor.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(Obstacle)
HX_DECLARE_CLASS0(Scene)
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


class HXCPP_CLASS_ATTRIBUTES  Obstacle_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef Obstacle_obj OBJ_;
		Obstacle_obj();
		Void __construct(::String imageName);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Obstacle_obj > __new(::String imageName);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Obstacle_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Obstacle"); }

		Float verticalAceleration;
		Float horizontalAceleration;
		Float gravity;
		::core::RotataingAnimatedSprite image;
		::spritesheet::Spritesheet spritesheet;
		virtual Void init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height);

		virtual Void start( Dynamic hSpeed,Dynamic vSpeed);

		virtual Void update( int elapsedTime);

		virtual Void destroy( );

};


#endif /* INCLUDED_Obstacle */ 
