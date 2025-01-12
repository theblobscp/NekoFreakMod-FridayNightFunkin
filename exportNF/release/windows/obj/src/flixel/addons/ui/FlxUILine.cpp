// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUILine
#include <flixel/addons/ui/FlxUILine.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_LineAxis
#include <flixel/addons/ui/LineAxis.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eda242b6f279b347_11_new,"flixel.addons.ui.FlxUILine","new",0xc23e645b,"flixel.addons.ui.FlxUILine.new","flixel/addons/ui/FlxUILine.hx",11,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_28_set_axis,"flixel.addons.ui.FlxUILine","set_axis",0x4e054fc3,"flixel.addons.ui.FlxUILine.set_axis","flixel/addons/ui/FlxUILine.hx",28,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_35_set_length,"flixel.addons.ui.FlxUILine","set_length",0x4e605488,"flixel.addons.ui.FlxUILine.set_length","flixel/addons/ui/FlxUILine.hx",35,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_42_set_thickness,"flixel.addons.ui.FlxUILine","set_thickness",0x7ce42312,"flixel.addons.ui.FlxUILine.set_thickness","flixel/addons/ui/FlxUILine.hx",42,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_49_refresh,"flixel.addons.ui.FlxUILine","refresh",0x58e48756,"flixel.addons.ui.FlxUILine.refresh","flixel/addons/ui/FlxUILine.hx",49,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_63_resize,"flixel.addons.ui.FlxUILine","resize",0xa51734d9,"flixel.addons.ui.FlxUILine.resize","flixel/addons/ui/FlxUILine.hx",63,0xd6550ed6)
namespace flixel{
namespace addons{
namespace ui{

void FlxUILine_obj::__construct(int X,int Y, ::flixel::addons::ui::LineAxis Axis,Float Length,Float Thickness,int Color){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_11_new)
HXLINE(  15)		this->thickness = ((Float)1);
HXLINE(  14)		this->length = ((Float)10);
HXLINE(  13)		this->axis = ::flixel::addons::ui::LineAxis_obj::HORIZONTAL_dyn();
HXLINE(  19)		super::__construct(X,Y,null());
HXLINE(  20)		this->makeGraphic(2,2,-1,null(),null());
HXLINE(  21)		this->set_color(Color);
HXLINE(  22)		this->set_axis(Axis);
HXLINE(  23)		this->set_length(Length);
HXLINE(  24)		this->set_thickness(Thickness);
            	}

Dynamic FlxUILine_obj::__CreateEmpty() { return new FlxUILine_obj; }

void *FlxUILine_obj::_hx_vtable = 0;

Dynamic FlxUILine_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUILine_obj > _hx_result = new FlxUILine_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxUILine_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x0dc54e00) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0dc54e00;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7dab0655 || inClassId==(int)0x7ebfc4f3;
	}
}

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUILine__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUILine_obj::get_width,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUILine_obj::set_width,
	( Float (::hx::Object::*)())&::flixel::addons::ui::FlxUILine_obj::get_height,
	( Float (::hx::Object::*)(Float))&::flixel::addons::ui::FlxUILine_obj::set_height,
	( void (::hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUILine_obj::resize,
};

void *FlxUILine_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUILine__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

 ::flixel::addons::ui::LineAxis FlxUILine_obj::set_axis( ::flixel::addons::ui::LineAxis a){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_28_set_axis)
HXLINE(  29)		this->axis = a;
HXLINE(  30)		this->refresh();
HXLINE(  31)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUILine_obj,set_axis,return )

Float FlxUILine_obj::set_length(Float l){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_35_set_length)
HXLINE(  36)		this->length = l;
HXLINE(  37)		this->refresh();
HXLINE(  38)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUILine_obj,set_length,return )

Float FlxUILine_obj::set_thickness(Float t){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_42_set_thickness)
HXLINE(  43)		this->thickness = t;
HXLINE(  44)		this->refresh();
HXLINE(  45)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUILine_obj,set_thickness,return )

void FlxUILine_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_49_refresh)
HXLINE(  50)		if (::hx::IsPointerEq( this->axis,::flixel::addons::ui::LineAxis_obj::HORIZONTAL_dyn() )) {
HXLINE(  52)			this->scale->set((((Float)0.5) * this->length),(((Float)0.5) * this->thickness));
            		}
            		else {
HXLINE(  56)			this->scale->set((((Float)0.5) * this->thickness),(((Float)0.5) * this->length));
            		}
HXLINE(  58)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUILine_obj,refresh,(void))

void FlxUILine_obj::resize(Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_63_resize)
HXDLIN(  63)		if (::hx::IsPointerEq( this->axis,::flixel::addons::ui::LineAxis_obj::HORIZONTAL_dyn() )) {
HXLINE(  65)			this->set_length(width);
HXLINE(  66)			this->set_thickness(height);
            		}
            		else {
HXLINE(  70)			this->set_length(height);
HXLINE(  71)			this->set_thickness(width);
            		}
            	}



::hx::ObjectPtr< FlxUILine_obj > FlxUILine_obj::__new(int X,int Y, ::flixel::addons::ui::LineAxis Axis,Float Length,Float Thickness,int Color) {
	::hx::ObjectPtr< FlxUILine_obj > __this = new FlxUILine_obj();
	__this->__construct(X,Y,Axis,Length,Thickness,Color);
	return __this;
}

::hx::ObjectPtr< FlxUILine_obj > FlxUILine_obj::__alloc(::hx::Ctx *_hx_ctx,int X,int Y, ::flixel::addons::ui::LineAxis Axis,Float Length,Float Thickness,int Color) {
	FlxUILine_obj *__this = (FlxUILine_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUILine_obj), true, "flixel.addons.ui.FlxUILine"));
	*(void **)__this = FlxUILine_obj::_hx_vtable;
	__this->__construct(X,Y,Axis,Length,Thickness,Color);
	return __this;
}

FlxUILine_obj::FlxUILine_obj()
{
}

void FlxUILine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUILine);
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	 ::flixel::addons::ui::FlxUISprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUILine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	 ::flixel::addons::ui::FlxUISprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUILine_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return ::hx::Val( axis ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return ::hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return ::hx::Val( refresh_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_axis") ) { return ::hx::Val( set_axis_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return ::hx::Val( thickness ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_length") ) { return ::hx::Val( set_length_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return ::hx::Val( set_thickness_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxUILine_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_axis(inValue.Cast<  ::flixel::addons::ui::LineAxis >()) );axis=inValue.Cast<  ::flixel::addons::ui::LineAxis >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_length(inValue.Cast< Float >()) );length=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_thickness(inValue.Cast< Float >()) );thickness=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUILine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("axis",a1,1c,79,40));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("thickness",74,f1,66,5a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUILine_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::addons::ui::LineAxis */ ,(int)offsetof(FlxUILine_obj,axis),HX_("axis",a1,1c,79,40)},
	{::hx::fsFloat,(int)offsetof(FlxUILine_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsFloat,(int)offsetof(FlxUILine_obj,thickness),HX_("thickness",74,f1,66,5a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxUILine_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUILine_obj_sMemberFields[] = {
	HX_("axis",a1,1c,79,40),
	HX_("length",e6,94,07,9f),
	HX_("thickness",74,f1,66,5a),
	HX_("set_axis",9e,31,91,6e),
	HX_("set_length",23,a3,0c,93),
	HX_("set_thickness",57,a7,d0,60),
	HX_("refresh",db,d9,20,ed),
	HX_("resize",f4,59,7b,08),
	::String(null()) };

::hx::Class FlxUILine_obj::__mClass;

void FlxUILine_obj::__register()
{
	FlxUILine_obj _hx_dummy;
	FlxUILine_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUILine",e9,9a,d0,9d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUILine_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUILine_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUILine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUILine_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
