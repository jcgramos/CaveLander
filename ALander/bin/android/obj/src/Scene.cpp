#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Key
#include <Key.h>
#endif
#ifndef INCLUDED_LanderPoint
#include <LanderPoint.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Portico
#include <Portico.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Volcan
#include <Volcan.h>
#endif
#ifndef INCLUDED_Wheeel
#include <Wheeel.h>
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
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
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
#ifndef INCLUDED_openfl_tiled_TiledMap
#include <openfl/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledObject
#include <openfl/tiled/TiledObject.h>
#endif
#ifndef INCLUDED_openfl_tiled_TiledObjectGroup
#include <openfl/tiled/TiledObjectGroup.h>
#endif

Void Scene_obj::__construct()
{
HX_STACK_FRAME("Scene","new",0x2c34f01e,"Scene.new","Scene.hx",23,0x9b2cfd12)
{
	HX_STACK_LINE(28)
	this->actors = ::List_obj::__new();
	HX_STACK_LINE(27)
	this->targets = ::List_obj::__new();
	HX_STACK_LINE(26)
	this->player = null();
	HX_STACK_LINE(32)
	super::__construct();
}
;
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > result = new Scene_obj();
	result->__construct();
	return result;}

Void Scene_obj::setPlayer( ::Actor player){
{
		HX_STACK_FRAME("Scene","setPlayer",0x5850e2e1,"Scene.setPlayer","Scene.hx",33,0x9b2cfd12)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_LINE(33)
		this->player = player;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,setPlayer,(void))

::Actor Scene_obj::getPlayer( ){
	HX_STACK_FRAME("Scene","getPlayer",0x74fff6d5,"Scene.getPlayer","Scene.hx",34,0x9b2cfd12)
	HX_STACK_THIS(this)
	HX_STACK_LINE(34)
	return this->player;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getPlayer,return )

Void Scene_obj::addTarget( ::LanderPoint actor){
{
		HX_STACK_FRAME("Scene","addTarget",0x0001aa90,"Scene.addTarget","Scene.hx",35,0x9b2cfd12)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(35)
		this->targets->add(actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addTarget,(void))

Void Scene_obj::addActor( ::Actor actor){
{
		HX_STACK_FRAME("Scene","addActor",0xc1810096,"Scene.addActor","Scene.hx",36,0x9b2cfd12)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(36)
		this->actors->add(actor);
		HX_STACK_LINE(36)
		this->addChild(actor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,addActor,(void))

Void Scene_obj::removeActor( ::Actor actor){
{
		HX_STACK_FRAME("Scene","removeActor",0x599eb5cf,"Scene.removeActor","Scene.hx",37,0x9b2cfd12)
		HX_STACK_THIS(this)
		HX_STACK_ARG(actor,"actor")
		HX_STACK_LINE(37)
		this->actors->remove(actor);
		HX_STACK_LINE(37)
		this->removeChild(actor);
		HX_STACK_LINE(37)
		actor = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,removeActor,(void))

::List Scene_obj::getTargets( ){
	HX_STACK_FRAME("Scene","getTargets",0xe94aee0e,"Scene.getTargets","Scene.hx",38,0x9b2cfd12)
	HX_STACK_THIS(this)
	HX_STACK_LINE(38)
	return this->targets;
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getTargets,return )

Void Scene_obj::start( ::flash::display::Sprite sprite){
{
		HX_STACK_FRAME("Scene","start",0x42427fa0,"Scene.start","Scene.hx",67,0x9b2cfd12)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(70)
		this->map->set_x((int)1);
		HX_STACK_LINE(71)
		this->map->set_y((int)1);
		HX_STACK_LINE(73)
		this->gravityOrigen = ::flash::geom::Point_obj::__new((Float(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()) / Float((int)2)),(Float((int)-1) / Float((int)0)));
		HX_STACK_LINE(74)
		this->addChild(this->map);
		HX_STACK_LINE(75)
		this->loadSpecialObjects();
		HX_STACK_LINE(77)
		sprite->addChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,start,(void))

Void Scene_obj::exit( ::flash::display::Sprite sprite){
{
		HX_STACK_FRAME("Scene","exit",0x7c389da0,"Scene.exit","Scene.hx",82,0x9b2cfd12)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sprite,"sprite")
		HX_STACK_LINE(82)
		sprite->removeChild(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,exit,(void))

Void Scene_obj::update( int elapsedTime){
{
		HX_STACK_FRAME("Scene","update",0x38f8510b,"Scene.update","Scene.hx",87,0x9b2cfd12)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(87)
		for(::cpp::FastIterator_obj< ::Actor > *__it = ::cpp::CreateFastIterator< ::Actor >(this->actors->iterator());  __it->hasNext(); ){
			::Actor object = __it->next();
			object->update(elapsedTime);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,update,(void))

bool Scene_obj::checkBackgroundCollision( ::Actor actor,Float hSpeed,Float vSpeed){
	HX_STACK_FRAME("Scene","checkBackgroundCollision",0x35c3363e,"Scene.checkBackgroundCollision","Scene.hx",92,0x9b2cfd12)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_ARG(hSpeed,"hSpeed")
	HX_STACK_ARG(vSpeed,"vSpeed")
	HX_STACK_LINE(95)
	bool collision = false;		HX_STACK_VAR(collision,"collision");
	HX_STACK_LINE(96)
	Float _g = actor->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(96)
	Float _g1 = actor->get_y();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(96)
	Float _g2 = actor->get_width();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(96)
	::flash::geom::Rectangle origen = ::flash::geom::Rectangle_obj::__new(_g,_g1,_g2,actor->get_height());		HX_STACK_VAR(origen,"origen");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(98)
		Array< ::Dynamic > _g11 = this->map->objectGroups;		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(98)
		while(((_g3 < _g11->length))){
			HX_STACK_LINE(98)
			::openfl::tiled::TiledObjectGroup objectgroup = _g11->__get(_g3).StaticCast< ::openfl::tiled::TiledObjectGroup >();		HX_STACK_VAR(objectgroup,"objectgroup");
			HX_STACK_LINE(98)
			++(_g3);
			HX_STACK_LINE(99)
			while((objectgroup->hasNext())){
				HX_STACK_LINE(100)
				::openfl::tiled::TiledObject object = objectgroup->next();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(101)
				if (((object->type == null()))){
					HX_STACK_LINE(102)
					::flash::geom::Rectangle rectangle = ::flash::geom::Rectangle_obj::__new(object->x,object->y,object->width,object->height);		HX_STACK_VAR(rectangle,"rectangle");
					HX_STACK_LINE(103)
					if ((origen->intersects(rectangle))){
						HX_STACK_LINE(104)
						collision = true;
						HX_STACK_LINE(105)
						break;
					}
				}
			}
		}
	}
	HX_STACK_LINE(111)
	return collision;
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,checkBackgroundCollision,return )

bool Scene_obj::checkCollision( ::Actor actor,Float hSpeed,Float vSpeed){
	HX_STACK_FRAME("Scene","checkCollision",0x4a0a338c,"Scene.checkCollision","Scene.hx",115,0x9b2cfd12)
	HX_STACK_THIS(this)
	HX_STACK_ARG(actor,"actor")
	HX_STACK_ARG(hSpeed,"hSpeed")
	HX_STACK_ARG(vSpeed,"vSpeed")
	HX_STACK_LINE(117)
	bool collision = this->checkBackgroundCollision(actor,hSpeed,vSpeed);		HX_STACK_VAR(collision,"collision");
	HX_STACK_LINE(118)
	Float _g = actor->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(118)
	Float _g1 = actor->get_y();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(118)
	Float _g2 = actor->get_width();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(118)
	::flash::geom::Rectangle origen = ::flash::geom::Rectangle_obj::__new(_g,_g1,_g2,actor->get_height());		HX_STACK_VAR(origen,"origen");
	HX_STACK_LINE(120)
	for(::cpp::FastIterator_obj< ::Actor > *__it = ::cpp::CreateFastIterator< ::Actor >(this->actors->iterator());  __it->hasNext(); ){
		::Actor object = __it->next();
		if (((bool((object != actor)) && bool(object->collisionable)))){
			struct _Function_2_1{
				inline static bool Block( ::Scene_obj *__this,::Actor &object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Scene.hx",122,0x9b2cfd12)
					{
						HX_STACK_LINE(122)
						Float _g3 = object->get_x();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(122)
						Float _g4 = (_g3 + object->get_width());		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(122)
						return (_g4 > __this->get_width());
					}
					return null();
				}
			};
			struct _Function_2_2{
				inline static bool Block( ::Scene_obj *__this,::Actor &object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Scene.hx",122,0x9b2cfd12)
					{
						HX_STACK_LINE(122)
						Float _g5 = object->get_y();		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(122)
						Float _g6 = (_g5 + object->get_height());		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(122)
						return (_g6 > __this->get_height());
					}
					return null();
				}
			};
			HX_STACK_LINE(122)
			if (((  ((!(((  ((!(((  ((!(((object->get_x() < (int)0))))) ? bool(_Function_2_1::Block(this,object)) : bool(true) ))))) ? bool((object->get_y() < (int)0)) : bool(true) ))))) ? bool(_Function_2_2::Block(this,object)) : bool(true) ))){
				HX_STACK_LINE(123)
				object->destroy();
			}
			HX_STACK_LINE(124)
			::flash::geom::Rectangle rectangle = object->getRect(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(rectangle,"rectangle");
			HX_STACK_LINE(125)
			if ((origen->intersects(rectangle))){
				HX_STACK_LINE(126)
				::String _g3 = object->type;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(126)
				::String _switch_1 = (_g3);
				if (  ( _switch_1==HX_CSTRING("Key"))){
					HX_STACK_LINE(128)
					::Key key;		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(128)
					key = hx::TCast< Key >::cast(object);
					HX_STACK_LINE(129)
					::Portico portico;		HX_STACK_VAR(portico,"portico");
					HX_STACK_LINE(129)
					portico = hx::TCast< Portico >::cast(this->getActorByName(key->portico));
					HX_STACK_LINE(130)
					portico->openNow();
					HX_STACK_LINE(131)
					break;
				}
				else  {
					HX_STACK_LINE(133)
					object->destroy();
					HX_STACK_LINE(134)
					collision = true;
					HX_STACK_LINE(135)
					break;
				}
;
;
			}
		}
;
	}
	HX_STACK_LINE(141)
	return collision;
}


HX_DEFINE_DYNAMIC_FUNC3(Scene_obj,checkCollision,return )

::Actor Scene_obj::getActorByName( ::String name){
	HX_STACK_FRAME("Scene","getActorByName",0xea7e80a3,"Scene.getActorByName","Scene.hx",145,0x9b2cfd12)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(146)
	for(::cpp::FastIterator_obj< ::Actor > *__it = ::cpp::CreateFastIterator< ::Actor >(this->actors->iterator());  __it->hasNext(); ){
		::Actor object = __it->next();
		if (((object->get_name() == name))){
			HX_STACK_LINE(148)
			return object;
			HX_STACK_LINE(149)
			break;
		}
;
	}
	HX_STACK_LINE(152)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,getActorByName,return )

Void Scene_obj::loadSpecialObjects( ){
{
		HX_STACK_FRAME("Scene","loadSpecialObjects",0xdf426a63,"Scene.loadSpecialObjects","Scene.hx",157,0x9b2cfd12)
		HX_STACK_THIS(this)
		HX_STACK_LINE(157)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(157)
		Array< ::Dynamic > _g1 = this->map->objectGroups;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(157)
		while(((_g < _g1->length))){
			HX_STACK_LINE(157)
			::openfl::tiled::TiledObjectGroup objectgroup = _g1->__get(_g).StaticCast< ::openfl::tiled::TiledObjectGroup >();		HX_STACK_VAR(objectgroup,"objectgroup");
			HX_STACK_LINE(157)
			++(_g);
			HX_STACK_LINE(158)
			while((objectgroup->hasNext())){
				HX_STACK_LINE(159)
				::openfl::tiled::TiledObject object = objectgroup->next();		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(160)
				if (((object->type == HX_CSTRING("volcan")))){
					HX_STACK_LINE(161)
					::Volcan volcan = ::Volcan_obj::__new();		HX_STACK_VAR(volcan,"volcan");
					HX_STACK_LINE(162)
					volcan->set_name((  (((object->name != null()))) ? ::String(object->name) : ::String(HX_CSTRING("")) ));
					HX_STACK_LINE(163)
					volcan->init(hx::ObjectPtr<OBJ_>(this),object->x,object->y,null(),null());
					HX_STACK_LINE(164)
					volcan->setMaxForce(::Std_obj::parseFloat(object->properties->get(HX_CSTRING("force"))));
					HX_STACK_LINE(165)
					volcan->start((int)0,(int)0);
					HX_STACK_LINE(166)
					this->addActor(volcan);
				}
				HX_STACK_LINE(168)
				if (((object->type == HX_CSTRING("landerPoint")))){
					HX_STACK_LINE(169)
					::LanderPoint landerPoint = ::LanderPoint_obj::__new();		HX_STACK_VAR(landerPoint,"landerPoint");
					HX_STACK_LINE(170)
					landerPoint->set_name((  (((object->name != null()))) ? ::String(object->name) : ::String(HX_CSTRING("")) ));
					HX_STACK_LINE(171)
					landerPoint->init(hx::ObjectPtr<OBJ_>(this),object->x,object->y,object->width,object->height);
					HX_STACK_LINE(172)
					landerPoint->setStartPoint(object->properties->exists(HX_CSTRING("start")));
					HX_STACK_LINE(173)
					landerPoint->setTarget(object->properties->exists(HX_CSTRING("target")));
					HX_STACK_LINE(174)
					this->addTarget(landerPoint);
				}
				HX_STACK_LINE(176)
				if (((object->type == HX_CSTRING("portico")))){
					HX_STACK_LINE(177)
					::Portico portico = ::Portico_obj::__new();		HX_STACK_VAR(portico,"portico");
					HX_STACK_LINE(178)
					portico->set_name((  (((object->name != null()))) ? ::String(object->name) : ::String(HX_CSTRING("")) ));
					HX_STACK_LINE(179)
					portico->init(hx::ObjectPtr<OBJ_>(this),object->x,object->y,object->width,object->height);
					HX_STACK_LINE(180)
					if ((object->properties->exists(HX_CSTRING("closed")))){
						HX_STACK_LINE(181)
						portico->closed = true;
					}
					HX_STACK_LINE(182)
					portico->start((int)0,(int)0);
					HX_STACK_LINE(183)
					this->addActor(portico);
				}
				HX_STACK_LINE(185)
				if (((object->type == HX_CSTRING("wheel")))){
					HX_STACK_LINE(186)
					::Wheeel wheel = ::Wheeel_obj::__new();		HX_STACK_VAR(wheel,"wheel");
					HX_STACK_LINE(187)
					wheel->set_name((  (((object->name != null()))) ? ::String(object->name) : ::String(HX_CSTRING("")) ));
					HX_STACK_LINE(189)
					wheel->init(hx::ObjectPtr<OBJ_>(this),object->x,object->y,object->width,object->height);
					HX_STACK_LINE(190)
					this->addActor(wheel);
				}
				HX_STACK_LINE(192)
				if (((object->type == HX_CSTRING("key")))){
					HX_STACK_LINE(193)
					::Key key = ::Key_obj::__new();		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(194)
					key->set_name((  (((object->name != null()))) ? ::String(object->name) : ::String(HX_CSTRING("")) ));
					HX_STACK_LINE(195)
					key->init(hx::ObjectPtr<OBJ_>(this),object->x,object->y,null(),null());
					HX_STACK_LINE(196)
					key->portico = object->properties->get(HX_CSTRING("portico"));
					HX_STACK_LINE(197)
					this->addActor(key);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,loadSpecialObjects,(void))

::Scene Scene_obj::load( int level){
	HX_STACK_FRAME("Scene","load",0x80d240a8,"Scene.load","Scene.hx",40,0x9b2cfd12)
	HX_STACK_ARG(level,"level")
	HX_STACK_LINE(42)
	::Scene scene = ::Scene_obj::__new();		HX_STACK_VAR(scene,"scene");
	HX_STACK_LINE(43)
	scene->map = ::openfl::tiled::TiledMap_obj::fromAssets(((HX_CSTRING("img/nivel") + level) + HX_CSTRING(".tmx")),null());
	HX_STACK_LINE(44)
	return scene;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,load,return )


Scene_obj::Scene_obj()
{
}

void Scene_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Scene);
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(targets,"targets");
	HX_MARK_MEMBER_NAME(actors,"actors");
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(gravityOrigen,"gravityOrigen");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Scene_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(targets,"targets");
	HX_VISIT_MEMBER_NAME(actors,"actors");
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(gravityOrigen,"gravityOrigen");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Scene_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return load_dyn(); }
		if (HX_FIELD_EQ(inName,"exit") ) { return exit_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"actors") ) { return actors; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targets") ) { return targets; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addActor") ) { return addActor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setPlayer") ) { return setPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPlayer") ) { return getPlayer_dyn(); }
		if (HX_FIELD_EQ(inName,"addTarget") ) { return addTarget_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getTargets") ) { return getTargets_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeActor") ) { return removeActor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gravityOrigen") ) { return gravityOrigen; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkCollision") ) { return checkCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"getActorByName") ) { return getActorByName_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadSpecialObjects") ) { return loadSpecialObjects_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"checkBackgroundCollision") ) { return checkBackgroundCollision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Scene_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::openfl::tiled::TiledMap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::Actor >(); return inValue; }
		if (HX_FIELD_EQ(inName,"actors") ) { actors=inValue.Cast< ::List >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"targets") ) { targets=inValue.Cast< ::List >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"gravityOrigen") ) { gravityOrigen=inValue.Cast< ::flash::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Scene_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("targets"));
	outFields->push(HX_CSTRING("actors"));
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("gravityOrigen"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("load"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Actor*/ ,(int)offsetof(Scene_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Scene_obj,targets),HX_CSTRING("targets")},
	{hx::fsObject /*::List*/ ,(int)offsetof(Scene_obj,actors),HX_CSTRING("actors")},
	{hx::fsObject /*::openfl::tiled::TiledMap*/ ,(int)offsetof(Scene_obj,map),HX_CSTRING("map")},
	{hx::fsObject /*::flash::geom::Point*/ ,(int)offsetof(Scene_obj,gravityOrigen),HX_CSTRING("gravityOrigen")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("player"),
	HX_CSTRING("targets"),
	HX_CSTRING("actors"),
	HX_CSTRING("map"),
	HX_CSTRING("gravityOrigen"),
	HX_CSTRING("setPlayer"),
	HX_CSTRING("getPlayer"),
	HX_CSTRING("addTarget"),
	HX_CSTRING("addActor"),
	HX_CSTRING("removeActor"),
	HX_CSTRING("getTargets"),
	HX_CSTRING("start"),
	HX_CSTRING("exit"),
	HX_CSTRING("update"),
	HX_CSTRING("checkBackgroundCollision"),
	HX_CSTRING("checkCollision"),
	HX_CSTRING("getActorByName"),
	HX_CSTRING("loadSpecialObjects"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
};

#endif

Class Scene_obj::__mClass;

void Scene_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Scene"), hx::TCanCast< Scene_obj> ,sStaticFields,sMemberFields,
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

void Scene_obj::__boot()
{
}

