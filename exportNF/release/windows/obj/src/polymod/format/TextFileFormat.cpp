// Generated by Haxe 4.2.1+bf9ff69
#include <hxcpp.h>

#ifndef INCLUDED_polymod_format_TextFileFormat
#include <polymod/format/TextFileFormat.h>
#endif
namespace polymod{
namespace format{

::polymod::format::TextFileFormat TextFileFormat_obj::CSV;

::polymod::format::TextFileFormat TextFileFormat_obj::JSON;

::polymod::format::TextFileFormat TextFileFormat_obj::LINES;

::polymod::format::TextFileFormat TextFileFormat_obj::PLAINTEXT;

::polymod::format::TextFileFormat TextFileFormat_obj::TSV;

::polymod::format::TextFileFormat TextFileFormat_obj::XML;

bool TextFileFormat_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CSV",a6,1f,33,00)) { outValue = TextFileFormat_obj::CSV; return true; }
	if (inName==HX_("JSON",28,0a,29,31)) { outValue = TextFileFormat_obj::JSON; return true; }
	if (inName==HX_("LINES",df,15,f0,f2)) { outValue = TextFileFormat_obj::LINES; return true; }
	if (inName==HX_("PLAINTEXT",97,03,67,c6)) { outValue = TextFileFormat_obj::PLAINTEXT; return true; }
	if (inName==HX_("TSV",f7,05,40,00)) { outValue = TextFileFormat_obj::TSV; return true; }
	if (inName==HX_("XML",b7,09,43,00)) { outValue = TextFileFormat_obj::XML; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TextFileFormat_obj)

int TextFileFormat_obj::__FindIndex(::String inName)
{
	if (inName==HX_("CSV",a6,1f,33,00)) return 2;
	if (inName==HX_("JSON",28,0a,29,31)) return 5;
	if (inName==HX_("LINES",df,15,f0,f2)) return 1;
	if (inName==HX_("PLAINTEXT",97,03,67,c6)) return 0;
	if (inName==HX_("TSV",f7,05,40,00)) return 3;
	if (inName==HX_("XML",b7,09,43,00)) return 4;
	return super::__FindIndex(inName);
}

int TextFileFormat_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("CSV",a6,1f,33,00)) return 0;
	if (inName==HX_("JSON",28,0a,29,31)) return 0;
	if (inName==HX_("LINES",df,15,f0,f2)) return 0;
	if (inName==HX_("PLAINTEXT",97,03,67,c6)) return 0;
	if (inName==HX_("TSV",f7,05,40,00)) return 0;
	if (inName==HX_("XML",b7,09,43,00)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val TextFileFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("CSV",a6,1f,33,00)) return CSV;
	if (inName==HX_("JSON",28,0a,29,31)) return JSON;
	if (inName==HX_("LINES",df,15,f0,f2)) return LINES;
	if (inName==HX_("PLAINTEXT",97,03,67,c6)) return PLAINTEXT;
	if (inName==HX_("TSV",f7,05,40,00)) return TSV;
	if (inName==HX_("XML",b7,09,43,00)) return XML;
	return super::__Field(inName,inCallProp);
}

static ::String TextFileFormat_obj_sStaticFields[] = {
	HX_("PLAINTEXT",97,03,67,c6),
	HX_("LINES",df,15,f0,f2),
	HX_("CSV",a6,1f,33,00),
	HX_("TSV",f7,05,40,00),
	HX_("XML",b7,09,43,00),
	HX_("JSON",28,0a,29,31),
	::String(null())
};

::hx::Class TextFileFormat_obj::__mClass;

Dynamic __Create_TextFileFormat_obj() { return new TextFileFormat_obj; }

void TextFileFormat_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("polymod.format.TextFileFormat",df,a6,29,9a), ::hx::TCanCast< TextFileFormat_obj >,TextFileFormat_obj_sStaticFields,0,
	&__Create_TextFileFormat_obj, &__Create,
	&super::__SGetClass(), &CreateTextFileFormat_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TextFileFormat_obj::__GetStatic;
}

void TextFileFormat_obj::__boot()
{
CSV = ::hx::CreateConstEnum< TextFileFormat_obj >(HX_("CSV",a6,1f,33,00),2);
JSON = ::hx::CreateConstEnum< TextFileFormat_obj >(HX_("JSON",28,0a,29,31),5);
LINES = ::hx::CreateConstEnum< TextFileFormat_obj >(HX_("LINES",df,15,f0,f2),1);
PLAINTEXT = ::hx::CreateConstEnum< TextFileFormat_obj >(HX_("PLAINTEXT",97,03,67,c6),0);
TSV = ::hx::CreateConstEnum< TextFileFormat_obj >(HX_("TSV",f7,05,40,00),3);
XML = ::hx::CreateConstEnum< TextFileFormat_obj >(HX_("XML",b7,09,43,00),4);
}


} // end namespace polymod
} // end namespace format
