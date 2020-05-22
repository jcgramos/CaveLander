#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_motion_easing_ExpoEaseInOut
#include <motion/easing/ExpoEaseInOut.h>
#endif
#ifndef INCLUDED_motion_easing_IEasing
#include <motion/easing/IEasing.h>
#endif
namespace motion{
namespace easing{

Void ExpoEaseInOut_obj::__construct()
{
HX_STACK_FRAME("motion.easing.ExpoEaseInOut","new",0x06cb1550,"motion.easing.ExpoEaseInOut.new","motion/easing/Expo.hx",73,0xaf90d701)
{
}
;
	return null();
}

//ExpoEaseInOut_obj::~ExpoEaseInOut_obj() { }

Dynamic ExpoEaseInOut_obj::__CreateEmpty() { return  new ExpoEaseInOut_obj; }
hx::ObjectPtr< ExpoEaseInOut_obj > ExpoEaseInOut_obj::__new()
{  hx::ObjectPtr< ExpoEaseInOut_obj > result = new ExpoEaseInOut_obj();
	result->__construct();
	return result;}

Dynamic ExpoEaseInOut_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ExpoEaseInOut_obj > result = new ExpoEaseInOut_obj();
	result->__construct();
	return result;}

hx::Object *ExpoEaseInOut_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::motion::easing::IEasing_obj)) return operator ::motion::easing::IEasing_obj *();
	return super::__ToInterface(inType);
}

Float ExpoEaseInOut_obj::calculate( Float k){
	HX_STACK_FRAME("motion.easing.ExpoEaseInOut","calculate",0x6ecc2e56,"motion.easing.ExpoEaseInOut.calculate","motion/easing/Expo.hx",80,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(k,"k")
	HX_STACK_LINE(82)
	if (((k == (int)0))){
		HX_STACK_LINE(82)
		return (int)0;
	}
	HX_STACK_LINE(83)
	if (((k == (int)1))){
		HX_STACK_LINE(83)
		return (int)1;
	}
	HX_STACK_LINE(84)
	if ((((hx::DivEq(k,0.5)) < 1.0))){
		HX_STACK_LINE(85)
		return (0.5 * ::Math_obj::pow((int)2,((int)10 * ((k - (int)1)))));
	}
	HX_STACK_LINE(87)
	return (0.5 * (((int)2 - ::Math_obj::pow((int)2,((int)-10 * --(k))))));
}


HX_DEFINE_DYNAMIC_FUNC1(ExpoEaseInOut_obj,calculate,return )

Float ExpoEaseInOut_obj::ease( Float t,Float b,Float c,Float d){
	HX_STACK_FRAME("motion.easing.ExpoEaseInOut","ease",0xe4f198fe,"motion.easing.ExpoEaseInOut.ease","motion/easing/Expo.hx",92,0xaf90d701)
	HX_STACK_THIS(this)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(b,"b")
	HX_STACK_ARG(c,"c")
	HX_STACK_ARG(d,"d")
	HX_STACK_LINE(94)
	if (((t == (int)0))){
		HX_STACK_LINE(95)
		return b;
	}
	HX_STACK_LINE(97)
	if (((t == d))){
		HX_STACK_LINE(98)
		return (b + c);
	}
	HX_STACK_LINE(100)
	if ((((hx::DivEq(t,(Float(d) / Float(2.0)))) < 1.0))){
		HX_STACK_LINE(101)
		return (((Float(c) / Float((int)2)) * ::Math_obj::pow((int)2,((int)10 * ((t - (int)1))))) + b);
	}
	HX_STACK_LINE(103)
	return (((Float(c) / Float((int)2)) * (((int)2 - ::Math_obj::pow((int)2,((int)-10 * --(t)))))) + b);
}


HX_DEFINE_DYNAMIC_FUNC4(ExpoEaseInOut_obj,ease,return )


ExpoEaseInOut_obj::ExpoEaseInOut_obj()
{
}

Dynamic ExpoEaseInOut_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"ease") ) { return ease_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"calculate") ) { return calculate_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ExpoEaseInOut_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ExpoEaseInOut_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("calculate"),
	HX_CSTRING("ease"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ExpoEaseInOut_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ExpoEaseInOut_obj::__mClass,"__mClass");
};

#endif

Class ExpoEaseInOut_obj::__mClass;

void ExpoEaseInOut_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("motion.easing.ExpoEaseInOut"), hx::TCanCast< ExpoEaseInOut_obj> ,sStaticFields,sMemberFields,
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

void ExpoEaseInOut_obj::__boot()
{
}

} // end namespace motion
} // end namespace easing
