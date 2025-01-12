// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_flixel_addons_ui_FlxUIDropDownMenu
#define INCLUDED_flixel_addons_ui_FlxUIDropDownMenu

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUI9SliceSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIButton)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownHeader)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownMenu)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIDropDownMenuDropDirection)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUISprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITypedButton)
HX_DECLARE_CLASS3(flixel,addons,ui,StrNameLabel)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIButton)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIDropDownMenu_obj : public  ::flixel::addons::ui::FlxUIGroup_obj
{
	public:
		typedef  ::flixel::addons::ui::FlxUIGroup_obj super;
		typedef FlxUIDropDownMenu_obj OBJ_;
		FlxUIDropDownMenu_obj();

	public:
		enum { _hx_ClassId = 0x0a7e1673 };

		void __construct(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> DataList, ::Dynamic Callback, ::flixel::addons::ui::FlxUIDropDownHeader Header, ::flixel::addons::ui::FlxUI9SliceSprite DropPanel,::Array< ::Dynamic> ButtonList, ::Dynamic UIControlCallback);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIDropDownMenu")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIDropDownMenu"); }
		static ::hx::ObjectPtr< FlxUIDropDownMenu_obj > __new(::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> DataList, ::Dynamic Callback, ::flixel::addons::ui::FlxUIDropDownHeader Header, ::flixel::addons::ui::FlxUI9SliceSprite DropPanel,::Array< ::Dynamic> ButtonList, ::Dynamic UIControlCallback);
		static ::hx::ObjectPtr< FlxUIDropDownMenu_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_X,::hx::Null< Float >  __o_Y,::Array< ::Dynamic> DataList, ::Dynamic Callback, ::flixel::addons::ui::FlxUIDropDownHeader Header, ::flixel::addons::ui::FlxUI9SliceSprite DropPanel,::Array< ::Dynamic> ButtonList, ::Dynamic UIControlCallback);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIDropDownMenu_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxUIDropDownMenu",b6,ea,1f,0f); }

		static void __boot();
		static ::String CLICK_EVENT;
		static ::Array< ::Dynamic> makeStrIdLabelArray(::Array< ::String > StringArray,::hx::Null< bool >  UseIndexID);
		static ::Dynamic makeStrIdLabelArray_dyn();

		bool skipButtonUpdate;
		bool set_skipButtonUpdate(bool b);
		::Dynamic set_skipButtonUpdate_dyn();

		::String _selectedId;
		::String _selectedLabel;
		::String get_selectedId();
		::Dynamic get_selectedId_dyn();

		::String set_selectedId(::String str);
		::Dynamic set_selectedId_dyn();

		::String get_selectedLabel();
		::Dynamic get_selectedLabel_dyn();

		::String set_selectedLabel(::String str);
		::Dynamic set_selectedLabel_dyn();

		 ::flixel::addons::ui::FlxUIDropDownHeader header;
		::Array< ::Dynamic> list;
		 ::flixel::addons::ui::FlxUI9SliceSprite dropPanel;
		::cpp::VirtualArray params;
		::cpp::VirtualArray set_params(::cpp::VirtualArray p);
		::Dynamic set_params_dyn();

		 ::flixel::addons::ui::FlxUIDropDownMenuDropDirection dropDirection;
		 ::flixel::addons::ui::FlxUIDropDownMenuDropDirection set_dropDirection( ::flixel::addons::ui::FlxUIDropDownMenuDropDirection dropDirection);
		::Dynamic set_dropDirection_dyn();

		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		void updateButtonPositions();
		::Dynamic updateButtonPositions_dyn();

		bool set_visible(bool Value);

		bool dropsUp();
		::Dynamic dropsUp_dyn();

		bool exceedsHeight();
		::Dynamic exceedsHeight_dyn();

		Float getPanelHeight();
		::Dynamic getPanelHeight_dyn();

		void setData(::Array< ::Dynamic> DataList);
		::Dynamic setData_dyn();

		void selectSomething(::String name,::String label);
		::Dynamic selectSomething_dyn();

		 ::flixel::addons::ui::FlxUIButton makeListButton(int i,::String Label,::String Name);
		::Dynamic makeListButton_dyn();

		void changeLabelByIndex(int i,::String NewLabel);
		::Dynamic changeLabelByIndex_dyn();

		void changeLabelById(::String name,::String NewLabel);
		::Dynamic changeLabelById_dyn();

		 ::flixel::addons::ui::FlxUIButton getBtnByIndex(int i);
		::Dynamic getBtnByIndex_dyn();

		 ::flixel::addons::ui::FlxUIButton getBtnById(::String name);
		::Dynamic getBtnById_dyn();

		void update(Float elapsed);

		void destroy();

		void showList(bool b);
		::Dynamic showList_dyn();

		void onDropdown();
		::Dynamic onDropdown_dyn();

		void onClickItem(int i);
		::Dynamic onClickItem_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIDropDownMenu */ 
