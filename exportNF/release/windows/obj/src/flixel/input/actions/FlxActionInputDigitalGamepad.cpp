// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInput
#include <flixel/input/actions/FlxActionInput.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalGamepad
#include <flixel/input/actions/FlxActionInputDigitalGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputDevice
#include <flixel/input/actions/FlxInputDevice.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxInputType
#include <flixel/input/actions/FlxInputType.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxBaseGamepadList
#include <flixel/input/gamepad/lists/FlxBaseGamepadList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadButtonList
#include <flixel/input/gamepad/lists/FlxGamepadButtonList.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e9c5cc6979f713b4_89_new,"flixel.input.actions.FlxActionInputDigitalGamepad","new",0x4f346744,"flixel.input.actions.FlxActionInputDigitalGamepad.new","flixel/input/actions/FlxActionInputDigital.hx",89,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c5cc6979f713b4_96_toString,"flixel.input.actions.FlxActionInputDigitalGamepad","toString",0xaf0cbf48,"flixel.input.actions.FlxActionInputDigitalGamepad.toString","flixel/input/actions/FlxActionInputDigital.hx",96,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c5cc6979f713b4_101_update,"flixel.input.actions.FlxActionInputDigitalGamepad","update",0x80db55a5,"flixel.input.actions.FlxActionInputDigitalGamepad.update","flixel/input/actions/FlxActionInputDigital.hx",101,0x47a4ecd2)
HX_LOCAL_STACK_FRAME(_hx_pos_e9c5cc6979f713b4_166_check,"flixel.input.actions.FlxActionInputDigitalGamepad","check",0x7f15b0ac,"flixel.input.actions.FlxActionInputDigitalGamepad.check","flixel/input/actions/FlxActionInputDigital.hx",166,0x47a4ecd2)
namespace flixel{
namespace input{
namespace actions{

void FlxActionInputDigitalGamepad_obj::__construct(int InputID,int Trigger,::hx::Null< int >  __o_GamepadID){
            		int GamepadID = __o_GamepadID.Default(-2);
            	HX_GC_STACKFRAME(&_hx_pos_e9c5cc6979f713b4_89_new)
HXLINE(  90)		super::__construct(::flixel::input::actions::FlxInputDevice_obj::GAMEPAD_dyn(),InputID,Trigger,GamepadID);
HXLINE(  91)		this->input =  ::flixel::input::FlxInput_obj::__alloc( HX_CTX ,InputID);
            	}

Dynamic FlxActionInputDigitalGamepad_obj::__CreateEmpty() { return new FlxActionInputDigitalGamepad_obj; }

void *FlxActionInputDigitalGamepad_obj::_hx_vtable = 0;

Dynamic FlxActionInputDigitalGamepad_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > _hx_result = new FlxActionInputDigitalGamepad_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool FlxActionInputDigitalGamepad_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1db1ff86) {
		if (inClassId<=(int)0x1600da07) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x1600da07;
		} else {
			return inClassId==(int)0x1db1ff86;
		}
	} else {
		return inClassId==(int)0x20308a99;
	}
}

::String FlxActionInputDigitalGamepad_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_e9c5cc6979f713b4_96_toString)
HXDLIN(  96)		::String _hx_tmp = ((((((HX_("FlxActionInputDigitalGamepad{inputID:",c5,1b,0a,51) + this->inputID) + HX_(",trigger:",2e,48,09,3f)) + this->trigger) + HX_(",deviceID:",7d,df,03,6e)) + this->deviceID) + HX_(",device:",38,c4,14,ac));
HXDLIN(  96)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->device)) + HX_(",type:",94,50,7f,b2));
HXDLIN(  96)		return ((_hx_tmp1 + ::Std_obj::string(this->type)) + HX_("}",7d,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxActionInputDigitalGamepad_obj,toString,return )

void FlxActionInputDigitalGamepad_obj::update(){
            	HX_STACKFRAME(&_hx_pos_e9c5cc6979f713b4_101_update)
HXLINE( 102)		this->super::update();
HXLINE( 104)		if ((this->deviceID == -1)) {
HXLINE( 106)			bool _hx_tmp;
HXDLIN( 106)			if (!(::flixel::FlxG_obj::gamepads->anyHasState(this->inputID,1))) {
HXLINE( 106)				_hx_tmp = ::flixel::FlxG_obj::gamepads->anyHasState(this->inputID,2);
            			}
            			else {
HXLINE( 106)				_hx_tmp = true;
            			}
HXDLIN( 106)			if (_hx_tmp) {
HXLINE( 108)				this->input->press();
            			}
            			else {
HXLINE( 112)				this->input->release();
            			}
            		}
            		else {
HXLINE( 117)			 ::flixel::input::gamepad::FlxGamepad gamepad = null();
HXLINE( 119)			if ((this->deviceID == -2)) {
HXLINE( 121)				gamepad = ::flixel::FlxG_obj::gamepads->getFirstActiveGamepad();
            			}
            			else {
HXLINE( 123)				if ((this->deviceID >= 0)) {
HXLINE( 125)					gamepad = ::flixel::FlxG_obj::gamepads->_activeGamepads->__get(this->deviceID).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
            				}
            			}
HXLINE( 128)			if (::hx::IsNotNull( gamepad )) {
HXLINE( 130)				bool _hx_tmp;
HXDLIN( 130)				if ((this->inputID == -2)) {
HXLINE( 130)					_hx_tmp = (this->trigger == 0);
            				}
            				else {
HXLINE( 130)					_hx_tmp = false;
            				}
HXDLIN( 130)				if (_hx_tmp) {
HXLINE( 132)					if (gamepad->released->get_ANY()) {
HXLINE( 134)						this->input->release();
            					}
            					else {
HXLINE( 138)						this->input->press();
            					}
            				}
            				else {
HXLINE( 143)					bool _hx_tmp;
HXDLIN( 143)					int ID = this->inputID;
HXDLIN( 143)					int Status = 1;
HXDLIN( 143)					bool _hx_tmp1;
HXDLIN( 143)					switch((int)(ID)){
            						case (int)-2: {
HXLINE( 143)							_hx_tmp1 = gamepad->anyButton(Status);
            						}
            						break;
            						case (int)-1: {
HXLINE( 143)							_hx_tmp1 = !(gamepad->anyButton(Status));
            						}
            						break;
            						default:{
HXLINE( 143)							int RawID = gamepad->mapping->getRawID(ID);
HXDLIN( 143)							 ::flixel::input::gamepad::FlxGamepadButton button = gamepad->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 143)							if (::hx::IsNotNull( button )) {
HXLINE( 143)								_hx_tmp1 = button->hasState(Status);
            							}
            							else {
HXLINE( 143)								_hx_tmp1 = false;
            							}
            						}
            					}
HXDLIN( 143)					if (!(_hx_tmp1)) {
HXLINE( 143)						int ID = this->inputID;
HXDLIN( 143)						int Status = 2;
HXDLIN( 143)						switch((int)(ID)){
            							case (int)-2: {
HXLINE( 143)								_hx_tmp = gamepad->anyButton(Status);
            							}
            							break;
            							case (int)-1: {
HXLINE( 143)								_hx_tmp = !(gamepad->anyButton(Status));
            							}
            							break;
            							default:{
HXLINE( 143)								int RawID = gamepad->mapping->getRawID(ID);
HXDLIN( 143)								 ::flixel::input::gamepad::FlxGamepadButton button = gamepad->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 143)								if (::hx::IsNotNull( button )) {
HXLINE( 143)									_hx_tmp = button->hasState(Status);
            								}
            								else {
HXLINE( 143)									_hx_tmp = false;
            								}
            							}
            						}
            					}
            					else {
HXLINE( 143)						_hx_tmp = true;
            					}
HXDLIN( 143)					if (_hx_tmp) {
HXLINE( 145)						this->input->press();
            					}
            					else {
HXLINE( 149)						this->input->release();
            					}
            				}
            			}
            			else {
HXLINE( 155)				if ((this->deviceID == -2)) {
HXLINE( 157)					this->input->release();
            				}
            			}
            		}
            	}


bool FlxActionInputDigitalGamepad_obj::check( ::flixel::input::actions::FlxAction Action){
            	HX_STACKFRAME(&_hx_pos_e9c5cc6979f713b4_166_check)
HXDLIN( 166)		switch((int)(this->trigger)){
            			case (int)-1: {
HXLINE( 171)				return (this->input->current == -1);
            			}
            			break;
            			case (int)0: {
HXLINE( 169)				 ::flixel::input::FlxInput _this = this->input;
HXDLIN( 169)				bool _hx_tmp;
HXDLIN( 169)				if ((_this->current != 0)) {
HXLINE( 169)					_hx_tmp = (_this->current == -1);
            				}
            				else {
HXLINE( 169)					_hx_tmp = true;
            				}
HXDLIN( 169)				if (!(_hx_tmp)) {
HXLINE( 169)					return (this->input->current == -1);
            				}
            				else {
HXLINE( 169)					return true;
            				}
            			}
            			break;
            			case (int)1: {
HXLINE( 168)				 ::flixel::input::FlxInput _this = this->input;
HXDLIN( 168)				bool _hx_tmp;
HXDLIN( 168)				if ((_this->current != 1)) {
HXLINE( 168)					_hx_tmp = (_this->current == 2);
            				}
            				else {
HXLINE( 168)					_hx_tmp = true;
            				}
HXDLIN( 168)				if (!(_hx_tmp)) {
HXLINE( 168)					return (this->input->current == 2);
            				}
            				else {
HXLINE( 168)					return true;
            				}
            			}
            			break;
            			case (int)2: {
HXLINE( 170)				return (this->input->current == 2);
            			}
            			break;
            			default:{
HXLINE( 172)				return false;
            			}
            		}
HXLINE( 166)		return false;
            	}



::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > FlxActionInputDigitalGamepad_obj::__new(int InputID,int Trigger,::hx::Null< int >  __o_GamepadID) {
	::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > __this = new FlxActionInputDigitalGamepad_obj();
	__this->__construct(InputID,Trigger,__o_GamepadID);
	return __this;
}

::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > FlxActionInputDigitalGamepad_obj::__alloc(::hx::Ctx *_hx_ctx,int InputID,int Trigger,::hx::Null< int >  __o_GamepadID) {
	FlxActionInputDigitalGamepad_obj *__this = (FlxActionInputDigitalGamepad_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxActionInputDigitalGamepad_obj), true, "flixel.input.actions.FlxActionInputDigitalGamepad"));
	*(void **)__this = FlxActionInputDigitalGamepad_obj::_hx_vtable;
	__this->__construct(InputID,Trigger,__o_GamepadID);
	return __this;
}

FlxActionInputDigitalGamepad_obj::FlxActionInputDigitalGamepad_obj()
{
}

void FlxActionInputDigitalGamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxActionInputDigitalGamepad);
	HX_MARK_MEMBER_NAME(input,"input");
	 ::flixel::input::actions::FlxActionInput_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxActionInputDigitalGamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(input,"input");
	 ::flixel::input::actions::FlxActionInput_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxActionInputDigitalGamepad_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return ::hx::Val( input ); }
		if (HX_FIELD_EQ(inName,"check") ) { return ::hx::Val( check_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxActionInputDigitalGamepad_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast<  ::flixel::input::FlxInput >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxActionInputDigitalGamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("input",0a,c4,1d,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxActionInputDigitalGamepad_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::FlxInput */ ,(int)offsetof(FlxActionInputDigitalGamepad_obj,input),HX_("input",0a,c4,1d,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxActionInputDigitalGamepad_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxActionInputDigitalGamepad_obj_sMemberFields[] = {
	HX_("input",0a,c4,1d,be),
	HX_("toString",ac,d0,6e,38),
	HX_("update",09,86,05,87),
	HX_("check",c8,98,b6,45),
	::String(null()) };

::hx::Class FlxActionInputDigitalGamepad_obj::__mClass;

void FlxActionInputDigitalGamepad_obj::__register()
{
	FlxActionInputDigitalGamepad_obj _hx_dummy;
	FlxActionInputDigitalGamepad_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.actions.FlxActionInputDigitalGamepad",52,b5,9e,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxActionInputDigitalGamepad_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxActionInputDigitalGamepad_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxActionInputDigitalGamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxActionInputDigitalGamepad_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace input
} // end namespace actions
