// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_AccuracyDOption
#define INCLUDED_AccuracyDOption

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_Option
#include <Option.h>
#endif
HX_DECLARE_CLASS0(AccuracyDOption)
HX_DECLARE_CLASS0(Option)



class HXCPP_CLASS_ATTRIBUTES AccuracyDOption_obj : public  ::Option_obj
{
	public:
		typedef  ::Option_obj super;
		typedef AccuracyDOption_obj OBJ_;
		AccuracyDOption_obj();

	public:
		enum { _hx_ClassId = 0x3638e2e0 };

		void __construct(::String desc);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="AccuracyDOption")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"AccuracyDOption"); }
		static ::hx::ObjectPtr< AccuracyDOption_obj > __new(::String desc);
		static ::hx::ObjectPtr< AccuracyDOption_obj > __alloc(::hx::Ctx *_hx_ctx,::String desc);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~AccuracyDOption_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("AccuracyDOption",a0,fd,11,6a); }

		bool press();

		::String updateDisplay();

};


#endif /* INCLUDED_AccuracyDOption */ 
