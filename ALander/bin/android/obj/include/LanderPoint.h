#ifndef INCLUDED_LanderPoint
#define INCLUDED_LanderPoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Actor.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(LanderPoint)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  LanderPoint_obj : public ::Actor_obj{
	public:
		typedef ::Actor_obj super;
		typedef LanderPoint_obj OBJ_;
		LanderPoint_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< LanderPoint_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~LanderPoint_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("LanderPoint"); }

		bool target;
		bool startPoint;
		virtual Void setTarget( bool target);
		Dynamic setTarget_dyn();

		virtual bool isTarget( );
		Dynamic isTarget_dyn();

		virtual Void setStartPoint( bool startPoint);
		Dynamic setStartPoint_dyn();

		virtual bool isStartPoint( );
		Dynamic isStartPoint_dyn();

		virtual Void init( ::Scene _tmp_sprite,Float x,Float y,Dynamic width,Dynamic height);

};


#endif /* INCLUDED_LanderPoint */ 
