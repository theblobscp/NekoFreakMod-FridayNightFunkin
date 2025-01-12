// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_CharacterSetting
#include <CharacterSetting.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8c5cdce4e4ceb2d2_14_new,"CharacterSetting","new",0xd7aef179,"CharacterSetting.new","MenuCharacter.hx",14,0x28a93714)

void CharacterSetting_obj::__construct(::hx::Null< int >  __o_x,::hx::Null< int >  __o_y,::hx::Null< Float >  __o_scale,::hx::Null< bool >  __o_flipped){
            		int x = __o_x.Default(0);
            		int y = __o_y.Default(0);
            		Float scale = __o_scale.Default(((Float)1.0));
            		bool flipped = __o_flipped.Default(false);
            	HX_STACKFRAME(&_hx_pos_8c5cdce4e4ceb2d2_14_new)
HXLINE(  15)		this->x = x;
HXLINE(  16)		this->y = y;
HXLINE(  17)		this->scale = scale;
HXLINE(  18)		this->flipped = flipped;
            	}

Dynamic CharacterSetting_obj::__CreateEmpty() { return new CharacterSetting_obj; }

void *CharacterSetting_obj::_hx_vtable = 0;

Dynamic CharacterSetting_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CharacterSetting_obj > _hx_result = new CharacterSetting_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool CharacterSetting_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f7d4ddb;
}


CharacterSetting_obj::CharacterSetting_obj()
{
}

::hx::Val CharacterSetting_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { return ::hx::Val( scale ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return ::hx::Val( flipped ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CharacterSetting_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CharacterSetting_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("scale",8a,ce,ce,78));
	outFields->push(HX_("flipped",42,6c,88,7f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CharacterSetting_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CharacterSetting_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(CharacterSetting_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsFloat,(int)offsetof(CharacterSetting_obj,scale),HX_("scale",8a,ce,ce,78)},
	{::hx::fsBool,(int)offsetof(CharacterSetting_obj,flipped),HX_("flipped",42,6c,88,7f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CharacterSetting_obj_sStaticStorageInfo = 0;
#endif

static ::String CharacterSetting_obj_sMemberFields[] = {
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("scale",8a,ce,ce,78),
	HX_("flipped",42,6c,88,7f),
	::String(null()) };

::hx::Class CharacterSetting_obj::__mClass;

void CharacterSetting_obj::__register()
{
	CharacterSetting_obj _hx_dummy;
	CharacterSetting_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CharacterSetting",07,c1,30,03);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CharacterSetting_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CharacterSetting_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CharacterSetting_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CharacterSetting_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

