#ifndef INCLUDED_Wheeel
#define INCLUDED_Wheeel

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Actor.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS0(Wheeel)
HX_DECLARE_CLASS1(core,RotatingSprite)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Wheeel_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef Wheeel_obj OBJ_;
		Wheeel_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Wheeel_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Wheeel_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Wheeel"); }

		Float timer;
		Float actionDelay;
		::core::RotatingSprite lineH;
		Float angle;
		virtual Void init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height);

		virtual Void update( int elapsedTime);

		virtual Void destroy( );

};


#endif /* INCLUDED_Wheeel */ 
