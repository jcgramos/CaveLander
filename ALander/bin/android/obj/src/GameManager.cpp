#include <hxcpp.h>

#ifndef INCLUDED_GameManager
#include <GameManager.h>
#endif
#ifndef INCLUDED_GameState
#include <GameState.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif

Void GameManager_obj::__construct()
{
HX_STACK_FRAME("GameManager","new",0x877f9aed,"GameManager.new","GameManager.hx",9,0xfd29e123)
{
	HX_STACK_LINE(20)
	this->nivel = (int)1;
	HX_STACK_LINE(19)
	this->points = (int)0;
	HX_STACK_LINE(18)
	this->lives = (int)3;
	HX_STACK_LINE(17)
	this->gameHeight = (int)480;
	HX_STACK_LINE(16)
	this->gameWidth = (int)800;
	HX_STACK_LINE(24)
	this->states = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//GameManager_obj::~GameManager_obj() { }

Dynamic GameManager_obj::__CreateEmpty() { return  new GameManager_obj; }
hx::ObjectPtr< GameManager_obj > GameManager_obj::__new()
{  hx::ObjectPtr< GameManager_obj > result = new GameManager_obj();
	result->__construct();
	return result;}

Dynamic GameManager_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameManager_obj > result = new GameManager_obj();
	result->__construct();
	return result;}

Void GameManager_obj::setNivel( int nivel){
{
		HX_STACK_FRAME("GameManager","setNivel",0xbe335853,"GameManager.setNivel","GameManager.hx",35,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_ARG(nivel,"nivel")
		HX_STACK_LINE(35)
		this->nivel = nivel;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameManager_obj,setNivel,(void))

Void GameManager_obj::addNivel( ){
{
		HX_STACK_FRAME("GameManager","addNivel",0x295c1574,"GameManager.addNivel","GameManager.hx",38,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_LINE(38)
		(this->nivel)++;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,addNivel,(void))

int GameManager_obj::getNivel( ){
	HX_STACK_FRAME("GameManager","getNivel",0x0fd5fedf,"GameManager.getNivel","GameManager.hx",42,0xfd29e123)
	HX_STACK_THIS(this)
	HX_STACK_LINE(42)
	return this->nivel;
}


HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,getNivel,return )

Void GameManager_obj::setLives( int lives){
{
		HX_STACK_FRAME("GameManager","setLives",0x97662f58,"GameManager.setLives","GameManager.hx",46,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_ARG(lives,"lives")
		HX_STACK_LINE(46)
		this->lives = lives;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameManager_obj,setLives,(void))

Void GameManager_obj::removeLive( ){
{
		HX_STACK_FRAME("GameManager","removeLive",0x97dcaa63,"GameManager.removeLive","GameManager.hx",49,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		(this->lives)--;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,removeLive,(void))

int GameManager_obj::getLives( ){
	HX_STACK_FRAME("GameManager","getLives",0xe908d5e4,"GameManager.getLives","GameManager.hx",53,0xfd29e123)
	HX_STACK_THIS(this)
	HX_STACK_LINE(53)
	return this->lives;
}


HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,getLives,return )

Void GameManager_obj::setPoints( Float points){
{
		HX_STACK_FRAME("GameManager","setPoints",0xe74739b2,"GameManager.setPoints","GameManager.hx",57,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_ARG(points,"points")
		HX_STACK_LINE(57)
		this->points = points;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameManager_obj,setPoints,(void))

Void GameManager_obj::addPoints( Float points){
{
		HX_STACK_FRAME("GameManager","addPoints",0x3fc3f971,"GameManager.addPoints","GameManager.hx",60,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_ARG(points,"points")
		HX_STACK_LINE(60)
		hx::AddEq(this->points,points);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameManager_obj,addPoints,(void))

Float GameManager_obj::getPoints( ){
	HX_STACK_FRAME("GameManager","getPoints",0x03f64da6,"GameManager.getPoints","GameManager.hx",64,0xfd29e123)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	return this->points;
}


HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,getPoints,return )

Float GameManager_obj::getGameWidth( ){
	HX_STACK_FRAME("GameManager","getGameWidth",0x75e33d11,"GameManager.getGameWidth","GameManager.hx",68,0xfd29e123)
	HX_STACK_THIS(this)
	HX_STACK_LINE(68)
	return this->gameWidth;
}


HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,getGameWidth,return )

Float GameManager_obj::getGameHeight( ){
	HX_STACK_FRAME("GameManager","getGameHeight",0x6741aa7c,"GameManager.getGameHeight","GameManager.hx",73,0xfd29e123)
	HX_STACK_THIS(this)
	HX_STACK_LINE(73)
	return this->gameHeight;
}


HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,getGameHeight,return )

Void GameManager_obj::start( ::GameState state){
{
		HX_STACK_FRAME("GameManager","start",0x05a8bc2f,"GameManager.start","GameManager.hx",76,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(78)
		if (((this->currstate != null()))){
			HX_STACK_LINE(79)
			this->currstate->exit();
			HX_STACK_LINE(80)
			::flash::Lib_obj::get_current()->removeChild(this->currstate);
		}
		HX_STACK_LINE(83)
		this->clear();
		HX_STACK_LINE(84)
		this->currstate = state;
		HX_STACK_LINE(85)
		::flash::Lib_obj::get_current()->addChild(state);
		HX_STACK_LINE(86)
		this->currstate->enter();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameManager_obj,start,(void))

Void GameManager_obj::clear( ){
{
		HX_STACK_FRAME("GameManager","clear",0xc9f8b95a,"GameManager.clear","GameManager.hx",90,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		while(((this->states->length > (int)0))){
			HX_STACK_LINE(91)
			::GameState state = this->states->pop().StaticCast< ::GameState >();		HX_STACK_VAR(state,"state");
			HX_STACK_LINE(92)
			state->exit();
			HX_STACK_LINE(93)
			::flash::Lib_obj::get_current()->removeChild(state);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,clear,(void))

Void GameManager_obj::pushState( ::GameState state){
{
		HX_STACK_FRAME("GameManager","pushState",0x58989024,"GameManager.pushState","GameManager.hx",96,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_ARG(state,"state")
		HX_STACK_LINE(99)
		if (((this->currstate != null()))){
			HX_STACK_LINE(100)
			this->currstate->exit();
			HX_STACK_LINE(101)
			this->states->push(this->currstate);
		}
		HX_STACK_LINE(103)
		this->currstate = state;
		HX_STACK_LINE(104)
		::flash::Lib_obj::get_current()->addChild(state);
		HX_STACK_LINE(105)
		state->enter();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GameManager_obj,pushState,(void))

Void GameManager_obj::popState( ){
{
		HX_STACK_FRAME("GameManager","popState",0x013b9113,"GameManager.popState","GameManager.hx",108,0xfd29e123)
		HX_STACK_THIS(this)
		HX_STACK_LINE(111)
		if (((this->currstate != null()))){
			HX_STACK_LINE(112)
			this->currstate->exit();
			HX_STACK_LINE(113)
			::flash::Lib_obj::get_current()->removeChild(this->currstate);
		}
		HX_STACK_LINE(115)
		::GameState state = this->states->pop().StaticCast< ::GameState >();		HX_STACK_VAR(state,"state");
		HX_STACK_LINE(116)
		this->currstate = state;
		HX_STACK_LINE(117)
		::flash::Lib_obj::get_current()->addChild(state);
		HX_STACK_LINE(118)
		state->enter();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,popState,(void))

::GameManager GameManager_obj::instance;

::GameManager GameManager_obj::getInstance( ){
	HX_STACK_FRAME("GameManager","getInstance",0x55d181d8,"GameManager.getInstance","GameManager.hx",28,0xfd29e123)
	HX_STACK_LINE(29)
	if (((::GameManager_obj::instance == null()))){
		HX_STACK_LINE(30)
		::GameManager_obj::instance = ::GameManager_obj::__new();
	}
	HX_STACK_LINE(31)
	return ::GameManager_obj::instance;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(GameManager_obj,getInstance,return )


GameManager_obj::GameManager_obj()
{
}

void GameManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameManager);
	HX_MARK_MEMBER_NAME(states,"states");
	HX_MARK_MEMBER_NAME(currstate,"currstate");
	HX_MARK_MEMBER_NAME(gameWidth,"gameWidth");
	HX_MARK_MEMBER_NAME(gameHeight,"gameHeight");
	HX_MARK_MEMBER_NAME(lives,"lives");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(nivel,"nivel");
	HX_MARK_END_CLASS();
}

void GameManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(states,"states");
	HX_VISIT_MEMBER_NAME(currstate,"currstate");
	HX_VISIT_MEMBER_NAME(gameWidth,"gameWidth");
	HX_VISIT_MEMBER_NAME(gameHeight,"gameHeight");
	HX_VISIT_MEMBER_NAME(lives,"lives");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(nivel,"nivel");
}

Dynamic GameManager_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lives") ) { return lives; }
		if (HX_FIELD_EQ(inName,"nivel") ) { return nivel; }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { return states; }
		if (HX_FIELD_EQ(inName,"points") ) { return points; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { return instance; }
		if (HX_FIELD_EQ(inName,"setNivel") ) { return setNivel_dyn(); }
		if (HX_FIELD_EQ(inName,"addNivel") ) { return addNivel_dyn(); }
		if (HX_FIELD_EQ(inName,"getNivel") ) { return getNivel_dyn(); }
		if (HX_FIELD_EQ(inName,"setLives") ) { return setLives_dyn(); }
		if (HX_FIELD_EQ(inName,"getLives") ) { return getLives_dyn(); }
		if (HX_FIELD_EQ(inName,"popState") ) { return popState_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currstate") ) { return currstate; }
		if (HX_FIELD_EQ(inName,"gameWidth") ) { return gameWidth; }
		if (HX_FIELD_EQ(inName,"setPoints") ) { return setPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"addPoints") ) { return addPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"getPoints") ) { return getPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"pushState") ) { return pushState_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { return gameHeight; }
		if (HX_FIELD_EQ(inName,"removeLive") ) { return removeLive_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { return getInstance_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getGameWidth") ) { return getGameWidth_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getGameHeight") ) { return getGameHeight_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameManager_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"lives") ) { lives=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nivel") ) { nivel=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"states") ) { states=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { points=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"instance") ) { instance=inValue.Cast< ::GameManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"currstate") ) { currstate=inValue.Cast< ::GameState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameWidth") ) { gameWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gameHeight") ) { gameHeight=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("states"));
	outFields->push(HX_CSTRING("currstate"));
	outFields->push(HX_CSTRING("gameWidth"));
	outFields->push(HX_CSTRING("gameHeight"));
	outFields->push(HX_CSTRING("lives"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("nivel"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("instance"),
	HX_CSTRING("getInstance"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(GameManager_obj,states),HX_CSTRING("states")},
	{hx::fsObject /*::GameState*/ ,(int)offsetof(GameManager_obj,currstate),HX_CSTRING("currstate")},
	{hx::fsFloat,(int)offsetof(GameManager_obj,gameWidth),HX_CSTRING("gameWidth")},
	{hx::fsFloat,(int)offsetof(GameManager_obj,gameHeight),HX_CSTRING("gameHeight")},
	{hx::fsInt,(int)offsetof(GameManager_obj,lives),HX_CSTRING("lives")},
	{hx::fsFloat,(int)offsetof(GameManager_obj,points),HX_CSTRING("points")},
	{hx::fsInt,(int)offsetof(GameManager_obj,nivel),HX_CSTRING("nivel")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("states"),
	HX_CSTRING("currstate"),
	HX_CSTRING("gameWidth"),
	HX_CSTRING("gameHeight"),
	HX_CSTRING("lives"),
	HX_CSTRING("points"),
	HX_CSTRING("nivel"),
	HX_CSTRING("setNivel"),
	HX_CSTRING("addNivel"),
	HX_CSTRING("getNivel"),
	HX_CSTRING("setLives"),
	HX_CSTRING("removeLive"),
	HX_CSTRING("getLives"),
	HX_CSTRING("setPoints"),
	HX_CSTRING("addPoints"),
	HX_CSTRING("getPoints"),
	HX_CSTRING("getGameWidth"),
	HX_CSTRING("getGameHeight"),
	HX_CSTRING("start"),
	HX_CSTRING("clear"),
	HX_CSTRING("pushState"),
	HX_CSTRING("popState"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameManager_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GameManager_obj::instance,"instance");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameManager_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GameManager_obj::instance,"instance");
};

#endif

Class GameManager_obj::__mClass;

void GameManager_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameManager"), hx::TCanCast< GameManager_obj> ,sStaticFields,sMemberFields,
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

void GameManager_obj::__boot()
{
}

