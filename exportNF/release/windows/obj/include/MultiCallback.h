// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_MultiCallback
#define INCLUDED_MultiCallback

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MultiCallback)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)



class HXCPP_CLASS_ATTRIBUTES MultiCallback_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MultiCallback_obj OBJ_;
		MultiCallback_obj();

	public:
		enum { _hx_ClassId = 0x40f9e67e };

		void __construct( ::Dynamic callback,::String logId);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="MultiCallback")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"MultiCallback"); }
		static ::hx::ObjectPtr< MultiCallback_obj > __new( ::Dynamic callback,::String logId);
		static ::hx::ObjectPtr< MultiCallback_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic callback,::String logId);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MultiCallback_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MultiCallback",3e,d1,b2,64); }

		 ::Dynamic callback;
		Dynamic callback_dyn() { return callback;}
		::String logId;
		int length;
		int numRemaining;
		 ::haxe::ds::StringMap unfired;
		::Array< ::String > fired;
		 ::Dynamic add(::String id);
		::Dynamic add_dyn();

		void log(::String msg);
		::Dynamic log_dyn();

		::Array< ::String > getFired();
		::Dynamic getFired_dyn();

		::Array< ::String > getUnfired();
		::Dynamic getUnfired_dyn();

};


#endif /* INCLUDED_MultiCallback */ 
