#ifndef INCLUDED_haxe_xml_Proxy
#define INCLUDED_haxe_xml_Proxy

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,xml,Proxy)
namespace haxe{
namespace xml{


class HXCPP_CLASS_ATTRIBUTES  Proxy_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Proxy_obj OBJ_;
		Proxy_obj();
		Void __construct(Dynamic f);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Proxy_obj > __new(Dynamic f);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Proxy_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Proxy"); }

		Dynamic __f;
		Dynamic &__f_dyn() { return __f;}
		virtual Dynamic resolve( ::String k);
		Dynamic resolve_dyn();

};

} // end namespace haxe
} // end namespace xml

#endif /* INCLUDED_haxe_xml_Proxy */ 
