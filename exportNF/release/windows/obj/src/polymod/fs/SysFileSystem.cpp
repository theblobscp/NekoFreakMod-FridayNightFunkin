// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_polymod_fs_SysFileSystem
#include <polymod/fs/SysFileSystem.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_31_new,"polymod.fs.SysFileSystem","new",0x6e978ee1,"polymod.fs.SysFileSystem.new","polymod/fs/SysFileSystem.hx",31,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_35_exists,"polymod.fs.SysFileSystem","exists",0x494ba5fb,"polymod.fs.SysFileSystem.exists","polymod/fs/SysFileSystem.hx",35,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_39_isDirectory,"polymod.fs.SysFileSystem","isDirectory",0x4f9d50a4,"polymod.fs.SysFileSystem.isDirectory","polymod/fs/SysFileSystem.hx",39,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_42_readDirectory,"polymod.fs.SysFileSystem","readDirectory",0xa764b5f8,"polymod.fs.SysFileSystem.readDirectory","polymod/fs/SysFileSystem.hx",42,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_45_getFileContent,"polymod.fs.SysFileSystem","getFileContent",0x6bbf8046,"polymod.fs.SysFileSystem.getFileContent","polymod/fs/SysFileSystem.hx",45,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_48_getFileBytes,"polymod.fs.SysFileSystem","getFileBytes",0x2af12e38,"polymod.fs.SysFileSystem.getFileBytes","polymod/fs/SysFileSystem.hx",48,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_51_readDirectoryRecursive,"polymod.fs.SysFileSystem","readDirectoryRecursive",0x29cb565a,"polymod.fs.SysFileSystem.readDirectoryRecursive","polymod/fs/SysFileSystem.hx",51,0xf6781e4f)
HX_LOCAL_STACK_FRAME(_hx_pos_bf2ba162cbc492b7_67__readDirectoryRecursive,"polymod.fs.SysFileSystem","_readDirectoryRecursive",0x895744db,"polymod.fs.SysFileSystem._readDirectoryRecursive","polymod/fs/SysFileSystem.hx",67,0xf6781e4f)
namespace polymod{
namespace fs{

void SysFileSystem_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_31_new)
            	}

Dynamic SysFileSystem_obj::__CreateEmpty() { return new SysFileSystem_obj; }

void *SysFileSystem_obj::_hx_vtable = 0;

Dynamic SysFileSystem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SysFileSystem_obj > _hx_result = new SysFileSystem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SysFileSystem_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x744a2635;
}

bool SysFileSystem_obj::exists(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_35_exists)
HXDLIN(  35)		return ::sys::FileSystem_obj::exists(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,exists,return )

bool SysFileSystem_obj::isDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_39_isDirectory)
HXDLIN(  39)		return ::sys::FileSystem_obj::isDirectory(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,isDirectory,return )

::Array< ::String > SysFileSystem_obj::readDirectory(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_42_readDirectory)
HXDLIN(  42)		return ::sys::FileSystem_obj::readDirectory(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,readDirectory,return )

::String SysFileSystem_obj::getFileContent(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_45_getFileContent)
HXDLIN(  45)		return ::sys::io::File_obj::getContent(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,getFileContent,return )

 ::haxe::io::Bytes SysFileSystem_obj::getFileBytes(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_48_getFileBytes)
HXDLIN(  48)		return ::sys::io::File_obj::getBytes(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,getFileBytes,return )

::Array< ::String > SysFileSystem_obj::readDirectoryRecursive(::String path){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_51_readDirectoryRecursive)
HXLINE(  52)		::Array< ::String > all = ::polymod::fs::SysFileSystem_obj::_readDirectoryRecursive(path);
HXLINE(  53)		{
HXLINE(  53)			int _g = 0;
HXDLIN(  53)			int _g1 = all->length;
HXDLIN(  53)			while((_g < _g1)){
HXLINE(  53)				_g = (_g + 1);
HXDLIN(  53)				int i = (_g - 1);
HXLINE(  55)				::String f = all->__get(i);
HXLINE(  56)				int stri = ::polymod::util::Util_obj::uIndexOf(f,(path + HX_("/",2f,00,00,00)),null());
HXLINE(  57)				if ((stri == 0)) {
HXLINE(  59)					int f1 = ::polymod::util::Util_obj::uLength((path + HX_("/",2f,00,00,00)));
HXDLIN(  59)					f = ::polymod::util::Util_obj::uSubstr(f,f1,::polymod::util::Util_obj::uLength(f));
HXLINE(  60)					all[i] = f;
            				}
            			}
            		}
HXLINE(  63)		return all;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,readDirectoryRecursive,return )

::Array< ::String > SysFileSystem_obj::_readDirectoryRecursive(::String str){
            	HX_STACKFRAME(&_hx_pos_bf2ba162cbc492b7_67__readDirectoryRecursive)
HXLINE(  68)		bool _hx_tmp;
HXDLIN(  68)		if (::sys::FileSystem_obj::exists(str)) {
HXLINE(  68)			_hx_tmp = ::sys::FileSystem_obj::isDirectory(str);
            		}
            		else {
HXLINE(  68)			_hx_tmp = false;
            		}
HXDLIN(  68)		if (_hx_tmp) {
HXLINE(  70)			::Array< ::String > all = ::sys::FileSystem_obj::readDirectory(str);
HXLINE(  71)			if (::hx::IsNull( all )) {
HXLINE(  71)				return ::Array_obj< ::String >::__new(0);
            			}
HXLINE(  72)			::Array< ::String > results = ::Array_obj< ::String >::__new(0);
HXLINE(  73)			{
HXLINE(  73)				int _g = 0;
HXDLIN(  73)				while((_g < all->length)){
HXLINE(  73)					::String thing = all->__get(_g);
HXDLIN(  73)					_g = (_g + 1);
HXLINE(  75)					if (::hx::IsNull( thing )) {
HXLINE(  75)						continue;
            					}
HXLINE(  76)					::String pathToThing = ::polymod::util::Util_obj::pathJoin(str,thing);
HXLINE(  77)					if (::sys::FileSystem_obj::isDirectory(pathToThing)) {
HXLINE(  79)						::Array< ::String > subs = ::polymod::fs::SysFileSystem_obj::_readDirectoryRecursive(pathToThing);
HXLINE(  80)						if (::hx::IsNotNull( subs )) {
HXLINE(  82)							results = results->concat(subs);
            						}
            					}
            					else {
HXLINE(  87)						results->push(pathToThing);
            					}
            				}
            			}
HXLINE(  90)			return results;
            		}
HXLINE(  92)		return ::Array_obj< ::String >::__new(0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SysFileSystem_obj,_readDirectoryRecursive,return )


SysFileSystem_obj::SysFileSystem_obj()
{
}

bool SysFileSystem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { outValue = exists_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"isDirectory") ) { outValue = isDirectory_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getFileBytes") ) { outValue = getFileBytes_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readDirectory") ) { outValue = readDirectory_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getFileContent") ) { outValue = getFileContent_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"readDirectoryRecursive") ) { outValue = readDirectoryRecursive_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"_readDirectoryRecursive") ) { outValue = _readDirectoryRecursive_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SysFileSystem_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *SysFileSystem_obj_sStaticStorageInfo = 0;
#endif

::hx::Class SysFileSystem_obj::__mClass;

static ::String SysFileSystem_obj_sStaticFields[] = {
	HX_("exists",dc,1d,e0,bf),
	HX_("isDirectory",23,a9,c5,ee),
	HX_("readDirectory",37,6c,b3,a3),
	HX_("getFileContent",27,41,50,34),
	HX_("getFileBytes",d9,44,16,cf),
	HX_("readDirectoryRecursive",3b,60,49,77),
	HX_("_readDirectoryRecursive",da,df,21,0a),
	::String(null())
};

void SysFileSystem_obj::__register()
{
	SysFileSystem_obj _hx_dummy;
	SysFileSystem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.fs.SysFileSystem",6f,8a,54,60);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SysFileSystem_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SysFileSystem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SysFileSystem_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SysFileSystem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SysFileSystem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace fs
