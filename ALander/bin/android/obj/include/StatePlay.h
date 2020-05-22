#ifndef INCLUDED_StatePlay
#define INCLUDED_StatePlay

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameState.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(GameState)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS0(SpaceShip)
HX_DECLARE_CLASS0(StatePlay)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,AccelerometerEvent)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,FocusEvent)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
HX_DECLARE_CLASS2(flash,sensors,Accelerometer)


class HXCPP_CLASS_ATTRIBUTES  StatePlay_obj : public ::GameState_obj{
	public:
		typedef ::GameState_obj super;
		typedef StatePlay_obj OBJ_;
		StatePlay_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StatePlay_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StatePlay_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("StatePlay"); }

		::SpaceShip spaceShip;
		::Scene scene;
		int previousTime;
		::flash::sensors::Accelerometer accelerometer;
		int nivel;
		virtual Void resize( Dynamic e);
		Dynamic resize_dyn();

		virtual Void enter( );

		virtual Void exit( );

		virtual Void nextLevel( );
		Dynamic nextLevel_dyn();

		virtual Void endLife( );
		Dynamic endLife_dyn();

		virtual Void newLife( );
		Dynamic newLife_dyn();

		virtual Void looop( int elapsedTime);
		Dynamic looop_dyn();

		virtual Void frameStarted( ::flash::events::Event event);

		virtual Void keyPressed( ::flash::events::KeyboardEvent event);

		virtual Void keyReleased( ::flash::events::KeyboardEvent event);

		virtual Void focusOut( ::flash::events::FocusEvent event);
		Dynamic focusOut_dyn();

		virtual Void touchBegin( ::flash::events::TouchEvent event);
		Dynamic touchBegin_dyn();

		virtual Void touchEnd( ::flash::events::TouchEvent event);
		Dynamic touchEnd_dyn();

		virtual Void updateAccelerometer( ::flash::events::AccelerometerEvent event);
		Dynamic updateAccelerometer_dyn();

};


#endif /* INCLUDED_StatePlay */ 
