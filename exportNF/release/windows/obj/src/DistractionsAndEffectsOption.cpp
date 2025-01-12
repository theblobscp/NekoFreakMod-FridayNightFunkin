// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_DistractionsAndEffectsOption
#include <DistractionsAndEffectsOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bee9e2404fe2fe77_188_new,"DistractionsAndEffectsOption","new",0x025cdf63,"DistractionsAndEffectsOption.new","Options.hx",188,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_bee9e2404fe2fe77_193_press,"DistractionsAndEffectsOption","press",0x2a356946,"DistractionsAndEffectsOption.press","Options.hx",193,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_bee9e2404fe2fe77_201_updateDisplay,"DistractionsAndEffectsOption","updateDisplay",0x58e59ffc,"DistractionsAndEffectsOption.updateDisplay","Options.hx",201,0x9d9a0240)

void DistractionsAndEffectsOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_bee9e2404fe2fe77_188_new)
HXLINE( 189)		super::__construct();
HXLINE( 190)		this->description = desc;
            	}

Dynamic DistractionsAndEffectsOption_obj::__CreateEmpty() { return new DistractionsAndEffectsOption_obj; }

void *DistractionsAndEffectsOption_obj::_hx_vtable = 0;

Dynamic DistractionsAndEffectsOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DistractionsAndEffectsOption_obj > _hx_result = new DistractionsAndEffectsOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DistractionsAndEffectsOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x055912dd) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x055912dd;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool DistractionsAndEffectsOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_bee9e2404fe2fe77_193_press)
HXLINE( 194)		::flixel::FlxG_obj::save->data->__SetField(HX_("distractions",31,13,7d,60),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("distractions",31,13,7d,60),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 195)		this->display = this->updateDisplay();
HXLINE( 196)		return true;
            	}


::String DistractionsAndEffectsOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_bee9e2404fe2fe77_201_updateDisplay)
HXDLIN( 201)		::String _hx_tmp;
HXDLIN( 201)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("distractions",31,13,7d,60),::hx::paccDynamic)) ))) {
HXDLIN( 201)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN( 201)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN( 201)		return (HX_("Distractions ",af,07,e4,54) + _hx_tmp);
            	}



::hx::ObjectPtr< DistractionsAndEffectsOption_obj > DistractionsAndEffectsOption_obj::__new(::String desc) {
	::hx::ObjectPtr< DistractionsAndEffectsOption_obj > __this = new DistractionsAndEffectsOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< DistractionsAndEffectsOption_obj > DistractionsAndEffectsOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	DistractionsAndEffectsOption_obj *__this = (DistractionsAndEffectsOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DistractionsAndEffectsOption_obj), true, "DistractionsAndEffectsOption"));
	*(void **)__this = DistractionsAndEffectsOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

DistractionsAndEffectsOption_obj::DistractionsAndEffectsOption_obj()
{
}

::hx::Val DistractionsAndEffectsOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DistractionsAndEffectsOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DistractionsAndEffectsOption_obj_sStaticStorageInfo = 0;
#endif

static ::String DistractionsAndEffectsOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class DistractionsAndEffectsOption_obj::__mClass;

void DistractionsAndEffectsOption_obj::__register()
{
	DistractionsAndEffectsOption_obj _hx_dummy;
	DistractionsAndEffectsOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DistractionsAndEffectsOption",f1,f1,42,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DistractionsAndEffectsOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DistractionsAndEffectsOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DistractionsAndEffectsOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DistractionsAndEffectsOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

