// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_polymod_Framework
#define INCLUDED_polymod_Framework

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(polymod,Framework)
namespace polymod{


class Framework_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Framework_obj OBJ_;

	public:
		Framework_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("polymod.Framework",e6,5d,52,93); }
		::String __ToString() const { return HX_("Framework.",10,5e,0e,15) + _hx_tag; }

		static ::polymod::Framework CUSTOM;
		static inline ::polymod::Framework CUSTOM_dyn() { return CUSTOM; }
		static ::polymod::Framework HEAPS;
		static inline ::polymod::Framework HEAPS_dyn() { return HEAPS; }
		static ::polymod::Framework KHA;
		static inline ::polymod::Framework KHA_dyn() { return KHA; }
		static ::polymod::Framework LIME;
		static inline ::polymod::Framework LIME_dyn() { return LIME; }
		static ::polymod::Framework NME;
		static inline ::polymod::Framework NME_dyn() { return NME; }
		static ::polymod::Framework OPENFL;
		static inline ::polymod::Framework OPENFL_dyn() { return OPENFL; }
		static ::polymod::Framework UNKNOWN;
		static inline ::polymod::Framework UNKNOWN_dyn() { return UNKNOWN; }
};

} // end namespace polymod

#endif /* INCLUDED_polymod_Framework */ 
