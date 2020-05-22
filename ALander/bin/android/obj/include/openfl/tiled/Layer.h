#ifndef INCLUDED_openfl_tiled_Layer
#define INCLUDED_openfl_tiled_Layer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(flash,display,DisplayObject)
HX_DECLARE_CLASS2(flash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(flash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(flash,display,InteractiveObject)
HX_DECLARE_CLASS2(flash,display,Sprite)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,utils,ByteArray)
HX_DECLARE_CLASS2(flash,utils,IDataInput)
HX_DECLARE_CLASS2(flash,utils,IDataOutput)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,tiled,Layer)
HX_DECLARE_CLASS2(openfl,tiled,Tile)
HX_DECLARE_CLASS2(openfl,tiled,TiledMap)
HX_DECLARE_CLASS2(openfl,utils,IMemoryRange)
namespace openfl{
namespace tiled{


class HXCPP_CLASS_ATTRIBUTES  Layer_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Layer_obj OBJ_;
		Layer_obj();
		Void __construct(::openfl::tiled::TiledMap parent,::String name,int width,int height,Float opacity,bool visible,Array< int > tiles);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Layer_obj > __new(::openfl::tiled::TiledMap parent,::String name,int width,int height,Float opacity,bool visible,Array< int > tiles);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Layer_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Layer"); }

		::String name;
		int width;
		int height;
		Float opacity;
		bool visible;
		Array< ::Dynamic > tiles;
		::openfl::tiled::TiledMap parent;
		virtual ::String toCSV( Dynamic width);
		Dynamic toCSV_dyn();

		static ::openfl::tiled::Layer fromGenericXml( ::Xml xml,::openfl::tiled::TiledMap parent);
		static Dynamic fromGenericXml_dyn();

		static Array< int > csvToArray( ::String input);
		static Dynamic csvToArray_dyn();

		static Array< int > base64ToArray( ::String chunk,int lineWidth,bool compressed);
		static Dynamic base64ToArray_dyn();

		static ::String BASE64_CHARS;
		static ::flash::utils::ByteArray base64ToByteArray( ::String data);
		static Dynamic base64ToByteArray_dyn();

};

} // end namespace openfl
} // end namespace tiled

#endif /* INCLUDED_openfl_tiled_Layer */ 
