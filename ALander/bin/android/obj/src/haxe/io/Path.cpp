#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
namespace haxe{
namespace io{

Void Path_obj::__construct(::String path)
{
HX_STACK_FRAME("haxe.io.Path","new",0x1b96d677,"haxe.io.Path.new","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",76,0x4f1aa280)

HX_STACK_ARG(path,"path")
{
	HX_STACK_LINE(77)
	int c1 = path.lastIndexOf(HX_CSTRING("/"),null());		HX_STACK_VAR(c1,"c1");
	HX_STACK_LINE(78)
	int c2 = path.lastIndexOf(HX_CSTRING("\\"),null());		HX_STACK_VAR(c2,"c2");
	HX_STACK_LINE(79)
	if (((c1 < c2))){
		HX_STACK_LINE(80)
		this->dir = path.substr((int)0,c2);
		HX_STACK_LINE(81)
		path = path.substr((c2 + (int)1),null());
		HX_STACK_LINE(82)
		this->backslash = true;
	}
	else{
		HX_STACK_LINE(83)
		if (((c2 < c1))){
			HX_STACK_LINE(84)
			this->dir = path.substr((int)0,c1);
			HX_STACK_LINE(85)
			path = path.substr((c1 + (int)1),null());
		}
		else{
			HX_STACK_LINE(87)
			this->dir = null();
		}
	}
	HX_STACK_LINE(88)
	int cp = path.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(cp,"cp");
	HX_STACK_LINE(89)
	if (((cp != (int)-1))){
		HX_STACK_LINE(90)
		this->ext = path.substr((cp + (int)1),null());
		HX_STACK_LINE(91)
		this->file = path.substr((int)0,cp);
	}
	else{
		HX_STACK_LINE(93)
		this->ext = null();
		HX_STACK_LINE(94)
		this->file = path;
	}
}
;
	return null();
}

//Path_obj::~Path_obj() { }

Dynamic Path_obj::__CreateEmpty() { return  new Path_obj; }
hx::ObjectPtr< Path_obj > Path_obj::__new(::String path)
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct(path);
	return result;}

Dynamic Path_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Path_obj > result = new Path_obj();
	result->__construct(inArgs[0]);
	return result;}

::String Path_obj::directory( ::String path){
	HX_STACK_FRAME("haxe.io.Path","directory",0xbcfe23c4,"haxe.io.Path.directory","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",141,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(142)
	::haxe::io::Path s = ::haxe::io::Path_obj::__new(path);		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(143)
	if (((s->dir == null()))){
		HX_STACK_LINE(144)
		return HX_CSTRING("");
	}
	HX_STACK_LINE(145)
	return s->dir;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,directory,return )

::String Path_obj::normalize( ::String path){
	HX_STACK_FRAME("haxe.io.Path","normalize",0x585a68e4,"haxe.io.Path.normalize","C:\\HaxeToolkit\\haxe\\std/haxe/io/Path.hx",204,0x4f1aa280)
	HX_STACK_ARG(path,"path")
	HX_STACK_LINE(205)
	::String slash = HX_CSTRING("/");		HX_STACK_VAR(slash,"slash");
	HX_STACK_LINE(206)
	path = path.split(HX_CSTRING("\\"))->join(HX_CSTRING("/"));
	HX_STACK_LINE(207)
	if (((bool((path == null())) || bool((path == slash))))){
		HX_STACK_LINE(208)
		return slash;
	}
	HX_STACK_LINE(211)
	Array< ::String > target = Array_obj< ::String >::__new();		HX_STACK_VAR(target,"target");
	HX_STACK_LINE(212)
	Array< ::String > src;		HX_STACK_VAR(src,"src");
	HX_STACK_LINE(213)
	Dynamic parts;		HX_STACK_VAR(parts,"parts");
	HX_STACK_LINE(214)
	::String token;		HX_STACK_VAR(token,"token");
	HX_STACK_LINE(216)
	src = path.split(slash);
	HX_STACK_LINE(217)
	{
		HX_STACK_LINE(217)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(217)
		int _g = src->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(217)
		while(((_g1 < _g))){
			HX_STACK_LINE(217)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(218)
			token = src->__get(i);
			HX_STACK_LINE(220)
			if (((token == HX_CSTRING("..")))){
				HX_STACK_LINE(221)
				target->pop();
			}
			else{
				HX_STACK_LINE(222)
				if (((token != HX_CSTRING(".")))){
					HX_STACK_LINE(223)
					target->push(token);
				}
			}
		}
	}
	HX_STACK_LINE(227)
	::String tmp = target->join(slash);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	::EReg regex = ::EReg_obj::__new(HX_CSTRING("([^:])/+"),HX_CSTRING("g"));		HX_STACK_VAR(regex,"regex");
	HX_STACK_LINE(230)
	::String result = regex->replace(tmp,(HX_CSTRING("$1") + slash));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(253)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Path_obj,normalize,return )


Path_obj::Path_obj()
{
}

void Path_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Path);
	HX_MARK_MEMBER_NAME(dir,"dir");
	HX_MARK_MEMBER_NAME(file,"file");
	HX_MARK_MEMBER_NAME(ext,"ext");
	HX_MARK_MEMBER_NAME(backslash,"backslash");
	HX_MARK_END_CLASS();
}

void Path_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dir,"dir");
	HX_VISIT_MEMBER_NAME(file,"file");
	HX_VISIT_MEMBER_NAME(ext,"ext");
	HX_VISIT_MEMBER_NAME(backslash,"backslash");
}

Dynamic Path_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { return dir; }
		if (HX_FIELD_EQ(inName,"ext") ) { return ext; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { return file; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"directory") ) { return directory_dyn(); }
		if (HX_FIELD_EQ(inName,"normalize") ) { return normalize_dyn(); }
		if (HX_FIELD_EQ(inName,"backslash") ) { return backslash; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Path_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dir") ) { dir=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ext") ) { ext=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"file") ) { file=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"backslash") ) { backslash=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Path_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("dir"));
	outFields->push(HX_CSTRING("file"));
	outFields->push(HX_CSTRING("ext"));
	outFields->push(HX_CSTRING("backslash"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("directory"),
	HX_CSTRING("normalize"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Path_obj,dir),HX_CSTRING("dir")},
	{hx::fsString,(int)offsetof(Path_obj,file),HX_CSTRING("file")},
	{hx::fsString,(int)offsetof(Path_obj,ext),HX_CSTRING("ext")},
	{hx::fsBool,(int)offsetof(Path_obj,backslash),HX_CSTRING("backslash")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("dir"),
	HX_CSTRING("file"),
	HX_CSTRING("ext"),
	HX_CSTRING("backslash"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Path_obj::__mClass,"__mClass");
};

#endif

Class Path_obj::__mClass;

void Path_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("haxe.io.Path"), hx::TCanCast< Path_obj> ,sStaticFields,sMemberFields,
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

void Path_obj::__boot()
{
}

} // end namespace haxe
} // end namespace io
