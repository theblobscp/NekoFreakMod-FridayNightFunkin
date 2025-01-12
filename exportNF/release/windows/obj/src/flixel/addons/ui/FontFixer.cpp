// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_FontFixer
#include <flixel/addons/ui/FontFixer.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_104c949d5af4b7b2_18_init,"flixel.addons.ui.FontFixer","init",0xc699013c,"flixel.addons.ui.FontFixer.init","flixel/addons/ui/FontFixer.hx",18,0x44f16d9d)
HX_LOCAL_STACK_FRAME(_hx_pos_104c949d5af4b7b2_25_fix,"flixel.addons.ui.FontFixer","fix",0x1c6ee529,"flixel.addons.ui.FontFixer.fix","flixel/addons/ui/FontFixer.hx",25,0x44f16d9d)
HX_LOCAL_STACK_FRAME(_hx_pos_104c949d5af4b7b2_38_add,"flixel.addons.ui.FontFixer","add",0x1c6b1575,"flixel.addons.ui.FontFixer.add","flixel/addons/ui/FontFixer.hx",38,0x44f16d9d)
namespace flixel{
namespace addons{
namespace ui{

void FontFixer_obj::__construct() { }

Dynamic FontFixer_obj::__CreateEmpty() { return new FontFixer_obj; }

void *FontFixer_obj::_hx_vtable = 0;

Dynamic FontFixer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FontFixer_obj > _hx_result = new FontFixer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FontFixer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ef53788;
}

 ::haxe::ds::StringMap FontFixer_obj::name2File;

void FontFixer_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_104c949d5af4b7b2_18_init)
HXDLIN(  18)		if (::hx::IsNull( ::flixel::addons::ui::FontFixer_obj::name2File )) {
HXLINE(  20)			::flixel::addons::ui::FontFixer_obj::name2File =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FontFixer_obj,init,(void))

::String FontFixer_obj::fix(::String font){
            	HX_STACKFRAME(&_hx_pos_104c949d5af4b7b2_25_fix)
HXLINE(  26)		::flixel::addons::ui::FontFixer_obj::init();
HXLINE(  27)		if ((font.indexOf(HX_(".ttf",78,3b,c0,1e),null()) == -1)) {
HXLINE(  29)			if (::flixel::addons::ui::FontFixer_obj::name2File->exists(font)) {
HXLINE(  31)				font = ::flixel::addons::ui::FontFixer_obj::name2File->get_string(font);
            			}
            		}
HXLINE(  34)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FontFixer_obj,fix,return )

::String FontFixer_obj::add(::String file,::String __o_name){
            		::String name = __o_name;
            		if (::hx::IsNull(__o_name)) name = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_104c949d5af4b7b2_38_add)
HXLINE(  39)		::flixel::addons::ui::FontFixer_obj::init();
HXLINE(  40)		bool _hx_tmp;
HXDLIN(  40)		if ((name != HX_("",00,00,00,00))) {
HXLINE(  40)			_hx_tmp = ::flixel::addons::ui::FontFixer_obj::name2File->exists(name);
            		}
            		else {
HXLINE(  40)			_hx_tmp = false;
            		}
HXDLIN(  40)		if (_hx_tmp) {
HXLINE(  42)			return ::flixel::addons::ui::FontFixer_obj::name2File->get_string(name);
            		}
HXLINE(  45)		if (!(::openfl::utils::Assets_obj::exists(file,HX_("FONT",cf,25,81,2e)))) {
HXLINE(  47)			return file;
            		}
HXLINE(  50)		 ::openfl::text::Font font = ::openfl::utils::Assets_obj::getFont(file,null());
HXLINE(  51)		if (::hx::IsNull( font )) {
HXLINE(  53)			return file;
            		}
HXLINE(  56)		if ((name == HX_("",00,00,00,00))) {
HXLINE(  58)			name = font->name;
            		}
HXLINE(  75)		::flixel::addons::ui::FontFixer_obj::name2File->set(name,file);
HXLINE(  76)		return ::flixel::addons::ui::FontFixer_obj::fix(file);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FontFixer_obj,add,return )


FontFixer_obj::FontFixer_obj()
{
}

bool FontFixer_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"fix") ) { outValue = fix_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"add") ) { outValue = add_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"name2File") ) { outValue = ( name2File ); return true; }
	}
	return false;
}

bool FontFixer_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"name2File") ) { name2File=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FontFixer_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo FontFixer_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &FontFixer_obj::name2File,HX_("name2File",a3,59,25,5f)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void FontFixer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontFixer_obj::name2File,"name2File");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FontFixer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontFixer_obj::name2File,"name2File");
};

#endif

::hx::Class FontFixer_obj::__mClass;

static ::String FontFixer_obj_sStaticFields[] = {
	HX_("name2File",a3,59,25,5f),
	HX_("init",10,3b,bb,45),
	HX_("fix",d5,c1,4d,00),
	HX_("add",21,f2,49,00),
	::String(null())
};

void FontFixer_obj::__register()
{
	FontFixer_obj _hx_dummy;
	FontFixer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.ui.FontFixer",c2,49,a4,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FontFixer_obj::__GetStatic;
	__mClass->mSetStaticField = &FontFixer_obj::__SetStatic;
	__mClass->mMarkFunc = FontFixer_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FontFixer_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< FontFixer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FontFixer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FontFixer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FontFixer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
