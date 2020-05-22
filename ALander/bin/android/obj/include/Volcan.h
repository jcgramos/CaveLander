#ifndef INCLUDED_Volcan
#define INCLUDED_Volcan

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Actor.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS0(Volcan)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(spritesheet,AnimatedSprite)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)


class HXCPP_CLASS_ATTRIBUTES  Volcan_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef Volcan_obj OBJ_;
		Volcan_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Volcan_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Volcan_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Volcan"); }

		int seconds;
		Float timer;
		Float creationDelay;
		::spritesheet::Spritesheet spritesheet;
		::spritesheet::AnimatedSprite fire;
		Float force;
		virtual Void init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height);

		virtual Void update( int elapsedTime);

		virtual Void setMaxForce( Float force);
		Dynamic setMaxForce_dyn();

		virtual Void launchObstacle( );
		Dynamic launchObstacle_dyn();

};


#endif /* INCLUDED_Volcan */ 
