#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_BlendMode
#include <flash/display/BlendMode.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_geom_ColorTransform
#include <flash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_flash_geom_Matrix
#include <flash/geom/Matrix.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_spritesheet_Spritesheet
#include <spritesheet/Spritesheet.h>
#endif
#ifndef INCLUDED_spritesheet_data_SpritesheetFrame
#include <spritesheet/data/SpritesheetFrame.h>
#endif
#ifndef INCLUDED_spritesheet_importers_BitmapImporter
#include <spritesheet/importers/BitmapImporter.h>
#endif
namespace spritesheet{
namespace importers{

Void BitmapImporter_obj::__construct()
{
	return null();
}

//BitmapImporter_obj::~BitmapImporter_obj() { }

Dynamic BitmapImporter_obj::__CreateEmpty() { return  new BitmapImporter_obj; }
hx::ObjectPtr< BitmapImporter_obj > BitmapImporter_obj::__new()
{  hx::ObjectPtr< BitmapImporter_obj > result = new BitmapImporter_obj();
	result->__construct();
	return result;}

Dynamic BitmapImporter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapImporter_obj > result = new BitmapImporter_obj();
	result->__construct();
	return result;}

::spritesheet::Spritesheet BitmapImporter_obj::create( ::flash::display::BitmapData bitmapData,int columns,int rows,int tileWidth,int tileHeight,hx::Null< int >  __o_adjustLength,hx::Null< Float >  __o_scale){
int adjustLength = __o_adjustLength.Default(0);
Float scale = __o_scale.Default(1);
	HX_STACK_FRAME("spritesheet.importers.BitmapImporter","create",0xf6fca888,"spritesheet.importers.BitmapImporter.create","spritesheet/importers/BitmapImporter.hx",16,0xd32fb11a)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_ARG(columns,"columns")
	HX_STACK_ARG(rows,"rows")
	HX_STACK_ARG(tileWidth,"tileWidth")
	HX_STACK_ARG(tileHeight,"tileHeight")
	HX_STACK_ARG(adjustLength,"adjustLength")
	HX_STACK_ARG(scale,"scale")
{
		HX_STACK_LINE(18)
		Array< ::Dynamic > frames = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(frames,"frames");
		HX_STACK_LINE(19)
		int totalLength = ((rows * columns) + adjustLength);		HX_STACK_VAR(totalLength,"totalLength");
		HX_STACK_LINE(21)
		{
			HX_STACK_LINE(21)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(21)
			while(((_g < rows))){
				HX_STACK_LINE(21)
				int row = (_g)++;		HX_STACK_VAR(row,"row");
				HX_STACK_LINE(23)
				{
					HX_STACK_LINE(23)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(23)
					while(((_g1 < columns))){
						HX_STACK_LINE(23)
						int column = (_g1)++;		HX_STACK_VAR(column,"column");
						HX_STACK_LINE(25)
						if (((frames->length < totalLength))){
							HX_STACK_LINE(27)
							int x = (tileWidth * column);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(28)
							int y = (tileHeight * row);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(29)
							::spritesheet::data::SpritesheetFrame frame = ::spritesheet::data::SpritesheetFrame_obj::__new(x,y,tileWidth,tileHeight,(int)0,(int)0);		HX_STACK_VAR(frame,"frame");
							HX_STACK_LINE(31)
							if (((scale != (int)1))){
								HX_STACK_LINE(33)
								::flash::display::BitmapData sourceBitmapData = ::flash::display::BitmapData_obj::__new(tileWidth,tileHeight,true,(int)0,null());		HX_STACK_VAR(sourceBitmapData,"sourceBitmapData");
								HX_STACK_LINE(34)
								::flash::geom::Rectangle _g2 = ::flash::geom::Rectangle_obj::__new(x,y,tileWidth,tileHeight);		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(34)
								sourceBitmapData->copyPixels(bitmapData,_g2,::flash::geom::Point_obj::__new(null(),null()),null(),null(),null());
								HX_STACK_LINE(36)
								::flash::display::Bitmap bitmap = ::flash::display::Bitmap_obj::__new(sourceBitmapData,null(),null());		HX_STACK_VAR(bitmap,"bitmap");
								HX_STACK_LINE(37)
								bitmap->set_smoothing(true);
								HX_STACK_LINE(39)
								::flash::geom::Matrix matrix = ::flash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(matrix,"matrix");
								HX_STACK_LINE(40)
								matrix->scale(scale,scale);
								HX_STACK_LINE(42)
								int _g11 = ::Math_obj::round((tileWidth * scale));		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(42)
								::flash::display::BitmapData bitmapData1 = ::flash::display::BitmapData_obj::__new(_g11,::Math_obj::round((tileHeight * scale)),true,(int)0,null());		HX_STACK_VAR(bitmapData1,"bitmapData1");
								HX_STACK_LINE(43)
								bitmapData1->draw(bitmap,matrix,null(),null(),null(),null());
								HX_STACK_LINE(44)
								frame->bitmapData = bitmapData1;
							}
							HX_STACK_LINE(48)
							frames->push(frame);
						}
					}
				}
			}
		}
		HX_STACK_LINE(56)
		while(((frames->length < totalLength))){
			HX_STACK_LINE(58)
			frames->push(::spritesheet::data::SpritesheetFrame_obj::__new(null(),null(),null(),null(),null(),null()));
		}
		HX_STACK_LINE(62)
		return ::spritesheet::Spritesheet_obj::__new(bitmapData,frames,null(),null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(BitmapImporter_obj,create,return )


BitmapImporter_obj::BitmapImporter_obj()
{
}

Dynamic BitmapImporter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BitmapImporter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapImporter_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("create"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapImporter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapImporter_obj::__mClass,"__mClass");
};

#endif

Class BitmapImporter_obj::__mClass;

void BitmapImporter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spritesheet.importers.BitmapImporter"), hx::TCanCast< BitmapImporter_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void BitmapImporter_obj::__boot()
{
}

} // end namespace spritesheet
} // end namespace importers
