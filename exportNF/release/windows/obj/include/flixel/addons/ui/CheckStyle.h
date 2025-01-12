// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_flixel_addons_ui_CheckStyle
#define INCLUDED_flixel_addons_ui_CheckStyle

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_ButtonLabelStyle
#include <flixel/addons/ui/ButtonLabelStyle.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,BorderDef)
HX_DECLARE_CLASS3(flixel,addons,ui,ButtonLabelStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,CheckStyle)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FontDef)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES CheckStyle_obj : public  ::flixel::addons::ui::ButtonLabelStyle_obj
{
	public:
		typedef  ::flixel::addons::ui::ButtonLabelStyle_obj super;
		typedef CheckStyle_obj OBJ_;
		CheckStyle_obj();

	public:
		enum { _hx_ClassId = 0x36a2ea0c };

		void __construct( ::Dynamic CheckColor, ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.CheckStyle")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.CheckStyle"); }
		static ::hx::ObjectPtr< CheckStyle_obj > __new( ::Dynamic CheckColor, ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border);
		static ::hx::ObjectPtr< CheckStyle_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic CheckColor, ::flixel::addons::ui::FontDef Font,::String Align, ::Dynamic Color, ::flixel::addons::ui::BorderDef Border);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CheckStyle_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CheckStyle",69,ab,be,8a); }

		 ::Dynamic checkColor;
		void applyToCheck( ::flixel::addons::ui::FlxUICheckBox c);
		::Dynamic applyToCheck_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_CheckStyle */ 
