#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Explosion
#include <Explosion.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
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

Void Explosion_obj::__construct()
{
HX_STACK_FRAME("Explosion","new",0x2c66b2e7,"Explosion.new","Explosion.hx",27,0xe8176669)
{
	HX_STACK_LINE(28)
	super::__construct(false);
	HX_STACK_LINE(30)
	this->type = HX_CSTRING("Explosion");
	HX_STACK_LINE(32)
	this->spritesheet = ::spritesheet::importers::BitmapImporter_obj::create(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/explosion.png"),null()),(int)7,(int)1,(int)25,(int)25,null(),null());
	HX_STACK_LINE(33)
	this->spritesheet->addBehavior(::spritesheet::data::BehaviorData_obj::__new(HX_CSTRING("bang"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3).Add((int)4).Add((int)5).Add((int)6),false,(int)10,null(),null()));
	HX_STACK_LINE(34)
	this->animated = ::spritesheet::AnimatedSprite_obj::__new(this->spritesheet,true);
	HX_STACK_LINE(35)
	this->addChild(this->animated);
	HX_STACK_LINE(37)
	this->set_name(HX_CSTRING("explosion"));
}
;
	return null();
}

//Explosion_obj::~Explosion_obj() { }

Dynamic Explosion_obj::__CreateEmpty() { return  new Explosion_obj; }
hx::ObjectPtr< Explosion_obj > Explosion_obj::__new()
{  hx::ObjectPtr< Explosion_obj > result = new Explosion_obj();
	result->__construct();
	return result;}

Dynamic Explosion_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Explosion_obj > result = new Explosion_obj();
	result->__construct();
	return result;}

Void Explosion_obj::init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("Explosion","init",0xaa2e8ea9,"Explosion.init","Explosion.hx",40,0xe8176669)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(42)
		this->scene = scene;
		HX_STACK_LINE(43)
		this->set_x(x);
		HX_STACK_LINE(44)
		this->set_y(y);
		HX_STACK_LINE(46)
		this->animated->showBehavior(HX_CSTRING("bang"),null());
		HX_STACK_LINE(47)
		scene->addActor(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Explosion_obj::update( int elapsedTime){
{
		HX_STACK_FRAME("Explosion","update",0x6da7b1e2,"Explosion.update","Explosion.hx",52,0xe8176669)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(54)
		this->animated->update(elapsedTime);
		HX_STACK_LINE(56)
		if (((bool((this->animated->currentBehavior->name == HX_CSTRING("bang"))) && bool((this->animated->currentFrameIndex == (int)6))))){
			HX_STACK_LINE(57)
			this->scene->removeActor(hx::ObjectPtr<OBJ_>(this));
		}
	}
return null();
}



Explosion_obj::Explosion_obj()
{
}

void Explosion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Explosion);
	HX_MARK_MEMBER_NAME(animated,"animated");
	HX_MARK_MEMBER_NAME(spritesheet,"spritesheet");
	HX_MARK_MEMBER_NAME(previousTime,"previousTime");
	::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Explosion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(animated,"animated");
	HX_VISIT_MEMBER_NAME(spritesheet,"spritesheet");
	HX_VISIT_MEMBER_NAME(previousTime,"previousTime");
	::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Explosion_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"animated") ) { return animated; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { return spritesheet; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { return previousTime; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Explosion_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"animated") ) { animated=inValue.Cast< ::spritesheet::AnimatedSprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { spritesheet=inValue.Cast< ::spritesheet::Spritesheet >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { previousTime=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Explosion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("animated"));
	outFields->push(HX_CSTRING("spritesheet"));
	outFields->push(HX_CSTRING("previousTime"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::spritesheet::AnimatedSprite*/ ,(int)offsetof(Explosion_obj,animated),HX_CSTRING("animated")},
	{hx::fsObject /*::spritesheet::Spritesheet*/ ,(int)offsetof(Explosion_obj,spritesheet),HX_CSTRING("spritesheet")},
	{hx::fsInt,(int)offsetof(Explosion_obj,previousTime),HX_CSTRING("previousTime")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("animated"),
	HX_CSTRING("spritesheet"),
	HX_CSTRING("previousTime"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Explosion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Explosion_obj::__mClass,"__mClass");
};

#endif

Class Explosion_obj::__mClass;

void Explosion_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Explosion"), hx::TCanCast< Explosion_obj> ,sStaticFields,sMemberFields,
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

void Explosion_obj::__boot()
{
}

