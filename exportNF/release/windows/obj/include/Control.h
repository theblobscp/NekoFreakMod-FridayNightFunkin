// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_Control
#define INCLUDED_Control

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Control)


class Control_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Control_obj OBJ_;

	public:
		Control_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("Control",3d,93,d2,e6); }
		::String __ToString() const { return HX_("Control.",51,42,6e,11) + _hx_tag; }

		static ::Control ACCEPT;
		static inline ::Control ACCEPT_dyn() { return ACCEPT; }
		static ::Control BACK;
		static inline ::Control BACK_dyn() { return BACK; }
		static ::Control CHEAT;
		static inline ::Control CHEAT_dyn() { return CHEAT; }
		static ::Control DOWN;
		static inline ::Control DOWN_dyn() { return DOWN; }
		static ::Control LEFT;
		static inline ::Control LEFT_dyn() { return LEFT; }
		static ::Control PAUSE;
		static inline ::Control PAUSE_dyn() { return PAUSE; }
		static ::Control RESET;
		static inline ::Control RESET_dyn() { return RESET; }
		static ::Control RIGHT;
		static inline ::Control RIGHT_dyn() { return RIGHT; }
		static ::Control UP;
		static inline ::Control UP_dyn() { return UP; }
};


#endif /* INCLUDED_Control */ 
