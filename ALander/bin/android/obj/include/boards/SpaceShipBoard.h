#ifndef INCLUDED_boards_SpaceShipBoard
#define INCLUDED_boards_SpaceShipBoard

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS0(Scene)
HX_DECLARE_CLASS1(boards,SpaceShipBoard)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(flash,text,TextFormat)
namespace boards{


class HXCPP_CLASS_ATTRIBUTES  SpaceShipBoard_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef SpaceShipBoard_obj OBJ_;
		SpaceShipBoard_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SpaceShipBoard_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpaceShipBoard_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpaceShipBoard"); }

		::flash::text::TextField label;
		::flash::text::TextFormat textFormat;
		::Scene scene;
		Float startX;
		Float startY;
		virtual Void init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height);
		Dynamic init_dyn();

		virtual Void setFuel( ::Scene scene,Dynamic fuel);
		Dynamic setFuel_dyn();

		virtual Void exit( );
		Dynamic exit_dyn();

};

} // end namespace boards

#endif /* INCLUDED_boards_SpaceShipBoard */ 
