// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICursor
#include <flixel/addons/ui/FlxUICursor.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISubState
#include <flixel/addons/ui/FlxUISubState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITooltip
#include <flixel/addons/ui/FlxUITooltip.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITooltipManager
#include <flixel/addons/ui/FlxUITooltipManager.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_060bddf2a47172f7_35_new,"flixel.addons.ui.FlxUIState","new",0xd1a4986e,"flixel.addons.ui.FlxUIState.new","flixel/addons/ui/FlxUIState.hx",35,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_95_create,"flixel.addons.ui.FlxUIState","create",0x98ac9bae,"flixel.addons.ui.FlxUIState.create","flixel/addons/ui/FlxUIState.hx",95,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_211_update,"flixel.addons.ui.FlxUIState","update",0xa3a2babb,"flixel.addons.ui.FlxUIState.update","flixel/addons/ui/FlxUIState.hx",211,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_234_cleanup,"flixel.addons.ui.FlxUIState","cleanup",0x9832f332,"flixel.addons.ui.FlxUIState.cleanup","flixel/addons/ui/FlxUIState.hx",234,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_239__cleanupUIVars,"flixel.addons.ui.FlxUIState","_cleanupUIVars",0x162e4237,"flixel.addons.ui.FlxUIState._cleanupUIVars","flixel/addons/ui/FlxUIState.hx",239,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_251_setUIVariable,"flixel.addons.ui.FlxUIState","setUIVariable",0x525b6c60,"flixel.addons.ui.FlxUIState.setUIVariable","flixel/addons/ui/FlxUIState.hx",251,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_266_resizeScreen,"flixel.addons.ui.FlxUIState","resizeScreen",0x61d3beb2,"flixel.addons.ui.FlxUIState.resizeScreen","flixel/addons/ui/FlxUIState.hx",266,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_275_openSubState,"flixel.addons.ui.FlxUIState","openSubState",0x6db12c8d,"flixel.addons.ui.FlxUIState.openSubState","flixel/addons/ui/FlxUIState.hx",275,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_287_closeSubState,"flixel.addons.ui.FlxUIState","closeSubState",0x6976bdd7,"flixel.addons.ui.FlxUIState.closeSubState","flixel/addons/ui/FlxUIState.hx",287,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_300_onResize,"flixel.addons.ui.FlxUIState","onResize",0x4e0195a5,"flixel.addons.ui.FlxUIState.onResize","flixel/addons/ui/FlxUIState.hx",300,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_310_onShowTooltip,"flixel.addons.ui.FlxUIState","onShowTooltip",0x0f570c35,"flixel.addons.ui.FlxUIState.onShowTooltip","flixel/addons/ui/FlxUIState.hx",310,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_315_destroy,"flixel.addons.ui.FlxUIState","destroy",0x11771408,"flixel.addons.ui.FlxUIState.destroy","flixel/addons/ui/FlxUIState.hx",315,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_336_forceFocus,"flixel.addons.ui.FlxUIState","forceFocus",0x1df8bf9f,"flixel.addons.ui.FlxUIState.forceFocus","flixel/addons/ui/FlxUIState.hx",336,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_351_onCursorEvent,"flixel.addons.ui.FlxUIState","onCursorEvent",0xc6d4e413,"flixel.addons.ui.FlxUIState.onCursorEvent","flixel/addons/ui/FlxUIState.hx",351,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_355_getEvent,"flixel.addons.ui.FlxUIState","getEvent",0x3b751cd6,"flixel.addons.ui.FlxUIState.getEvent","flixel/addons/ui/FlxUIState.hx",355,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_362_getRequest,"flixel.addons.ui.FlxUIState","getRequest",0x1680db0b,"flixel.addons.ui.FlxUIState.getRequest","flixel/addons/ui/FlxUIState.hx",362,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_366_getText,"flixel.addons.ui.FlxUIState","getText",0x0c6d6371,"flixel.addons.ui.FlxUIState.getText","flixel/addons/ui/FlxUIState.hx",366,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_384_createCursor,"flixel.addons.ui.FlxUIState","createCursor",0x97a69524,"flixel.addons.ui.FlxUIState.createCursor","flixel/addons/ui/FlxUIState.hx",384,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_391_createUI,"flixel.addons.ui.FlxUIState","createUI",0x91cdad82,"flixel.addons.ui.FlxUIState.createUI","flixel/addons/ui/FlxUIState.hx",391,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_401_loadUIFromData,"flixel.addons.ui.FlxUIState","loadUIFromData",0x503ddb80,"flixel.addons.ui.FlxUIState.loadUIFromData","flixel/addons/ui/FlxUIState.hx",401,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_405_reloadUI,"flixel.addons.ui.FlxUIState","reloadUI",0x9eb72b1f,"flixel.addons.ui.FlxUIState.reloadUI","flixel/addons/ui/FlxUIState.hx",405,0xa272d441)
HX_LOCAL_STACK_FRAME(_hx_pos_060bddf2a47172f7_63_boot,"flixel.addons.ui.FlxUIState","boot",0x9679c864,"flixel.addons.ui.FlxUIState.boot","flixel/addons/ui/FlxUIState.hx",63,0xa272d441)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_35_new)
HXLINE(  80)		this->getTextFallback = null();
HXLINE(  79)		this->_reload_countdown = 0;
HXLINE(  78)		this->_reload = false;
HXLINE(  77)		this->reload_ui_on_resize = false;
HXLINE(  50)		this->_xml_id = HX_("",00,00,00,00);
HXLINE(  44)		this->_cursorHidden = false;
HXLINE(  43)		this->hideCursorOnSubstate = false;
HXLINE(  42)		this->cursor = null();
HXLINE(  35)		super::__construct(TransIn,TransOut);
            	}

Dynamic FlxUIState_obj::__CreateEmpty() { return new FlxUIState_obj; }

void *FlxUIState_obj::_hx_vtable = 0;

Dynamic FlxUIState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxUIState_obj > _hx_result = new FlxUIState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FlxUIState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x2f064378) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2f064378;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

static ::flixel::addons::ui::interfaces::IEventGetter_obj _hx_flixel_addons_ui_FlxUIState__hx_flixel_addons_ui_interfaces_IEventGetter= {
	( void (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUIState_obj::getEvent_72fc5da6,
	(  ::Dynamic (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUIState_obj::getRequest_3ab6d711,
};

static ::flixel::addons::ui::interfaces::IFlxUIState_obj _hx_flixel_addons_ui_FlxUIState__hx_flixel_addons_ui_interfaces_IFlxUIState= {
	( void (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUIState_obj::getEvent_72fc5da6,
	(  ::Dynamic (::hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUIState_obj::getRequest_3ab6d711,
	( void (::hx::Object::*)(bool,::Dynamic))&::flixel::addons::ui::FlxUIState_obj::forceFocus,
};

 ::Dynamic FlxUIState_obj::getRequest_3ab6d711(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params) {
			return getRequest(name,sender,data,params);
}

void FlxUIState_obj::getEvent_72fc5da6(::String name,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params) {
			getEvent(name,sender,data,params);
}
void *FlxUIState_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xdcf9e4f9: return &_hx_flixel_addons_ui_FlxUIState__hx_flixel_addons_ui_interfaces_IEventGetter;
		case (int)0x0bdac137: return &_hx_flixel_addons_ui_FlxUIState__hx_flixel_addons_ui_interfaces_IFlxUIState;
	}
	return super::_hx_getInterface(inHash);
}

void FlxUIState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_060bddf2a47172f7_95_create)
HXLINE(  96)		if (::hx::IsNotNull( ::flixel::addons::ui::FlxUIState_obj::static_tongue )) {
HXLINE(  98)			this->_tongue = ::flixel::addons::ui::FlxUIState_obj::static_tongue;
            		}
HXLINE( 109)		if ((this->_makeCursor == true)) {
HXLINE( 111)			this->cursor = this->createCursor();
            		}
HXLINE( 115)		this->tooltips =  ::flixel::addons::ui::FlxUITooltipManager_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this),null());
HXLINE( 117)		 ::Xml liveFile = null();
HXLINE( 136)		this->_ui = this->createUI(null(),::hx::ObjectPtr<OBJ_>(this),null(),this->_tongue,null());
HXLINE( 138)		this->add(this->_ui);
HXLINE( 140)		if (::hx::IsNotNull( this->getTextFallback )) {
HXLINE( 142)			this->_ui->getTextFallback = this->getTextFallback;
            		}
HXLINE( 145)		bool _hx_tmp;
HXDLIN( 145)		if (::hx::IsNotNull( this->_xml_id )) {
HXLINE( 145)			_hx_tmp = (this->_xml_id != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 145)			_hx_tmp = false;
            		}
HXDLIN( 145)		if (_hx_tmp) {
HXLINE( 147)			 ::Xml data = null();
HXLINE( 148)			::String errorMsg = HX_("",00,00,00,00);
HXLINE( 150)			if (::hx::IsNull( liveFile )) {
HXLINE( 152)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 154)					data = ( ( ::Xml)(::flixel::addons::ui::U_obj::xml(this->_xml_id,null(),null(),null())) );
            				} catch( ::Dynamic _hx_e) {
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic _g = _hx_e;
HXLINE(   1)						{
HXLINE(   1)							null();
            						}
HXDLIN(   1)						 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 152)						if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::String >())) {
HXLINE(   1)							::String msg = ( (::String)(_g1) );
HXLINE( 158)							errorMsg = msg;
            						}
            						else {
HXLINE( 152)							HX_STACK_DO_THROW(_g);
            						}
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
HXLINE( 160)				if (::hx::IsNull( data )) {
HXLINE( 162)					try {
            						HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 164)						data = ( ( ::Xml)(::flixel::addons::ui::U_obj::xml(this->_xml_id,HX_("xml",d7,6d,5b,00),true,HX_("",00,00,00,00))) );
            					} catch( ::Dynamic _hx_e) {
            						if (_hx_e.IsClass<  ::Dynamic >() ){
            							HX_STACK_BEGIN_CATCH
            							 ::Dynamic _g = _hx_e;
HXLINE(   1)							{
HXLINE(   1)								null();
            							}
HXDLIN(   1)							 ::Dynamic _g1 = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 162)							if (::Std_obj::isOfType(_g1,::hx::ClassOf< ::String >())) {
HXLINE(   1)								::String msg2 = ( (::String)(_g1) );
HXLINE( 168)								errorMsg = (errorMsg + (HX_(", ",74,26,00,00) + msg2));
            							}
            							else {
HXLINE( 162)								HX_STACK_DO_THROW(_g);
            							}
            						}
            						else {
            							HX_STACK_DO_THROW(_hx_e);
            						}
            					}
            				}
            			}
HXLINE( 173)			if (::hx::IsNull( data )) {
HXLINE( 175)				if (::hx::IsNotNull( liveFile )) {
HXLINE( 177)					this->loadUIFromData(liveFile);
            				}
            			}
            			else {
HXLINE( 186)				this->loadUIFromData(data);
            			}
            		}
            		else {
HXLINE( 191)			this->loadUIFromData(null());
            		}
HXLINE( 195)		bool _hx_tmp1;
HXDLIN( 195)		if (::hx::IsNotNull( this->cursor )) {
HXLINE( 195)			_hx_tmp1 = ::hx::IsNotNull( this->_ui );
            		}
            		else {
HXLINE( 195)			_hx_tmp1 = false;
            		}
HXDLIN( 195)		if (_hx_tmp1) {
HXLINE( 197)			this->add(this->cursor);
HXLINE( 198)			this->cursor->addWidgetsFromUI(this->_ui);
HXLINE( 199)			this->cursor->findVisibleLocation(0,null(),null());
            		}
HXLINE( 203)		this->tooltips->init();
HXLINE( 205)		this->super::create();
HXLINE( 207)		this->cleanup();
            	}


void FlxUIState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_211_update)
HXLINE( 212)		this->super::update(elapsed);
HXLINE( 213)		if (::hx::IsNotNull( this->tooltips )) {
HXLINE( 215)			this->tooltips->update(elapsed);
            		}
HXLINE( 217)		if (this->_reload) {
HXLINE( 219)			if ((this->_reload_countdown > 0)) {
HXLINE( 221)				this->_reload_countdown--;
HXLINE( 222)				if ((this->_reload_countdown == 0)) {
HXLINE( 224)					this->reloadUI(null());
            				}
            			}
            		}
            	}


void FlxUIState_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_234_cleanup)
HXDLIN( 234)		this->_ui->cleanup();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIState_obj,cleanup,(void))

void FlxUIState_obj::_cleanupUIVars(){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_239__cleanupUIVars)
HXDLIN( 239)		if (::hx::IsNotNull( this->_ui_vars )) {
HXLINE( 241)			{
HXLINE( 241)				 ::Dynamic key = this->_ui_vars->keys();
HXDLIN( 241)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 241)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 243)					this->_ui_vars->remove(key1);
            				}
            			}
HXLINE( 245)			this->_ui_vars = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIState_obj,_cleanupUIVars,(void))

void FlxUIState_obj::setUIVariable(::String key,::String value){
            	HX_GC_STACKFRAME(&_hx_pos_060bddf2a47172f7_251_setUIVariable)
HXDLIN( 251)		if (::hx::IsNotNull( this->_ui )) {
HXLINE( 254)			this->_ui->setVariable(key,value);
            		}
            		else {
HXLINE( 259)			if (::hx::IsNull( this->_ui_vars )) {
HXLINE( 260)				this->_ui_vars =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            			}
HXLINE( 261)			this->_ui_vars->set(key,value);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIState_obj,setUIVariable,(void))

void FlxUIState_obj::resizeScreen(::hx::Null< Float >  __o_width,::hx::Null< Float >  __o_height){
            		Float width = __o_width.Default(800);
            		Float height = __o_height.Default(600);
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_266_resizeScreen)
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIState_obj,resizeScreen,(void))

void FlxUIState_obj::openSubState( ::flixel::FlxSubState SubState){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_275_openSubState)
HXLINE( 277)		bool _hx_tmp;
HXDLIN( 277)		bool _hx_tmp1;
HXDLIN( 277)		if (::hx::IsNotNull( this->cursor )) {
HXLINE( 277)			_hx_tmp1 = this->hideCursorOnSubstate;
            		}
            		else {
HXLINE( 277)			_hx_tmp1 = false;
            		}
HXDLIN( 277)		if (_hx_tmp1) {
HXLINE( 277)			_hx_tmp = (this->cursor->visible == true);
            		}
            		else {
HXLINE( 277)			_hx_tmp = false;
            		}
HXDLIN( 277)		if (_hx_tmp) {
HXLINE( 279)			this->_cursorHidden = true;
HXLINE( 280)			this->cursor->set_visible(false);
            		}
HXLINE( 283)		this->super::openSubState(SubState);
            	}


void FlxUIState_obj::closeSubState(){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_287_closeSubState)
HXLINE( 289)		bool _hx_tmp;
HXDLIN( 289)		bool _hx_tmp1;
HXDLIN( 289)		if (::hx::IsNotNull( this->cursor )) {
HXLINE( 289)			_hx_tmp1 = this->hideCursorOnSubstate;
            		}
            		else {
HXLINE( 289)			_hx_tmp1 = false;
            		}
HXDLIN( 289)		if (_hx_tmp1) {
HXLINE( 289)			_hx_tmp = this->_cursorHidden;
            		}
            		else {
HXLINE( 289)			_hx_tmp = false;
            		}
HXDLIN( 289)		if (_hx_tmp) {
HXLINE( 291)			this->_cursorHidden = false;
HXLINE( 292)			this->cursor->set_visible(true);
            		}
HXLINE( 295)		this->super::closeSubState();
            	}


void FlxUIState_obj::onResize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_300_onResize)
HXDLIN( 300)		if (this->reload_ui_on_resize) {
HXLINE( 302)			::flixel::FlxG_obj::scaleMode->onMeasure(Width,Height);
HXLINE( 303)			this->_reload_countdown = 1;
HXLINE( 304)			this->_reload = true;
            		}
            	}


void FlxUIState_obj::onShowTooltip( ::flixel::addons::ui::FlxUITooltip t){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_310_onShowTooltip)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIState_obj,onShowTooltip,(void))

void FlxUIState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_315_destroy)
HXLINE( 316)		this->destroyed = true;
HXLINE( 318)		if (::hx::IsNotNull( this->_ui )) {
HXLINE( 320)			this->_ui->destroy();
HXLINE( 321)			this->remove(this->_ui,true);
HXLINE( 322)			this->_ui = null();
            		}
HXLINE( 325)		if (::hx::IsNotNull( this->tooltips )) {
HXLINE( 327)			this->tooltips->destroy();
HXLINE( 328)			this->tooltips = null();
            		}
HXLINE( 331)		this->super::destroy();
            	}


void FlxUIState_obj::forceFocus(bool b,::Dynamic thing){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_336_forceFocus)
HXDLIN( 336)		if (::hx::IsNotNull( this->_ui )) {
HXLINE( 338)			if (b) {
HXLINE( 340)				this->_ui->set_focus(thing);
            			}
            			else {
HXLINE( 344)				this->_ui->set_focus(null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIState_obj,forceFocus,(void))

void FlxUIState_obj::onCursorEvent(::String code,::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_351_onCursorEvent)
HXDLIN( 351)		this->getEvent(code,target,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIState_obj,onCursorEvent,(void))

void FlxUIState_obj::getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_355_getEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxUIState_obj,getEvent,(void))

 ::Dynamic FlxUIState_obj::getRequest(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_362_getRequest)
HXDLIN( 362)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxUIState_obj,getRequest,return )

::String FlxUIState_obj::getText(::String Flag,::String __o_Context,::hx::Null< bool >  __o_Safe){
            		::String Context = __o_Context;
            		if (::hx::IsNull(__o_Context)) Context = HX_("ui",54,66,00,00);
            		bool Safe = __o_Safe.Default(true);
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_366_getText)
HXLINE( 367)		if (::hx::IsNotNull( this->_tongue )) {
HXLINE( 369)			return ::flixel::addons::ui::interfaces::IFireTongue_obj::get(this->_tongue,Flag,Context,Safe);
            		}
HXLINE( 371)		if (::hx::IsNotNull( this->getTextFallback )) {
HXLINE( 373)			return ( (::String)(this->getTextFallback(Flag,Context,Safe)) );
            		}
HXLINE( 375)		return Flag;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUIState_obj,getText,return )

 ::flixel::addons::ui::FlxUICursor FlxUIState_obj::createCursor(){
            	HX_GC_STACKFRAME(&_hx_pos_060bddf2a47172f7_384_createCursor)
HXDLIN( 384)		return  ::flixel::addons::ui::FlxUICursor_obj::__alloc( HX_CTX ,this->onCursorEvent_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIState_obj,createCursor,return )

 ::flixel::addons::ui::FlxUI FlxUIState_obj::createUI( ::Xml data,::Dynamic ptr, ::flixel::addons::ui::FlxUI superIndex_,::Dynamic tongue_,::String __o_liveFilePath_){
            		::String liveFilePath_ = __o_liveFilePath_;
            		if (::hx::IsNull(__o_liveFilePath_)) liveFilePath_ = HX_("",00,00,00,00);
            	HX_GC_STACKFRAME(&_hx_pos_060bddf2a47172f7_391_createUI)
HXLINE( 392)		 ::flixel::addons::ui::FlxUI flxui =  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,data,ptr,superIndex_,tongue_,liveFilePath_,this->_ui_vars);
HXLINE( 393)		this->_cleanupUIVars();
HXLINE( 394)		return flxui;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxUIState_obj,createUI,return )

void FlxUIState_obj::loadUIFromData( ::Xml data){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_401_loadUIFromData)
HXDLIN( 401)		this->_ui->load(data);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIState_obj,loadUIFromData,(void))

void FlxUIState_obj::reloadUI( ::openfl::events::Event e){
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_405_reloadUI)
HXLINE( 406)		if (::hx::IsNotNull( this->_ui )) {
HXLINE( 408)			this->remove(this->_ui,true);
HXLINE( 409)			this->_ui->destroy();
HXLINE( 410)			this->_ui = null();
            		}
HXLINE( 413)		this->_ui = this->createUI(null(),::hx::ObjectPtr<OBJ_>(this),null(),this->_tongue,null());
HXLINE( 414)		this->add(this->_ui);
HXLINE( 416)		 ::Xml data = ( ( ::Xml)(::flixel::addons::ui::U_obj::xml(this->_xml_id,null(),null(),null())) );
HXLINE( 417)		if (::hx::IsNotNull( data )) {
HXLINE( 419)			this->loadUIFromData(data);
            		}
HXLINE( 422)		this->_reload = false;
HXLINE( 423)		this->_reload_countdown = 0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIState_obj,reloadUI,(void))

::Dynamic FlxUIState_obj::static_tongue;


::hx::ObjectPtr< FlxUIState_obj > FlxUIState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< FlxUIState_obj > __this = new FlxUIState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< FlxUIState_obj > FlxUIState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	FlxUIState_obj *__this = (FlxUIState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIState_obj), true, "flixel.addons.ui.FlxUIState"));
	*(void **)__this = FlxUIState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

FlxUIState_obj::FlxUIState_obj()
{
}

void FlxUIState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIState);
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(hideCursorOnSubstate,"hideCursorOnSubstate");
	HX_MARK_MEMBER_NAME(_cursorHidden,"_cursorHidden");
	HX_MARK_MEMBER_NAME(tooltips,"tooltips");
	HX_MARK_MEMBER_NAME(_xml_id,"_xml_id");
	HX_MARK_MEMBER_NAME(_makeCursor,"_makeCursor");
	HX_MARK_MEMBER_NAME(_ui_vars,"_ui_vars");
	HX_MARK_MEMBER_NAME(_ui,"_ui");
	HX_MARK_MEMBER_NAME(_tongue,"_tongue");
	HX_MARK_MEMBER_NAME(reload_ui_on_resize,"reload_ui_on_resize");
	HX_MARK_MEMBER_NAME(_reload,"_reload");
	HX_MARK_MEMBER_NAME(_reload_countdown,"_reload_countdown");
	HX_MARK_MEMBER_NAME(getTextFallback,"getTextFallback");
	 ::flixel::addons::transition::FlxTransitionableState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(hideCursorOnSubstate,"hideCursorOnSubstate");
	HX_VISIT_MEMBER_NAME(_cursorHidden,"_cursorHidden");
	HX_VISIT_MEMBER_NAME(tooltips,"tooltips");
	HX_VISIT_MEMBER_NAME(_xml_id,"_xml_id");
	HX_VISIT_MEMBER_NAME(_makeCursor,"_makeCursor");
	HX_VISIT_MEMBER_NAME(_ui_vars,"_ui_vars");
	HX_VISIT_MEMBER_NAME(_ui,"_ui");
	HX_VISIT_MEMBER_NAME(_tongue,"_tongue");
	HX_VISIT_MEMBER_NAME(reload_ui_on_resize,"reload_ui_on_resize");
	HX_VISIT_MEMBER_NAME(_reload,"_reload");
	HX_VISIT_MEMBER_NAME(_reload_countdown,"_reload_countdown");
	HX_VISIT_MEMBER_NAME(getTextFallback,"getTextFallback");
	 ::flixel::addons::transition::FlxTransitionableState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxUIState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { return ::hx::Val( _ui ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return ::hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_xml_id") ) { return ::hx::Val( _xml_id ); }
		if (HX_FIELD_EQ(inName,"_tongue") ) { return ::hx::Val( _tongue ); }
		if (HX_FIELD_EQ(inName,"_reload") ) { return ::hx::Val( _reload ); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return ::hx::Val( cleanup_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tooltips") ) { return ::hx::Val( tooltips ); }
		if (HX_FIELD_EQ(inName,"_ui_vars") ) { return ::hx::Val( _ui_vars ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return ::hx::Val( onResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEvent") ) { return ::hx::Val( getEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"createUI") ) { return ::hx::Val( createUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"reloadUI") ) { return ::hx::Val( reloadUI_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return ::hx::Val( destroyed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceFocus") ) { return ::hx::Val( forceFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRequest") ) { return ::hx::Val( getRequest_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_makeCursor") ) { return ::hx::Val( _makeCursor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeScreen") ) { return ::hx::Val( resizeScreen_dyn() ); }
		if (HX_FIELD_EQ(inName,"openSubState") ) { return ::hx::Val( openSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"createCursor") ) { return ::hx::Val( createCursor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cursorHidden") ) { return ::hx::Val( _cursorHidden ); }
		if (HX_FIELD_EQ(inName,"setUIVariable") ) { return ::hx::Val( setUIVariable_dyn() ); }
		if (HX_FIELD_EQ(inName,"closeSubState") ) { return ::hx::Val( closeSubState_dyn() ); }
		if (HX_FIELD_EQ(inName,"onShowTooltip") ) { return ::hx::Val( onShowTooltip_dyn() ); }
		if (HX_FIELD_EQ(inName,"onCursorEvent") ) { return ::hx::Val( onCursorEvent_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_cleanupUIVars") ) { return ::hx::Val( _cleanupUIVars_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadUIFromData") ) { return ::hx::Val( loadUIFromData_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { return ::hx::Val( getTextFallback ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_reload_countdown") ) { return ::hx::Val( _reload_countdown ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"reload_ui_on_resize") ) { return ::hx::Val( reload_ui_on_resize ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hideCursorOnSubstate") ) { return ::hx::Val( hideCursorOnSubstate ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxUIState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"static_tongue") ) { outValue = ( static_tongue ); return true; }
	}
	return false;
}

::hx::Val FlxUIState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { _ui=inValue.Cast<  ::flixel::addons::ui::FlxUI >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast<  ::flixel::addons::ui::FlxUICursor >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_xml_id") ) { _xml_id=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tongue") ) { _tongue=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reload") ) { _reload=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tooltips") ) { tooltips=inValue.Cast<  ::flixel::addons::ui::FlxUITooltipManager >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_ui_vars") ) { _ui_vars=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_makeCursor") ) { _makeCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_cursorHidden") ) { _cursorHidden=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { getTextFallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_reload_countdown") ) { _reload_countdown=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"reload_ui_on_resize") ) { reload_ui_on_resize=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"hideCursorOnSubstate") ) { hideCursorOnSubstate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxUIState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"static_tongue") ) { static_tongue=ioValue.Cast< ::Dynamic >(); return true; }
	}
	return false;
}

void FlxUIState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("destroyed",d9,37,27,f4));
	outFields->push(HX_("cursor",d6,8e,e8,3e));
	outFields->push(HX_("hideCursorOnSubstate",28,20,2f,e3));
	outFields->push(HX_("_cursorHidden",bf,59,51,6b));
	outFields->push(HX_("tooltips",10,b6,8a,d0));
	outFields->push(HX_("_xml_id",22,16,a3,73));
	outFields->push(HX_("_makeCursor",83,30,42,63));
	outFields->push(HX_("_ui_vars",38,ca,da,37));
	outFields->push(HX_("_ui",73,7c,48,00));
	outFields->push(HX_("_tongue",63,57,5b,02));
	outFields->push(HX_("reload_ui_on_resize",4f,eb,1e,44));
	outFields->push(HX_("_reload",f8,64,56,72));
	outFields->push(HX_("_reload_countdown",6a,17,8b,78));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxUIState_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxUIState_obj,destroyed),HX_("destroyed",d9,37,27,f4)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUICursor */ ,(int)offsetof(FlxUIState_obj,cursor),HX_("cursor",d6,8e,e8,3e)},
	{::hx::fsBool,(int)offsetof(FlxUIState_obj,hideCursorOnSubstate),HX_("hideCursorOnSubstate",28,20,2f,e3)},
	{::hx::fsBool,(int)offsetof(FlxUIState_obj,_cursorHidden),HX_("_cursorHidden",bf,59,51,6b)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUITooltipManager */ ,(int)offsetof(FlxUIState_obj,tooltips),HX_("tooltips",10,b6,8a,d0)},
	{::hx::fsString,(int)offsetof(FlxUIState_obj,_xml_id),HX_("_xml_id",22,16,a3,73)},
	{::hx::fsBool,(int)offsetof(FlxUIState_obj,_makeCursor),HX_("_makeCursor",83,30,42,63)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FlxUIState_obj,_ui_vars),HX_("_ui_vars",38,ca,da,37)},
	{::hx::fsObject /*  ::flixel::addons::ui::FlxUI */ ,(int)offsetof(FlxUIState_obj,_ui),HX_("_ui",73,7c,48,00)},
	{::hx::fsObject /* ::Dynamic */ ,(int)offsetof(FlxUIState_obj,_tongue),HX_("_tongue",63,57,5b,02)},
	{::hx::fsBool,(int)offsetof(FlxUIState_obj,reload_ui_on_resize),HX_("reload_ui_on_resize",4f,eb,1e,44)},
	{::hx::fsBool,(int)offsetof(FlxUIState_obj,_reload),HX_("_reload",f8,64,56,72)},
	{::hx::fsInt,(int)offsetof(FlxUIState_obj,_reload_countdown),HX_("_reload_countdown",6a,17,8b,78)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxUIState_obj,getTextFallback),HX_("getTextFallback",a5,c3,03,82)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxUIState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Dynamic */ ,(void *) &FlxUIState_obj::static_tongue,HX_("static_tongue",75,8c,1c,bc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUIState_obj_sMemberFields[] = {
	HX_("destroyed",d9,37,27,f4),
	HX_("cursor",d6,8e,e8,3e),
	HX_("hideCursorOnSubstate",28,20,2f,e3),
	HX_("_cursorHidden",bf,59,51,6b),
	HX_("tooltips",10,b6,8a,d0),
	HX_("_xml_id",22,16,a3,73),
	HX_("_makeCursor",83,30,42,63),
	HX_("_ui_vars",38,ca,da,37),
	HX_("_ui",73,7c,48,00),
	HX_("_tongue",63,57,5b,02),
	HX_("reload_ui_on_resize",4f,eb,1e,44),
	HX_("_reload",f8,64,56,72),
	HX_("_reload_countdown",6a,17,8b,78),
	HX_("getTextFallback",a5,c3,03,82),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("cleanup",24,0c,42,ab),
	HX_("_cleanupUIVars",85,0b,62,df),
	HX_("setUIVariable",d2,c6,16,ed),
	HX_("resizeScreen",80,f8,6a,2b),
	HX_("openSubState",5b,66,48,37),
	HX_("closeSubState",49,18,32,04),
	HX_("onResize",73,50,28,e8),
	HX_("onShowTooltip",a7,66,12,aa),
	HX_("destroy",fa,2c,86,24),
	HX_("forceFocus",ed,49,5e,9b),
	HX_("onCursorEvent",85,3e,90,61),
	HX_("getEvent",a4,d7,9b,d5),
	HX_("getRequest",59,65,e6,93),
	HX_("getText",63,7c,7c,1f),
	HX_("createCursor",f2,ce,3d,61),
	HX_("createUI",50,68,f4,2b),
	HX_("loadUIFromData",ce,a4,71,19),
	HX_("reloadUI",ed,e5,dd,38),
	::String(null()) };

static void FlxUIState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIState_obj::static_tongue,"static_tongue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUIState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIState_obj::static_tongue,"static_tongue");
};

#endif

::hx::Class FlxUIState_obj::__mClass;

static ::String FlxUIState_obj_sStaticFields[] = {
	HX_("static_tongue",75,8c,1c,bc),
	::String(null())
};

void FlxUIState_obj::__register()
{
	FlxUIState_obj _hx_dummy;
	FlxUIState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FlxUIState",7c,89,c0,87);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxUIState_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxUIState_obj::__SetStatic;
	__mClass->mMarkFunc = FlxUIState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxUIState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxUIState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxUIState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUIState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUIState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_060bddf2a47172f7_63_boot)
HXDLIN(  63)		static_tongue = null();
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
