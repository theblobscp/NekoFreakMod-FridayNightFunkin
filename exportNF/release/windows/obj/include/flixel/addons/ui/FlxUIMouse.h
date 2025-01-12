// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_flixel_addons_ui_FlxUIMouse
#define INCLUDED_flixel_addons_ui_FlxUIMouse

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIMouse)
HX_DECLARE_CLASS2(flixel,input,FlxPointer)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,mouse,FlxMouse)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace flixel{
namespace addons{
namespace ui{


class HXCPP_CLASS_ATTRIBUTES FlxUIMouse_obj : public  ::flixel::input::mouse::FlxMouse_obj
{
	public:
		typedef  ::flixel::input::mouse::FlxMouse_obj super;
		typedef FlxUIMouse_obj OBJ_;
		FlxUIMouse_obj();

	public:
		enum { _hx_ClassId = 0x750b2c26 };

		void __construct( ::openfl::display::Sprite CursorContainer);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.ui.FlxUIMouse")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.ui.FlxUIMouse"); }
		static ::hx::ObjectPtr< FlxUIMouse_obj > __new( ::openfl::display::Sprite CursorContainer);
		static ::hx::ObjectPtr< FlxUIMouse_obj > __alloc(::hx::Ctx *_hx_ctx, ::openfl::display::Sprite CursorContainer);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxUIMouse_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxUIMouse",1f,dd,1a,00); }

		bool updateGlobalScreenPosition;
		void update();

};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_FlxUIMouse */ 
