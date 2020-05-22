#include <hxcpp.h>

#ifndef INCLUDED_spritesheet_data_BehaviorData
#include <spritesheet/data/BehaviorData.h>
#endif
namespace spritesheet{
namespace data{

Void BehaviorData_obj::__construct(::String __o_name,Array< int > frames,hx::Null< bool >  __o_loop,hx::Null< int >  __o_frameRate,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY)
{
HX_STACK_FRAME("spritesheet.data.BehaviorData","new",0xa87d92be,"spritesheet.data.BehaviorData.new","spritesheet/data/BehaviorData.hx",21,0x1f7f1e12)

HX_STACK_ARG(__o_name,"name")

HX_STACK_ARG(frames,"frames")

HX_STACK_ARG(__o_loop,"loop")

HX_STACK_ARG(__o_frameRate,"frameRate")

HX_STACK_ARG(__o_originX,"originX")

HX_STACK_ARG(__o_originY,"originY")
::String name = __o_name.Default(HX_CSTRING(""));
bool loop = __o_loop.Default(false);
int frameRate = __o_frameRate.Default(30);
Float originX = __o_originX.Default(0);
Float originY = __o_originY.Default(0);
{
	HX_STACK_LINE(23)
	if (((name == HX_CSTRING("")))){
		HX_STACK_LINE(25)
		name = (HX_CSTRING("behavior") + (::spritesheet::data::BehaviorData_obj::uniqueID)++);
	}
	HX_STACK_LINE(29)
	if (((frames == null()))){
		HX_STACK_LINE(31)
		frames = Array_obj< int >::__new();
	}
	HX_STACK_LINE(35)
	this->name = name;
	HX_STACK_LINE(36)
	this->frames = frames;
	HX_STACK_LINE(37)
	this->loop = loop;
	HX_STACK_LINE(38)
	this->frameRate = frameRate;
	HX_STACK_LINE(39)
	this->originX = originX;
	HX_STACK_LINE(40)
	this->originY = originY;
	HX_STACK_LINE(42)
	this->frameData = Dynamic( Array_obj<Dynamic>::__new() );
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(44)
		int _g = this->frames->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(44)
		while(((_g1 < _g))){
			HX_STACK_LINE(44)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(46)
			this->frameData->__Field(HX_CSTRING("push"),true)(null());
		}
	}
}
;
	return null();
}

//BehaviorData_obj::~BehaviorData_obj() { }

Dynamic BehaviorData_obj::__CreateEmpty() { return  new BehaviorData_obj; }
hx::ObjectPtr< BehaviorData_obj > BehaviorData_obj::__new(::String __o_name,Array< int > frames,hx::Null< bool >  __o_loop,hx::Null< int >  __o_frameRate,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY)
{  hx::ObjectPtr< BehaviorData_obj > result = new BehaviorData_obj();
	result->__construct(__o_name,frames,__o_loop,__o_frameRate,__o_originX,__o_originY);
	return result;}

Dynamic BehaviorData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BehaviorData_obj > result = new BehaviorData_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return result;}

::spritesheet::data::BehaviorData BehaviorData_obj::clone( ){
	HX_STACK_FRAME("spritesheet.data.BehaviorData","clone",0xa048a93b,"spritesheet.data.BehaviorData.clone","spritesheet/data/BehaviorData.hx",53,0x1f7f1e12)
	HX_STACK_THIS(this)
	HX_STACK_LINE(55)
	::String _g = (HX_CSTRING("behavior") + (::spritesheet::data::BehaviorData_obj::uniqueID)++);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(55)
	return ::spritesheet::data::BehaviorData_obj::__new(_g,this->frames->copy(),this->loop,this->frameRate,this->originX,this->originY);
}


HX_DEFINE_DYNAMIC_FUNC0(BehaviorData_obj,clone,return )

int BehaviorData_obj::uniqueID;


BehaviorData_obj::BehaviorData_obj()
{
}

void BehaviorData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BehaviorData);
	HX_MARK_MEMBER_NAME(frameData,"frameData");
	HX_MARK_MEMBER_NAME(frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(loop,"loop");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_END_CLASS();
}

void BehaviorData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frameData,"frameData");
	HX_VISIT_MEMBER_NAME(frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(loop,"loop");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
}

Dynamic BehaviorData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { return loop; }
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return frames; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniqueID") ) { return uniqueID; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameData") ) { return frameData; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic BehaviorData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"loop") ) { loop=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uniqueID") ) { uniqueID=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameData") ) { frameData=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BehaviorData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("frameData"));
	outFields->push(HX_CSTRING("frameRate"));
	outFields->push(HX_CSTRING("frames"));
	outFields->push(HX_CSTRING("loop"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("originY"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("uniqueID"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BehaviorData_obj,frameData),HX_CSTRING("frameData")},
	{hx::fsInt,(int)offsetof(BehaviorData_obj,frameRate),HX_CSTRING("frameRate")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(BehaviorData_obj,frames),HX_CSTRING("frames")},
	{hx::fsBool,(int)offsetof(BehaviorData_obj,loop),HX_CSTRING("loop")},
	{hx::fsString,(int)offsetof(BehaviorData_obj,name),HX_CSTRING("name")},
	{hx::fsFloat,(int)offsetof(BehaviorData_obj,originX),HX_CSTRING("originX")},
	{hx::fsFloat,(int)offsetof(BehaviorData_obj,originY),HX_CSTRING("originY")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("frameData"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("frames"),
	HX_CSTRING("loop"),
	HX_CSTRING("name"),
	HX_CSTRING("originX"),
	HX_CSTRING("originY"),
	HX_CSTRING("clone"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BehaviorData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BehaviorData_obj::uniqueID,"uniqueID");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BehaviorData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BehaviorData_obj::uniqueID,"uniqueID");
};

#endif

Class BehaviorData_obj::__mClass;

void BehaviorData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("spritesheet.data.BehaviorData"), hx::TCanCast< BehaviorData_obj> ,sStaticFields,sMemberFields,
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

void BehaviorData_obj::__boot()
{
	uniqueID= (int)0;
}

} // end namespace spritesheet
} // end namespace data
