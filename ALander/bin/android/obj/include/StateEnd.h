#ifndef INCLUDED_StateEnd
#define INCLUDED_StateEnd

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <GameState.h>
HX_DECLARE_CLASS0(GameState)
HX_DECLARE_CLASS0(StateEnd)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,events,KeyboardEvent)


class HXCPP_CLASS_ATTRIBUTES  StateEnd_obj : public ::GameState_obj{
	public:
		typedef ::GameState_obj super;
		typedef StateEnd_obj OBJ_;
		StateEnd_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< StateEnd_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StateEnd_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("StateEnd"); }

		virtual Void enter( );

		virtual Void exit( );

		virtual Void btnPlay_Tap( Dynamic event);
		Dynamic btnPlay_Tap_dyn();

		virtual Void btnPremium_Tap( Dynamic event);
		Dynamic btnPremium_Tap_dyn();

		virtual Void keyReleased( ::flash::events::KeyboardEvent event);

};


#endif /* INCLUDED_StateEnd */ 
