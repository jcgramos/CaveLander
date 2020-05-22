#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
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
#ifndef INCLUDED_spritesheet_Spritesheet
#include <spritesheet/Spritesheet.h>
#endif
#ifndef INCLUDED_spritesheet_data_BehaviorData
#include <spritesheet/data/BehaviorData.h>
#endif
#ifndef INCLUDED_spritesheet_data_SpritesheetFrame
#include <spritesheet/data/SpritesheetFrame.h>
#endif
namespace spritesheet{

Void Spritesheet_obj::__construct(::flash::display::BitmapData image,Array< ::Dynamic > frames,::haxe::ds::StringMap behaviors,::flash::display::BitmapData imageAlpha)
{
HX_STACK_FRAME("spritesheet.Spritesheet","new",0x02508e58,"spritesheet.Spritesheet.new","spritesheet/Spritesheet.hx",23,0x514323d9)

HX_STACK_ARG(image,"image")

HX_STACK_ARG(frames,"frames")

HX_STACK_ARG(behaviors,"behaviors")

HX_STACK_ARG(imageAlpha,"imageAlpha")
{
	HX_STACK_LINE(25)
	this->sourceImage = image;
	HX_STACK_LINE(26)
	this->sourceImageAlpha = imageAlpha;
	HX_STACK_LINE(28)
	if (((frames == null()))){
		HX_STACK_LINE(30)
		this->frames = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(31)
		this->totalFrames = (int)0;
	}
	else{
		HX_STACK_LINE(35)
		this->frames = frames;
		HX_STACK_LINE(36)
		this->totalFrames = frames->length;
	}
	HX_STACK_LINE(40)
	if (((behaviors == null()))){
		HX_STACK_LINE(42)
		this->behaviors = ::haxe::ds::StringMap_obj::__new();
	}
	else{
		HX_STACK_LINE(46)
		this->behaviors = behaviors;
	}
}
;
	return null();
}

//Spritesheet_obj::~Spritesheet_obj() { }

Dynamic Spritesheet_obj::__CreateEmpty() { return  new Spritesheet_obj; }
hx::ObjectPtr< Spritesheet_obj > Spritesheet_obj::__new(::flash::display::BitmapData image,Array< ::Dynamic > frames,::haxe::ds::StringMap behaviors,::flash::display::BitmapData imageAlpha)
{  hx::ObjectPtr< Spritesheet_obj > result = new Spritesheet_obj();
	result->__construct(image,frames,behaviors,imageAlpha);
	return result;}

Dynamic Spritesheet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Spritesheet_obj > result = new Spritesheet_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Spritesheet_obj::addBehavior( ::spritesheet::data::BehaviorData behavior){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","addBehavior",0x2e4e3dcb,"spritesheet.Spritesheet.addBehavior","spritesheet/Spritesheet.hx",55,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(behavior,"behavior")
		HX_STACK_LINE(55)
		this->behaviors->set(behavior->name,behavior);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spritesheet_obj,addBehavior,(void))

Void Spritesheet_obj::addFrame( ::spritesheet::data::SpritesheetFrame frame){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","addFrame",0x68183d54,"spritesheet.Spritesheet.addFrame","spritesheet/Spritesheet.hx",60,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(frame,"frame")
		HX_STACK_LINE(62)
		this->frames->push(frame);
		HX_STACK_LINE(63)
		(this->totalFrames)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spritesheet_obj,addFrame,(void))

Void Spritesheet_obj::generateBitmaps( ){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","generateBitmaps",0x9059fce7,"spritesheet.Spritesheet.generateBitmaps","spritesheet/Spritesheet.hx",70,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(70)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(70)
		int _g = this->totalFrames;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(70)
		while(((_g1 < _g))){
			HX_STACK_LINE(70)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(72)
			this->generateBitmap(i);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritesheet_obj,generateBitmaps,(void))

Void Spritesheet_obj::generateBitmap( int index){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","generateBitmap",0x84aa4e0c,"spritesheet.Spritesheet.generateBitmap","spritesheet/Spritesheet.hx",79,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(81)
		::spritesheet::data::SpritesheetFrame frame = this->frames->__get(index).StaticCast< ::spritesheet::data::SpritesheetFrame >();		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(83)
		::flash::display::BitmapData bitmapData = ::flash::display::BitmapData_obj::__new(frame->width,frame->height,true,null(),null());		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(84)
		::flash::geom::Rectangle sourceRectangle = ::flash::geom::Rectangle_obj::__new(frame->x,frame->y,frame->width,frame->height);		HX_STACK_VAR(sourceRectangle,"sourceRectangle");
		HX_STACK_LINE(85)
		::flash::geom::Point targetPoint = ::flash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(targetPoint,"targetPoint");
		HX_STACK_LINE(87)
		bitmapData->copyPixels(this->sourceImage,sourceRectangle,targetPoint,null(),null(),null());
		HX_STACK_LINE(89)
		if (((this->sourceImageAlpha != null()))){
			HX_STACK_LINE(91)
			bitmapData->copyChannel(this->sourceImageAlpha,sourceRectangle,targetPoint,(int)2,(int)8);
		}
		HX_STACK_LINE(95)
		frame->bitmapData = bitmapData;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Spritesheet_obj,generateBitmap,(void))

::spritesheet::data::SpritesheetFrame Spritesheet_obj::getFrame( int index,hx::Null< bool >  __o_autoGenerate){
bool autoGenerate = __o_autoGenerate.Default(true);
	HX_STACK_FRAME("spritesheet.Spritesheet","getFrame",0x4e9226bf,"spritesheet.Spritesheet.getFrame","spritesheet/Spritesheet.hx",100,0x514323d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(autoGenerate,"autoGenerate")
{
		HX_STACK_LINE(102)
		::spritesheet::data::SpritesheetFrame frame = this->frames->__get(index).StaticCast< ::spritesheet::data::SpritesheetFrame >();		HX_STACK_VAR(frame,"frame");
		HX_STACK_LINE(104)
		if (((bool((bool((frame != null())) && bool((frame->bitmapData == null())))) && bool(autoGenerate)))){
			HX_STACK_LINE(106)
			this->generateBitmap(index);
		}
		HX_STACK_LINE(110)
		return frame;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Spritesheet_obj,getFrame,return )

Array< int > Spritesheet_obj::getFrameIDs( ){
	HX_STACK_FRAME("spritesheet.Spritesheet","getFrameIDs",0x3540fad9,"spritesheet.Spritesheet.getFrameIDs","spritesheet/Spritesheet.hx",115,0x514323d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(117)
	Array< int > ids = Array_obj< int >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(119)
	{
		HX_STACK_LINE(119)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(119)
		int _g = this->totalFrames;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(119)
		while(((_g1 < _g))){
			HX_STACK_LINE(119)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(121)
			ids->push(i);
		}
	}
	HX_STACK_LINE(125)
	return ids;
}


HX_DEFINE_DYNAMIC_FUNC0(Spritesheet_obj,getFrameIDs,return )

Array< ::Dynamic > Spritesheet_obj::getFrames( ){
	HX_STACK_FRAME("spritesheet.Spritesheet","getFrames",0x714fc0d4,"spritesheet.Spritesheet.getFrames","spritesheet/Spritesheet.hx",132,0x514323d9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(132)
	return this->frames->copy();
}


HX_DEFINE_DYNAMIC_FUNC0(Spritesheet_obj,getFrames,return )

Array< int > Spritesheet_obj::merge( ::spritesheet::Spritesheet spritesheet){
	HX_STACK_FRAME("spritesheet.Spritesheet","merge",0x0ee8ceb0,"spritesheet.Spritesheet.merge","spritesheet/Spritesheet.hx",137,0x514323d9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(spritesheet,"spritesheet")
	HX_STACK_LINE(139)
	int cacheTotalFrames = this->totalFrames;		HX_STACK_VAR(cacheTotalFrames,"cacheTotalFrames");
	HX_STACK_LINE(141)
	{
		HX_STACK_LINE(141)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(141)
		int _g = spritesheet->frames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(141)
		while(((_g1 < _g))){
			HX_STACK_LINE(141)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(143)
			if (((bool((spritesheet->frames->__get(i).StaticCast< ::spritesheet::data::SpritesheetFrame >()->bitmapData == null())) && bool(((bool((spritesheet->sourceImage != this->sourceImage)) || bool((spritesheet->sourceImageAlpha != this->sourceImageAlpha)))))))){
				HX_STACK_LINE(145)
				spritesheet->generateBitmap(i);
			}
			HX_STACK_LINE(149)
			this->addFrame(spritesheet->frames->__get(i).StaticCast< ::spritesheet::data::SpritesheetFrame >());
		}
	}
	HX_STACK_LINE(153)
	for(::cpp::FastIterator_obj< ::spritesheet::data::BehaviorData > *__it = ::cpp::CreateFastIterator< ::spritesheet::data::BehaviorData >(spritesheet->behaviors->iterator());  __it->hasNext(); ){
		::spritesheet::data::BehaviorData behavior = __it->next();
		if ((!(this->behaviors->exists(behavior->name)))){
			HX_STACK_LINE(157)
			::spritesheet::data::BehaviorData clone = behavior->clone();		HX_STACK_VAR(clone,"clone");
			HX_STACK_LINE(158)
			clone->name = behavior->name;
			HX_STACK_LINE(160)
			{
				HX_STACK_LINE(160)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(160)
				int _g = behavior->frames->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(160)
				while(((_g1 < _g))){
					HX_STACK_LINE(160)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(162)
					hx::AddEq(behavior->frames[i],cacheTotalFrames);
				}
			}
			HX_STACK_LINE(166)
			this->addBehavior(behavior);
		}
;
	}
	HX_STACK_LINE(172)
	Array< int > ids = Array_obj< int >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(174)
	{
		HX_STACK_LINE(174)
		int _g1 = cacheTotalFrames;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(174)
		int _g = this->totalFrames;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(174)
		while(((_g1 < _g))){
			HX_STACK_LINE(174)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(176)
			ids->push(i);
		}
	}
	HX_STACK_LINE(180)
	return ids;
}


HX_DEFINE_DYNAMIC_FUNC1(Spritesheet_obj,merge,return )

Void Spritesheet_obj::updateImage( ::flash::display::BitmapData image,::flash::display::BitmapData imageAlpha){
{
		HX_STACK_FRAME("spritesheet.Spritesheet","updateImage",0x9560fe8a,"spritesheet.Spritesheet.updateImage","spritesheet/Spritesheet.hx",185,0x514323d9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(imageAlpha,"imageAlpha")
		HX_STACK_LINE(187)
		this->sourceImage = image;
		HX_STACK_LINE(188)
		this->sourceImageAlpha = imageAlpha;
		HX_STACK_LINE(190)
		{
			HX_STACK_LINE(190)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			Array< ::Dynamic > _g1 = this->frames;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(190)
			while(((_g < _g1->length))){
				HX_STACK_LINE(190)
				::spritesheet::data::SpritesheetFrame frame = _g1->__get(_g).StaticCast< ::spritesheet::data::SpritesheetFrame >();		HX_STACK_VAR(frame,"frame");
				HX_STACK_LINE(190)
				++(_g);
				HX_STACK_LINE(192)
				if (((frame->bitmapData != null()))){
					HX_STACK_LINE(194)
					frame->bitmapData = null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Spritesheet_obj,updateImage,(void))


Spritesheet_obj::Spritesheet_obj()
{
}

void Spritesheet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Spritesheet);
	HX_MARK_MEMBER_NAME(behaviors,"behaviors");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(totalFrames,"totalFrames");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(sourceImage,"sourceImage");
	HX_MARK_MEMBER_NAME(sourceImageAlpha,"sourceImageAlpha");
	HX_MARK_END_CLASS();
}

void Spritesheet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(behaviors,"behaviors");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(totalFrames,"totalFrames");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(sourceImage,"sourceImage");
	HX_VISIT_MEMBER_NAME(sourceImageAlpha,"sourceImageAlpha");
}

Dynamic Spritesheet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addFrame") ) { return addFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrame") ) { return getFrame_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"behaviors") ) { return behaviors; }
		if (HX_FIELD_EQ(inName,"getFrames") ) { return getFrames_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { return totalFrames; }
		if (HX_FIELD_EQ(inName,"sourceImage") ) { return sourceImage; }
		if (HX_FIELD_EQ(inName,"addBehavior") ) { return addBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"getFrameIDs") ) { return getFrameIDs_dyn(); }
		if (HX_FIELD_EQ(inName,"updateImage") ) { return updateImage_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"generateBitmap") ) { return generateBitmap_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"generateBitmaps") ) { return generateBitmaps_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sourceImageAlpha") ) { return sourceImageAlpha; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Spritesheet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"behaviors") ) { behaviors=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"totalFrames") ) { totalFrames=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sourceImage") ) { sourceImage=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"sourceImageAlpha") ) { sourceImageAlpha=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Spritesheet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("behaviors"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("totalFrames"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("sourceImage"));
	outFields->push(HX_CSTRING("sourceImageAlpha"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(Spritesheet_obj,behaviors),HX_CSTRING("behaviors")},
	{hx::fsString,(int)offsetof(Spritesheet_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(Spritesheet_obj,totalFrames),HX_CSTRING("totalFrames")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Spritesheet_obj,frames),HX_CSTRING("frames")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(Spritesheet_obj,sourceImage),HX_CSTRING("sourceImage")},
	{hx::fsObject /*::flash::display::BitmapData*/ ,(int)offsetof(Spritesheet_obj,sourceImageAlpha),HX_CSTRING("sourceImageAlpha")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("behaviors"),
	HX_CSTRING("name"),
	HX_CSTRING("totalFrames"),
	HX_CSTRING("frames"),
	HX_CSTRING("sourceImage"),
	HX_CSTRING("sourceImageAlpha"),
	HX_CSTRING("addBehavior"),
	HX_CSTRING("addFrame"),
	HX_CSTRING("generateBitmaps"),
	HX_CSTRING("generateBitmap"),
	HX_CSTRING("getFrame"),
	HX_CSTRING("getFrameIDs"),
	HX_CSTRING("getFrames"),
	HX_CSTRING("merge"),
	HX_CSTRING("updateImage"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Spritesheet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Spritesheet_obj::__mClass,"__mClass");
};

#endif

Class Spritesheet_obj::__mClass;

void Spritesheet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spritesheet.Spritesheet"), hx::TCanCast< Spritesheet_obj> ,sStaticFields,sMemberFields,
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

void Spritesheet_obj::__boot()
{
}

} // end namespace spritesheet
