#ifndef INCLUDED_core_CLocals
#define INCLUDED_core_CLocals

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS1(core,CLocals)
HX_DECLARE_CLASS1(core,CLocalsProxy)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(haxe,xml,Proxy)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  CLocals_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef CLocals_obj OBJ_;
		CLocals_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CLocals_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CLocals_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CLocals"); }

		static ::haxe::ds::StringMap all;
		static ::core::CLocalsProxy text;
		static Void set( ::String lang);
		static Dynamic set_dyn();

};

} // end namespace core

#endif /* INCLUDED_core_CLocals */ 
