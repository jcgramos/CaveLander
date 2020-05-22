#ifndef INCLUDED_spritesheet_data_BehaviorData
#define INCLUDED_spritesheet_data_BehaviorData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(spritesheet,data,BehaviorData)
namespace spritesheet{
namespace data{


class HXCPP_CLASS_ATTRIBUTES  BehaviorData_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef BehaviorData_obj OBJ_;
		BehaviorData_obj();
		Void __construct(::String __o_name,Array< int > frames,hx::Null< bool >  __o_loop,hx::Null< int >  __o_frameRate,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BehaviorData_obj > __new(::String __o_name,Array< int > frames,hx::Null< bool >  __o_loop,hx::Null< int >  __o_frameRate,hx::Null< Float >  __o_originX,hx::Null< Float >  __o_originY);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BehaviorData_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BehaviorData"); }

		Dynamic frameData;
		int frameRate;
		Array< int > frames;
		bool loop;
		::String name;
		Float originX;
		Float originY;
		virtual ::spritesheet::data::BehaviorData clone( );
		Dynamic clone_dyn();

		static int uniqueID;
};

} // end namespace spritesheet
} // end namespace data

#endif /* INCLUDED_spritesheet_data_BehaviorData */ 
