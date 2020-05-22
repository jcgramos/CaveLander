#ifndef INCLUDED_core_CLocalsProxy
#define INCLUDED_core_CLocalsProxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/xml/Proxy.h>
HX_DECLARE_CLASS1(core,CLocalsProxy)
HX_DECLARE_CLASS2(haxe,xml,Proxy)
namespace core{


class HXCPP_CLASS_ATTRIBUTES  CLocalsProxy_obj : public ::haxe::xml::Proxy_obj{
	public:
		typedef ::haxe::xml::Proxy_obj super;
		typedef CLocalsProxy_obj OBJ_;
		CLocalsProxy_obj();
		Void __construct(Dynamic f);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< CLocalsProxy_obj > __new(Dynamic f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CLocalsProxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("CLocalsProxy"); }

};

} // end namespace core

#endif /* INCLUDED_core_CLocalsProxy */ 
