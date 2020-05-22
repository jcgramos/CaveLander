#include <hxcpp.h>

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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
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
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif
#ifndef INCLUDED_ui_TextButon
#include <ui/TextButon.h>
#endif
namespace ui{

Void TextButon_obj::__construct()
{
HX_STACK_FRAME("ui.TextButon","new",0xb17dd96b,"ui.TextButon.new","ui/TextButon.hx",14,0x3553f9e6)
{
	HX_STACK_LINE(17)
	this->tbFormat = ::flash::text::TextFormat_obj::__new(null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(16)
	this->_label = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(21)
	super::__construct();
	HX_STACK_LINE(22)
	this->buttonMode = true;
	HX_STACK_LINE(23)
	this->useHandCursor = true;
	HX_STACK_LINE(27)
	this->tbFormat->size = (int)40;
	HX_STACK_LINE(28)
	this->_label->set_defaultTextFormat(this->tbFormat);
	HX_STACK_LINE(29)
	this->_label->set_autoSize(::flash::text::TextFieldAutoSize_obj::LEFT);
	HX_STACK_LINE(30)
	this->addChild(this->_label);
}
;
	return null();
}

//TextButon_obj::~TextButon_obj() { }

Dynamic TextButon_obj::__CreateEmpty() { return  new TextButon_obj; }
hx::ObjectPtr< TextButon_obj > TextButon_obj::__new()
{  hx::ObjectPtr< TextButon_obj > result = new TextButon_obj();
	result->__construct();
	return result;}

Dynamic TextButon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TextButon_obj > result = new TextButon_obj();
	result->__construct();
	return result;}

Void TextButon_obj::onTap( Dynamic ontap){
{
		HX_STACK_FRAME("ui.TextButon","onTap",0x08f6904f,"ui.TextButon.onTap","ui/TextButon.hx",34,0x3553f9e6)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ontap,"ontap")
		HX_STACK_LINE(36)
		if ((::flash::ui::Multitouch_obj::get_supportsTouchEvents())){
			HX_STACK_LINE(37)
			this->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,ontap,null(),null(),null());
		}
		HX_STACK_LINE(39)
		this->addEventListener(::flash::events::MouseEvent_obj::CLICK,ontap,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TextButon_obj,onTap,(void))

::String TextButon_obj::getText( ){
	HX_STACK_FRAME("ui.TextButon","getText",0x9e4766ee,"ui.TextButon.getText","ui/TextButon.hx",44,0x3553f9e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	return this->_label->get_text();
}


HX_DEFINE_DYNAMIC_FUNC0(TextButon_obj,getText,return )

::String TextButon_obj::setText( ::String value){
	HX_STACK_FRAME("ui.TextButon","setText",0x9148f7fa,"ui.TextButon.setText","ui/TextButon.hx",47,0x3553f9e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(48)
	this->_label->set_text(value);
	HX_STACK_LINE(49)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextButon_obj,setText,return )

int TextButon_obj::getColor( ){
	HX_STACK_FRAME("ui.TextButon","getColor",0x1cf5d002,"ui.TextButon.getColor","ui/TextButon.hx",53,0x3553f9e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	return this->_label->get_textColor();
}


HX_DEFINE_DYNAMIC_FUNC0(TextButon_obj,getColor,return )

int TextButon_obj::setColor( int value){
	HX_STACK_FRAME("ui.TextButon","setColor",0xcb532976,"ui.TextButon.setColor","ui/TextButon.hx",56,0x3553f9e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(57)
	this->_label->set_textColor(value);
	HX_STACK_LINE(58)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextButon_obj,setColor,return )

Float TextButon_obj::getSize( ){
	HX_STACK_FRAME("ui.TextButon","getSize",0x9da13b02,"ui.TextButon.getSize","ui/TextButon.hx",62,0x3553f9e6)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	return this->tbFormat->size;
}


HX_DEFINE_DYNAMIC_FUNC0(TextButon_obj,getSize,return )

Float TextButon_obj::setSize( Float value){
	HX_STACK_FRAME("ui.TextButon","setSize",0x90a2cc0e,"ui.TextButon.setSize","ui/TextButon.hx",65,0x3553f9e6)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(66)
	this->tbFormat->size = value;
	HX_STACK_LINE(67)
	this->_label->set_defaultTextFormat(this->tbFormat);
	HX_STACK_LINE(68)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(TextButon_obj,setSize,return )


TextButon_obj::TextButon_obj()
{
}

void TextButon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TextButon);
	HX_MARK_MEMBER_NAME(_label,"_label");
	HX_MARK_MEMBER_NAME(tbFormat,"tbFormat");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TextButon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_label,"_label");
	HX_VISIT_MEMBER_NAME(tbFormat,"tbFormat");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic TextButon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"onTap") ) { return onTap_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { return _label; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		if (HX_FIELD_EQ(inName,"setText") ) { return setText_dyn(); }
		if (HX_FIELD_EQ(inName,"getSize") ) { return getSize_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tbFormat") ) { return tbFormat; }
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TextButon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_label") ) { _label=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tbFormat") ) { tbFormat=inValue.Cast< ::flash::text::TextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TextButon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_label"));
	outFields->push(HX_CSTRING("tbFormat"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::text::TextField*/ ,(int)offsetof(TextButon_obj,_label),HX_CSTRING("_label")},
	{hx::fsObject /*::flash::text::TextFormat*/ ,(int)offsetof(TextButon_obj,tbFormat),HX_CSTRING("tbFormat")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_label"),
	HX_CSTRING("tbFormat"),
	HX_CSTRING("onTap"),
	HX_CSTRING("getText"),
	HX_CSTRING("setText"),
	HX_CSTRING("getColor"),
	HX_CSTRING("setColor"),
	HX_CSTRING("getSize"),
	HX_CSTRING("setSize"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TextButon_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TextButon_obj::__mClass,"__mClass");
};

#endif

Class TextButon_obj::__mClass;

void TextButon_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ui.TextButon"), hx::TCanCast< TextButon_obj> ,sStaticFields,sMemberFields,
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

void TextButon_obj::__boot()
{
}

} // end namespace ui
