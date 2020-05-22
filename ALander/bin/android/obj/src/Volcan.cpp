#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Obstacle
#include <Obstacle.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_Volcan
#include <Volcan.h>
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

Void Volcan_obj::__construct()
{
HX_STACK_FRAME("Volcan","new",0x83334e6f,"Volcan.new","Volcan.hx",14,0xed1293e1)
{
	HX_STACK_LINE(19)
	this->creationDelay = (int)0;
	HX_STACK_LINE(18)
	this->timer = (int)0;
	HX_STACK_LINE(17)
	this->seconds = (int)3;
	HX_STACK_LINE(26)
	super::__construct(null());
	HX_STACK_LINE(28)
	this->type = HX_CSTRING("Volcan");
}
;
	return null();
}

//Volcan_obj::~Volcan_obj() { }

Dynamic Volcan_obj::__CreateEmpty() { return  new Volcan_obj; }
hx::ObjectPtr< Volcan_obj > Volcan_obj::__new()
{  hx::ObjectPtr< Volcan_obj > result = new Volcan_obj();
	result->__construct();
	return result;}

Dynamic Volcan_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Volcan_obj > result = new Volcan_obj();
	result->__construct();
	return result;}

Void Volcan_obj::init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("Volcan","init",0x466a0a21,"Volcan.init","Volcan.hx",32,0xed1293e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(34)
		this->spritesheet = ::spritesheet::importers::BitmapImporter_obj::create(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/fire.png"),null()),(int)4,(int)1,(int)32,(int)32,null(),null());
		HX_STACK_LINE(35)
		this->spritesheet->addBehavior(::spritesheet::data::BehaviorData_obj::__new(HX_CSTRING("fire"),Array_obj< int >::__new().Add((int)0).Add((int)1).Add((int)2).Add((int)3),true,(int)10,null(),null()));
		HX_STACK_LINE(36)
		this->fire = ::spritesheet::AnimatedSprite_obj::__new(this->spritesheet,true);
		HX_STACK_LINE(37)
		this->fire->set_x((int)0);
		HX_STACK_LINE(38)
		this->fire->set_y((int)0);
		HX_STACK_LINE(40)
		this->set_x(x);
		HX_STACK_LINE(41)
		this->set_y(y);
		HX_STACK_LINE(42)
		this->scene = scene;
		HX_STACK_LINE(43)
		this->addChild(this->fire);
		HX_STACK_LINE(44)
		this->fire->showBehavior(HX_CSTRING("fire"),null());
		HX_STACK_LINE(45)
		scene->addChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void Volcan_obj::update( int elapsedTime){
{
		HX_STACK_FRAME("Volcan","update",0x2c52fb5a,"Volcan.update","Volcan.hx",48,0xed1293e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(50)
		this->fire->update(elapsedTime);
		HX_STACK_LINE(52)
		if ((((elapsedTime + this->timer) > this->creationDelay))){
			HX_STACK_LINE(53)
			this->launchObstacle();
		}
		else{
			HX_STACK_LINE(55)
			hx::AddEq(this->timer,elapsedTime);
		}
	}
return null();
}


Void Volcan_obj::setMaxForce( Float force){
{
		HX_STACK_FRAME("Volcan","setMaxForce",0x06c57378,"Volcan.setMaxForce","Volcan.hx",60,0xed1293e1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(force,"force")
		HX_STACK_LINE(60)
		this->force = force;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Volcan_obj,setMaxForce,(void))

Void Volcan_obj::launchObstacle( ){
{
		HX_STACK_FRAME("Volcan","launchObstacle",0xef6141f3,"Volcan.launchObstacle","Volcan.hx",62,0xed1293e1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		Float vSpeed = ::Math_obj::min(((::Math_obj::random() * this->force) * (int)-1),-1.5);		HX_STACK_VAR(vSpeed,"vSpeed");
		HX_STACK_LINE(65)
		Float hSpeed = ((::Math_obj::random() * (int)3) - (int)2);		HX_STACK_VAR(hSpeed,"hSpeed");
		HX_STACK_LINE(69)
		::Obstacle obstacle = ::Obstacle_obj::__new(HX_CSTRING("img/stone.png"));		HX_STACK_VAR(obstacle,"obstacle");
		HX_STACK_LINE(70)
		this->scene->addActor(obstacle);
		HX_STACK_LINE(71)
		Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(71)
		obstacle->init(this->scene,_g,this->get_y(),null(),null());
		HX_STACK_LINE(72)
		obstacle->start(hSpeed,vSpeed);
		HX_STACK_LINE(74)
		this->creationDelay = (::Math_obj::random() * (int)5000);
		HX_STACK_LINE(75)
		this->timer = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Volcan_obj,launchObstacle,(void))


Volcan_obj::Volcan_obj()
{
}

void Volcan_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Volcan);
	HX_MARK_MEMBER_NAME(seconds,"seconds");
	HX_MARK_MEMBER_NAME(timer,"timer");
	HX_MARK_MEMBER_NAME(creationDelay,"creationDelay");
	HX_MARK_MEMBER_NAME(spritesheet,"spritesheet");
	HX_MARK_MEMBER_NAME(fire,"fire");
	HX_MARK_MEMBER_NAME(force,"force");
	::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Volcan_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(seconds,"seconds");
	HX_VISIT_MEMBER_NAME(timer,"timer");
	HX_VISIT_MEMBER_NAME(creationDelay,"creationDelay");
	HX_VISIT_MEMBER_NAME(spritesheet,"spritesheet");
	HX_VISIT_MEMBER_NAME(fire,"fire");
	HX_VISIT_MEMBER_NAME(force,"force");
	::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Volcan_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return fire; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { return timer; }
		if (HX_FIELD_EQ(inName,"force") ) { return force; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"seconds") ) { return seconds; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { return spritesheet; }
		if (HX_FIELD_EQ(inName,"setMaxForce") ) { return setMaxForce_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"creationDelay") ) { return creationDelay; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"launchObstacle") ) { return launchObstacle_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Volcan_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { fire=inValue.Cast< ::spritesheet::AnimatedSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"timer") ) { timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"force") ) { force=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"seconds") ) { seconds=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { spritesheet=inValue.Cast< ::spritesheet::Spritesheet >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"creationDelay") ) { creationDelay=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Volcan_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("seconds"));
	outFields->push(HX_CSTRING("timer"));
	outFields->push(HX_CSTRING("creationDelay"));
	outFields->push(HX_CSTRING("spritesheet"));
	outFields->push(HX_CSTRING("fire"));
	outFields->push(HX_CSTRING("force"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Volcan_obj,seconds),HX_CSTRING("seconds")},
	{hx::fsFloat,(int)offsetof(Volcan_obj,timer),HX_CSTRING("timer")},
	{hx::fsFloat,(int)offsetof(Volcan_obj,creationDelay),HX_CSTRING("creationDelay")},
	{hx::fsObject /*::spritesheet::Spritesheet*/ ,(int)offsetof(Volcan_obj,spritesheet),HX_CSTRING("spritesheet")},
	{hx::fsObject /*::spritesheet::AnimatedSprite*/ ,(int)offsetof(Volcan_obj,fire),HX_CSTRING("fire")},
	{hx::fsFloat,(int)offsetof(Volcan_obj,force),HX_CSTRING("force")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("seconds"),
	HX_CSTRING("timer"),
	HX_CSTRING("creationDelay"),
	HX_CSTRING("spritesheet"),
	HX_CSTRING("fire"),
	HX_CSTRING("force"),
	HX_CSTRING("init"),
	HX_CSTRING("update"),
	HX_CSTRING("setMaxForce"),
	HX_CSTRING("launchObstacle"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Volcan_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Volcan_obj::__mClass,"__mClass");
};

#endif

Class Volcan_obj::__mClass;

void Volcan_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Volcan"), hx::TCanCast< Volcan_obj> ,sStaticFields,sMemberFields,
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

void Volcan_obj::__boot()
{
}

