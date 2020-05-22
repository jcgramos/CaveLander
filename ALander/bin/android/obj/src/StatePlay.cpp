#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_GameManager
#include <GameManager.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_SpaceShip
#include <SpaceShip.h>
#endif
#ifndef INCLUDED_StateEnd
#include <StateEnd.h>
#endif
#ifndef INCLUDED_StatePause
#include <StatePause.h>
#endif
#ifndef INCLUDED_StatePlay
#include <StatePlay.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_display_StageAlign
#include <flash/display/StageAlign.h>
#endif
#ifndef INCLUDED_flash_display_StageScaleMode
#include <flash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_flash_events_AccelerometerEvent
#include <flash/events/AccelerometerEvent.h>
#endif
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_FocusEvent
#include <flash/events/FocusEvent.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_KeyboardEvent
#include <flash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_sensors_Accelerometer
#include <flash/sensors/Accelerometer.h>
#endif
#ifndef INCLUDED_flash_ui_Multitouch
#include <flash/ui/Multitouch.h>
#endif

Void StatePlay_obj::__construct()
{
HX_STACK_FRAME("StatePlay","new",0x951153f7,"StatePlay.new","StatePlay.hx",30,0x0f979759)
{
	HX_STACK_LINE(36)
	this->nivel = (int)0;
	HX_STACK_LINE(46)
	super::__construct();
	HX_STACK_LINE(48)
	this->nivel = (int)3;
	HX_STACK_LINE(50)
	int _g = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(50)
	this->set_scaleX((Float(_g) / Float(::GameManager_obj::getInstance()->getGameWidth())));
	HX_STACK_LINE(51)
	int _g1 = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(51)
	this->set_scaleY((Float(_g1) / Float(::GameManager_obj::getInstance()->getGameHeight())));
	HX_STACK_LINE(54)
	::GameManager_obj::getInstance()->setPoints((int)0);
	HX_STACK_LINE(55)
	::GameManager_obj::getInstance()->setLives((int)3);
	HX_STACK_LINE(56)
	this->scene = ::Scene_obj::load(this->nivel);
	HX_STACK_LINE(57)
	this->scene->start(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(58)
	this->spaceShip = ::SpaceShip_obj::__new();
	HX_STACK_LINE(59)
	this->spaceShip->init(this->scene,(int)100,(int)100,null(),null());
}
;
	return null();
}

//StatePlay_obj::~StatePlay_obj() { }

Dynamic StatePlay_obj::__CreateEmpty() { return  new StatePlay_obj; }
hx::ObjectPtr< StatePlay_obj > StatePlay_obj::__new()
{  hx::ObjectPtr< StatePlay_obj > result = new StatePlay_obj();
	result->__construct();
	return result;}

Dynamic StatePlay_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< StatePlay_obj > result = new StatePlay_obj();
	result->__construct();
	return result;}

Void StatePlay_obj::resize( Dynamic e){
{
		HX_STACK_FRAME("StatePlay","resize",0x42a0eebd,"StatePlay.resize","StatePlay.hx",41,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(e,"e")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatePlay_obj,resize,(void))

Void StatePlay_obj::enter( ){
{
		HX_STACK_FRAME("StatePlay","enter",0xd25d446f,"StatePlay.enter","StatePlay.hx",64,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_LINE(66)
		::flash::Lib_obj::get_current()->get_stage()->set_align(::flash::display::StageAlign_obj::TOP_LEFT);
		HX_STACK_LINE(67)
		::flash::Lib_obj::get_current()->get_stage()->set_scaleMode(::flash::display::StageScaleMode_obj::NO_SCALE);
		HX_STACK_LINE(69)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->keyPressed_dyn(),null(),null(),null());
		HX_STACK_LINE(70)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->keyReleased_dyn(),null(),null(),null());
		HX_STACK_LINE(71)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->frameStarted_dyn(),null(),null(),null());
		HX_STACK_LINE(72)
		::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::FocusEvent_obj::FOCUS_OUT,this->focusOut_dyn(),null(),null(),null());
		HX_STACK_LINE(76)
		if ((::flash::ui::Multitouch_obj::get_supportsTouchEvents())){
			HX_STACK_LINE(77)
			::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->touchBegin_dyn(),null(),null(),null());
			HX_STACK_LINE(78)
			::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->touchEnd_dyn(),null(),null(),null());
		}
		HX_STACK_LINE(81)
		if ((::flash::sensors::Accelerometer_obj::get_isSupported())){
			HX_STACK_LINE(82)
			this->accelerometer = ::flash::sensors::Accelerometer_obj::__new();
			HX_STACK_LINE(83)
			this->accelerometer->addEventListener(::flash::events::AccelerometerEvent_obj::UPDATE,this->updateAccelerometer_dyn(),null(),null(),null());
		}
	}
return null();
}


Void StatePlay_obj::exit( ){
{
		HX_STACK_FRAME("StatePlay","exit",0xd43397a7,"StatePlay.exit","StatePlay.hx",86,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_LINE(88)
		::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_DOWN,this->keyPressed_dyn(),null());
		HX_STACK_LINE(89)
		::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::KeyboardEvent_obj::KEY_UP,this->keyReleased_dyn(),null());
		HX_STACK_LINE(90)
		::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::Event_obj::ENTER_FRAME,this->frameStarted_dyn(),null());
		HX_STACK_LINE(92)
		if ((::flash::ui::Multitouch_obj::get_supportsTouchEvents())){
			HX_STACK_LINE(93)
			::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_BEGIN,this->touchBegin_dyn(),null());
			HX_STACK_LINE(94)
			::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->touchEnd_dyn(),null());
		}
		HX_STACK_LINE(97)
		if ((::flash::sensors::Accelerometer_obj::get_isSupported())){
			HX_STACK_LINE(98)
			this->accelerometer->removeEventListener(::flash::events::AccelerometerEvent_obj::UPDATE,this->updateAccelerometer_dyn(),null());
		}
	}
return null();
}


Void StatePlay_obj::nextLevel( ){
{
		HX_STACK_FRAME("StatePlay","nextLevel",0x5d12fe68,"StatePlay.nextLevel","StatePlay.hx",103,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		(this->nivel)++;
		HX_STACK_LINE(106)
		::GameManager_obj::getInstance()->addNivel();
		HX_STACK_LINE(107)
		this->scene->removeChild(this->spaceShip);
		HX_STACK_LINE(108)
		this->exit();
		HX_STACK_LINE(111)
		this->scene->exit(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(112)
		this->scene = ::Scene_obj::load(this->nivel);
		HX_STACK_LINE(113)
		this->scene->start(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(115)
		this->newLife();
		HX_STACK_LINE(116)
		::GameManager_obj::getInstance()->pushState(::StatePause_obj::__new());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatePlay_obj,nextLevel,(void))

Void StatePlay_obj::endLife( ){
{
		HX_STACK_FRAME("StatePlay","endLife",0xd094658e,"StatePlay.endLife","StatePlay.hx",119,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_LINE(121)
		this->spaceShip->clear();
		HX_STACK_LINE(122)
		this->scene->removeChild(this->spaceShip);
		HX_STACK_LINE(123)
		::GameManager_obj::getInstance()->removeLive();
		HX_STACK_LINE(124)
		if (((::GameManager_obj::getInstance()->getLives() > (int)0))){
			HX_STACK_LINE(125)
			::GameManager_obj::getInstance()->pushState(::StatePause_obj::__new());
		}
		else{
			HX_STACK_LINE(127)
			::GameManager_obj::getInstance()->pushState(::StateEnd_obj::__new());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatePlay_obj,endLife,(void))

Void StatePlay_obj::newLife( ){
{
		HX_STACK_FRAME("StatePlay","newLife",0x9e3c5893,"StatePlay.newLife","StatePlay.hx",131,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		this->spaceShip = ::SpaceShip_obj::__new();
		HX_STACK_LINE(134)
		this->spaceShip->init(this->scene,(int)100,(int)100,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(StatePlay_obj,newLife,(void))

Void StatePlay_obj::looop( int elapsedTime){
{
		HX_STACK_FRAME("StatePlay","looop",0xdad0c804,"StatePlay.looop","StatePlay.hx",138,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(140)
		this->scene->update(elapsedTime);
		HX_STACK_LINE(141)
		if ((this->spaceShip->isDead())){
			HX_STACK_LINE(142)
			this->endLife();
			HX_STACK_LINE(143)
			this->newLife();
		}
		else{
			HX_STACK_LINE(145)
			if ((this->spaceShip->isSuccess())){
				HX_STACK_LINE(146)
				this->nextLevel();
			}
			else{
				HX_STACK_LINE(148)
				this->spaceShip->update(elapsedTime);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatePlay_obj,looop,(void))

Void StatePlay_obj::frameStarted( ::flash::events::Event event){
{
		HX_STACK_FRAME("StatePlay","frameStarted",0xc88cba1d,"StatePlay.frameStarted","StatePlay.hx",154,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(156)
		int now = ::flash::Lib_obj::getTimer();		HX_STACK_VAR(now,"now");
		HX_STACK_LINE(157)
		int elapsedTime = (now - this->previousTime);		HX_STACK_VAR(elapsedTime,"elapsedTime");
		HX_STACK_LINE(159)
		if (((elapsedTime > (int)10))){
			HX_STACK_LINE(160)
			this->looop(elapsedTime);
			HX_STACK_LINE(161)
			this->previousTime = now;
		}
	}
return null();
}


Void StatePlay_obj::keyPressed( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("StatePlay","keyPressed",0x6278a00c,"StatePlay.keyPressed","StatePlay.hx",167,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(167)
		this->spaceShip->keyPressed(event);
	}
return null();
}


Void StatePlay_obj::keyReleased( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("StatePlay","keyReleased",0xcde97813,"StatePlay.keyReleased","StatePlay.hx",170,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(172)
		if (((event->keyCode == (int)27))){
			HX_STACK_LINE(173)
			event->stopImmediatePropagation();
			HX_STACK_LINE(174)
			::StatePause gameState = ::StatePause_obj::__new();		HX_STACK_VAR(gameState,"gameState");
			HX_STACK_LINE(175)
			::GameManager_obj::getInstance()->pushState(gameState);
		}
		HX_STACK_LINE(178)
		this->spaceShip->keyReleased(event);
	}
return null();
}


Void StatePlay_obj::focusOut( ::flash::events::FocusEvent event){
{
		HX_STACK_FRAME("StatePlay","focusOut",0x4fa9889f,"StatePlay.focusOut","StatePlay.hx",182,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(183)
		::StatePause gameState = ::StatePause_obj::__new();		HX_STACK_VAR(gameState,"gameState");
		HX_STACK_LINE(184)
		::GameManager_obj::getInstance()->pushState(gameState);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatePlay_obj,focusOut,(void))

Void StatePlay_obj::touchBegin( ::flash::events::TouchEvent event){
{
		HX_STACK_FRAME("StatePlay","touchBegin",0x63f0fb33,"StatePlay.touchBegin","StatePlay.hx",188,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(188)
		this->spaceShip->touchBegin(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatePlay_obj,touchBegin,(void))

Void StatePlay_obj::touchEnd( ::flash::events::TouchEvent event){
{
		HX_STACK_FRAME("StatePlay","touchEnd",0x3e54de65,"StatePlay.touchEnd","StatePlay.hx",192,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(192)
		this->spaceShip->touchEnd(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatePlay_obj,touchEnd,(void))

Void StatePlay_obj::updateAccelerometer( ::flash::events::AccelerometerEvent event){
{
		HX_STACK_FRAME("StatePlay","updateAccelerometer",0x3d9a789d,"StatePlay.updateAccelerometer","StatePlay.hx",197,0x0f979759)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(197)
		this->spaceShip->updateAccelerometer(event);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(StatePlay_obj,updateAccelerometer,(void))


StatePlay_obj::StatePlay_obj()
{
}

void StatePlay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StatePlay);
	HX_MARK_MEMBER_NAME(spaceShip,"spaceShip");
	HX_MARK_MEMBER_NAME(scene,"scene");
	HX_MARK_MEMBER_NAME(previousTime,"previousTime");
	HX_MARK_MEMBER_NAME(accelerometer,"accelerometer");
	HX_MARK_MEMBER_NAME(nivel,"nivel");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StatePlay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(spaceShip,"spaceShip");
	HX_VISIT_MEMBER_NAME(scene,"scene");
	HX_VISIT_MEMBER_NAME(previousTime,"previousTime");
	HX_VISIT_MEMBER_NAME(accelerometer,"accelerometer");
	HX_VISIT_MEMBER_NAME(nivel,"nivel");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic StatePlay_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { return scene; }
		if (HX_FIELD_EQ(inName,"nivel") ) { return nivel; }
		if (HX_FIELD_EQ(inName,"enter") ) { return enter_dyn(); }
		if (HX_FIELD_EQ(inName,"looop") ) { return looop_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"endLife") ) { return endLife_dyn(); }
		if (HX_FIELD_EQ(inName,"newLife") ) { return newLife_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"focusOut") ) { return focusOut_dyn(); }
		if (HX_FIELD_EQ(inName,"touchEnd") ) { return touchEnd_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"spaceShip") ) { return spaceShip; }
		if (HX_FIELD_EQ(inName,"nextLevel") ) { return nextLevel_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"keyPressed") ) { return keyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"touchBegin") ) { return touchBegin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"keyReleased") ) { return keyReleased_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { return previousTime; }
		if (HX_FIELD_EQ(inName,"frameStarted") ) { return frameStarted_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerometer") ) { return accelerometer; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateAccelerometer") ) { return updateAccelerometer_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic StatePlay_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"scene") ) { scene=inValue.Cast< ::Scene >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nivel") ) { nivel=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"spaceShip") ) { spaceShip=inValue.Cast< ::SpaceShip >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"previousTime") ) { previousTime=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accelerometer") ) { accelerometer=inValue.Cast< ::flash::sensors::Accelerometer >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StatePlay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("spaceShip"));
	outFields->push(HX_CSTRING("scene"));
	outFields->push(HX_CSTRING("previousTime"));
	outFields->push(HX_CSTRING("accelerometer"));
	outFields->push(HX_CSTRING("nivel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::SpaceShip*/ ,(int)offsetof(StatePlay_obj,spaceShip),HX_CSTRING("spaceShip")},
	{hx::fsObject /*::Scene*/ ,(int)offsetof(StatePlay_obj,scene),HX_CSTRING("scene")},
	{hx::fsInt,(int)offsetof(StatePlay_obj,previousTime),HX_CSTRING("previousTime")},
	{hx::fsObject /*::flash::sensors::Accelerometer*/ ,(int)offsetof(StatePlay_obj,accelerometer),HX_CSTRING("accelerometer")},
	{hx::fsInt,(int)offsetof(StatePlay_obj,nivel),HX_CSTRING("nivel")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("spaceShip"),
	HX_CSTRING("scene"),
	HX_CSTRING("previousTime"),
	HX_CSTRING("accelerometer"),
	HX_CSTRING("nivel"),
	HX_CSTRING("resize"),
	HX_CSTRING("enter"),
	HX_CSTRING("exit"),
	HX_CSTRING("nextLevel"),
	HX_CSTRING("endLife"),
	HX_CSTRING("newLife"),
	HX_CSTRING("looop"),
	HX_CSTRING("frameStarted"),
	HX_CSTRING("keyPressed"),
	HX_CSTRING("keyReleased"),
	HX_CSTRING("focusOut"),
	HX_CSTRING("touchBegin"),
	HX_CSTRING("touchEnd"),
	HX_CSTRING("updateAccelerometer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(StatePlay_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(StatePlay_obj::__mClass,"__mClass");
};

#endif

Class StatePlay_obj::__mClass;

void StatePlay_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("StatePlay"), hx::TCanCast< StatePlay_obj> ,sStaticFields,sMemberFields,
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

void StatePlay_obj::__boot()
{
}

