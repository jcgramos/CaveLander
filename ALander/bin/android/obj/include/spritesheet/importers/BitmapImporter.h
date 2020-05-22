#ifndef INCLUDED_spritesheet_importers_BitmapImporter
#define INCLUDED_spritesheet_importers_BitmapImporter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)
HX_DECLARE_CLASS2(spritesheet,importers,BitmapImporter)
namespace spritesheet{
namespace importers{


class HXCPP_CLASS_ATTRIBUTES  BitmapImporter_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BitmapImporter_obj OBJ_;
		BitmapImporter_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BitmapImporter_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapImporter_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("BitmapImporter"); }

		static ::spritesheet::Spritesheet create( ::flash::display::BitmapData bitmapData,int columns,int rows,int tileWidth,int tileHeight,hx::Null< int >  adjustLength,hx::Null< Float >  scale);
		static Dynamic create_dyn();

};

} // end namespace spritesheet
} // end namespace importers

#endif /* INCLUDED_spritesheet_importers_BitmapImporter */ 
