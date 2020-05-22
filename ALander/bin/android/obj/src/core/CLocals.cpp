#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_core_CLocals
#include <core/CLocals.h>
#endif
#ifndef INCLUDED_core_CLocalsProxy
#include <core/CLocalsProxy.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml_Proxy
#include <haxe/xml/Proxy.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasNodeAccess
#include <haxe/xml/_Fast/HasNodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace core{

Void CLocals_obj::__construct()
{
	return null();
}

//CLocals_obj::~CLocals_obj() { }

Dynamic CLocals_obj::__CreateEmpty() { return  new CLocals_obj; }
hx::ObjectPtr< CLocals_obj > CLocals_obj::__new()
{  hx::ObjectPtr< CLocals_obj > result = new CLocals_obj();
	result->__construct();
	return result;}

Dynamic CLocals_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CLocals_obj > result = new CLocals_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap CLocals_obj::all;

::core::CLocalsProxy CLocals_obj::text;

Void CLocals_obj::set( ::String __o_lang){
::String lang = __o_lang.Default(HX_CSTRING("en"));
	HX_STACK_FRAME("core.CLocals","set",0x52c1ed70,"core.CLocals.set","core/CLocals.hx",11,0xc86a2843)
	HX_STACK_ARG(lang,"lang")
{
		HX_STACK_LINE(12)
		::String l_xmlString = ::openfl::Assets_obj::getText(HX_CSTRING("assets/localization.xml"));		HX_STACK_VAR(l_xmlString,"l_xmlString");
		HX_STACK_LINE(13)
		::haxe::xml::Fast l_xmlFast = ::haxe::xml::Fast_obj::__new(::Xml_obj::parse(l_xmlString)->firstElement());		HX_STACK_VAR(l_xmlFast,"l_xmlFast");
		HX_STACK_LINE(14)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(l_xmlFast->nodes->resolve(HX_CSTRING("item"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast i_node = __it->next();
			{
				HX_STACK_LINE(15)
				::String l_text = HX_CSTRING("");		HX_STACK_VAR(l_text,"l_text");
				HX_STACK_LINE(16)
				::String _switch_1 = (lang);
				if (  ( _switch_1==HX_CSTRING("en"))){
					HX_STACK_LINE(17)
					l_text = i_node->node->resolve(HX_CSTRING("en"))->get_innerData();
				}
				else if (  ( _switch_1==HX_CSTRING("es"))){
					HX_STACK_LINE(19)
					if ((i_node->hasNode->resolve(HX_CSTRING("es")))){
						HX_STACK_LINE(19)
						l_text = i_node->node->resolve(HX_CSTRING("es"))->get_innerData();
					}
					else{
						HX_STACK_LINE(19)
						l_text = i_node->node->resolve(HX_CSTRING("en"))->get_innerData();
					}
				}
				else if (  ( _switch_1==HX_CSTRING("fr"))){
					HX_STACK_LINE(20)
					if ((i_node->hasNode->resolve(HX_CSTRING("fr")))){
						HX_STACK_LINE(20)
						l_text = i_node->node->resolve(HX_CSTRING("fr"))->get_innerData();
					}
					else{
						HX_STACK_LINE(20)
						l_text = i_node->node->resolve(HX_CSTRING("en"))->get_innerData();
					}
				}
				HX_STACK_LINE(22)
				{
					HX_STACK_LINE(22)
					::String key = i_node->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(22)
					::core::CLocals_obj::all->set(key,l_text);
				}
			}
;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CLocals_obj,set,(void))


CLocals_obj::CLocals_obj()
{
}

Dynamic CLocals_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { return all; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { return text; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic CLocals_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"all") ) { all=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"text") ) { text=inValue.Cast< ::core::CLocalsProxy >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CLocals_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("all"),
	HX_CSTRING("text"),
	HX_CSTRING("set"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CLocals_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CLocals_obj::all,"all");
	HX_MARK_MEMBER_NAME(CLocals_obj::text,"text");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CLocals_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CLocals_obj::all,"all");
	HX_VISIT_MEMBER_NAME(CLocals_obj::text,"text");
};

#endif

Class CLocals_obj::__mClass;

void CLocals_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("core.CLocals"), hx::TCanCast< CLocals_obj> ,sStaticFields,sMemberFields,
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

void CLocals_obj::__boot()
{
	all= ::haxe::ds::StringMap_obj::__new();

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_1)
::String run(::String key){
	HX_STACK_FRAME("*","_Function_0_1",0x52002af6,"*._Function_0_1","core/CLocals.hx",9,0xc86a2843)
	HX_STACK_ARG(key,"key")
	{
		HX_STACK_LINE(9)
		return ::core::CLocals_obj::all->get(key);
	}
	return null();
}
HX_END_LOCAL_FUNC1(return)

	text= ::core::CLocalsProxy_obj::__new( Dynamic(new _Function_0_1()));
}

} // end namespace core
