// Generated by Haxe 4.2.1+bf9ff69
#ifndef INCLUDED_WiggleEffect
#define INCLUDED_WiggleEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(WiggleEffect)
HX_DECLARE_CLASS0(WiggleEffectType)
HX_DECLARE_CLASS0(WiggleShader)
HX_DECLARE_CLASS3(flixel,graphics,tile,FlxGraphicsShader)
HX_DECLARE_CLASS2(openfl,display,GraphicsShader)
HX_DECLARE_CLASS2(openfl,display,Shader)



class HXCPP_CLASS_ATTRIBUTES WiggleEffect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef WiggleEffect_obj OBJ_;
		WiggleEffect_obj();

	public:
		enum { _hx_ClassId = 0x77b8d97c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="WiggleEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"WiggleEffect"); }
		static ::hx::ObjectPtr< WiggleEffect_obj > __new();
		static ::hx::ObjectPtr< WiggleEffect_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~WiggleEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("WiggleEffect",bc,86,d7,8e); }

		 ::WiggleShader shader;
		 ::WiggleEffectType effectType;
		Float waveSpeed;
		Float waveFrequency;
		Float waveAmplitude;
		void update(Float elapsed);
		::Dynamic update_dyn();

		 ::WiggleEffectType set_effectType( ::WiggleEffectType v);
		::Dynamic set_effectType_dyn();

		Float set_waveSpeed(Float v);
		::Dynamic set_waveSpeed_dyn();

		Float set_waveFrequency(Float v);
		::Dynamic set_waveFrequency_dyn();

		Float set_waveAmplitude(Float v);
		::Dynamic set_waveAmplitude_dyn();

};


#endif /* INCLUDED_WiggleEffect */ 
