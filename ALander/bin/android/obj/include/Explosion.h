#ifndef INCLUDED_Explosion
#define INCLUDED_Explosion

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Actor.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(Explosion)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS1(spritesheet,AnimatedSprite)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)


class HXCPP_CLASS_ATTRIBUTES  Explosion_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef Explosion_obj OBJ_;
		Explosion_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Explosion_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Explosion_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Explosion"); }

		::spritesheet::AnimatedSprite animated;
		::spritesheet::Spritesheet spritesheet;
		int previousTime;
		virtual Void init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height);

		virtual Void update( int elapsedTime);

};


#endif /* INCLUDED_Explosion */ 
