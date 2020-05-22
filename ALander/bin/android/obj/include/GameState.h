#ifndef INCLUDED_GameState
#define INCLUDED_GameState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(GameState)
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


class HXCPP_CLASS_ATTRIBUTES  GameState_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef GameState_obj OBJ_;
		GameState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GameState"); }

		virtual Void enter( );
		Dynamic enter_dyn();

		virtual Void exit( );
		Dynamic exit_dyn();

		virtual Void pause( );
		Dynamic pause_dyn();

		virtual Void resume( );
		Dynamic resume_dyn();

		virtual Void keyPressed( ::flash::events::KeyboardEvent event);
		Dynamic keyPressed_dyn();

		virtual Void keyReleased( ::flash::events::KeyboardEvent event);
		Dynamic keyReleased_dyn();

		virtual Void mouseClicked( ::flash::events::MouseEvent event);
		Dynamic mouseClicked_dyn();

		virtual Void frameStarted( ::flash::events::Event event);
		Dynamic frameStarted_dyn();

		virtual Void frameEnded( ::flash::events::Event event);
		Dynamic frameEnded_dyn();

		virtual Void pushState( ::GameState state);
		Dynamic pushState_dyn();

		virtual Void popState( );
		Dynamic popState_dyn();

};


#endif /* INCLUDED_GameState */ 
