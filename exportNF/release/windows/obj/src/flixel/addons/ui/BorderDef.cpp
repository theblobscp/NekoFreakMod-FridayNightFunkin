// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_BorderDef
#include <flixel/addons/ui/BorderDef.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9f4560912681d6f0_14_new,"flixel.addons.ui.BorderDef","new",0x371bd1ba,"flixel.addons.ui.BorderDef.new","flixel/addons/ui/BorderDef.hx",14,0xa0e6b257)
HX_LOCAL_STACK_FRAME(_hx_pos_9f4560912681d6f0_23_clone,"flixel.addons.ui.BorderDef","clone",0xc2319f37,"flixel.addons.ui.BorderDef.clone","flixel/addons/ui/BorderDef.hx",23,0xa0e6b257)
HX_LOCAL_STACK_FRAME(_hx_pos_9f4560912681d6f0_27_apply,"flixel.addons.ui.BorderDef","apply",0x9e0a1148,"flixel.addons.ui.BorderDef.apply","flixel/addons/ui/BorderDef.hx",27,0xa0e6b257)
HX_LOCAL_STACK_FRAME(_hx_pos_9f4560912681d6f0_33_fromXML,"flixel.addons.ui.BorderDef","fromXML",0xcb72d8e7,"flixel.addons.ui.BorderDef.fromXML","flixel/addons/ui/BorderDef.hx",33,0xa0e6b257)
namespace flixel{
namespace addons{
namespace ui{

void BorderDef_obj::__construct( ::flixel::text::FlxTextBorderStyle Style,int Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality){
            		Float Size = __o_Size.Default(1);
            		Float Quality = __o_Quality.Default(1);
            	HX_STACKFRAME(&_hx_pos_9f4560912681d6f0_14_new)
HXLINE(  15)		this->style = Style;
HXLINE(  16)		this->color = Color;
HXLINE(  17)		this->size = Size;
HXLINE(  18)		this->quality = Quality;
            	}

Dynamic BorderDef_obj::__CreateEmpty() { return new BorderDef_obj; }

void *BorderDef_obj::_hx_vtable = 0;

Dynamic BorderDef_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BorderDef_obj > _hx_result = new BorderDef_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool BorderDef_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fa6170e;
}

 ::flixel::addons::ui::BorderDef BorderDef_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_9f4560912681d6f0_23_clone)
HXDLIN(  23)		return  ::flixel::addons::ui::BorderDef_obj::__alloc( HX_CTX ,this->style,this->color,this->size,this->quality);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BorderDef_obj,clone,return )

 ::flixel::text::FlxText BorderDef_obj::apply( ::flixel::text::FlxText f){
            	HX_STACKFRAME(&_hx_pos_9f4560912681d6f0_27_apply)
HXLINE(  28)		{
HXLINE(  28)			int Color = this->color;
HXDLIN(  28)			Float Size = this->size;
HXDLIN(  28)			Float Quality = this->quality;
HXDLIN(  28)			f->set_borderStyle(this->style);
HXDLIN(  28)			f->set_borderColor(Color);
HXDLIN(  28)			f->set_borderSize(Size);
HXDLIN(  28)			f->set_borderQuality(Quality);
            		}
HXLINE(  29)		return f;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BorderDef_obj,apply,return )

 ::flixel::addons::ui::BorderDef BorderDef_obj::fromXML( ::Xml data){
            	HX_GC_STACKFRAME(&_hx_pos_9f4560912681d6f0_33_fromXML)
HXLINE(  34)		::String border_str = ::flixel::addons::ui::U_obj::xml_str(data,HX_("border",ec,4c,1a,64),null(),null());
HXLINE(  35)		 ::flixel::text::FlxTextBorderStyle border_style = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
HXLINE(  36)		int border_color = ( (int)(::flixel::addons::ui::U_obj::xml_color(data,HX_("border_color",90,7e,e8,6e),true,0)) );
HXLINE(  37)		Float border_size = ::flixel::addons::ui::U_obj::xml_f(data,HX_("border_size",34,18,b0,f8),1);
HXLINE(  38)		Float border_quality = ::flixel::addons::ui::U_obj::xml_f(data,HX_("border_quality",2c,77,d7,ad),0);
HXLINE(  40)		 ::flixel::addons::ui::BorderDef borderDef =  ::flixel::addons::ui::BorderDef_obj::__alloc( HX_CTX ,border_style,border_color,border_size,border_quality);
HXLINE(  42)		::String _hx_switch_0 = border_str;
            		if (  (_hx_switch_0==HX_("",00,00,00,00)) ){
HXLINE(  55)			border_str = ::flixel::addons::ui::U_obj::xml_str(data,HX_("shadow",e0,c7,20,1d),true,HX_("",00,00,00,00));
HXLINE(  56)			bool _hx_tmp;
HXDLIN(  56)			bool _hx_tmp1;
HXDLIN(  56)			if ((border_str != HX_("",00,00,00,00))) {
HXLINE(  56)				_hx_tmp1 = (border_str != HX_("false",a3,35,4f,fb));
            			}
            			else {
HXLINE(  56)				_hx_tmp1 = false;
            			}
HXDLIN(  56)			if (_hx_tmp1) {
HXLINE(  56)				_hx_tmp = (border_str != HX_("none",b8,12,0a,49));
            			}
            			else {
HXLINE(  56)				_hx_tmp = false;
            			}
HXDLIN(  56)			if (_hx_tmp) {
HXLINE(  58)				borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::SHADOW_dyn();
HXLINE(  59)				 ::Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(border_str);
HXDLIN(  59)				if (::hx::IsNull( return_val )) {
HXLINE(  59)					return_val = 0;
            				}
HXDLIN(  59)				borderDef->color = ( (int)(return_val) );
            			}
            			else {
HXLINE(  63)				border_str = ::flixel::addons::ui::U_obj::xml_str(data,HX_("outline",82,17,be,e1),true,HX_("",00,00,00,00));
HXLINE(  64)				bool _hx_tmp;
HXDLIN(  64)				bool _hx_tmp1;
HXDLIN(  64)				if ((border_str != HX_("",00,00,00,00))) {
HXLINE(  64)					_hx_tmp1 = (border_str != HX_("false",a3,35,4f,fb));
            				}
            				else {
HXLINE(  64)					_hx_tmp1 = false;
            				}
HXDLIN(  64)				if (_hx_tmp1) {
HXLINE(  64)					_hx_tmp = (border_str != HX_("none",b8,12,0a,49));
            				}
            				else {
HXLINE(  64)					_hx_tmp = false;
            				}
HXDLIN(  64)				if (_hx_tmp) {
HXLINE(  66)					borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn();
HXLINE(  67)					 ::Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(border_str);
HXDLIN(  67)					if (::hx::IsNull( return_val )) {
HXLINE(  67)						return_val = 0;
            					}
HXDLIN(  67)					borderDef->color = ( (int)(return_val) );
            				}
            				else {
HXLINE(  71)					border_str = ::flixel::addons::ui::U_obj::xml_str(data,HX_("outline_fast",b9,4f,fa,33),null(),null());
HXLINE(  72)					bool _hx_tmp;
HXDLIN(  72)					bool _hx_tmp1;
HXDLIN(  72)					if ((border_str != HX_("",00,00,00,00))) {
HXLINE(  72)						_hx_tmp1 = (border_str != HX_("false",a3,35,4f,fb));
            					}
            					else {
HXLINE(  72)						_hx_tmp1 = false;
            					}
HXDLIN(  72)					if (_hx_tmp1) {
HXLINE(  72)						_hx_tmp = (border_str != HX_("none",b8,12,0a,49));
            					}
            					else {
HXLINE(  72)						_hx_tmp = false;
            					}
HXDLIN(  72)					if (_hx_tmp) {
HXLINE(  74)						borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::OUTLINE_FAST_dyn();
HXLINE(  75)						 ::Dynamic return_val = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(border_str);
HXDLIN(  75)						if (::hx::IsNull( return_val )) {
HXLINE(  75)							return_val = 0;
            						}
HXDLIN(  75)						borderDef->color = ( (int)(return_val) );
            					}
            				}
            			}
HXLINE(  52)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("false",a3,35,4f,fb)) ||  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  45)			borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::NONE_dyn();
HXDLIN(  45)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("outline",82,17,be,e1)) ){
HXLINE(  49)			borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn();
HXDLIN(  49)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("outline_fast",b9,4f,fa,33)) ){
HXLINE(  51)			borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::OUTLINE_FAST_dyn();
HXDLIN(  51)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("shadow",e0,c7,20,1d)) ){
HXLINE(  47)			borderDef->style = ::flixel::text::FlxTextBorderStyle_obj::SHADOW_dyn();
HXDLIN(  47)			goto _hx_goto_3;
            		}
            		_hx_goto_3:;
HXLINE(  80)		return borderDef;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BorderDef_obj,fromXML,return )


::hx::ObjectPtr< BorderDef_obj > BorderDef_obj::__new( ::flixel::text::FlxTextBorderStyle Style,int Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality) {
	::hx::ObjectPtr< BorderDef_obj > __this = new BorderDef_obj();
	__this->__construct(Style,Color,__o_Size,__o_Quality);
	return __this;
}

::hx::ObjectPtr< BorderDef_obj > BorderDef_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::text::FlxTextBorderStyle Style,int Color,::hx::Null< Float >  __o_Size,::hx::Null< Float >  __o_Quality) {
	BorderDef_obj *__this = (BorderDef_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BorderDef_obj), true, "flixel.addons.ui.BorderDef"));
	*(void **)__this = BorderDef_obj::_hx_vtable;
	__this->__construct(Style,Color,__o_Size,__o_Quality);
	return __this;
}

BorderDef_obj::BorderDef_obj()
{
}

void BorderDef_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BorderDef);
	HX_MARK_MEMBER_NAME(style,"style");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_END_CLASS();
}

void BorderDef_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(style,"style");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(quality,"quality");
}

::hx::Val BorderDef_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { return ::hx::Val( style ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return ::hx::Val( quality ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BorderDef_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromXML") ) { outValue = fromXML_dyn(); return true; }
	}
	return false;
}

::hx::Val BorderDef_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"style") ) { style=inValue.Cast<  ::flixel::text::FlxTextBorderStyle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BorderDef_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("style",31,a5,1d,84));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("quality",bf,04,4c,44));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BorderDef_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxTextBorderStyle */ ,(int)offsetof(BorderDef_obj,style),HX_("style",31,a5,1d,84)},
	{::hx::fsInt,(int)offsetof(BorderDef_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsFloat,(int)offsetof(BorderDef_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsFloat,(int)offsetof(BorderDef_obj,quality),HX_("quality",bf,04,4c,44)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BorderDef_obj_sStaticStorageInfo = 0;
#endif

static ::String BorderDef_obj_sMemberFields[] = {
	HX_("style",31,a5,1d,84),
	HX_("color",63,71,5c,4a),
	HX_("size",c1,a0,53,4c),
	HX_("quality",bf,04,4c,44),
	HX_("clone",5d,13,63,48),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class BorderDef_obj::__mClass;

static ::String BorderDef_obj_sStaticFields[] = {
	HX_("fromXML",8d,22,06,58),
	::String(null())
};

void BorderDef_obj::__register()
{
	BorderDef_obj _hx_dummy;
	BorderDef_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.BorderDef",c8,2c,b6,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BorderDef_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BorderDef_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BorderDef_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BorderDef_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BorderDef_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BorderDef_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
