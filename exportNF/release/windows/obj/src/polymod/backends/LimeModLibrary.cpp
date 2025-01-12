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
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_String
#include <lime/net/_HTTPRequest_String.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils__Bytes_Bytes_Impl_
#include <lime/utils/_Bytes/Bytes_Impl_.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_83234c3e57483dca_206_new,"polymod.backends.LimeModLibrary","new",0x1dcd2097,"polymod.backends.LimeModLibrary.new","polymod/backends/LimeBackend.hx",206,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_215_destroy,"polymod.backends.LimeModLibrary","destroy",0xabf164b1,"polymod.backends.LimeModLibrary.destroy","polymod/backends/LimeBackend.hx",215,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_223_getAsset,"polymod.backends.LimeModLibrary","getAsset",0x7c7601e3,"polymod.backends.LimeModLibrary.getAsset","polymod/backends/LimeBackend.hx",223,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_237_exists,"polymod.backends.LimeModLibrary","exists",0x99738a05,"polymod.backends.LimeModLibrary.exists","polymod/backends/LimeBackend.hx",237,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_244_getAudioBuffer,"polymod.backends.LimeModLibrary","getAudioBuffer",0xec6c7ea9,"polymod.backends.LimeModLibrary.getAudioBuffer","polymod/backends/LimeBackend.hx",244,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_253_getBytes,"polymod.backends.LimeModLibrary","getBytes",0x13d4a05e,"polymod.backends.LimeModLibrary.getBytes","polymod/backends/LimeBackend.hx",253,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_263_getFont,"polymod.backends.LimeModLibrary","getFont",0x9dae453c,"polymod.backends.LimeModLibrary.getFont","polymod/backends/LimeBackend.hx",263,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_272_getImage,"polymod.backends.LimeModLibrary","getImage",0x13a5b74e,"polymod.backends.LimeModLibrary.getImage","polymod/backends/LimeBackend.hx",272,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_281_getPath,"polymod.backends.LimeModLibrary","getPath",0xa43fcd12,"polymod.backends.LimeModLibrary.getPath","polymod/backends/LimeBackend.hx",281,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_290_getText,"polymod.backends.LimeModLibrary","getText",0xa6e7b41a,"polymod.backends.LimeModLibrary.getText","polymod/backends/LimeBackend.hx",290,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_310_loadBytes,"polymod.backends.LimeModLibrary","loadBytes",0x7b4127dc,"polymod.backends.LimeModLibrary.loadBytes","polymod/backends/LimeBackend.hx",310,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_324_loadFont,"polymod.backends.LimeModLibrary","loadFont",0xaac5b77e,"polymod.backends.LimeModLibrary.loadFont","polymod/backends/LimeBackend.hx",324,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_346_loadImage,"polymod.backends.LimeModLibrary","loadImage",0x7b123ecc,"polymod.backends.LimeModLibrary.loadImage","polymod/backends/LimeBackend.hx",346,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_360_loadAudioBuffer,"polymod.backends.LimeModLibrary","loadAudioBuffer",0xf608b8a7,"polymod.backends.LimeModLibrary.loadAudioBuffer","polymod/backends/LimeBackend.hx",360,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_382_loadText,"polymod.backends.LimeModLibrary","loadText",0xb3ff265c,"polymod.backends.LimeModLibrary.loadText","polymod/backends/LimeBackend.hx",382,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_398_isLocal,"polymod.backends.LimeModLibrary","isLocal",0x9ce1a4d8,"polymod.backends.LimeModLibrary.isLocal","polymod/backends/LimeBackend.hx",398,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_407_list,"polymod.backends.LimeModLibrary","list",0xf45ffc47,"polymod.backends.LimeModLibrary.list","polymod/backends/LimeBackend.hx",407,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_168_LimeToPoly,"polymod.backends.LimeModLibrary","LimeToPoly",0x9363ab25,"polymod.backends.LimeModLibrary.LimeToPoly","polymod/backends/LimeBackend.hx",168,0xcff7dfd6)
HX_LOCAL_STACK_FRAME(_hx_pos_83234c3e57483dca_184_PolyToLime,"polymod.backends.LimeModLibrary","PolyToLime",0x8a076e65,"polymod.backends.LimeModLibrary.PolyToLime","polymod/backends/LimeBackend.hx",184,0xcff7dfd6)
namespace polymod{
namespace backends{

void LimeModLibrary_obj::__construct( ::polymod::backends::LimeBackend backend){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_206_new)
HXLINE( 207)		this->b = backend;
HXLINE( 208)		this->p = this->b->polymodLibrary;
HXLINE( 209)		this->fallback = this->b->fallback;
HXLINE( 210)		this->hasFallback = ::hx::IsNotNull( this->fallback );
HXLINE( 211)		super::__construct();
            	}

Dynamic LimeModLibrary_obj::__CreateEmpty() { return new LimeModLibrary_obj; }

void *LimeModLibrary_obj::_hx_vtable = 0;

Dynamic LimeModLibrary_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LimeModLibrary_obj > _hx_result = new LimeModLibrary_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool LimeModLibrary_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25654723) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25654723;
	} else {
		return inClassId==(int)0x333eca03;
	}
}

void LimeModLibrary_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_215_destroy)
HXLINE( 216)		this->b = null();
HXLINE( 217)		this->p = null();
HXLINE( 218)		this->fallback = null();
HXLINE( 219)		this->type = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(LimeModLibrary_obj,destroy,(void))

 ::Dynamic LimeModLibrary_obj::getAsset(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_223_getAsset)
HXLINE( 224)		 ::polymod::backends::PolymodAssetLibrary e = this->p;
HXDLIN( 224)		bool e1 = e->check(id,::polymod::backends::LimeModLibrary_obj::LimeToPoly(type));
HXLINE( 225)		if ((type == HX_("TEXT",ad,94,ba,37))) {
HXLINE( 227)			return this->getText(id);
            		}
HXLINE( 229)		bool _hx_tmp;
HXDLIN( 229)		if (!(e1)) {
HXLINE( 229)			_hx_tmp = this->hasFallback;
            		}
            		else {
HXLINE( 229)			_hx_tmp = false;
            		}
HXDLIN( 229)		if (_hx_tmp) {
HXLINE( 231)			return this->fallback->getAsset(id,type);
            		}
HXLINE( 233)		return this->super::getAsset(id,type);
            	}


bool LimeModLibrary_obj::exists(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_237_exists)
HXLINE( 238)		 ::polymod::backends::PolymodAssetLibrary e = this->p;
HXDLIN( 238)		bool e1 = e->check(id,::polymod::backends::LimeModLibrary_obj::LimeToPoly(type));
HXLINE( 239)		bool _hx_tmp;
HXDLIN( 239)		if (!(e1)) {
HXLINE( 239)			_hx_tmp = this->hasFallback;
            		}
            		else {
HXLINE( 239)			_hx_tmp = false;
            		}
HXDLIN( 239)		if (_hx_tmp) {
HXLINE( 239)			return this->fallback->exists(id,type);
            		}
HXLINE( 240)		return e1;
            	}


 ::lime::media::AudioBuffer LimeModLibrary_obj::getAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_244_getAudioBuffer)
HXLINE( 245)		if (this->p->check(id,null())) {
HXLINE( 246)			::String path = this->p->file(id,null());
HXDLIN( 246)			 ::haxe::io::Bytes _hx_tmp;
HXDLIN( 246)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 246)				_hx_tmp = null();
            			}
            			else {
HXLINE( 246)				_hx_tmp = ::sys::io::File_obj::getBytes(path);
            			}
HXDLIN( 246)			return ::lime::media::AudioBuffer_obj::fromBytes(_hx_tmp);
            		}
            		else {
HXLINE( 247)			if (this->hasFallback) {
HXLINE( 248)				return this->fallback->getAudioBuffer(id);
            			}
            		}
HXLINE( 249)		return null();
            	}


 ::haxe::io::Bytes LimeModLibrary_obj::getBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_253_getBytes)
HXLINE( 254)		::String file = this->p->file(id,null());
HXLINE( 255)		if (this->p->check(id,null())) {
HXLINE( 256)			::String path = this->p->file(id,null());
HXDLIN( 256)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 256)				return null();
            			}
            			else {
HXLINE( 256)				return ::sys::io::File_obj::getBytes(path);
            			}
            		}
            		else {
HXLINE( 257)			if (this->hasFallback) {
HXLINE( 258)				return this->fallback->getBytes(id);
            			}
            		}
HXLINE( 259)		return null();
            	}


 ::lime::text::Font LimeModLibrary_obj::getFont(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_263_getFont)
HXLINE( 264)		if (this->p->check(id,null())) {
HXLINE( 265)			::String path = this->p->file(id,null());
HXDLIN( 265)			 ::haxe::io::Bytes _hx_tmp;
HXDLIN( 265)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 265)				_hx_tmp = null();
            			}
            			else {
HXLINE( 265)				_hx_tmp = ::sys::io::File_obj::getBytes(path);
            			}
HXDLIN( 265)			return ::lime::text::Font_obj::fromBytes(_hx_tmp);
            		}
            		else {
HXLINE( 266)			if (this->hasFallback) {
HXLINE( 267)				return this->fallback->getFont(id);
            			}
            		}
HXLINE( 268)		return null();
            	}


 ::lime::graphics::Image LimeModLibrary_obj::getImage(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_272_getImage)
HXLINE( 273)		if (this->p->check(id,null())) {
HXLINE( 274)			::String path = this->p->file(id,null());
HXDLIN( 274)			 ::haxe::io::Bytes _hx_tmp;
HXDLIN( 274)			if (!(::sys::FileSystem_obj::exists(path))) {
HXLINE( 274)				_hx_tmp = null();
            			}
            			else {
HXLINE( 274)				_hx_tmp = ::sys::io::File_obj::getBytes(path);
            			}
HXDLIN( 274)			return ::lime::graphics::Image_obj::fromBytes(_hx_tmp);
            		}
            		else {
HXLINE( 275)			if (this->hasFallback) {
HXLINE( 276)				return this->fallback->getImage(id);
            			}
            		}
HXLINE( 277)		return null();
            	}


::String LimeModLibrary_obj::getPath(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_281_getPath)
HXLINE( 282)		if (this->p->check(id,null())) {
HXLINE( 283)			return this->p->file(id,null());
            		}
            		else {
HXLINE( 284)			if (this->hasFallback) {
HXLINE( 285)				return this->fallback->getPath(id);
            			}
            		}
HXLINE( 286)		return null();
            	}


::String LimeModLibrary_obj::getText(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_290_getText)
HXLINE( 291)		::String modText = null();
HXLINE( 292)		if (this->p->check(id,null())) {
HXLINE( 294)			modText = this->super::getText(id);
            		}
            		else {
HXLINE( 296)			if (this->hasFallback) {
HXLINE( 298)				modText = this->fallback->getText(id);
            			}
            		}
HXLINE( 301)		if (::hx::IsNotNull( modText )) {
HXLINE( 303)			modText = this->p->mergeAndAppendText(id,modText);
            		}
HXLINE( 306)		return modText;
            	}


 ::lime::app::Future LimeModLibrary_obj::loadBytes(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_310_loadBytes)
HXLINE( 312)		if (this->p->check(id,null())) {
HXLINE( 314)			return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(this->p->file(id,null()));
            		}
            		else {
HXLINE( 316)			if (this->hasFallback) {
HXLINE( 318)				return this->fallback->loadBytes(id);
            			}
            		}
HXLINE( 320)		return ::lime::utils::_Bytes::Bytes_Impl__obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadFont(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_324_loadFont)
HXLINE( 326)		if (this->p->check(id,null())) {
HXLINE( 331)			::Dynamic this1 = this->paths;
HXDLIN( 331)			return ::lime::text::Font_obj::loadFromFile(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(id,null())));
            		}
            		else {
HXLINE( 334)			if (this->hasFallback) {
HXLINE( 336)				return this->fallback->loadFont(id);
            			}
            		}
HXLINE( 341)		return ::lime::text::Font_obj::loadFromFile(this->paths->get_string(HX_("",00,00,00,00)));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadImage(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_346_loadImage)
HXLINE( 348)		if (this->p->check(id,null())) {
HXLINE( 350)			return ::lime::graphics::Image_obj::loadFromFile(this->p->file(id,null()));
            		}
            		else {
HXLINE( 352)			if (this->hasFallback) {
HXLINE( 354)				return this->fallback->loadImage(id);
            			}
            		}
HXLINE( 356)		return ::lime::graphics::Image_obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadAudioBuffer(::String id){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_360_loadAudioBuffer)
HXLINE( 362)		if (this->p->check(id,null())) {
HXLINE( 365)			::Dynamic this1 = this->pathGroups;
HXDLIN( 365)			if (( ( ::haxe::ds::StringMap)(this1) )->exists(this->p->file(id,null()))) {
HXLINE( 367)				::Dynamic this1 = this->pathGroups;
HXDLIN( 367)				return ::lime::media::AudioBuffer_obj::loadFromFiles(( (::Array< ::String >)(( ( ::haxe::ds::StringMap)(this1) )->get(this->p->file(id,null()))) ));
            			}
            			else {
HXLINE( 371)				::Dynamic this1 = this->paths;
HXDLIN( 371)				return ::lime::media::AudioBuffer_obj::loadFromFile(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(id,null())));
            			}
            		}
            		else {
HXLINE( 374)			if (this->hasFallback) {
HXLINE( 376)				return this->fallback->loadAudioBuffer(id);
            			}
            		}
HXLINE( 378)		return ::lime::media::AudioBuffer_obj::loadFromFile(HX_("",00,00,00,00));
            	}


 ::lime::app::Future LimeModLibrary_obj::loadText(::String id){
            	HX_GC_STACKFRAME(&_hx_pos_83234c3e57483dca_382_loadText)
HXLINE( 384)		if (this->p->check(id,null())) {
HXLINE( 386)			 ::lime::net::_HTTPRequest_String request =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 387)			::Dynamic this1 = this->paths;
HXDLIN( 387)			return request->load(( ( ::haxe::ds::StringMap)(this1) )->get_string(this->p->file(id,null())));
            		}
            		else {
HXLINE( 389)			if (this->hasFallback) {
HXLINE( 391)				return this->fallback->loadText(id);
            			}
            		}
HXLINE( 393)		 ::lime::net::_HTTPRequest_String request =  ::lime::net::_HTTPRequest_String_obj::__alloc( HX_CTX ,null());
HXLINE( 394)		return request->load(HX_("",00,00,00,00));
            	}


bool LimeModLibrary_obj::isLocal(::String id,::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_398_isLocal)
HXLINE( 399)		if (this->p->check(id,null())) {
HXLINE( 400)			return true;
            		}
            		else {
HXLINE( 401)			if (this->hasFallback) {
HXLINE( 402)				return this->fallback->isLocal(id,type);
            			}
            		}
HXLINE( 403)		return false;
            	}


::Array< ::String > LimeModLibrary_obj::list(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_407_list)
HXLINE( 408)		::Array< ::String > otherList;
HXDLIN( 408)		if (this->hasFallback) {
HXLINE( 408)			otherList = this->fallback->list(type);
            		}
            		else {
HXLINE( 408)			otherList = ::Array_obj< ::String >::__new(0);
            		}
HXLINE( 410)		::String requestedType;
HXDLIN( 410)		if (::hx::IsNotNull( type )) {
HXLINE( 410)			requestedType = type;
            		}
            		else {
HXLINE( 410)			requestedType = null();
            		}
HXLINE( 411)		::Array< ::String > items = ::Array_obj< ::String >::__new(0);
HXLINE( 413)		{
HXLINE( 413)			 ::Dynamic id = this->p->type->keys();
HXDLIN( 413)			while(( (bool)(id->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 413)				::String id1 = ( (::String)(id->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 415)				bool _hx_tmp;
HXDLIN( 415)				if ((id1.indexOf(HX_("_append",79,f3,4a,fe),null()) != 0)) {
HXLINE( 415)					_hx_tmp = (id1.indexOf(HX_("_merge",f9,e9,ad,01),null()) == 0);
            				}
            				else {
HXLINE( 415)					_hx_tmp = true;
            				}
HXDLIN( 415)				if (_hx_tmp) {
HXLINE( 415)					continue;
            				}
HXLINE( 416)				bool _hx_tmp1;
HXDLIN( 416)				if (::hx::IsNotNull( requestedType )) {
HXLINE( 416)					_hx_tmp1 = this->exists(id1,requestedType);
            				}
            				else {
HXLINE( 416)					_hx_tmp1 = true;
            				}
HXDLIN( 416)				if (_hx_tmp1) {
HXLINE( 418)					items->push(id1);
            				}
            			}
            		}
HXLINE( 422)		{
HXLINE( 422)			int _g = 0;
HXDLIN( 422)			while((_g < otherList->length)){
HXLINE( 422)				::String otherId = otherList->__get(_g);
HXDLIN( 422)				_g = (_g + 1);
HXLINE( 424)				if ((items->indexOf(otherId,null()) == -1)) {
HXLINE( 426)					bool _hx_tmp;
HXDLIN( 426)					if (::hx::IsNotNull( requestedType )) {
HXLINE( 426)						_hx_tmp = this->fallback->exists(otherId,type);
            					}
            					else {
HXLINE( 426)						_hx_tmp = true;
            					}
HXDLIN( 426)					if (_hx_tmp) {
HXLINE( 428)						items->push(otherId);
            					}
            				}
            			}
            		}
HXLINE( 433)		return items;
            	}


::String LimeModLibrary_obj::LimeToPoly(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_168_LimeToPoly)
HXDLIN( 168)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("BINARY",01,68,8e,9f)) ){
HXLINE( 170)			return HX_("BYTES",4b,40,86,3b);
HXDLIN( 170)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 171)			return HX_("FONT",cf,25,81,2e);
HXDLIN( 171)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 172)			return HX_("IMAGE",3b,57,57,3b);
HXDLIN( 172)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("MANIFEST",af,8b,af,29)) ){
HXLINE( 175)			return HX_("MANIFEST",af,8b,af,29);
HXDLIN( 175)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("MUSIC",85,08,49,8e)) ){
HXLINE( 173)			return HX_("AUDIO_MUSIC",fc,6c,05,48);
HXDLIN( 173)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("SOUND",af,c4,ba,fe)) ){
HXLINE( 174)			return HX_("AUDIO_SOUND",26,29,77,b8);
HXDLIN( 174)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 176)			return HX_("TEMPLATE",3a,78,cd,05);
HXDLIN( 176)			goto _hx_goto_19;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 177)			return HX_("TEXT",ad,94,ba,37);
HXDLIN( 177)			goto _hx_goto_19;
            		}
            		/* default */{
HXLINE( 178)			return HX_("UNKNOWN",6a,f7,4e,61);
            		}
            		_hx_goto_19:;
HXLINE( 168)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LimeModLibrary_obj,LimeToPoly,return )

::String LimeModLibrary_obj::PolyToLime(::String type){
            	HX_STACKFRAME(&_hx_pos_83234c3e57483dca_184_PolyToLime)
HXDLIN( 184)		::String _hx_switch_0 = type;
            		if (  (_hx_switch_0==HX_("AUDIO_GENERIC",2e,f6,26,23)) ){
HXLINE( 191)			return HX_("SOUND",af,c4,ba,fe);
HXDLIN( 191)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("AUDIO_MUSIC",fc,6c,05,48)) ){
HXLINE( 189)			return HX_("MUSIC",85,08,49,8e);
HXDLIN( 189)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("AUDIO_SOUND",26,29,77,b8)) ){
HXLINE( 190)			return HX_("SOUND",af,c4,ba,fe);
HXDLIN( 190)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("BYTES",4b,40,86,3b)) ){
HXLINE( 186)			return HX_("BINARY",01,68,8e,9f);
HXDLIN( 186)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("FONT",cf,25,81,2e)) ){
HXLINE( 187)			return HX_("FONT",cf,25,81,2e);
HXDLIN( 187)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("IMAGE",3b,57,57,3b)) ){
HXLINE( 188)			return HX_("IMAGE",3b,57,57,3b);
HXDLIN( 188)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("MANIFEST",af,8b,af,29)) ){
HXLINE( 192)			return HX_("MANIFEST",af,8b,af,29);
HXDLIN( 192)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("TEMPLATE",3a,78,cd,05)) ){
HXLINE( 193)			return HX_("TEMPLATE",3a,78,cd,05);
HXDLIN( 193)			goto _hx_goto_21;
            		}
            		if (  (_hx_switch_0==HX_("TEXT",ad,94,ba,37)) ){
HXLINE( 194)			return HX_("TEXT",ad,94,ba,37);
HXDLIN( 194)			goto _hx_goto_21;
            		}
            		/* default */{
HXLINE( 195)			return HX_("BINARY",01,68,8e,9f);
            		}
            		_hx_goto_21:;
HXLINE( 184)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(LimeModLibrary_obj,PolyToLime,return )


::hx::ObjectPtr< LimeModLibrary_obj > LimeModLibrary_obj::__new( ::polymod::backends::LimeBackend backend) {
	::hx::ObjectPtr< LimeModLibrary_obj > __this = new LimeModLibrary_obj();
	__this->__construct(backend);
	return __this;
}

::hx::ObjectPtr< LimeModLibrary_obj > LimeModLibrary_obj::__alloc(::hx::Ctx *_hx_ctx, ::polymod::backends::LimeBackend backend) {
	LimeModLibrary_obj *__this = (LimeModLibrary_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LimeModLibrary_obj), true, "polymod.backends.LimeModLibrary"));
	*(void **)__this = LimeModLibrary_obj::_hx_vtable;
	__this->__construct(backend);
	return __this;
}

LimeModLibrary_obj::LimeModLibrary_obj()
{
}

void LimeModLibrary_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LimeModLibrary);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(p,"p");
	HX_MARK_MEMBER_NAME(fallback,"fallback");
	HX_MARK_MEMBER_NAME(hasFallback,"hasFallback");
	HX_MARK_MEMBER_NAME(type,"type");
	 ::lime::utils::AssetLibrary_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LimeModLibrary_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(p,"p");
	HX_VISIT_MEMBER_NAME(fallback,"fallback");
	HX_VISIT_MEMBER_NAME(hasFallback,"hasFallback");
	HX_VISIT_MEMBER_NAME(type,"type");
	 ::lime::utils::AssetLibrary_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LimeModLibrary_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"p") ) { return ::hx::Val( p ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		if (HX_FIELD_EQ(inName,"list") ) { return ::hx::Val( list_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return ::hx::Val( getFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"getPath") ) { return ::hx::Val( getPath_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return ::hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"isLocal") ) { return ::hx::Val( isLocal_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { return ::hx::Val( fallback ); }
		if (HX_FIELD_EQ(inName,"getAsset") ) { return ::hx::Val( getAsset_dyn() ); }
		if (HX_FIELD_EQ(inName,"getBytes") ) { return ::hx::Val( getBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getImage") ) { return ::hx::Val( getImage_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadFont") ) { return ::hx::Val( loadFont_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadText") ) { return ::hx::Val( loadText_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"loadBytes") ) { return ::hx::Val( loadBytes_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadImage") ) { return ::hx::Val( loadImage_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasFallback") ) { return ::hx::Val( hasFallback ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getAudioBuffer") ) { return ::hx::Val( getAudioBuffer_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadAudioBuffer") ) { return ::hx::Val( loadAudioBuffer_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LimeModLibrary_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"LimeToPoly") ) { outValue = LimeToPoly_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"PolyToLime") ) { outValue = PolyToLime_dyn(); return true; }
	}
	return false;
}

::hx::Val LimeModLibrary_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast<  ::polymod::backends::LimeBackend >(); return inValue; }
		if (HX_FIELD_EQ(inName,"p") ) { p=inValue.Cast<  ::polymod::backends::PolymodAssetLibrary >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fallback") ) { fallback=inValue.Cast<  ::lime::utils::AssetLibrary >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"hasFallback") ) { hasFallback=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LimeModLibrary_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("p",70,00,00,00));
	outFields->push(HX_("fallback",22,f0,9d,2a));
	outFields->push(HX_("hasFallback",9c,d5,54,fd));
	outFields->push(HX_("type",ba,f2,08,4d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LimeModLibrary_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::backends::LimeBackend */ ,(int)offsetof(LimeModLibrary_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsObject /*  ::polymod::backends::PolymodAssetLibrary */ ,(int)offsetof(LimeModLibrary_obj,p),HX_("p",70,00,00,00)},
	{::hx::fsObject /*  ::lime::utils::AssetLibrary */ ,(int)offsetof(LimeModLibrary_obj,fallback),HX_("fallback",22,f0,9d,2a)},
	{::hx::fsBool,(int)offsetof(LimeModLibrary_obj,hasFallback),HX_("hasFallback",9c,d5,54,fd)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(LimeModLibrary_obj,type),HX_("type",ba,f2,08,4d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LimeModLibrary_obj_sStaticStorageInfo = 0;
#endif

static ::String LimeModLibrary_obj_sMemberFields[] = {
	HX_("b",62,00,00,00),
	HX_("p",70,00,00,00),
	HX_("fallback",22,f0,9d,2a),
	HX_("hasFallback",9c,d5,54,fd),
	HX_("type",ba,f2,08,4d),
	HX_("destroy",fa,2c,86,24),
	HX_("getAsset",7a,79,10,86),
	HX_("exists",dc,1d,e0,bf),
	HX_("getAudioBuffer",80,41,e3,26),
	HX_("getBytes",f5,17,6f,1d),
	HX_("getFont",85,0d,43,16),
	HX_("getImage",e5,2e,40,1d),
	HX_("getPath",5b,95,d4,1c),
	HX_("getText",63,7c,7c,1f),
	HX_("loadBytes",65,54,cf,d8),
	HX_("loadFont",15,2f,60,b4),
	HX_("loadImage",55,6b,a0,d8),
	HX_("loadAudioBuffer",f0,71,7c,e3),
	HX_("loadText",f3,9d,99,bd),
	HX_("isLocal",21,6d,76,15),
	HX_("list",5e,1c,b3,47),
	::String(null()) };

::hx::Class LimeModLibrary_obj::__mClass;

static ::String LimeModLibrary_obj_sStaticFields[] = {
	HX_("LimeToPoly",7c,76,3c,12),
	HX_("PolyToLime",bc,39,e0,08),
	::String(null())
};

void LimeModLibrary_obj::__register()
{
	LimeModLibrary_obj _hx_dummy;
	LimeModLibrary_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.LimeModLibrary",25,89,45,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LimeModLibrary_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LimeModLibrary_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LimeModLibrary_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LimeModLibrary_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LimeModLibrary_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LimeModLibrary_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends
