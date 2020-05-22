#ifndef INCLUDED_SpaceShip
#define INCLUDED_SpaceShip

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Actor.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS0(SpaceShip)
HX_DECLARE_CLASS1(boards,SpaceShipBoard)
HX_DECLARE_CLASS1(core,RotataingAnimatedSprite)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,AccelerometerEvent)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)
HX_DECLARE_CLASS2(flash,events,MouseEvent)
HX_DECLARE_CLASS2(flash,events,TouchEvent)
HX_DECLARE_CLASS1(spritesheet,AnimatedSprite)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)


class HXCPP_CLASS_ATTRIBUTES  SpaceShip_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef SpaceShip_obj OBJ_;
		SpaceShip_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SpaceShip_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpaceShip_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpaceShip"); }

		::boards::SpaceShipBoard spaceshipboard;
		Float verticalAceleration;
		Float horizontalAceleration;
		Float angle;
		bool enginePower;
		bool turnLeft;
		bool turnRight;
		Float engineAceleration;
		Float gravity;
		::core::RotataingAnimatedSprite animated;
		::spritesheet::Spritesheet spritesheet;
		bool dead;
		bool land;
		Float fuel;
		Float hscreen;
		Float vscreen;
		Float timerAngle;
		Float startPoint;
		bool success;
		bool takinoff;
		virtual bool isDead( );
		Dynamic isDead_dyn();

		virtual bool isLand( );
		Dynamic isLand_dyn();

		virtual Float getFuel( );
		Dynamic getFuel_dyn();

		virtual bool isSuccess( );
		Dynamic isSuccess_dyn();

		virtual Void init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height);

		virtual Void clear( );

		virtual Void update( int elapsedTime);

		virtual Void scrollWindow( );
		Dynamic scrollWindow_dyn();

		virtual Void putInStart( );
		Dynamic putInStart_dyn();

		virtual bool checkLanding( );
		Dynamic checkLanding_dyn();

		virtual Void destroy( );

		virtual Void keyPressed( ::flash::events::KeyboardEvent event);
		Dynamic keyPressed_dyn();

		virtual Void keyReleased( ::flash::events::KeyboardEvent event);
		Dynamic keyReleased_dyn();

		virtual Void touchBegin( ::flash::events::TouchEvent event);
		Dynamic touchBegin_dyn();

		virtual Void touchEnd( ::flash::events::TouchEvent event);
		Dynamic touchEnd_dyn();

		virtual Void updateAccelerometer( ::flash::events::AccelerometerEvent event);
		Dynamic updateAccelerometer_dyn();

};


#endif /* INCLUDED_SpaceShip */ 
