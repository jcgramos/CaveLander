#ifndef INCLUDED_GameManager
#define INCLUDED_GameManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(GameManager)
HX_DECLARE_CLASS0(GameState)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  GameManager_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GameManager_obj OBJ_;
		GameManager_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameManager_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameManager_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("GameManager"); }

		Array< ::Dynamic > states;
		::GameState currstate;
		Float gameWidth;
		Float gameHeight;
		int lives;
		Float points;
		int nivel;
		virtual Void setNivel( int nivel);
		Dynamic setNivel_dyn();

		virtual Void addNivel( );
		Dynamic addNivel_dyn();

		virtual int getNivel( );
		Dynamic getNivel_dyn();

		virtual Void setLives( int lives);
		Dynamic setLives_dyn();

		virtual Void removeLive( );
		Dynamic removeLive_dyn();

		virtual int getLives( );
		Dynamic getLives_dyn();

		virtual Void setPoints( Float points);
		Dynamic setPoints_dyn();

		virtual Void addPoints( Float points);
		Dynamic addPoints_dyn();

		virtual Float getPoints( );
		Dynamic getPoints_dyn();

		virtual Float getGameWidth( );
		Dynamic getGameWidth_dyn();

		virtual Float getGameHeight( );
		Dynamic getGameHeight_dyn();

		virtual Void start( ::GameState state);
		Dynamic start_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void pushState( ::GameState state);
		Dynamic pushState_dyn();

		virtual Void popState( );
		Dynamic popState_dyn();

		static ::GameManager instance;
		static ::GameManager getInstance( );
		static Dynamic getInstance_dyn();

};


#endif /* INCLUDED_GameManager */ 
