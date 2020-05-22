#ifndef INCLUDED_ui_TextButon
#define INCLUDED_ui_TextButon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flash/display/Sprite.h>
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,text,TextField)
HX_DECLARE_CLASS2(flash,text,TextFormat)
HX_DECLARE_CLASS1(ui,TextButon)
namespace ui{


class HXCPP_CLASS_ATTRIBUTES  TextButon_obj : public ::flash::display::Sprite_obj{
	public:
		typedef ::flash::display::Sprite_obj super;
		typedef TextButon_obj OBJ_;
		TextButon_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< TextButon_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextButon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("TextButon"); }

		::flash::text::TextField _label;
		::flash::text::TextFormat tbFormat;
		virtual Void onTap( Dynamic ontap);
		Dynamic onTap_dyn();

		virtual ::String getText( );
		Dynamic getText_dyn();

		virtual ::String setText( ::String value);
		Dynamic setText_dyn();

		virtual int getColor( );
		Dynamic getColor_dyn();

		virtual int setColor( int value);
		Dynamic setColor_dyn();

		virtual Float getSize( );
		Dynamic getSize_dyn();

		virtual Float setSize( Float value);
		Dynamic setSize_dyn();

};

} // end namespace ui

#endif /* INCLUDED_ui_TextButon */ 
