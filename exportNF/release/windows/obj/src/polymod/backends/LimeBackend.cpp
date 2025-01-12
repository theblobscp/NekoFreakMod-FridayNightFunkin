// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_utils_AssetCache
#include <lime/utils/AssetCache.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeBackend
#include <polymod/backends/LimeBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_LimeModLibrary
#include <polymod/backends/LimeModLibrary.h>
#endif
#ifndef INCLUDED_polymod_backends_PolymodAssetLibrary
#include <polymod/backends/PolymodAssetLibrary.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_92_new,"polymod.backends.LimeBackend","new",0x58b914ba,"polymod.backends.LimeBackend.new","polymod/backends/LimeBackend.hx",92,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_95_init,"polymod.backends.LimeBackend","init",0x45f1c576,"polymod.backends.LimeBackend.init","polymod/backends/LimeBackend.hx",95,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_102_destroy,"polymod.backends.LimeBackend","destroy",0x24eda654,"polymod.backends.LimeBackend.destroy","polymod/backends/LimeBackend.hx",102,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_112_exists,"polymod.backends.LimeBackend","exists",0x229a8dc2,"polymod.backends.LimeBackend.exists","polymod/backends/LimeBackend.hx",112,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_117_getBytes,"polymod.backends.LimeBackend","getBytes",0x7791cd5b,"polymod.backends.LimeBackend.getBytes","polymod/backends/LimeBackend.hx",117,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_122_getText,"polymod.backends.LimeBackend","getText",0x1fe3f5bd,"polymod.backends.LimeBackend.getText","polymod/backends/LimeBackend.hx",122,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_127_getPath,"polymod.backends.LimeBackend","getPath",0x1d3c0eb5,"polymod.backends.LimeBackend.getPath","polymod/backends/LimeBackend.hx",127,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_132_list,"polymod.backends.LimeBackend","list",0x47e9a6c4,"polymod.backends.LimeBackend.list","polymod/backends/LimeBackend.hx",132,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_137_clearCache,"polymod.backends.LimeBackend","clearCache",0x4666345b,"polymod.backends.LimeBackend.clearCache","polymod/backends/LimeBackend.hx",137,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_155_stripAssetsPrefix,"polymod.backends.LimeBackend","stripAssetsPrefix",0x0d424b47,"polymod.backends.LimeBackend.stripAssetsPrefix","polymod/backends/LimeBackend.hx",155,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_71_getDefaultAssetLibrary,"polymod.backends.LimeBackend","getDefaultAssetLibrary",0x0a094e3c,"polymod.backends.LimeBackend.getDefaultAssetLibrary","polymod/backends/LimeBackend.hx",71,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_81_restoreDefaultAssetLibrary,"polymod.backends.LimeBackend","restoreDefaultAssetLibrary",0xbbd86584,"polymod.backends.LimeBackend.restoreDefaultAssetLibrary","polymod/backends/LimeBackend.hx",81,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd7fd4041224ec8d_69_boot,"polymod.backends.LimeBackend","boot",0x41520e98,"polymod.backends.LimeBackend.boot","polymod/backends/LimeBackend.hx",69,0xcff7dfd6)
namespace polymod{
namespace backends{

void LimeBackend_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_92_new)
            	}

Dynamic LimeBackend_obj::__CreateEmpty() { return new LimeBackend_obj; }

void *LimeBackend_obj::_hx_vtable = 0;

Dynamic LimeBackend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LimeBackend_obj > _hx_result = new LimeBackend_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool LimeBackend_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7a28a88e;
}

static ::polymod::backends::IBackend_obj _hx_polymod_backends_LimeBackend__hx_polymod_backends_IBackend= {
	( void (::hx::Object::*)())&::polymod::backends::LimeBackend_obj::init,
	( void (::hx::Object::*)())&::polymod::backends::LimeBackend_obj::destroy,
	( void (::hx::Object::*)())&::polymod::backends::LimeBackend_obj::clearCache,
	( bool (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::exists,
	(  ::haxe::io::Bytes (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::getBytes,
	( ::String (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::getText,
	( ::String (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::getPath,
	( ::Array< ::String > (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::list,
	( ::String (::hx::Object::*)(::String))&::polymod::backends::LimeBackend_obj::stripAssetsPrefix,
};

void *LimeBackend_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4ed455e0: return &_hx_polymod_backends_LimeBackend__hx_polymod_backends_IBackend;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void LimeBackend_obj::init(){
            	HX_GC_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_95_init)
HXLINE(  96)		this->fallback = ::polymod::backends::LimeBackend_obj::getDefaultAssetLibrary();
HXLINE(  97)		this->modLibrary =  ::polymod::backends::LimeModLibrary_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  98)		::lime::utils::Assets_obj::registerLibrary(HX_("default",c1,d8,c3,9b),this->modLibrary);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LimeBackend_obj,init,(void))

void LimeBackend_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_102_destroy)
HXLINE( 103)		::polymod::backends::LimeBackend_obj::restoreDefaultAssetLibrary();
HXLINE( 104)		this->polymodLibrary = null();
HXLINE( 105)		this->modLibrary->destroy();
HXLINE( 106)		this->modLibrary = null();
HXLINE( 107)		this->fallback = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LimeBackend_obj,destroy,(void))

bool LimeBackend_obj::exists(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_112_exists)
HXDLIN( 112)		return this->modLibrary->exists(id,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,exists,return )

 ::haxe::io::Bytes LimeBackend_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_117_getBytes)
HXDLIN( 117)		return this->modLibrary->getBytes(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,getBytes,return )

::String LimeBackend_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_122_getText)
HXDLIN( 122)		return this->modLibrary->getText(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,getText,return )

::String LimeBackend_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_127_getPath)
HXDLIN( 127)		return this->modLibrary->getPath(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,getPath,return )

::Array< ::String > LimeBackend_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_132_list)
HXDLIN( 132)		 ::polymod::backends::LimeModLibrary _hx_tmp = this->modLibrary;
HXDLIN( 132)		::String _hx_tmp1;
HXDLIN( 132)		if (::hx::IsNull( type )) {
HXDLIN( 132)			_hx_tmp1 = null();
            		}
            		else {
HXDLIN( 132)			_hx_tmp1 = ::polymod::backends::LimeModLibrary_obj::PolyToLime(type);
            		}
HXDLIN( 132)		return _hx_tmp->list(_hx_tmp1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,list,return )

void LimeBackend_obj::clearCache(){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_137_clearCache)
HXDLIN( 137)		if (::hx::IsNotNull( ::polymod::backends::LimeBackend_obj::defaultAssetLibrary )) {
HXLINE( 139)			{
HXLINE( 139)				 ::Dynamic key = ::lime::utils::Assets_obj::cache->audio->keys();
HXDLIN( 139)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 139)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 141)					::lime::utils::Assets_obj::cache->audio->remove(key1);
            				}
            			}
HXLINE( 143)			{
HXLINE( 143)				 ::Dynamic key1 = ::lime::utils::Assets_obj::cache->font->keys();
HXDLIN( 143)				while(( (bool)(key1->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 143)					::String key = ( (::String)(key1->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 145)					::lime::utils::Assets_obj::cache->font->remove(key);
            				}
            			}
HXLINE( 147)			{
HXLINE( 147)				 ::Dynamic key2 = ::lime::utils::Assets_obj::cache->image->keys();
HXDLIN( 147)				while(( (bool)(key2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 147)					::String key = ( (::String)(key2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 149)					::lime::utils::Assets_obj::cache->image->remove(key);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(LimeBackend_obj,clearCache,(void))

::String LimeBackend_obj::stripAssetsPrefix(::String id){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_155_stripAssetsPrefix)
HXLINE( 156)		if ((::polymod::util::Util_obj::uIndexOf(id,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE( 158)			id = ::polymod::util::Util_obj::uSubstring(id,7,null());
            		}
HXLINE( 160)		return id;
            	}


HX_DEFINE_DYNAMIC_FUNC1(LimeBackend_obj,stripAssetsPrefix,return )

 ::lime::utils::AssetLibrary LimeBackend_obj::defaultAssetLibrary;

 ::lime::utils::AssetLibrary LimeBackend_obj::getDefaultAssetLibrary(){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_71_getDefaultAssetLibrary)
HXLINE(  72)		if (::hx::IsNull( ::polymod::backends::LimeBackend_obj::defaultAssetLibrary )) {
HXLINE(  74)			::polymod::backends::LimeBackend_obj::defaultAssetLibrary = ::lime::utils::Assets_obj::getLibrary(HX_("default",c1,d8,c3,9b));
            		}
HXLINE(  76)		return ::polymod::backends::LimeBackend_obj::defaultAssetLibrary;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LimeBackend_obj,getDefaultAssetLibrary,return )

void LimeBackend_obj::restoreDefaultAssetLibrary(){
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_81_restoreDefaultAssetLibrary)
HXDLIN(  81)		if (::hx::IsNotNull( ::polymod::backends::LimeBackend_obj::defaultAssetLibrary )) {
HXLINE(  83)			::lime::utils::Assets_obj::registerLibrary(HX_("default",c1,d8,c3,9b),::polymod::backends::LimeBackend_obj::defaultAssetLibrary);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LimeBackend_obj,restoreDefaultAssetLibrary,(void))


::hx::ObjectPtr< LimeBackend_obj > LimeBackend_obj::__new() {
	::hx::ObjectPtr< LimeBackend_obj > __this = new LimeBackend_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< LimeBackend_obj > LimeBackend_obj::__alloc(::hx::Ctx *_hx_ctx) {
	LimeBackend_obj *__this = (LimeBackend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LimeBackend_obj), true, "polymod.backends.LimeBackend"));
	*(void **)__this = LimeBackend_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

LimeBackend_obj::LimeBackend_obj()
{
}

void LimeBackend_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LimeBackend);
	HX_MARK_MEMBER_NAME(polymodLibrary,"polymodLibrary");
	HX_MARK_MEMBER_NAME(modLibrary,"modLibrary");
	HX_MARK_MEMBER_NAME(fallback,"fallback");
	HX_MARK_END_CLASS();
}

void LimeBackend_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(polymodLibrary,"polymodLibrary");
	HX_VISIT_MEMBER_NAME(modLibrary,"modLibrary");
	HX_VISIT_MEMBER_NAME(fallback,"fallback");
}

::hx::Val LimeBackend_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { return ::hx::Val( fallback ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"modLibrary") ) { return ::hx::Val( modLibrary ); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return ::hx::Val( clearCache_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"polymodLibrary") ) { return ::hx::Val( polymodLibrary ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stripAssetsPrefix") ) { return ::hx::Val( stripAssetsPrefix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LimeBackend_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"defaultAssetLibrary") ) { outValue = ( defaultAssetLibrary ); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getDefaultAssetLibrary") ) { outValue = getDefaultAssetLibrary_dyn(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"restoreDefaultAssetLibrary") ) { outValue = restoreDefaultAssetLibrary_dyn(); return true; }
	}
	return false;
}

::hx::Val LimeBackend_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { fallback=inValue.Cast<  ::lime::utils::AssetLibrary >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"modLibrary") ) { modLibrary=inValue.Cast<  ::polymod::backends::LimeModLibrary >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"polymodLibrary") ) { polymodLibrary=inValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool LimeBackend_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 19:
		if (HX_FIELD_EQ(inName,"defaultAssetLibrary") ) { defaultAssetLibrary=ioValue.Cast<  ::lime::utils::AssetLibrary >(); return true; }
	}
	return false;
}

void LimeBackend_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("polymodLibrary",a5,49,05,cb));
	outFields->push(HX_("modLibrary",59,74,d7,ba));
	outFields->push(HX_("fallback",22,f0,9d,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LimeBackend_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(int)offsetof(LimeBackend_obj,polymodLibrary),HX_("polymodLibrary",a5,49,05,cb)},
	{::hx::fsObject /*  ::polymod::backends::LimeModLibrary */ ,(int)offsetof(LimeBackend_obj,modLibrary),HX_("modLibrary",59,74,d7,ba)},
	{::hx::fsObject /*  ::lime::utils::AssetLibrary */ ,(int)offsetof(LimeBackend_obj,fallback),HX_("fallback",22,f0,9d,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LimeBackend_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::lime::utils::AssetLibrary */ ,(void *) &LimeBackend_obj::defaultAssetLibrary,HX_("defaultAssetLibrary",4c,c5,1a,dc)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LimeBackend_obj_sMemberFields[] = {
	HX_("polymodLibrary",a5,49,05,cb),
	HX_("modLibrary",59,74,d7,ba),
	HX_("fallback",22,f0,9d,2a),
	HX_("init",10,3b,bb,45),
	HX_("destroy",fa,2c,86,24),
	HX_("exists",dc,1d,e0,bf),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getText",63,7c,7c,1f),
	HX_("getPath",5b,95,d4,1c),
	HX_("list",5e,1c,b3,47),
	HX_("clearCache",75,d9,1e,16),
	HX_("stripAssetsPrefix",6d,dd,37,77),
	::String(null()) };

static void LimeBackend_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LimeBackend_obj::defaultAssetLibrary,"defaultAssetLibrary");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LimeBackend_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LimeBackend_obj::defaultAssetLibrary,"defaultAssetLibrary");
};

#endif

::hx::Class LimeBackend_obj::__mClass;

static ::String LimeBackend_obj_sStaticFields[] = {
	HX_("defaultAssetLibrary",4c,c5,1a,dc),
	HX_("getDefaultAssetLibrary",56,32,32,b4),
	HX_("restoreDefaultAssetLibrary",9e,5e,ae,ee),
	::String(null())
};

void LimeBackend_obj::__register()
{
	LimeBackend_obj _hx_dummy;
	LimeBackend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.LimeBackend",c8,ef,b5,4e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LimeBackend_obj::__GetStatic;
	__mClass->mSetStaticField = &LimeBackend_obj::__SetStatic;
	__mClass->mMarkFunc = LimeBackend_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LimeBackend_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LimeBackend_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LimeBackend_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LimeBackend_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LimeBackend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LimeBackend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LimeBackend_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_dd7fd4041224ec8d_69_boot)
HXDLIN(  69)		defaultAssetLibrary = null();
            	}
}

} // end namespace polymod
} // end namespace backends
