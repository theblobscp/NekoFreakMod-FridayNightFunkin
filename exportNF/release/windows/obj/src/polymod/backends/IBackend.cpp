// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif

namespace polymod{
namespace backends{


static ::String IBackend_obj_sMemberFields[] = {
	HX_("polymodLibrary",a5,49,05,cb),
	HX_("init",10,3b,bb,45),
	HX_("destroy",fa,2c,86,24),
	HX_("clearCache",75,d9,1e,16),
	HX_("exists",dc,1d,e0,bf),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getText",63,7c,7c,1f),
	HX_("getPath",5b,95,d4,1c),
	HX_("list",5e,1c,b3,47),
	HX_("stripAssetsPrefix",6d,dd,37,77),
	::String(null()) };

::hx::Class IBackend_obj::__mClass;

void IBackend_obj::__register()
{
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.IBackend",c2,f4,26,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(IBackend_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TIsInterface< (int)0x4ed455e0 >;
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
