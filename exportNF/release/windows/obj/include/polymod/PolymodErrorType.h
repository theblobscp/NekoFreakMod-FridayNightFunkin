// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_polymod_PolymodErrorType
#define INCLUDED_polymod_PolymodErrorType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(polymod,PolymodErrorType)
namespace polymod{


class PolymodErrorType_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef PolymodErrorType_obj OBJ_;

	public:
		PolymodErrorType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("polymod.PolymodErrorType",64,c3,9f,be); }
		::String __ToString() const { return HX_("PolymodErrorType.",c2,82,7f,3a) + _hx_tag; }

		static ::polymod::PolymodErrorType ERROR;
		static inline ::polymod::PolymodErrorType ERROR_dyn() { return ERROR; }
		static ::polymod::PolymodErrorType NOTICE;
		static inline ::polymod::PolymodErrorType NOTICE_dyn() { return NOTICE; }
		static ::polymod::PolymodErrorType WARNING;
		static inline ::polymod::PolymodErrorType WARNING_dyn() { return WARNING; }
};

} // end namespace polymod

#endif /* INCLUDED_polymod_PolymodErrorType */ 
