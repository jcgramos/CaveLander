#ifndef INCLUDED_StartGame
#define INCLUDED_StartGame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameState.h>
HX_DECLARE_CLASS0(GameState)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS0(StartGame)
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


class HXCPP_CLASS_ATTRIBUTES  StartGame_obj : public ::GameState_obj{
	public:
		typedef ::GameState_obj super;
		typedef StartGame_obj OBJ_;
		StartGame_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StartGame_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StartGame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StartGame"); }

		::Scene scene;
		int previousTime;
		virtual Void enter( );

		virtual Void show( );
		Dynamic show_dyn();

		virtual Void exit( );

		virtual Void looop( int elapsedTime);
		Dynamic looop_dyn();

		virtual Void frameStarted( ::flash::events::Event event);

		virtual Void btnPlay_Tap( Dynamic event);
		Dynamic btnPlay_Tap_dyn();

		virtual Void btnExit_Tap( Dynamic event);
		Dynamic btnExit_Tap_dyn();

		virtual Void keyPressed( ::flash::events::KeyboardEvent event);

		virtual Void keyReleased( ::flash::events::KeyboardEvent event);

		virtual Void touchBegin( ::flash::events::TouchEvent event);
		Dynamic touchBegin_dyn();

};


#endif /* INCLUDED_StartGame */ 
