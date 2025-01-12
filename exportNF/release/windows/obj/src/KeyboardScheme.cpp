// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_KeyboardScheme
#include <KeyboardScheme.h>
#endif

::KeyboardScheme KeyboardScheme_obj::Custom;

::KeyboardScheme KeyboardScheme_obj::Duo(bool first)
{
	return ::hx::CreateEnum< KeyboardScheme_obj >(HX_("Duo",9e,ff,33,00),1,1)->_hx_init(0,first);
}

::KeyboardScheme KeyboardScheme_obj::None;

::KeyboardScheme KeyboardScheme_obj::Solo;

bool KeyboardScheme_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Custom",d1,fb,26,74)) { outValue = KeyboardScheme_obj::Custom; return true; }
	if (inName==HX_("Duo",9e,ff,33,00)) { outValue = KeyboardScheme_obj::Duo_dyn(); return true; }
	if (inName==HX_("None",d8,3e,e3,33)) { outValue = KeyboardScheme_obj::None; return true; }
	if (inName==HX_("Solo",3f,4e,31,37)) { outValue = KeyboardScheme_obj::Solo; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(KeyboardScheme_obj)

int KeyboardScheme_obj::__FindIndex(::String inName)
{
	if (inName==HX_("Custom",d1,fb,26,74)) return 3;
	if (inName==HX_("Duo",9e,ff,33,00)) return 1;
	if (inName==HX_("None",d8,3e,e3,33)) return 2;
	if (inName==HX_("Solo",3f,4e,31,37)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC1(KeyboardScheme_obj,Duo,return)

int KeyboardScheme_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("Custom",d1,fb,26,74)) return 0;
	if (inName==HX_("Duo",9e,ff,33,00)) return 1;
	if (inName==HX_("None",d8,3e,e3,33)) return 0;
	if (inName==HX_("Solo",3f,4e,31,37)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val KeyboardScheme_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("Custom",d1,fb,26,74)) return Custom;
	if (inName==HX_("Duo",9e,ff,33,00)) return Duo_dyn();
	if (inName==HX_("None",d8,3e,e3,33)) return None;
	if (inName==HX_("Solo",3f,4e,31,37)) return Solo;
	return super::__Field(inName,inCallProp);
}

static ::String KeyboardScheme_obj_sStaticFields[] = {
	HX_("Solo",3f,4e,31,37),
	HX_("Duo",9e,ff,33,00),
	HX_("None",d8,3e,e3,33),
	HX_("Custom",d1,fb,26,74),
	::String(null())
};

::hx::Class KeyboardScheme_obj::__mClass;

Dynamic __Create_KeyboardScheme_obj() { return new KeyboardScheme_obj; }

void KeyboardScheme_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("KeyboardScheme",4c,5c,4a,70), ::hx::TCanCast< KeyboardScheme_obj >,KeyboardScheme_obj_sStaticFields,0,
	&__Create_KeyboardScheme_obj, &__Create,
	&super::__SGetClass(), &CreateKeyboardScheme_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &KeyboardScheme_obj::__GetStatic;
}

void KeyboardScheme_obj::__boot()
{
Custom = ::hx::CreateConstEnum< KeyboardScheme_obj >(HX_("Custom",d1,fb,26,74),3);
None = ::hx::CreateConstEnum< KeyboardScheme_obj >(HX_("None",d8,3e,e3,33),2);
Solo = ::hx::CreateConstEnum< KeyboardScheme_obj >(HX_("Solo",3f,4e,31,37),0);
}


