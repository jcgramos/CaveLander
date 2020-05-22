#ifndef INCLUDED_StatePause
#define INCLUDED_StatePause

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameState.h>
HX_DECLARE_CLASS0(GameState)
HX_DECLARE_CLASS0(StatePause)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)


class HXCPP_CLASS_ATTRIBUTES  StatePause_obj : public ::GameState_obj{
	public:
		typedef ::GameState_obj super;
		typedef StatePause_obj OBJ_;
		StatePause_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StatePause_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StatePause_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("StatePause"); }

		virtual Void enter( );

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void exit( );

		virtual Void keyPressed( ::flash::events::KeyboardEvent event);

		virtual Void touchBegin( ::flash::events::TouchEvent event);
		Dynamic touchBegin_dyn();

		virtual Void keyReleased( ::flash::events::KeyboardEvent event);

};


#endif /* INCLUDED_StatePause */ 
