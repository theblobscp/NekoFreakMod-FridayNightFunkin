// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_HelperFunctions
#include <HelperFunctions.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_93698466c21ed147_3_truncateFloat,"HelperFunctions","truncateFloat",0x44fe3c15,"HelperFunctions.truncateFloat","HelperFunctions.hx",3,0xfb293df1)

void HelperFunctions_obj::__construct() { }

Dynamic HelperFunctions_obj::__CreateEmpty() { return new HelperFunctions_obj; }

void *HelperFunctions_obj::_hx_vtable = 0;

Dynamic HelperFunctions_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HelperFunctions_obj > _hx_result = new HelperFunctions_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HelperFunctions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e1e2981;
}

Float HelperFunctions_obj::truncateFloat(Float number,int precision){
            	HX_STACKFRAME(&_hx_pos_93698466c21ed147_3_truncateFloat)
HXLINE(   4)		Float num = number;
HXLINE(   5)		num = (num * ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
HXLINE(   6)		num = (( (Float)(::Math_obj::round(num)) ) / ::Math_obj::pow(( (Float)(10) ),( (Float)(precision) )));
HXLINE(   7)		return num;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HelperFunctions_obj,truncateFloat,return )


HelperFunctions_obj::HelperFunctions_obj()
{
}

bool HelperFunctions_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"truncateFloat") ) { outValue = truncateFloat_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HelperFunctions_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HelperFunctions_obj_sStaticStorageInfo = 0;
#endif

::hx::Class HelperFunctions_obj::__mClass;

static ::String HelperFunctions_obj_sStaticFields[] = {
	HX_("truncateFloat",56,85,20,77),
	::String(null())
};

void HelperFunctions_obj::__register()
{
	HelperFunctions_obj _hx_dummy;
	HelperFunctions_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("HelperFunctions",ed,56,db,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &HelperFunctions_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(HelperFunctions_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HelperFunctions_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HelperFunctions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HelperFunctions_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
