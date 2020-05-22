#ifndef INCLUDED_Portico
#define INCLUDED_Portico

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Actor.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(Portico)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Portico_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef Portico_obj OBJ_;
		Portico_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Portico_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Portico_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Portico"); }

		Float timer;
		Float creationDelay;
		bool open;
		bool changing;
		Float xwidth;
		Float xheight;
		bool closed;
		virtual Void init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height);

		virtual Void update( int elapsedTime);

		virtual Void openNow( );
		Dynamic openNow_dyn();

		virtual Void destroy( );

		virtual Void changeState( );
		Dynamic changeState_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

};


#endif /* INCLUDED_Portico */ 
