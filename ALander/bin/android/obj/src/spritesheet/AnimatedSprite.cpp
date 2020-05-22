#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_spritesheet_data_SpritesheetFrame
#include <spritesheet/data/SpritesheetFrame.h>
#endif
namespace spritesheet{

Void AnimatedSprite_obj::__construct(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing)
{
HX_STACK_FRAME("spritesheet.AnimatedSprite","new",0x54560b8e,"spritesheet.AnimatedSprite.new","spritesheet/AnimatedSprite.hx",28,0xb6ee0e81)

HX_STACK_ARG(sheet,"sheet")

HX_STACK_ARG(__o_smoothing,"smoothing")
bool smoothing = __o_smoothing.Default(false);
{
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(32)
	this->smoothing = smoothing;
	HX_STACK_LINE(33)
	this->spritesheet = sheet;
	HX_STACK_LINE(35)
	this->behaviorQueue = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(36)
	this->bitmap = ::flash::display::Bitmap_obj::__new(null(),null(),null());
	HX_STACK_LINE(37)
	this->addChild(this->bitmap);
}
;
	return null();
}

//AnimatedSprite_obj::~AnimatedSprite_obj() { }

Dynamic AnimatedSprite_obj::__CreateEmpty() { return  new AnimatedSprite_obj; }
hx::ObjectPtr< AnimatedSprite_obj > AnimatedSprite_obj::__new(::spritesheet::Spritesheet sheet,hx::Null< bool >  __o_smoothing)
{  hx::ObjectPtr< AnimatedSprite_obj > result = new AnimatedSprite_obj();
	result->__construct(sheet,__o_smoothing);
	return result;}

Dynamic AnimatedSprite_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimatedSprite_obj > result = new AnimatedSprite_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Dynamic AnimatedSprite_obj::getFrameData( int index){
	HX_STACK_FRAME("spritesheet.AnimatedSprite","getFrameData",0x11faa093,"spritesheet.AnimatedSprite.getFrameData","spritesheet/AnimatedSprite.hx",44,0xb6ee0e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(44)
	if (((bool((this->currentBehavior != null())) && bool((this->currentBehavior->frameData->__Field(HX_CSTRING("length"),true) > index))))){
		HX_STACK_LINE(46)
		return this->currentBehavior->frameData->__GetItem(index);
	}
	else{
		HX_STACK_LINE(50)
		return null();
	}
	HX_STACK_LINE(44)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,getFrameData,return )

Void AnimatedSprite_obj::queueBehavior( Dynamic behavior){
{
		HX_STACK_FRAME("spritesheet.AnimatedSprite","queueBehavior",0x42f193f1,"spritesheet.AnimatedSprite.queueBehavior","spritesheet/AnimatedSprite.hx",57,0xb6ee0e81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(behavior,"behavior")
		HX_STACK_LINE(59)
		::spritesheet::data::BehaviorData behaviorData = this->resolveBehavior(behavior);		HX_STACK_VAR(behaviorData,"behaviorData");
		HX_STACK_LINE(61)
		if (((this->currentBehavior == null()))){
			HX_STACK_LINE(63)
			this->updateBehavior(behaviorData,null());
		}
		else{
			HX_STACK_LINE(67)
			this->behaviorQueue->push(behaviorData);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,queueBehavior,(void))

::spritesheet::data::BehaviorData AnimatedSprite_obj::resolveBehavior( Dynamic behavior){
	HX_STACK_FRAME("spritesheet.AnimatedSprite","resolveBehavior",0x501873cc,"spritesheet.AnimatedSprite.resolveBehavior","spritesheet/AnimatedSprite.hx",74,0xb6ee0e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(behavior,"behavior")
	HX_STACK_LINE(76)
	if ((::Std_obj::is(behavior,hx::ClassOf< ::spritesheet::data::BehaviorData >()))){
		HX_STACK_LINE(78)
		return behavior;
	}
	else{
		HX_STACK_LINE(80)
		if ((::Std_obj::is(behavior,hx::ClassOf< ::String >()))){
			HX_STACK_LINE(82)
			if (((this->spritesheet != null()))){
				HX_STACK_LINE(84)
				return this->spritesheet->behaviors->get(behavior);
			}
		}
	}
	HX_STACK_LINE(90)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,resolveBehavior,return )

Void AnimatedSprite_obj::showBehavior( Dynamic behavior,hx::Null< bool >  __o_restart){
bool restart = __o_restart.Default(true);
	HX_STACK_FRAME("spritesheet.AnimatedSprite","showBehavior",0x08dfd5c1,"spritesheet.AnimatedSprite.showBehavior","spritesheet/AnimatedSprite.hx",95,0xb6ee0e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(behavior,"behavior")
	HX_STACK_ARG(restart,"restart")
{
		HX_STACK_LINE(97)
		this->behaviorQueue = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(99)
		this->updateBehavior(this->resolveBehavior(behavior),restart);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimatedSprite_obj,showBehavior,(void))

Void AnimatedSprite_obj::showBehaviors( Dynamic behaviors){
{
		HX_STACK_FRAME("spritesheet.AnimatedSprite","showBehaviors",0xbafb3392,"spritesheet.AnimatedSprite.showBehaviors","spritesheet/AnimatedSprite.hx",104,0xb6ee0e81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(behaviors,"behaviors")
		HX_STACK_LINE(106)
		this->behaviorQueue = Array_obj< ::Dynamic >::__new();
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			while(((_g < behaviors->__Field(HX_CSTRING("length"),true)))){
				HX_STACK_LINE(108)
				Dynamic behavior = behaviors->__GetItem(_g);		HX_STACK_VAR(behavior,"behavior");
				HX_STACK_LINE(108)
				++(_g);
				HX_STACK_LINE(110)
				this->behaviorQueue->push(this->resolveBehavior(behavior));
			}
		}
		HX_STACK_LINE(114)
		if (((this->behaviorQueue->length > (int)0))){
			HX_STACK_LINE(116)
			this->updateBehavior(this->behaviorQueue->shift().StaticCast< ::spritesheet::data::BehaviorData >(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,showBehaviors,(void))

Void AnimatedSprite_obj::update( int deltaTime){
{
		HX_STACK_FRAME("spritesheet.AnimatedSprite","update",0x3e41fb9b,"spritesheet.AnimatedSprite.update","spritesheet/AnimatedSprite.hx",125,0xb6ee0e81)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(125)
		if ((!(this->behaviorComplete))){
			HX_STACK_LINE(127)
			hx::AddEq(this->timeElapsed,deltaTime);
			HX_STACK_LINE(129)
			Float ratio = (Float(this->timeElapsed) / Float(this->loopTime));		HX_STACK_VAR(ratio,"ratio");
			HX_STACK_LINE(131)
			if (((ratio >= (int)1))){
				HX_STACK_LINE(133)
				if ((this->currentBehavior->loop)){
					HX_STACK_LINE(135)
					hx::SubEq(ratio,::Math_obj::floor(ratio));
				}
				else{
					HX_STACK_LINE(139)
					this->behaviorComplete = true;
					HX_STACK_LINE(140)
					ratio = (int)1;
				}
			}
			HX_STACK_LINE(146)
			this->currentFrameIndex = ::Math_obj::round((ratio * ((this->currentBehavior->frames->length - (int)1))));
			HX_STACK_LINE(147)
			::spritesheet::data::SpritesheetFrame frame = this->spritesheet->getFrame(this->currentBehavior->frames->__get(this->currentFrameIndex),null());		HX_STACK_VAR(frame,"frame");
			HX_STACK_LINE(149)
			this->bitmap->set_bitmapData(frame->bitmapData);
			HX_STACK_LINE(150)
			this->bitmap->set_smoothing(this->smoothing);
			HX_STACK_LINE(151)
			this->bitmap->set_x((frame->offsetX - this->currentBehavior->originX));
			HX_STACK_LINE(152)
			this->bitmap->set_y((frame->offsetY - this->currentBehavior->originY));
			HX_STACK_LINE(154)
			if ((this->behaviorComplete)){
				HX_STACK_LINE(156)
				if (((this->behaviorQueue->length > (int)0))){
					HX_STACK_LINE(158)
					this->updateBehavior(this->behaviorQueue->shift().StaticCast< ::spritesheet::data::BehaviorData >(),null());
				}
				else{
					HX_STACK_LINE(160)
					if ((this->hasEventListener(::flash::events::Event_obj::COMPLETE))){
						HX_STACK_LINE(162)
						this->dispatchEvent(::flash::events::Event_obj::__new(::flash::events::Event_obj::COMPLETE,null(),null()));
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(AnimatedSprite_obj,update,(void))

Void AnimatedSprite_obj::updateBehavior( ::spritesheet::data::BehaviorData behavior,hx::Null< bool >  __o_restart){
bool restart = __o_restart.Default(true);
	HX_STACK_FRAME("spritesheet.AnimatedSprite","updateBehavior",0x35a3db4d,"spritesheet.AnimatedSprite.updateBehavior","spritesheet/AnimatedSprite.hx",175,0xb6ee0e81)
	HX_STACK_THIS(this)
	HX_STACK_ARG(behavior,"behavior")
	HX_STACK_ARG(restart,"restart")
{
		HX_STACK_LINE(175)
		if (((behavior != null()))){
			HX_STACK_LINE(177)
			if (((bool(restart) || bool((behavior != this->currentBehavior))))){
				HX_STACK_LINE(179)
				this->currentBehavior = behavior;
				HX_STACK_LINE(180)
				this->timeElapsed = (int)0;
				HX_STACK_LINE(181)
				this->behaviorComplete = false;
				HX_STACK_LINE(183)
				this->loopTime = ::Std_obj::_int(((Float(behavior->frames->length) / Float(behavior->frameRate)) * (int)1000));
				HX_STACK_LINE(185)
				if (((this->bitmap->bitmapData == null()))){
					HX_STACK_LINE(187)
					this->update((int)0);
				}
			}
		}
		else{
			HX_STACK_LINE(195)
			this->bitmap->set_bitmapData(null());
			HX_STACK_LINE(196)
			this->currentBehavior = null();
			HX_STACK_LINE(197)
			this->currentFrameIndex = (int)-1;
			HX_STACK_LINE(198)
			this->behaviorComplete = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(AnimatedSprite_obj,updateBehavior,(void))


AnimatedSprite_obj::AnimatedSprite_obj()
{
}

void AnimatedSprite_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimatedSprite);
	HX_MARK_MEMBER_NAME(bitmap,"bitmap");
	HX_MARK_MEMBER_NAME(currentBehavior,"currentBehavior");
	HX_MARK_MEMBER_NAME(currentFrameIndex,"currentFrameIndex");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(spritesheet,"spritesheet");
	HX_MARK_MEMBER_NAME(behaviorComplete,"behaviorComplete");
	HX_MARK_MEMBER_NAME(behaviorQueue,"behaviorQueue");
	HX_MARK_MEMBER_NAME(behavior,"behavior");
	HX_MARK_MEMBER_NAME(loopTime,"loopTime");
	HX_MARK_MEMBER_NAME(timeElapsed,"timeElapsed");
	::flash::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AnimatedSprite_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmap,"bitmap");
	HX_VISIT_MEMBER_NAME(currentBehavior,"currentBehavior");
	HX_VISIT_MEMBER_NAME(currentFrameIndex,"currentFrameIndex");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(spritesheet,"spritesheet");
	HX_VISIT_MEMBER_NAME(behaviorComplete,"behaviorComplete");
	HX_VISIT_MEMBER_NAME(behaviorQueue,"behaviorQueue");
	HX_VISIT_MEMBER_NAME(behavior,"behavior");
	HX_VISIT_MEMBER_NAME(loopTime,"loopTime");
	HX_VISIT_MEMBER_NAME(timeElapsed,"timeElapsed");
	::flash::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AnimatedSprite_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { return bitmap; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"behavior") ) { return behavior; }
		if (HX_FIELD_EQ(inName,"loopTime") ) { return loopTime; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return smoothing; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { return spritesheet; }
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { return timeElapsed; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFrameData") ) { return getFrameData_dyn(); }
		if (HX_FIELD_EQ(inName,"showBehavior") ) { return showBehavior_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"behaviorQueue") ) { return behaviorQueue; }
		if (HX_FIELD_EQ(inName,"queueBehavior") ) { return queueBehavior_dyn(); }
		if (HX_FIELD_EQ(inName,"showBehaviors") ) { return showBehaviors_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updateBehavior") ) { return updateBehavior_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentBehavior") ) { return currentBehavior; }
		if (HX_FIELD_EQ(inName,"resolveBehavior") ) { return resolveBehavior_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"behaviorComplete") ) { return behaviorComplete; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameIndex") ) { return currentFrameIndex; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimatedSprite_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"bitmap") ) { bitmap=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"behavior") ) { behavior=inValue.Cast< ::spritesheet::data::BehaviorData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"loopTime") ) { loopTime=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"spritesheet") ) { spritesheet=inValue.Cast< ::spritesheet::Spritesheet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timeElapsed") ) { timeElapsed=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"behaviorQueue") ) { behaviorQueue=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"currentBehavior") ) { currentBehavior=inValue.Cast< ::spritesheet::data::BehaviorData >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"behaviorComplete") ) { behaviorComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"currentFrameIndex") ) { currentFrameIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimatedSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("bitmap"));
	outFields->push(HX_CSTRING("currentBehavior"));
	outFields->push(HX_CSTRING("currentFrameIndex"));
	outFields->push(HX_CSTRING("smoothing"));
	outFields->push(HX_CSTRING("spritesheet"));
	outFields->push(HX_CSTRING("behaviorComplete"));
	outFields->push(HX_CSTRING("behaviorQueue"));
	outFields->push(HX_CSTRING("behavior"));
	outFields->push(HX_CSTRING("loopTime"));
	outFields->push(HX_CSTRING("timeElapsed"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flash::display::Bitmap*/ ,(int)offsetof(AnimatedSprite_obj,bitmap),HX_CSTRING("bitmap")},
	{hx::fsObject /*::spritesheet::data::BehaviorData*/ ,(int)offsetof(AnimatedSprite_obj,currentBehavior),HX_CSTRING("currentBehavior")},
	{hx::fsInt,(int)offsetof(AnimatedSprite_obj,currentFrameIndex),HX_CSTRING("currentFrameIndex")},
	{hx::fsBool,(int)offsetof(AnimatedSprite_obj,smoothing),HX_CSTRING("smoothing")},
	{hx::fsObject /*::spritesheet::Spritesheet*/ ,(int)offsetof(AnimatedSprite_obj,spritesheet),HX_CSTRING("spritesheet")},
	{hx::fsBool,(int)offsetof(AnimatedSprite_obj,behaviorComplete),HX_CSTRING("behaviorComplete")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(AnimatedSprite_obj,behaviorQueue),HX_CSTRING("behaviorQueue")},
	{hx::fsObject /*::spritesheet::data::BehaviorData*/ ,(int)offsetof(AnimatedSprite_obj,behavior),HX_CSTRING("behavior")},
	{hx::fsInt,(int)offsetof(AnimatedSprite_obj,loopTime),HX_CSTRING("loopTime")},
	{hx::fsInt,(int)offsetof(AnimatedSprite_obj,timeElapsed),HX_CSTRING("timeElapsed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("bitmap"),
	HX_CSTRING("currentBehavior"),
	HX_CSTRING("currentFrameIndex"),
	HX_CSTRING("smoothing"),
	HX_CSTRING("spritesheet"),
	HX_CSTRING("behaviorComplete"),
	HX_CSTRING("behaviorQueue"),
	HX_CSTRING("behavior"),
	HX_CSTRING("loopTime"),
	HX_CSTRING("timeElapsed"),
	HX_CSTRING("getFrameData"),
	HX_CSTRING("queueBehavior"),
	HX_CSTRING("resolveBehavior"),
	HX_CSTRING("showBehavior"),
	HX_CSTRING("showBehaviors"),
	HX_CSTRING("update"),
	HX_CSTRING("updateBehavior"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimatedSprite_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimatedSprite_obj::__mClass,"__mClass");
};

#endif

Class AnimatedSprite_obj::__mClass;

void AnimatedSprite_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spritesheet.AnimatedSprite"), hx::TCanCast< AnimatedSprite_obj> ,sStaticFields,sMemberFields,
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

void AnimatedSprite_obj::__boot()
{
}

} // end namespace spritesheet
