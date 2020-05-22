#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Explosion
#include <Explosion.h>
#endif
#ifndef INCLUDED_Obstacle
#include <Obstacle.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_core_RotataingAnimatedSprite
#include <core/RotataingAnimatedSprite.h>
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
#ifndef INCLUDED_spritesheet_AnimatedSprite
#include <spritesheet/AnimatedSprite.h>
#endif
#ifndef INCLUDED_spritesheet_Spritesheet
#include <spritesheet/Spritesheet.h>
#endif
#ifndef INCLUDED_spritesheet_data_BehaviorData
#include <spritesheet/data/BehaviorData.h>
#endif
#ifndef INCLUDED_spritesheet_importers_BitmapImporter
#include <spritesheet/importers/BitmapImporter.h>
#endif

Void Obstacle_obj::__construct(::String imageName)
{
HX_STACK_FRAME("Obstacle","new",0xcbb8aae1,"Obstacle.new","Obstacle.hx",20,0xd7960baf)

HX_STACK_ARG(imageName,"imageName")
{
	HX_STACK_LINE(25)
	this->gravity = 0.01;
	HX_STACK_LINE(24)
	this->horizontalAceleration = (int)0;
	HX_STACK_LINE(23)
	this->verticalAceleration = (int)0;
	HX_STACK_LINE(30)
	super::__construct(null());
	HX_STACK_LINE(32)
	this->type = HX_CSTRING("Obstacle");
	HX_STACK_LINE(34)
	this->spritesheet = ::spritesheet::importers::BitmapImporter_obj::create(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/stone.png"),null()),(int)1,(int)1,(int)17,(int)24,null(),null());
	HX_STACK_LINE(35)
	this->spritesheet->addBehavior(::spritesheet::data::BehaviorData_obj::__new(HX_CSTRING("on"),Array_obj< int >::__new().Add((int)0),false,null(),null(),null()));
	HX_STACK_LINE(36)
	this->image = ::core::RotataingAnimatedSprite_obj::__new(this->spritesheet,true);
	HX_STACK_LINE(37)
	this->image->xloc = (int)0;
	HX_STACK_LINE(38)
	this->image->yloc = (int)0;
	HX_STACK_LINE(39)
	this->image->set_rotation((int)1);
	HX_STACK_LINE(40)
	this->image->xcenter = 8.5;
	HX_STACK_LINE(41)
	this->image->ycenter = (int)12;
	HX_STACK_LINE(42)
	this->addChild(this->image);
}
;
	return null();
}

//Obstacle_obj::~Obstacle_obj() { }

Dynamic Obstacle_obj::__CreateEmpty() { return  new Obstacle_obj; }
hx::ObjectPtr< Obstacle_obj > Obstacle_obj::__new(::String imageName)
{  hx::ObjectPtr< Obstacle_obj > result = new Obstacle_obj();
	result->__construct(imageName);
	return result;}

Dynamic Obstacle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Obstacle_obj > result = new Obstacle_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Obstacle_obj::init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("Obstacle","init",0x7295916f,"Obstacle.init","Obstacle.hx",46,0xd7960baf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(48)
		this->set_x(x);
		HX_STACK_LINE(49)
		this->set_y(y);
		HX_STACK_LINE(50)
		this->scene = scene;
		HX_STACK_LINE(51)
		this->image->showBehavior(HX_CSTRING("on"),null());
		HX_STACK_LINE(52)
		scene->addChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Obstacle_obj::start( Dynamic hSpeed,Dynamic vSpeed){
{
		HX_STACK_FRAME("Obstacle","start",0x963cb123,"Obstacle.start","Obstacle.hx",55,0xd7960baf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(hSpeed,"hSpeed")
		HX_STACK_ARG(vSpeed,"vSpeed")
		HX_STACK_LINE(57)
		this->horizontalAceleration = hSpeed;
		HX_STACK_LINE(58)
		this->verticalAceleration = vSpeed;
	}
return null();
}


Void Obstacle_obj::update( int elapsedTime){
{
		HX_STACK_FRAME("Obstacle","update",0x5fe97228,"Obstacle.update","Obstacle.hx",62,0xd7960baf)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		struct _Function_1_1{
			inline static bool Block( ::Obstacle_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Obstacle.hx",65,0xd7960baf)
				{
					HX_STACK_LINE(65)
					Float _g = (__this->get_x() + (int)12);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(65)
					return (_g > __this->scene->get_width());
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static bool Block( ::Obstacle_obj *__this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Obstacle.hx",65,0xd7960baf)
				{
					HX_STACK_LINE(65)
					Float _g1 = (__this->get_y() + (int)12);		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(65)
					return (_g1 > __this->scene->get_height());
				}
				return null();
			}
		};
		HX_STACK_LINE(65)
		if (((  ((!(((  ((!(((  ((!(((this->get_x() < (int)12))))) ? bool(_Function_1_1::Block(this)) : bool(true) ))))) ? bool((this->get_y() < (int)12)) : bool(true) ))))) ? bool(_Function_1_2::Block(this)) : bool(true) ))){
			HX_STACK_LINE(66)
			this->destroy();
		}
		HX_STACK_LINE(68)
		hx::AddEq(this->verticalAceleration,this->gravity);
		HX_STACK_LINE(70)
		Float angle;		HX_STACK_VAR(angle,"angle");
		HX_STACK_LINE(71)
		if (((this->horizontalAceleration > (int)0))){
			HX_STACK_LINE(72)
			angle = ((Float((::Math_obj::atan((Float(this->verticalAceleration) / Float(this->horizontalAceleration))) * (int)180)) / Float(::Math_obj::PI)) + (int)90);
		}
		else{
			HX_STACK_LINE(74)
			angle = ((Float((::Math_obj::atan((Float(this->verticalAceleration) / Float(this->horizontalAceleration))) * (int)180)) / Float(::Math_obj::PI)) - (int)90);
		}
		HX_STACK_LINE(77)
		this->image->rotate(angle);
		HX_STACK_LINE(79)
		{
			HX_STACK_LINE(79)
			::Obstacle _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(79)
			_g->set_y((_g->get_y() + this->verticalAceleration));
		}
		HX_STACK_LINE(80)
		{
			HX_STACK_LINE(80)
			::Obstacle _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(80)
			_g->set_x((_g->get_x() + this->horizontalAceleration));
		}
	}
return null();
}


Void Obstacle_obj::destroy( ){
{
		HX_STACK_FRAME("Obstacle","destroy",0x1310dbfb,"Obstacle.destroy","Obstacle.hx",84,0xd7960baf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(85)
		this->scene->removeActor(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(86)
		::Explosion explosion = ::Explosion_obj::__new();		HX_STACK_VAR(explosion,"explosion");
		HX_STACK_LINE(87)
		Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		explosion->init(this->scene,_g,this->get_y(),null(),null());
	}
return null();
}



Obstacle_obj::Obstacle_obj()
{
}

void Obstacle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Obstacle);
	HX_MARK_MEMBER_NAME(verticalAceleration,"verticalAceleration");
	HX_MARK_MEMBER_NAME(horizontalAceleration,"horizontalAceleration");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(spritesheet,"spritesheet");
	::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Obstacle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(verticalAceleration,"verticalAceleration");
	HX_VISIT_MEMBER_NAME(horizontalAceleration,"horizontalAceleration");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(spritesheet,"spritesheet");
	::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Obstacle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { return spritesheet; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"verticalAceleration") ) { return verticalAceleration; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"horizontalAceleration") ) { return horizontalAceleration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Obstacle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::core::RotataingAnimatedSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { spritesheet=inValue.Cast< ::spritesheet::Spritesheet >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"verticalAceleration") ) { verticalAceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"horizontalAceleration") ) { horizontalAceleration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Obstacle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("verticalAceleration"));
	outFields->push(HX_CSTRING("horizontalAceleration"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("image"));
	outFields->push(HX_CSTRING("spritesheet"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Obstacle_obj,verticalAceleration),HX_CSTRING("verticalAceleration")},
	{hx::fsFloat,(int)offsetof(Obstacle_obj,horizontalAceleration),HX_CSTRING("horizontalAceleration")},
	{hx::fsFloat,(int)offsetof(Obstacle_obj,gravity),HX_CSTRING("gravity")},
	{hx::fsObject /*::core::RotataingAnimatedSprite*/ ,(int)offsetof(Obstacle_obj,image),HX_CSTRING("image")},
	{hx::fsObject /*::spritesheet::Spritesheet*/ ,(int)offsetof(Obstacle_obj,spritesheet),HX_CSTRING("spritesheet")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("verticalAceleration"),
	HX_CSTRING("horizontalAceleration"),
	HX_CSTRING("gravity"),
	HX_CSTRING("image"),
	HX_CSTRING("spritesheet"),
	HX_CSTRING("init"),
	HX_CSTRING("start"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Obstacle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Obstacle_obj::__mClass,"__mClass");
};

#endif

Class Obstacle_obj::__mClass;

void Obstacle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Obstacle"), hx::TCanCast< Obstacle_obj> ,sStaticFields,sMemberFields,
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

void Obstacle_obj::__boot()
{
}

