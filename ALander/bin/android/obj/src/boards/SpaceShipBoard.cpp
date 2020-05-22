#include <hxcpp.h>

#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_boards_SpaceShipBoard
#include <boards/SpaceShipBoard.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFieldAutoSize
#include <flash/text/TextFieldAutoSize.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace boards{

Void SpaceShipBoard_obj::__construct()
{
HX_STACK_FRAME("boards.SpaceShipBoard","new",0x1d022377,"boards.SpaceShipBoard.new","SpaceShipBoard.hx",24,0x245d397a)
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(27)
	this->label = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(28)
	this->label->set_defaultTextFormat(::flash::text::TextFormat_obj::__new(HX_CSTRING("Helvetica"),(int)12,null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null()));
	HX_STACK_LINE(30)
	this->label->set_autoSize(::flash::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(31)
	this->label->set_textColor((int)16777215);
	HX_STACK_LINE(32)
	this->label->set_text(HX_CSTRING("Fuel: "));
	HX_STACK_LINE(34)
	this->addChild(this->label);
}
;
	return null();
}

//SpaceShipBoard_obj::~SpaceShipBoard_obj() { }

Dynamic SpaceShipBoard_obj::__CreateEmpty() { return  new SpaceShipBoard_obj; }
hx::ObjectPtr< SpaceShipBoard_obj > SpaceShipBoard_obj::__new()
{  hx::ObjectPtr< SpaceShipBoard_obj > result = new SpaceShipBoard_obj();
	result->__construct();
	return result;}

Dynamic SpaceShipBoard_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpaceShipBoard_obj > result = new SpaceShipBoard_obj();
	result->__construct();
	return result;}

Void SpaceShipBoard_obj::init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("boards.SpaceShipBoard","init",0x41959c19,"boards.SpaceShipBoard.init","SpaceShipBoard.hx",38,0x245d397a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(40)
		this->scene = scene;
		HX_STACK_LINE(41)
		this->set_x(x);
		HX_STACK_LINE(42)
		this->set_y(y);
		HX_STACK_LINE(43)
		this->startX = x;
		HX_STACK_LINE(44)
		this->startY = y;
		HX_STACK_LINE(46)
		scene->addChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(SpaceShipBoard_obj,init,(void))

Void SpaceShipBoard_obj::setFuel( ::Scene scene,Dynamic fuel){
{
		HX_STACK_FRAME("boards.SpaceShipBoard","setFuel",0x95544ecf,"boards.SpaceShipBoard.setFuel","SpaceShipBoard.hx",49,0x245d397a)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(fuel,"fuel")
		HX_STACK_LINE(51)
		this->set_x((::Math_obj::abs(scene->get_x()) + this->startX));
		HX_STACK_LINE(52)
		this->set_y((::Math_obj::abs(scene->get_y()) + this->startY));
		HX_STACK_LINE(55)
		this->label->set_text((HX_CSTRING("Fuel: ") + ::Std_obj::string(fuel)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(SpaceShipBoard_obj,setFuel,(void))

Void SpaceShipBoard_obj::exit( ){
{
		HX_STACK_FRAME("boards.SpaceShipBoard","exit",0x3ef85827,"boards.SpaceShipBoard.exit","SpaceShipBoard.hx",60,0x245d397a)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		this->scene->removeChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceShipBoard_obj,exit,(void))


SpaceShipBoard_obj::SpaceShipBoard_obj()
{
}

void SpaceShipBoard_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpaceShipBoard);
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(textFormat,"textFormat");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(startX,"startX");
	HX_MARK_MEMBER_NAME(startY,"startY");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpaceShipBoard_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(textFormat,"textFormat");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(startX,"startX");
	HX_VISIT_MEMBER_NAME(startY,"startY");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpaceShipBoard_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { return startX; }
		if (HX_FIELD_EQ(inName,"startY") ) { return startY; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setFuel") ) { return setFuel_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { return textFormat; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpaceShipBoard_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::Scene >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"startX") ) { startX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startY") ) { startY=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textFormat") ) { textFormat=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpaceShipBoard_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("textFormat"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("startX"));
	outFields->push(HX_CSTRING("startY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(SpaceShipBoard_obj,label),HX_CSTRING("label")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(SpaceShipBoard_obj,textFormat),HX_CSTRING("textFormat")},
	{hx::fsObject /*::Scene*/ ,(int)offsetof(SpaceShipBoard_obj,scene),HX_CSTRING("scene")},
	{hx::fsFloat,(int)offsetof(SpaceShipBoard_obj,startX),HX_CSTRING("startX")},
	{hx::fsFloat,(int)offsetof(SpaceShipBoard_obj,startY),HX_CSTRING("startY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("label"),
	HX_CSTRING("textFormat"),
	HX_CSTRING("scene"),
	HX_CSTRING("startX"),
	HX_CSTRING("startY"),
	HX_CSTRING("init"),
	HX_CSTRING("setFuel"),
	HX_CSTRING("exit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpaceShipBoard_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpaceShipBoard_obj::__mClass,"__mClass");
};

#endif

Class SpaceShipBoard_obj::__mClass;

void SpaceShipBoard_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("boards.SpaceShipBoard"), hx::TCanCast< SpaceShipBoard_obj> ,sStaticFields,sMemberFields,
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

void SpaceShipBoard_obj::__boot()
{
}

} // end namespace boards
