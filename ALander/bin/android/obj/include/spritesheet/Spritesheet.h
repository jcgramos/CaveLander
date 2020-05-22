#ifndef INCLUDED_spritesheet_Spritesheet
#define INCLUDED_spritesheet_Spritesheet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS2(flash,display,BitmapData)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(spritesheet,Spritesheet)
HX_DECLARE_CLASS2(spritesheet,data,BehaviorData)
HX_DECLARE_CLASS2(spritesheet,data,SpritesheetFrame)
namespace spritesheet{


class HXCPP_CLASS_ATTRIBUTES  Spritesheet_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Spritesheet_obj OBJ_;
		Spritesheet_obj();
		Void __construct(::flash::display::BitmapData image,Array< ::Dynamic > frames,::haxe::ds::StringMap behaviors,::flash::display::BitmapData imageAlpha);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Spritesheet_obj > __new(::flash::display::BitmapData image,Array< ::Dynamic > frames,::haxe::ds::StringMap behaviors,::flash::display::BitmapData imageAlpha);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Spritesheet_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Spritesheet"); }

		::haxe::ds::StringMap behaviors;
		::String name;
		int totalFrames;
		Array< ::Dynamic > frames;
		::flash::display::BitmapData sourceImage;
		::flash::display::BitmapData sourceImageAlpha;
		virtual Void addBehavior( ::spritesheet::data::BehaviorData behavior);
		Dynamic addBehavior_dyn();

		virtual Void addFrame( ::spritesheet::data::SpritesheetFrame frame);
		Dynamic addFrame_dyn();

		virtual Void generateBitmaps( );
		Dynamic generateBitmaps_dyn();

		virtual Void generateBitmap( int index);
		Dynamic generateBitmap_dyn();

		virtual ::spritesheet::data::SpritesheetFrame getFrame( int index,hx::Null< bool >  autoGenerate);
		Dynamic getFrame_dyn();

		virtual Array< int > getFrameIDs( );
		Dynamic getFrameIDs_dyn();

		virtual Array< ::Dynamic > getFrames( );
		Dynamic getFrames_dyn();

		virtual Array< int > merge( ::spritesheet::Spritesheet spritesheet);
		Dynamic merge_dyn();

		virtual Void updateImage( ::flash::display::BitmapData image,::flash::display::BitmapData imageAlpha);
		Dynamic updateImage_dyn();

};

} // end namespace spritesheet

#endif /* INCLUDED_spritesheet_Spritesheet */ 
