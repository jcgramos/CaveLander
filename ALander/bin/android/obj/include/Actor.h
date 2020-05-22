#ifndef INCLUDED_Actor
#define INCLUDED_Actor

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Actor_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Actor_obj OBJ_;
		Actor_obj();
		Void __construct(Dynamic __o_collisionable);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Actor_obj > __new(Dynamic __o_collisionable);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Actor_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Actor"); }

		::Scene scene;
		::String type;
		bool collisionable;
		virtual Void update( int elapsedTime);
		Dynamic update_dyn();

		virtual Void init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height);
		Dynamic init_dyn();

		virtual Void start( Dynamic hSpeed,Dynamic vSpeed);
		Dynamic start_dyn();

		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void destroy( );
		Dynamic destroy_dyn();

};


#endif /* INCLUDED_Actor */ 
