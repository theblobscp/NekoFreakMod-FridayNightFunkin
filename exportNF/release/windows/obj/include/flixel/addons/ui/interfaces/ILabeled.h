// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#define INCLUDED_flixel_addons_ui_interfaces_ILabeled

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIText)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace addons{
namespace ui{
namespace interfaces{


class HXCPP_CLASS_ATTRIBUTES ILabeled_obj {
	public:
		typedef ::hx::Object super;
		HX_DO_INTERFACE_RTTI;

		 ::flixel::addons::ui::FlxUIText (::hx::Object :: *_hx_getLabel)(); 
		static inline  ::flixel::addons::ui::FlxUIText getLabel( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::ILabeled_obj *>(_hx_.mPtr->_hx_getInterface(0xa7145b87)))->_hx_getLabel)();
		}
		 ::flixel::addons::ui::FlxUIText (::hx::Object :: *_hx_setLabel)( ::flixel::addons::ui::FlxUIText t); 
		static inline  ::flixel::addons::ui::FlxUIText setLabel( ::Dynamic _hx_, ::flixel::addons::ui::FlxUIText t) {
			return (_hx_.mPtr->*( ::hx::interface_cast< ::flixel::addons::ui::interfaces::ILabeled_obj *>(_hx_.mPtr->_hx_getInterface(0xa7145b87)))->_hx_setLabel)(t);
		}
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui
} // end namespace interfaces

#endif /* INCLUDED_flixel_addons_ui_interfaces_ILabeled */ 
