// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_LoadReplayState
#include <LoadReplayState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_ReplayOption
#include <ReplayOption.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1637001de69262c2_426_new,"ReplayOption","new",0x7094b10e,"ReplayOption.new","Options.hx",426,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1637001de69262c2_432_press,"ReplayOption","press",0x73453bb1,"ReplayOption.press","Options.hx",432,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_1637001de69262c2_440_updateDisplay,"ReplayOption","updateDisplay",0xfbfe5567,"ReplayOption.updateDisplay","Options.hx",440,0x9d9a0240)

void ReplayOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_1637001de69262c2_426_new)
HXLINE( 427)		super::__construct();
HXLINE( 428)		this->description = desc;
            	}

Dynamic ReplayOption_obj::__CreateEmpty() { return new ReplayOption_obj; }

void *ReplayOption_obj::_hx_vtable = 0;

Dynamic ReplayOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ReplayOption_obj > _hx_result = new ReplayOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ReplayOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x06c5f3a4) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x06c5f3a4;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool ReplayOption_obj::press(){
            	HX_GC_STACKFRAME(&_hx_pos_1637001de69262c2_432_press)
HXLINE( 433)		::haxe::Log_obj::trace(HX_("switch",f4,49,79,c5),::hx::SourceInfo(HX_("source_nekofreak/Options.hx",0b,16,cb,a2),433,HX_("ReplayOption",1c,d2,4f,b9),HX_("press",83,53,88,c8)));
HXLINE( 434)		{
HXLINE( 434)			 ::flixel::FlxState nextState =  ::LoadReplayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 434)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 434)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE( 435)		return false;
            	}


::String ReplayOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_1637001de69262c2_440_updateDisplay)
HXDLIN( 440)		return HX_("Load replays",92,1b,40,79);
            	}



::hx::ObjectPtr< ReplayOption_obj > ReplayOption_obj::__new(::String desc) {
	::hx::ObjectPtr< ReplayOption_obj > __this = new ReplayOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< ReplayOption_obj > ReplayOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	ReplayOption_obj *__this = (ReplayOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ReplayOption_obj), true, "ReplayOption"));
	*(void **)__this = ReplayOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

ReplayOption_obj::ReplayOption_obj()
{
}

::hx::Val ReplayOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ReplayOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ReplayOption_obj_sStaticStorageInfo = 0;
#endif

static ::String ReplayOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class ReplayOption_obj::__mClass;

void ReplayOption_obj::__register()
{
	ReplayOption_obj _hx_dummy;
	ReplayOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ReplayOption",1c,d2,4f,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ReplayOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ReplayOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ReplayOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ReplayOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

