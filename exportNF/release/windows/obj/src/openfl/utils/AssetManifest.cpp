// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetManifest
#include <openfl/utils/AssetManifest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1234d8b224456494_21_new,"openfl.utils.AssetManifest","new",0xa70d0db6,"openfl.utils.AssetManifest.new","openfl/utils/AssetManifest.hx",21,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_27_addBitmapData,"openfl.utils.AssetManifest","addBitmapData",0x90498410,"openfl.utils.AssetManifest.addBitmapData","openfl/utils/AssetManifest.hx",27,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_37_addBytes,"openfl.utils.AssetManifest","addBytes",0xb94fd974,"openfl.utils.AssetManifest.addBytes","openfl/utils/AssetManifest.hx",37,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_47_addFont,"openfl.utils.AssetManifest","addFont",0x6d0f40e6,"openfl.utils.AssetManifest.addFont","openfl/utils/AssetManifest.hx",47,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_57_addSound,"openfl.utils.AssetManifest","addSound",0x7c845dd8,"openfl.utils.AssetManifest.addSound","openfl/utils/AssetManifest.hx",57,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_67_addText,"openfl.utils.AssetManifest","addText",0x7648afc4,"openfl.utils.AssetManifest.addText","openfl/utils/AssetManifest.hx",67,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_76_fromBytes,"openfl.utils.AssetManifest","fromBytes",0xff1bd477,"openfl.utils.AssetManifest.fromBytes","openfl/utils/AssetManifest.hx",76,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_86_fromFile,"openfl.utils.AssetManifest","fromFile",0x23e247f0,"openfl.utils.AssetManifest.fromFile","openfl/utils/AssetManifest.hx",86,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_100_loadFromBytes,"openfl.utils.AssetManifest","loadFromBytes",0xe6c64871,"openfl.utils.AssetManifest.loadFromBytes","openfl/utils/AssetManifest.hx",100,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_98_loadFromBytes,"openfl.utils.AssetManifest","loadFromBytes",0xe6c64871,"openfl.utils.AssetManifest.loadFromBytes","openfl/utils/AssetManifest.hx",98,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_112_loadFromFile,"openfl.utils.AssetManifest","loadFromFile",0xecabf136,"openfl.utils.AssetManifest.loadFromFile","openfl/utils/AssetManifest.hx",112,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_110_loadFromFile,"openfl.utils.AssetManifest","loadFromFile",0xecabf136,"openfl.utils.AssetManifest.loadFromFile","openfl/utils/AssetManifest.hx",110,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_120_parse,"openfl.utils.AssetManifest","parse",0x72d94f09,"openfl.utils.AssetManifest.parse","openfl/utils/AssetManifest.hx",120,0x22e5353c)
HX_LOCAL_STACK_FRAME(_hx_pos_1234d8b224456494_131___fromLimeManifest,"openfl.utils.AssetManifest","__fromLimeManifest",0x95299af8,"openfl.utils.AssetManifest.__fromLimeManifest","openfl/utils/AssetManifest.hx",131,0x22e5353c)
namespace openfl{
namespace utils{

void AssetManifest_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_21_new)
HXDLIN(  21)		super::__construct();
            	}

Dynamic AssetManifest_obj::__CreateEmpty() { return new AssetManifest_obj; }

void *AssetManifest_obj::_hx_vtable = 0;

Dynamic AssetManifest_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AssetManifest_obj > _hx_result = new AssetManifest_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AssetManifest_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x20b0fe87) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x20b0fe87;
	} else {
		return inClassId==(int)0x21882f0a;
	}
}

void AssetManifest_obj::addBitmapData(::String path,::String id){
            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_27_addBitmapData)
HXLINE(  29)		::String _hx_tmp;
HXDLIN(  29)		if (::hx::IsNotNull( id )) {
HXLINE(  29)			_hx_tmp = id;
            		}
            		else {
HXLINE(  29)			_hx_tmp = path;
            		}
HXLINE(  27)		this->assets->push( ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),_hx_tmp)
            			->setFixed(1,HX_("preload",c9,47,43,35),true)
            			->setFixed(2,HX_("path",a5,e5,51,4a),path)
            			->setFixed(3,HX_("type",ba,f2,08,4d),HX_("IMAGE",3b,57,57,3b))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,addBitmapData,(void))

void AssetManifest_obj::addBytes(::String path,::String id){
            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_37_addBytes)
HXLINE(  39)		::String _hx_tmp;
HXDLIN(  39)		if (::hx::IsNotNull( id )) {
HXLINE(  39)			_hx_tmp = id;
            		}
            		else {
HXLINE(  39)			_hx_tmp = path;
            		}
HXLINE(  37)		this->assets->push( ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),_hx_tmp)
            			->setFixed(1,HX_("preload",c9,47,43,35),true)
            			->setFixed(2,HX_("path",a5,e5,51,4a),path)
            			->setFixed(3,HX_("type",ba,f2,08,4d),HX_("BINARY",01,68,8e,9f))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,addBytes,(void))

void AssetManifest_obj::addFont(::String name,::String id){
            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_47_addFont)
HXLINE(  49)		::String _hx_tmp;
HXDLIN(  49)		if (::hx::IsNotNull( id )) {
HXLINE(  49)			_hx_tmp = id;
            		}
            		else {
HXLINE(  49)			_hx_tmp = name;
            		}
HXLINE(  47)		this->assets->push( ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),_hx_tmp)
            			->setFixed(1,HX_("preload",c9,47,43,35),true)
            			->setFixed(2,HX_("path",a5,e5,51,4a),name)
            			->setFixed(3,HX_("type",ba,f2,08,4d),HX_("FONT",cf,25,81,2e))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,addFont,(void))

void AssetManifest_obj::addSound(::Array< ::String > paths,::String id){
            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_57_addSound)
HXLINE(  59)		::String _hx_tmp;
HXDLIN(  59)		if (::hx::IsNotNull( id )) {
HXLINE(  59)			_hx_tmp = id;
            		}
            		else {
HXLINE(  59)			_hx_tmp = paths->__get(0);
            		}
HXLINE(  57)		this->assets->push( ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("pathGroup",5a,a7,b4,8f),paths)
            			->setFixed(1,HX_("id",db,5b,00,00),_hx_tmp)
            			->setFixed(2,HX_("preload",c9,47,43,35),true)
            			->setFixed(3,HX_("type",ba,f2,08,4d),HX_("SOUND",af,c4,ba,fe))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,addSound,(void))

void AssetManifest_obj::addText(::String path,::String id){
            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_67_addText)
HXLINE(  69)		::String _hx_tmp;
HXDLIN(  69)		if (::hx::IsNotNull( id )) {
HXLINE(  69)			_hx_tmp = id;
            		}
            		else {
HXLINE(  69)			_hx_tmp = path;
            		}
HXLINE(  67)		this->assets->push( ::Dynamic(::hx::Anon_obj::Create(4)
            			->setFixed(0,HX_("id",db,5b,00,00),_hx_tmp)
            			->setFixed(1,HX_("preload",c9,47,43,35),true)
            			->setFixed(2,HX_("path",a5,e5,51,4a),path)
            			->setFixed(3,HX_("type",ba,f2,08,4d),HX_("TEXT",ad,94,ba,37))));
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,addText,(void))

 ::openfl::utils::AssetManifest AssetManifest_obj::fromBytes( ::haxe::io::Bytes bytes,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_76_fromBytes)
HXLINE(  78)		 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::fromBytes(bytes,rootPath);
HXLINE(  79)		return ::openfl::utils::AssetManifest_obj::_hx___fromLimeManifest(manifest);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,fromBytes,return )

 ::openfl::utils::AssetManifest AssetManifest_obj::fromFile(::String path,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_86_fromFile)
HXLINE(  88)		 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::fromFile(path,rootPath);
HXLINE(  89)		return ::openfl::utils::AssetManifest_obj::_hx___fromLimeManifest(manifest);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,fromFile,return )

 ::lime::app::Future AssetManifest_obj::loadFromBytes( ::haxe::io::Bytes bytes,::String rootPath){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_STACKFRAME(&_hx_pos_1234d8b224456494_100_loadFromBytes)
HXLINE( 100)			return ::lime::app::Future_obj::withValue(::openfl::utils::AssetManifest_obj::_hx___fromLimeManifest(manifest));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_98_loadFromBytes)
HXDLIN(  98)		return ::lime::utils::AssetManifest_obj::loadFromBytes(bytes,rootPath)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,loadFromBytes,return )

 ::lime::app::Future AssetManifest_obj::loadFromFile(::String path,::String rootPath){
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::lime::app::Future _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_STACKFRAME(&_hx_pos_1234d8b224456494_112_loadFromFile)
HXLINE( 112)			return ::lime::app::Future_obj::withValue(::openfl::utils::AssetManifest_obj::_hx___fromLimeManifest(manifest));
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_110_loadFromFile)
HXDLIN( 110)		return ::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->then( ::Dynamic(new _hx_Closure_0()));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,loadFromFile,return )

 ::openfl::utils::AssetManifest AssetManifest_obj::parse(::String data,::String rootPath){
            	HX_STACKFRAME(&_hx_pos_1234d8b224456494_120_parse)
HXLINE( 122)		 ::lime::utils::AssetManifest manifest = ::lime::utils::AssetManifest_obj::parse(data,rootPath);
HXLINE( 123)		return ::openfl::utils::AssetManifest_obj::_hx___fromLimeManifest(manifest);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AssetManifest_obj,parse,return )

 ::openfl::utils::AssetManifest AssetManifest_obj::_hx___fromLimeManifest( ::lime::utils::AssetManifest limeManifest){
            	HX_GC_STACKFRAME(&_hx_pos_1234d8b224456494_131___fromLimeManifest)
HXLINE( 132)		 ::openfl::utils::AssetManifest manifest = null();
HXLINE( 133)		if (::hx::IsNotNull( limeManifest )) {
HXLINE( 135)			manifest =  ::openfl::utils::AssetManifest_obj::__alloc( HX_CTX );
HXLINE( 136)			manifest->assets = limeManifest->assets;
HXLINE( 137)			manifest->libraryArgs = limeManifest->libraryArgs;
HXLINE( 138)			manifest->libraryType = limeManifest->libraryType;
HXLINE( 139)			manifest->name = limeManifest->name;
HXLINE( 140)			manifest->rootPath = limeManifest->rootPath;
HXLINE( 141)			manifest->version = limeManifest->version;
            		}
HXLINE( 143)		return manifest;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AssetManifest_obj,_hx___fromLimeManifest,return )


::hx::ObjectPtr< AssetManifest_obj > AssetManifest_obj::__new() {
	::hx::ObjectPtr< AssetManifest_obj > __this = new AssetManifest_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< AssetManifest_obj > AssetManifest_obj::__alloc(::hx::Ctx *_hx_ctx) {
	AssetManifest_obj *__this = (AssetManifest_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AssetManifest_obj), true, "openfl.utils.AssetManifest"));
	*(void **)__this = AssetManifest_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

AssetManifest_obj::AssetManifest_obj()
{
}

::hx::Val AssetManifest_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"addFont") ) { return ::hx::Val( addFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"addText") ) { return ::hx::Val( addText_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addBytes") ) { return ::hx::Val( addBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"addSound") ) { return ::hx::Val( addSound_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"addBitmapData") ) { return ::hx::Val( addBitmapData_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AssetManifest_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromFile") ) { outValue = loadFromFile_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"loadFromBytes") ) { outValue = loadFromBytes_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__fromLimeManifest") ) { outValue = _hx___fromLimeManifest_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AssetManifest_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *AssetManifest_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetManifest_obj_sMemberFields[] = {
	HX_("addBitmapData",3a,ff,09,9e),
	HX_("addBytes",8a,2e,f5,36),
	HX_("addFont",90,a0,fd,7f),
	HX_("addSound",ee,b2,29,fa),
	HX_("addText",6e,0f,37,89),
	::String(null()) };

::hx::Class AssetManifest_obj::__mClass;

static ::String AssetManifest_obj_sStaticFields[] = {
	HX_("fromBytes",a1,f2,20,72),
	HX_("fromFile",06,9d,87,a1),
	HX_("loadFromBytes",9b,c3,86,f4),
	HX_("loadFromFile",4c,89,f0,5a),
	HX_("parse",33,90,55,bd),
	HX_("__fromLimeManifest",8e,67,c8,5f),
	::String(null())
};

void AssetManifest_obj::__register()
{
	AssetManifest_obj _hx_dummy;
	AssetManifest_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.utils.AssetManifest",c4,ba,e2,0c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AssetManifest_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AssetManifest_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AssetManifest_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AssetManifest_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetManifest_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetManifest_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace utils
