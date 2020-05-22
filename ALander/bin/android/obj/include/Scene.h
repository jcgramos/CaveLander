#ifndef INCLUDED_Scene
#define INCLUDED_Scene

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(Actor)
HX_DECLARE_CLASS0(LanderPoint)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,geom,Point)
HX_DECLARE_CLASS2(openfl,tiled,TiledMap)


class HXCPP_CLASS_ATTRIBUTES  Scene_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef Scene_obj OBJ_;
		Scene_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Scene_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Scene_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Scene"); }

		::Actor player;
		::List targets;
		::List actors;
		::openfl::tiled::TiledMap map;
		::flash::geom::Point gravityOrigen;
		virtual Void setPlayer( ::Actor player);
		Dynamic setPlayer_dyn();

		virtual ::Actor getPlayer( );
		Dynamic getPlayer_dyn();

		virtual Void addTarget( ::LanderPoint actor);
		Dynamic addTarget_dyn();

		virtual Void addActor( ::Actor actor);
		Dynamic addActor_dyn();

		virtual Void removeActor( ::Actor actor);
		Dynamic removeActor_dyn();

		virtual ::List getTargets( );
		Dynamic getTargets_dyn();

		virtual Void start( ::flash::display::Sprite sprite);
		Dynamic start_dyn();

		virtual Void exit( ::flash::display::Sprite sprite);
		Dynamic exit_dyn();

		virtual Void update( int elapsedTime);
		Dynamic update_dyn();

		virtual bool checkBackgroundCollision( ::Actor actor,Float hSpeed,Float vSpeed);
		Dynamic checkBackgroundCollision_dyn();

		virtual bool checkCollision( ::Actor actor,Float hSpeed,Float vSpeed);
		Dynamic checkCollision_dyn();

		virtual ::Actor getActorByName( ::String name);
		Dynamic getActorByName_dyn();

		virtual Void loadSpecialObjects( );
		Dynamic loadSpecialObjects_dyn();

		static ::Scene load( int level);
		static Dynamic load_dyn();

};


#endif /* INCLUDED_Scene */ 
