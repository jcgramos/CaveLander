#ifndef INCLUDED_spritesheet_data_SpritesheetFrame
#define INCLUDED_spritesheet_data_SpritesheetFrame

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(spritesheet,data,SpritesheetFrame)
namespace spritesheet{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  SpritesheetFrame_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef SpritesheetFrame_obj OBJ_;
		SpritesheetFrame_obj();
		Void __construct(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SpritesheetFrame_obj > __new(hx::Null< int >  __o_x,hx::Null< int >  __o_y,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SpritesheetFrame_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SpritesheetFrame"); }

		::flash::display::BitmapData bitmapData;
		int height;
		int offsetX;
		int offsetY;
		int width;
		int x;
		int y;
};

} // end namespace spritesheet
} // end namespace data

#endif /* INCLUDED_spritesheet_data_SpritesheetFrame */ 
