#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Portico
#include <Portico.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void Portico_obj::__construct()
{
HX_STACK_FRAME("Portico","new",0x2c006946,"Portico.new","Portico.hx",15,0x23c8e0ea)
{
	HX_STACK_LINE(20)
	this->changing = false;
	HX_STACK_LINE(19)
	this->open = false;
	HX_STACK_LINE(18)
	this->creationDelay = (int)3000;
	HX_STACK_LINE(17)
	this->timer = (int)0;
	HX_STACK_LINE(28)
	super::__construct(null());
	HX_STACK_LINE(30)
	this->type = HX_CSTRING("Portico");
}
;
	return null();
}

//Portico_obj::~Portico_obj() { }

Dynamic Portico_obj::__CreateEmpty() { return  new Portico_obj; }
hx::ObjectPtr< Portico_obj > Portico_obj::__new()
{  hx::ObjectPtr< Portico_obj > result = new Portico_obj();
	result->__construct();
	return result;}

Dynamic Portico_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Portico_obj > result = new Portico_obj();
	result->__construct();
	return result;}

Void Portico_obj::init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("Portico","init",0x51146b6a,"Portico.init","Portico.hx",32,0x23c8e0ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(34)
		this->addChild(::flash::display::Bitmap_obj::__new(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/obstacle.png"),null()),null(),null()));
		HX_STACK_LINE(36)
		this->set_x(x);
		HX_STACK_LINE(37)
		this->set_y(y);
		HX_STACK_LINE(39)
		if (((width > height))){
			HX_STACK_LINE(39)
			this->xwidth = width;
		}
		else{
			HX_STACK_LINE(39)
			this->xwidth = (int)10;
		}
		HX_STACK_LINE(40)
		if (((height > width))){
			HX_STACK_LINE(40)
			this->xheight = height;
		}
		else{
			HX_STACK_LINE(40)
			this->xheight = (int)10;
		}
		HX_STACK_LINE(43)
		this->set_width(this->xwidth);
		HX_STACK_LINE(44)
		this->set_height(this->xheight);
		HX_STACK_LINE(46)
		this->scene = scene;
	}
return null();
}


Void Portico_obj::update( int elapsedTime){
{
		HX_STACK_FRAME("Portico","update",0xff4f00e3,"Portico.update","Portico.hx",50,0x23c8e0ea)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(52)
		if (((bool(((elapsedTime + this->timer) > this->creationDelay)) && bool(!(this->closed))))){
			HX_STACK_LINE(53)
			this->changeState();
		}
		else{
			HX_STACK_LINE(56)
			hx::AddEq(this->timer,elapsedTime);
		}
		HX_STACK_LINE(59)
		if ((this->changing)){
			HX_STACK_LINE(60)
			this->refresh();
		}
	}
return null();
}


Void Portico_obj::openNow( ){
{
		HX_STACK_FRAME("Portico","openNow",0x08328b52,"Portico.openNow","Portico.hx",65,0x23c8e0ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->refresh();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Portico_obj,openNow,(void))

Void Portico_obj::destroy( ){
{
		HX_STACK_FRAME("Portico","destroy",0xec8830e0,"Portico.destroy","Portico.hx",67,0x23c8e0ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(69)
		this->open = false;
		HX_STACK_LINE(70)
		this->refresh();
	}
return null();
}


Void Portico_obj::changeState( ){
{
		HX_STACK_FRAME("Portico","changeState",0x3cba0d67,"Portico.changeState","Portico.hx",74,0x23c8e0ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		this->timer = (int)0;
		HX_STACK_LINE(77)
		this->changing = true;
		HX_STACK_LINE(79)
		this->open = !(this->open);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Portico_obj,changeState,(void))

Void Portico_obj::refresh( ){
{
		HX_STACK_FRAME("Portico","refresh",0xb522ddc1,"Portico.refresh","Portico.hx",82,0x23c8e0ea)
		HX_STACK_THIS(this)
		HX_STACK_LINE(84)
		this->timer = (int)0;
		HX_STACK_LINE(86)
		if ((this->open)){
			HX_STACK_LINE(87)
			if (((this->xwidth > this->xheight))){
				HX_STACK_LINE(88)
				if (((this->get_width() < this->xwidth))){
					HX_STACK_LINE(89)
					::Portico _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(89)
					_g->set_width((_g->get_width() + (int)10));
				}
				else{
					HX_STACK_LINE(91)
					this->changing = false;
				}
			}
			else{
				HX_STACK_LINE(93)
				if (((this->get_height() < this->xheight))){
					HX_STACK_LINE(94)
					::Portico _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(94)
					_g->set_height((_g->get_height() + (int)10));
				}
				else{
					HX_STACK_LINE(96)
					this->changing = false;
				}
			}
		}
		else{
			HX_STACK_LINE(99)
			if (((this->xwidth > this->xheight))){
				HX_STACK_LINE(100)
				if (((this->get_width() > (int)5))){
					HX_STACK_LINE(101)
					::Portico _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(101)
					Float _g1 = _g->get_width();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(101)
					_g->set_width((_g1 - ::Math_obj::min((int)10,this->get_width())));
				}
				else{
					HX_STACK_LINE(103)
					this->changing = false;
				}
			}
			else{
				HX_STACK_LINE(105)
				if (((this->get_height() > (int)5))){
					HX_STACK_LINE(106)
					::Portico _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(106)
					Float _g1 = _g->get_height();		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(106)
					_g->set_height((_g1 - ::Math_obj::min((int)10,this->get_height())));
				}
				else{
					HX_STACK_LINE(108)
					this->changing = false;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Portico_obj,refresh,(void))


Portico_obj::Portico_obj()
{
}

Dynamic Portico_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { return open; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xwidth") ) { return xwidth; }
		if (HX_FIELD_EQ(inName,"closed") ) { return closed; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xheight") ) { return xheight; }
		if (HX_FIELD_EQ(inName,"openNow") ) { return openNow_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"changing") ) { return changing; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"changeState") ) { return changeState_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"creationDelay") ) { return creationDelay; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Portico_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"open") ) { open=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"xwidth") ) { xwidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"closed") ) { closed=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xheight") ) { xheight=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"changing") ) { changing=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"creationDelay") ) { creationDelay=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Portico_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("creationDelay"));
	outFields->push(HX_CSTRING("open"));
	outFields->push(HX_CSTRING("changing"));
	outFields->push(HX_CSTRING("xwidth"));
	outFields->push(HX_CSTRING("xheight"));
	outFields->push(HX_CSTRING("closed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Portico_obj,timer),HX_CSTRING("timer")},
	{hx::fsFloat,(int)offsetof(Portico_obj,creationDelay),HX_CSTRING("creationDelay")},
	{hx::fsBool,(int)offsetof(Portico_obj,open),HX_CSTRING("open")},
	{hx::fsBool,(int)offsetof(Portico_obj,changing),HX_CSTRING("changing")},
	{hx::fsFloat,(int)offsetof(Portico_obj,xwidth),HX_CSTRING("xwidth")},
	{hx::fsFloat,(int)offsetof(Portico_obj,xheight),HX_CSTRING("xheight")},
	{hx::fsBool,(int)offsetof(Portico_obj,closed),HX_CSTRING("closed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("timer"),
	HX_CSTRING("creationDelay"),
	HX_CSTRING("open"),
	HX_CSTRING("changing"),
	HX_CSTRING("xwidth"),
	HX_CSTRING("xheight"),
	HX_CSTRING("closed"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("openNow"),
	HX_CSTRING("destroy"),
	HX_CSTRING("changeState"),
	HX_CSTRING("refresh"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Portico_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Portico_obj::__mClass,"__mClass");
};

#endif

Class Portico_obj::__mClass;

void Portico_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Portico"), hx::TCanCast< Portico_obj> ,sStaticFields,sMemberFields,
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

void Portico_obj::__boot()
{
}

