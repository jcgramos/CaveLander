#include <hxcpp.h>

#ifndef INCLUDED_Actor
#include <Actor.h>
#endif
#ifndef INCLUDED_Explosion
#include <Explosion.h>
#endif
#ifndef INCLUDED_GameManager
#include <GameManager.h>
#endif
#ifndef INCLUDED_LanderPoint
#include <LanderPoint.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Scene
#include <Scene.h>
#endif
#ifndef INCLUDED_SpaceShip
#include <SpaceShip.h>
#endif
#ifndef INCLUDED_boards_SpaceShipBoard
#include <boards/SpaceShipBoard.h>
#endif
#ifndef INCLUDED_core_RotataingAnimatedSprite
#include <core/RotataingAnimatedSprite.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
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
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
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
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_ui_Keyboard
#include <flash/ui/Keyboard.h>
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

Void SpaceShip_obj::__construct()
{
HX_STACK_FRAME("SpaceShip","new",0xd2a2cd74,"SpaceShip.new","SpaceShip.hx",30,0x82aa9c7c)
{
	HX_STACK_LINE(52)
	this->takinoff = false;
	HX_STACK_LINE(51)
	this->success = false;
	HX_STACK_LINE(50)
	this->startPoint = (int)0;
	HX_STACK_LINE(49)
	this->timerAngle = (int)0;
	HX_STACK_LINE(48)
	this->vscreen = (int)1;
	HX_STACK_LINE(47)
	this->hscreen = (int)1;
	HX_STACK_LINE(46)
	this->fuel = (int)600;
	HX_STACK_LINE(45)
	this->land = false;
	HX_STACK_LINE(44)
	this->dead = false;
	HX_STACK_LINE(41)
	this->gravity = 0.015;
	HX_STACK_LINE(40)
	this->engineAceleration = 0.1;
	HX_STACK_LINE(39)
	this->turnRight = false;
	HX_STACK_LINE(38)
	this->turnLeft = false;
	HX_STACK_LINE(36)
	this->angle = (int)0;
	HX_STACK_LINE(35)
	this->horizontalAceleration = (int)0;
	HX_STACK_LINE(34)
	this->verticalAceleration = (int)0;
	HX_STACK_LINE(33)
	this->spaceshipboard = ::boards::SpaceShipBoard_obj::__new();
	HX_STACK_LINE(56)
	super::__construct(null());
	HX_STACK_LINE(58)
	this->spritesheet = ::spritesheet::importers::BitmapImporter_obj::create(::openfl::Assets_obj::getBitmapData(HX_CSTRING("img/spritesheet.png"),null()),(int)2,(int)1,(int)25,(int)25,null(),null());
	HX_STACK_LINE(59)
	this->spritesheet->addBehavior(::spritesheet::data::BehaviorData_obj::__new(HX_CSTRING("off"),Array_obj< int >::__new().Add((int)0),false,null(),null(),null()));
	HX_STACK_LINE(60)
	this->spritesheet->addBehavior(::spritesheet::data::BehaviorData_obj::__new(HX_CSTRING("on"),Array_obj< int >::__new().Add((int)1),false,null(),null(),null()));
	HX_STACK_LINE(61)
	this->animated = ::core::RotataingAnimatedSprite_obj::__new(this->spritesheet,true);
	HX_STACK_LINE(62)
	this->animated->xloc = (int)0;
	HX_STACK_LINE(63)
	this->animated->yloc = (int)0;
	HX_STACK_LINE(64)
	this->hscreen = (int)0;
	HX_STACK_LINE(65)
	this->vscreen = (int)0;
	HX_STACK_LINE(66)
	this->angle = (int)0;
	HX_STACK_LINE(67)
	this->success = false;
	HX_STACK_LINE(68)
	this->land = false;
	HX_STACK_LINE(69)
	this->animated->set_rotation((int)1);
	HX_STACK_LINE(70)
	this->animated->xcenter = 12.5;
	HX_STACK_LINE(71)
	this->animated->ycenter = 12.5;
	HX_STACK_LINE(74)
	this->set_name(HX_CSTRING("spaceShip"));
	HX_STACK_LINE(75)
	this->addChild(this->animated);
}
;
	return null();
}

//SpaceShip_obj::~SpaceShip_obj() { }

Dynamic SpaceShip_obj::__CreateEmpty() { return  new SpaceShip_obj; }
hx::ObjectPtr< SpaceShip_obj > SpaceShip_obj::__new()
{  hx::ObjectPtr< SpaceShip_obj > result = new SpaceShip_obj();
	result->__construct();
	return result;}

Dynamic SpaceShip_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SpaceShip_obj > result = new SpaceShip_obj();
	result->__construct();
	return result;}

bool SpaceShip_obj::isDead( ){
	HX_STACK_FRAME("SpaceShip","isDead",0xba727b1a,"SpaceShip.isDead","SpaceShip.hx",80,0x82aa9c7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(80)
	return this->dead;
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceShip_obj,isDead,return )

bool SpaceShip_obj::isLand( ){
	HX_STACK_FRAME("SpaceShip","isLand",0xbfb93261,"SpaceShip.isLand","SpaceShip.hx",84,0x82aa9c7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(84)
	return this->land;
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceShip_obj,isLand,return )

Float SpaceShip_obj::getFuel( ){
	HX_STACK_FRAME("SpaceShip","getFuel",0x0c5caa40,"SpaceShip.getFuel","SpaceShip.hx",87,0x82aa9c7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(87)
	return this->fuel;
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceShip_obj,getFuel,return )

bool SpaceShip_obj::isSuccess( ){
	HX_STACK_FRAME("SpaceShip","isSuccess",0x3324a70d,"SpaceShip.isSuccess","SpaceShip.hx",90,0x82aa9c7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(90)
	return this->success;
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceShip_obj,isSuccess,return )

Void SpaceShip_obj::init( ::Scene scene,Float x,Float y,Dynamic width,Dynamic height){
{
		HX_STACK_FRAME("SpaceShip","init",0x7889af7c,"SpaceShip.init","SpaceShip.hx",92,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(94)
		this->scene = scene;
		HX_STACK_LINE(95)
		this->angle = (int)0;
		HX_STACK_LINE(96)
		this->fuel = (int)600;
		HX_STACK_LINE(97)
		this->verticalAceleration = (int)0;
		HX_STACK_LINE(98)
		this->horizontalAceleration = (int)0;
		HX_STACK_LINE(100)
		this->animated->showBehavior(HX_CSTRING("off"),null());
		HX_STACK_LINE(101)
		this->putInStart();
		HX_STACK_LINE(103)
		this->spaceshipboard->init(scene,(int)40,(int)40,null(),null());
		HX_STACK_LINE(105)
		scene->addChild(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(106)
		scene->setPlayer(hx::ObjectPtr<OBJ_>(this));
	}
return null();
}


Void SpaceShip_obj::clear( ){
{
		HX_STACK_FRAME("SpaceShip","clear",0x8a32dba1,"SpaceShip.clear","SpaceShip.hx",112,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		if (((this->spaceshipboard->get_parent() != null()))){
			HX_STACK_LINE(113)
			this->scene->removeChild(this->spaceshipboard);
		}
	}
return null();
}


Void SpaceShip_obj::update( int elapsedTime){
{
		HX_STACK_FRAME("SpaceShip","update",0xe1aaed75,"SpaceShip.update","SpaceShip.hx",117,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsedTime,"elapsedTime")
		HX_STACK_LINE(119)
		this->animated->update(elapsedTime);
		HX_STACK_LINE(124)
		this->scrollWindow();
		HX_STACK_LINE(125)
		this->spaceshipboard->setFuel(this->scene,this->fuel);
		HX_STACK_LINE(127)
		this->checkLanding();
		HX_STACK_LINE(129)
		if (((bool(this->land) && bool(this->enginePower)))){
			HX_STACK_LINE(130)
			this->takinoff = true;
			HX_STACK_LINE(131)
			this->startPoint = this->get_y();
		}
		HX_STACK_LINE(134)
		if (((bool(!(this->takinoff)) && bool(!(this->land))))){
			HX_STACK_LINE(135)
			if ((this->scene->checkCollision(hx::ObjectPtr<OBJ_>(this),this->horizontalAceleration,this->verticalAceleration))){
				HX_STACK_LINE(136)
				this->destroy();
			}
			HX_STACK_LINE(141)
			int _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			if ((this->turnRight)){
				HX_STACK_LINE(141)
				_g = (int)5;
			}
			else{
				HX_STACK_LINE(141)
				_g = (int)0;
			}
			HX_STACK_LINE(141)
			hx::AddEq(this->angle,(((  ((this->turnLeft)) ? int((int)-5) : int((int)0) )) + _g));
			HX_STACK_LINE(143)
			if (((this->fuel <= (int)0))){
				HX_STACK_LINE(144)
				this->enginePower = false;
			}
			else{
				HX_STACK_LINE(146)
				if ((this->enginePower)){
					HX_STACK_LINE(147)
					(this->fuel)--;
				}
			}
			HX_STACK_LINE(150)
			Float _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(150)
			if ((this->enginePower)){
				HX_STACK_LINE(150)
				_g1 = this->engineAceleration;
			}
			else{
				HX_STACK_LINE(150)
				_g1 = (int)0;
			}
			HX_STACK_LINE(150)
			Float engineAcelerationX = (_g1 * ::Math_obj::cos((Float((((this->angle + (int)90)) * ::Math_obj::PI)) / Float((int)180))));		HX_STACK_VAR(engineAcelerationX,"engineAcelerationX");
			HX_STACK_LINE(151)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(151)
			if ((this->enginePower)){
				HX_STACK_LINE(151)
				_g2 = this->engineAceleration;
			}
			else{
				HX_STACK_LINE(151)
				_g2 = (int)0;
			}
			HX_STACK_LINE(151)
			Float engineAcelerationY = (_g2 * ::Math_obj::sin((Float((((this->angle + (int)90)) * ::Math_obj::PI)) / Float((int)180))));		HX_STACK_VAR(engineAcelerationY,"engineAcelerationY");
			HX_STACK_LINE(152)
			hx::AddEq(this->verticalAceleration,(this->gravity - ((  ((this->enginePower)) ? Float(engineAcelerationY) : Float((int)0) ))));
			HX_STACK_LINE(153)
			Float _g3 = ::Math_obj::min(::Math_obj::abs(this->verticalAceleration),(int)4);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(153)
			this->verticalAceleration = (_g3 * ((  (((this->verticalAceleration > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(155)
			if ((this->enginePower)){
				HX_STACK_LINE(155)
				hx::SubEq(this->horizontalAceleration,engineAcelerationX);
			}
			else{
				HX_STACK_LINE(155)
				hx::SubEq(this->horizontalAceleration,(int)0);
			}
			HX_STACK_LINE(156)
			Float _g4 = ::Math_obj::min(::Math_obj::abs(this->horizontalAceleration),(int)4);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(156)
			this->horizontalAceleration = (_g4 * ((  (((this->horizontalAceleration > (int)0))) ? int((int)1) : int((int)-1) )));
			HX_STACK_LINE(158)
			if (((this->animated->get_rotation() != this->angle))){
				HX_STACK_LINE(159)
				this->animated->rotate(this->angle);
				HX_STACK_LINE(160)
				this->angle = hx::Mod(this->angle,(int)360);
			}
		}
		else{
			HX_STACK_LINE(163)
			if ((this->takinoff)){
				HX_STACK_LINE(164)
				if (((this->get_y() > (this->startPoint - (int)30)))){
					HX_STACK_LINE(165)
					this->angle = (int)0;
					HX_STACK_LINE(166)
					this->horizontalAceleration = (int)0;
					HX_STACK_LINE(167)
					this->verticalAceleration = -(this->gravity);
					HX_STACK_LINE(168)
					{
						HX_STACK_LINE(168)
						::SpaceShip _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(168)
						Float _g1 = _g->get_y();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(168)
						_g->set_y((_g1 - (int)1));
						HX_STACK_LINE(168)
						_g1;
					}
				}
				else{
					HX_STACK_LINE(170)
					this->takinoff = false;
				}
			}
			else{
				HX_STACK_LINE(172)
				if ((this->land)){
					HX_STACK_LINE(173)
					if (((this->angle > (int)0))){
						HX_STACK_LINE(174)
						hx::SubEq(this->angle,(int)5);
					}
					HX_STACK_LINE(175)
					if (((this->angle < (int)0))){
						HX_STACK_LINE(176)
						hx::AddEq(this->angle,(int)5);
					}
				}
			}
		}
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			::SpaceShip _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(181)
			_g->set_y((_g->get_y() + this->verticalAceleration));
		}
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			::SpaceShip _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(182)
			_g->set_x((_g->get_x() + this->horizontalAceleration));
		}
	}
return null();
}


Void SpaceShip_obj::scrollWindow( ){
{
		HX_STACK_FRAME("SpaceShip","scrollWindow",0xbc89a849,"SpaceShip.scrollWindow","SpaceShip.hx",186,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		int _g = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(188)
		Float _g1 = this->scene->get_width();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(188)
		if (((_g < (_g1 * this->scene->get_parent()->get_scaleX())))){
			HX_STACK_LINE(189)
			Float _g2 = this->scene->get_width();		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(189)
			Float _g3 = (_g2 * this->scene->get_parent()->get_scaleX());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(189)
			Float screens = (Float(_g3) / Float(((Float(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()) / Float((int)2)))));		HX_STACK_VAR(screens,"screens");
			HX_STACK_LINE(190)
			Float screen = this->hscreen;		HX_STACK_VAR(screen,"screen");
			HX_STACK_LINE(191)
			Float x = (Float(this->get_x()) / Float(screen));		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(192)
			Float _g4 = (x * this->scene->get_parent()->get_scaleX());		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(192)
			if (((_g4 < (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()) / Float((int)3))))){
				HX_STACK_LINE(193)
				if (((screen > (int)1))){
					HX_STACK_LINE(194)
					(screen)--;
				}
			}
			HX_STACK_LINE(195)
			Float _g5 = (x * this->scene->get_parent()->get_scaleX());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(195)
			if (((_g5 > ((Float(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()) / Float((int)3)) * (int)2)))){
				HX_STACK_LINE(196)
				if (((screen < screens))){
					HX_STACK_LINE(197)
					(screen)++;
				}
			}
			HX_STACK_LINE(199)
			if (((screen != this->hscreen))){
				HX_STACK_LINE(200)
				this->hscreen = screen;
				HX_STACK_LINE(201)
				Float _g6 = (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageWidth()) / Float((int)2));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(201)
				this->scene->set_x((((Float(_g6) / Float(this->scene->get_parent()->get_scaleX())) * ((this->hscreen - (int)1))) * (int)-1));
			}
		}
		HX_STACK_LINE(205)
		int _g7 = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(205)
		Float _g8 = this->scene->get_height();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(205)
		if (((_g7 < (_g8 * this->scene->get_parent()->get_scaleY())))){
			HX_STACK_LINE(206)
			Float _g9 = this->scene->get_height();		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(206)
			Float _g10 = (_g9 * this->scene->get_parent()->get_scaleY());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(206)
			Float screens = (Float(_g10) / Float(((Float(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()) / Float((int)2)))));		HX_STACK_VAR(screens,"screens");
			HX_STACK_LINE(207)
			Float screen = this->vscreen;		HX_STACK_VAR(screen,"screen");
			HX_STACK_LINE(208)
			Float y = (Float(this->get_y()) / Float(screen));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(209)
			Float _g11 = (y * this->scene->get_parent()->get_scaleY());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(209)
			if (((_g11 < (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()) / Float((int)3))))){
				HX_STACK_LINE(210)
				if (((screen > (int)1))){
					HX_STACK_LINE(211)
					(screen)--;
				}
			}
			HX_STACK_LINE(212)
			Float _g12 = (y * this->scene->get_parent()->get_scaleY());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(212)
			if (((_g12 > ((Float(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()) / Float((int)3)) * (int)2)))){
				HX_STACK_LINE(213)
				if (((screen < screens))){
					HX_STACK_LINE(214)
					(screen)++;
				}
			}
			HX_STACK_LINE(216)
			if (((screen != this->vscreen))){
				HX_STACK_LINE(217)
				this->vscreen = screen;
				HX_STACK_LINE(218)
				Float _g13 = (Float(::flash::Lib_obj::get_current()->get_stage()->get_stageHeight()) / Float((int)2));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(218)
				this->scene->set_y((((Float(_g13) / Float(this->scene->get_parent()->get_scaleY())) * ((this->vscreen - (int)1))) * (int)-1));
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceShip_obj,scrollWindow,(void))

Void SpaceShip_obj::putInStart( ){
{
		HX_STACK_FRAME("SpaceShip","putInStart",0xe80a249a,"SpaceShip.putInStart","SpaceShip.hx",226,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(226)
		for(::cpp::FastIterator_obj< ::LanderPoint > *__it = ::cpp::CreateFastIterator< ::LanderPoint >(this->scene->getTargets()->iterator());  __it->hasNext(); ){
			::LanderPoint object = __it->next();
			if ((object->isStartPoint())){
				HX_STACK_LINE(228)
				Float _g = object->get_y();		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(228)
				this->set_y((_g - this->get_height()));
				HX_STACK_LINE(229)
				Float _g1 = (Float(object->get_width()) / Float((int)2));		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(229)
				Float _g2 = (_g1 + object->get_x());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(229)
				this->set_x((_g2 - (Float(this->get_width()) / Float((int)2))));
				HX_STACK_LINE(230)
				this->land = true;
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceShip_obj,putInStart,(void))

bool SpaceShip_obj::checkLanding( ){
	HX_STACK_FRAME("SpaceShip","checkLanding",0xebeac45b,"SpaceShip.checkLanding","SpaceShip.hx",234,0x82aa9c7c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(236)
	Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(236)
	Float _g1 = this->get_y();		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(236)
	Float _g2 = this->get_width();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(236)
	::flash::geom::Rectangle origen = ::flash::geom::Rectangle_obj::__new(_g,_g1,_g2,this->get_height());		HX_STACK_VAR(origen,"origen");
	HX_STACK_LINE(238)
	for(::cpp::FastIterator_obj< ::LanderPoint > *__it = ::cpp::CreateFastIterator< ::LanderPoint >(this->scene->getTargets()->iterator());  __it->hasNext(); ){
		::LanderPoint object = __it->next();
		if ((origen->intersects(object->getRect(this->scene)))){
			struct _Function_2_1{
				inline static bool Block( ::flash::geom::Rectangle &origen,::LanderPoint &object){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","SpaceShip.hx",240,0x82aa9c7c)
					{
						HX_STACK_LINE(240)
						Float _g3 = object->get_x();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(240)
						return ((origen->x + origen->width) <= (_g3 + object->get_width()));
					}
					return null();
				}
			};
			HX_STACK_LINE(240)
			if (((  (((  (((origen->x >= object->get_x()))) ? bool(_Function_2_1::Block(origen,object)) : bool(false) ))) ? bool((::Math_obj::abs(this->angle) < (int)45)) : bool(false) ))){
				struct _Function_3_1{
					inline static bool Block( ::SpaceShip_obj *__this,::LanderPoint &object){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","SpaceShip.hx",241,0x82aa9c7c)
						{
							HX_STACK_LINE(241)
							Float _g4 = __this->get_y();		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(241)
							return (_g4 < object->get_y());
						}
						return null();
					}
				};
				HX_STACK_LINE(241)
				if (((  (((this->verticalAceleration < 1.5))) ? bool(_Function_3_1::Block(this,object)) : bool(false) ))){
					HX_STACK_LINE(242)
					this->horizontalAceleration = (int)0;
					HX_STACK_LINE(243)
					this->verticalAceleration = (int)0;
					HX_STACK_LINE(245)
					if ((object->isTarget())){
						HX_STACK_LINE(246)
						this->success = true;
						HX_STACK_LINE(247)
						::GameManager_obj::getInstance()->addPoints(this->fuel);
					}
					HX_STACK_LINE(249)
					this->land = true;
					HX_STACK_LINE(250)
					this->fuel = (int)600;
					HX_STACK_LINE(252)
					return true;
					HX_STACK_LINE(253)
					break;
				}
				else{
					HX_STACK_LINE(255)
					if ((!(this->land))){
						HX_STACK_LINE(256)
						this->destroy();
					}
				}
			}
			else{
				HX_STACK_LINE(259)
				this->destroy();
			}
		}
;
	}
	HX_STACK_LINE(264)
	this->land = false;
	HX_STACK_LINE(265)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(SpaceShip_obj,checkLanding,return )

Void SpaceShip_obj::destroy( ){
{
		HX_STACK_FRAME("SpaceShip","destroy",0x1a9b440e,"SpaceShip.destroy","SpaceShip.hx",269,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(271)
		::Explosion explosion = ::Explosion_obj::__new();		HX_STACK_VAR(explosion,"explosion");
		HX_STACK_LINE(272)
		Float _g = this->get_x();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(272)
		explosion->init(this->scene,_g,this->get_y(),null(),null());
		HX_STACK_LINE(273)
		this->dead = true;
	}
return null();
}


Void SpaceShip_obj::keyPressed( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("SpaceShip","keyPressed",0x2e9a002f,"SpaceShip.keyPressed","SpaceShip.hx",280,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(280)
		int _g = event->keyCode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(280)
		int _switch_1 = (_g);
		if (  ( _switch_1==::flash::ui::Keyboard_obj::SPACE) ||  ( _switch_1==::flash::ui::Keyboard_obj::UP)){
			HX_STACK_LINE(283)
			if (((this->fuel > (int)0))){
				HX_STACK_LINE(284)
				this->animated->showBehavior(HX_CSTRING("on"),null());
				HX_STACK_LINE(285)
				this->enginePower = true;
			}
		}
		else if (  ( _switch_1==::flash::ui::Keyboard_obj::LEFT)){
			HX_STACK_LINE(288)
			this->turnRight = false;
			HX_STACK_LINE(289)
			this->turnLeft = true;
		}
		else if (  ( _switch_1==::flash::ui::Keyboard_obj::RIGHT)){
			HX_STACK_LINE(291)
			this->turnRight = true;
			HX_STACK_LINE(292)
			this->turnLeft = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpaceShip_obj,keyPressed,(void))

Void SpaceShip_obj::keyReleased( ::flash::events::KeyboardEvent event){
{
		HX_STACK_FRAME("SpaceShip","keyReleased",0x9efc3690,"SpaceShip.keyReleased","SpaceShip.hx",299,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(299)
		int _g = event->keyCode;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(299)
		int _switch_2 = (_g);
		if (  ( _switch_2==::flash::ui::Keyboard_obj::SPACE) ||  ( _switch_2==::flash::ui::Keyboard_obj::UP)){
			HX_STACK_LINE(302)
			this->animated->showBehavior(HX_CSTRING("off"),null());
			HX_STACK_LINE(303)
			this->enginePower = false;
		}
		else if (  ( _switch_2==::flash::ui::Keyboard_obj::LEFT)){
			HX_STACK_LINE(305)
			this->turnLeft = false;
		}
		else if (  ( _switch_2==::flash::ui::Keyboard_obj::RIGHT)){
			HX_STACK_LINE(307)
			this->turnRight = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpaceShip_obj,keyReleased,(void))

Void SpaceShip_obj::touchBegin( ::flash::events::TouchEvent event){
{
		HX_STACK_FRAME("SpaceShip","touchBegin",0x30125b56,"SpaceShip.touchBegin","SpaceShip.hx",313,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(313)
		if (((this->fuel > (int)0))){
			HX_STACK_LINE(314)
			this->animated->showBehavior(HX_CSTRING("on"),null());
			HX_STACK_LINE(315)
			this->enginePower = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpaceShip_obj,touchBegin,(void))

Void SpaceShip_obj::touchEnd( ::flash::events::TouchEvent event){
{
		HX_STACK_FRAME("SpaceShip","touchEnd",0x5c68dfc8,"SpaceShip.touchEnd","SpaceShip.hx",320,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(321)
		this->animated->showBehavior(HX_CSTRING("off"),null());
		HX_STACK_LINE(322)
		this->enginePower = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpaceShip_obj,touchEnd,(void))

Void SpaceShip_obj::updateAccelerometer( ::flash::events::AccelerometerEvent event){
{
		HX_STACK_FRAME("SpaceShip","updateAccelerometer",0x9c7b7c1a,"SpaceShip.updateAccelerometer","SpaceShip.hx",327,0x82aa9c7c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(327)
		if ((!(this->land))){
			HX_STACK_LINE(332)
			this->angle = (event->accelerationY * (int)200);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(SpaceShip_obj,updateAccelerometer,(void))


SpaceShip_obj::SpaceShip_obj()
{
}

void SpaceShip_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SpaceShip);
	HX_MARK_MEMBER_NAME(spaceshipboard,"spaceshipboard");
	HX_MARK_MEMBER_NAME(verticalAceleration,"verticalAceleration");
	HX_MARK_MEMBER_NAME(horizontalAceleration,"horizontalAceleration");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(enginePower,"enginePower");
	HX_MARK_MEMBER_NAME(turnLeft,"turnLeft");
	HX_MARK_MEMBER_NAME(turnRight,"turnRight");
	HX_MARK_MEMBER_NAME(engineAceleration,"engineAceleration");
	HX_MARK_MEMBER_NAME(gravity,"gravity");
	HX_MARK_MEMBER_NAME(animated,"animated");
	HX_MARK_MEMBER_NAME(spritesheet,"spritesheet");
	HX_MARK_MEMBER_NAME(dead,"dead");
	HX_MARK_MEMBER_NAME(land,"land");
	HX_MARK_MEMBER_NAME(fuel,"fuel");
	HX_MARK_MEMBER_NAME(hscreen,"hscreen");
	HX_MARK_MEMBER_NAME(vscreen,"vscreen");
	HX_MARK_MEMBER_NAME(timerAngle,"timerAngle");
	HX_MARK_MEMBER_NAME(startPoint,"startPoint");
	HX_MARK_MEMBER_NAME(success,"success");
	HX_MARK_MEMBER_NAME(takinoff,"takinoff");
	::Actor_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void SpaceShip_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(spaceshipboard,"spaceshipboard");
	HX_VISIT_MEMBER_NAME(verticalAceleration,"verticalAceleration");
	HX_VISIT_MEMBER_NAME(horizontalAceleration,"horizontalAceleration");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(enginePower,"enginePower");
	HX_VISIT_MEMBER_NAME(turnLeft,"turnLeft");
	HX_VISIT_MEMBER_NAME(turnRight,"turnRight");
	HX_VISIT_MEMBER_NAME(engineAceleration,"engineAceleration");
	HX_VISIT_MEMBER_NAME(gravity,"gravity");
	HX_VISIT_MEMBER_NAME(animated,"animated");
	HX_VISIT_MEMBER_NAME(spritesheet,"spritesheet");
	HX_VISIT_MEMBER_NAME(dead,"dead");
	HX_VISIT_MEMBER_NAME(land,"land");
	HX_VISIT_MEMBER_NAME(fuel,"fuel");
	HX_VISIT_MEMBER_NAME(hscreen,"hscreen");
	HX_VISIT_MEMBER_NAME(vscreen,"vscreen");
	HX_VISIT_MEMBER_NAME(timerAngle,"timerAngle");
	HX_VISIT_MEMBER_NAME(startPoint,"startPoint");
	HX_VISIT_MEMBER_NAME(success,"success");
	HX_VISIT_MEMBER_NAME(takinoff,"takinoff");
	::Actor_obj::__Visit(HX_VISIT_ARG);
}

Dynamic SpaceShip_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dead") ) { return dead; }
		if (HX_FIELD_EQ(inName,"land") ) { return land; }
		if (HX_FIELD_EQ(inName,"fuel") ) { return fuel; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"isDead") ) { return isDead_dyn(); }
		if (HX_FIELD_EQ(inName,"isLand") ) { return isLand_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { return gravity; }
		if (HX_FIELD_EQ(inName,"hscreen") ) { return hscreen; }
		if (HX_FIELD_EQ(inName,"vscreen") ) { return vscreen; }
		if (HX_FIELD_EQ(inName,"success") ) { return success; }
		if (HX_FIELD_EQ(inName,"getFuel") ) { return getFuel_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"turnLeft") ) { return turnLeft; }
		if (HX_FIELD_EQ(inName,"animated") ) { return animated; }
		if (HX_FIELD_EQ(inName,"takinoff") ) { return takinoff; }
		if (HX_FIELD_EQ(inName,"touchEnd") ) { return touchEnd_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"turnRight") ) { return turnRight; }
		if (HX_FIELD_EQ(inName,"isSuccess") ) { return isSuccess_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timerAngle") ) { return timerAngle; }
		if (HX_FIELD_EQ(inName,"startPoint") ) { return startPoint; }
		if (HX_FIELD_EQ(inName,"putInStart") ) { return putInStart_dyn(); }
		if (HX_FIELD_EQ(inName,"keyPressed") ) { return keyPressed_dyn(); }
		if (HX_FIELD_EQ(inName,"touchBegin") ) { return touchBegin_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enginePower") ) { return enginePower; }
		if (HX_FIELD_EQ(inName,"spritesheet") ) { return spritesheet; }
		if (HX_FIELD_EQ(inName,"keyReleased") ) { return keyReleased_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"scrollWindow") ) { return scrollWindow_dyn(); }
		if (HX_FIELD_EQ(inName,"checkLanding") ) { return checkLanding_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"spaceshipboard") ) { return spaceshipboard; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"engineAceleration") ) { return engineAceleration; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"verticalAceleration") ) { return verticalAceleration; }
		if (HX_FIELD_EQ(inName,"updateAccelerometer") ) { return updateAccelerometer_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"horizontalAceleration") ) { return horizontalAceleration; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SpaceShip_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"dead") ) { dead=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"land") ) { land=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fuel") ) { fuel=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"gravity") ) { gravity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hscreen") ) { hscreen=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"vscreen") ) { vscreen=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"success") ) { success=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"turnLeft") ) { turnLeft=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animated") ) { animated=inValue.Cast< ::core::RotataingAnimatedSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"takinoff") ) { takinoff=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"turnRight") ) { turnRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"timerAngle") ) { timerAngle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startPoint") ) { startPoint=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enginePower") ) { enginePower=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"spritesheet") ) { spritesheet=inValue.Cast< ::spritesheet::Spritesheet >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"spaceshipboard") ) { spaceshipboard=inValue.Cast< ::boards::SpaceShipBoard >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"engineAceleration") ) { engineAceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"verticalAceleration") ) { verticalAceleration=inValue.Cast< Float >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"horizontalAceleration") ) { horizontalAceleration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SpaceShip_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("spaceshipboard"));
	outFields->push(HX_CSTRING("verticalAceleration"));
	outFields->push(HX_CSTRING("horizontalAceleration"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("enginePower"));
	outFields->push(HX_CSTRING("turnLeft"));
	outFields->push(HX_CSTRING("turnRight"));
	outFields->push(HX_CSTRING("engineAceleration"));
	outFields->push(HX_CSTRING("gravity"));
	outFields->push(HX_CSTRING("animated"));
	outFields->push(HX_CSTRING("spritesheet"));
	outFields->push(HX_CSTRING("dead"));
	outFields->push(HX_CSTRING("land"));
	outFields->push(HX_CSTRING("fuel"));
	outFields->push(HX_CSTRING("hscreen"));
	outFields->push(HX_CSTRING("vscreen"));
	outFields->push(HX_CSTRING("timerAngle"));
	outFields->push(HX_CSTRING("startPoint"));
	outFields->push(HX_CSTRING("success"));
	outFields->push(HX_CSTRING("takinoff"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::boards::SpaceShipBoard*/ ,(int)offsetof(SpaceShip_obj,spaceshipboard),HX_CSTRING("spaceshipboard")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,verticalAceleration),HX_CSTRING("verticalAceleration")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,horizontalAceleration),HX_CSTRING("horizontalAceleration")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,angle),HX_CSTRING("angle")},
	{hx::fsBool,(int)offsetof(SpaceShip_obj,enginePower),HX_CSTRING("enginePower")},
	{hx::fsBool,(int)offsetof(SpaceShip_obj,turnLeft),HX_CSTRING("turnLeft")},
	{hx::fsBool,(int)offsetof(SpaceShip_obj,turnRight),HX_CSTRING("turnRight")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,engineAceleration),HX_CSTRING("engineAceleration")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,gravity),HX_CSTRING("gravity")},
	{hx::fsObject /*::core::RotataingAnimatedSprite*/ ,(int)offsetof(SpaceShip_obj,animated),HX_CSTRING("animated")},
	{hx::fsObject /*::spritesheet::Spritesheet*/ ,(int)offsetof(SpaceShip_obj,spritesheet),HX_CSTRING("spritesheet")},
	{hx::fsBool,(int)offsetof(SpaceShip_obj,dead),HX_CSTRING("dead")},
	{hx::fsBool,(int)offsetof(SpaceShip_obj,land),HX_CSTRING("land")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,fuel),HX_CSTRING("fuel")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,hscreen),HX_CSTRING("hscreen")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,vscreen),HX_CSTRING("vscreen")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,timerAngle),HX_CSTRING("timerAngle")},
	{hx::fsFloat,(int)offsetof(SpaceShip_obj,startPoint),HX_CSTRING("startPoint")},
	{hx::fsBool,(int)offsetof(SpaceShip_obj,success),HX_CSTRING("success")},
	{hx::fsBool,(int)offsetof(SpaceShip_obj,takinoff),HX_CSTRING("takinoff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("spaceshipboard"),
	HX_CSTRING("verticalAceleration"),
	HX_CSTRING("horizontalAceleration"),
	HX_CSTRING("angle"),
	HX_CSTRING("enginePower"),
	HX_CSTRING("turnLeft"),
	HX_CSTRING("turnRight"),
	HX_CSTRING("engineAceleration"),
	HX_CSTRING("gravity"),
	HX_CSTRING("animated"),
	HX_CSTRING("spritesheet"),
	HX_CSTRING("dead"),
	HX_CSTRING("land"),
	HX_CSTRING("fuel"),
	HX_CSTRING("hscreen"),
	HX_CSTRING("vscreen"),
	HX_CSTRING("timerAngle"),
	HX_CSTRING("startPoint"),
	HX_CSTRING("success"),
	HX_CSTRING("takinoff"),
	HX_CSTRING("isDead"),
	HX_CSTRING("isLand"),
	HX_CSTRING("getFuel"),
	HX_CSTRING("isSuccess"),
	HX_CSTRING("init"),
	HX_CSTRING("clear"),
	HX_CSTRING("update"),
	HX_CSTRING("scrollWindow"),
	HX_CSTRING("putInStart"),
	HX_CSTRING("checkLanding"),
	HX_CSTRING("destroy"),
	HX_CSTRING("keyPressed"),
	HX_CSTRING("keyReleased"),
	HX_CSTRING("touchBegin"),
	HX_CSTRING("touchEnd"),
	HX_CSTRING("updateAccelerometer"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpaceShip_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpaceShip_obj::__mClass,"__mClass");
};

#endif

Class SpaceShip_obj::__mClass;

void SpaceShip_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("SpaceShip"), hx::TCanCast< SpaceShip_obj> ,sStaticFields,sMemberFields,
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

void SpaceShip_obj::__boot()
{
}

