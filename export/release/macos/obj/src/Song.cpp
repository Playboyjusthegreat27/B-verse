#include <hxcpp.h>

#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4e288e2989890fc6_27_new,"Song","new",0xfb6c8f67,"Song.new","Song.hx",27,0x775e99e9)
HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_49_loadFromJson,"Song","loadFromJson",0x10fda511,"Song.loadFromJson","Song.hx",49,0x775e99e9)
HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_87_parseJSONshit,"Song","parseJSONshit",0x7c7ff6e2,"Song.parseJSONshit","Song.hx",87,0x775e99e9)

void Song_obj::__construct(::String song,::Array< ::Dynamic> notes,Float bpm){
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_27_new)
HXLINE(  39)		this->player3 = HX_("gf",1f,5a,00,00);
HXLINE(  38)		this->player2 = HX_("dad",47,36,4c,00);
HXLINE(  37)		this->player1 = HX_("bf",c4,55,00,00);
HXLINE(  35)		this->speed = ((Float)1);
HXLINE(  32)		this->needsVoices = true;
HXLINE(  43)		this->song = song;
HXLINE(  44)		this->notes = notes;
HXLINE(  45)		this->bpm = bpm;
            	}

Dynamic Song_obj::__CreateEmpty() { return new Song_obj; }

void *Song_obj::_hx_vtable = 0;

Dynamic Song_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Song_obj > _hx_result = new Song_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Song_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b844619;
}

 ::Dynamic Song_obj::loadFromJson(::String jsonInput,::String folder){
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_49_loadFromJson)
HXLINE(  50)		::String rawJson;
HXLINE(  51)		if ((jsonInput == HX_("events",19,4f,6a,96))) {
HXLINE(  53)			::String library = null();
HXDLIN(  53)			rawJson = ::StringTools_obj::trim(::sys::io::File_obj::getContent(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + (folder.toLowerCase() + HX_("/events",88,1c,db,38))) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library)));
            		}
            		else {
HXLINE(  58)			::String key = (folder.toLowerCase() + HX_("/",2f,00,00,00));
HXDLIN(  58)			::String library = null();
HXDLIN(  58)			rawJson = ::StringTools_obj::trim(::lime::utils::Assets_obj::getText(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + (key + jsonInput.toLowerCase())) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library)));
            		}
HXLINE(  61)		while(!(::StringTools_obj::endsWith(rawJson,HX_("}",7d,00,00,00)))){
HXLINE(  63)			rawJson = rawJson.substr(0,(rawJson.length - 1));
            		}
HXLINE(  83)		return ::Song_obj::parseJSONshit(rawJson);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Song_obj,loadFromJson,return )

 ::Dynamic Song_obj::parseJSONshit(::String rawJson){
            	HX_GC_STACKFRAME(&_hx_pos_4e288e2989890fc6_87_parseJSONshit)
HXLINE(  88)		 ::Dynamic swagShit =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse()->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic);
HXLINE(  89)		swagShit->__SetField(HX_("validScore",b6,dc,18,c7),true,::hx::paccDynamic);
HXLINE(  90)		return swagShit;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Song_obj,parseJSONshit,return )


Song_obj::Song_obj()
{
}

void Song_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Song);
	HX_MARK_MEMBER_NAME(song,"song");
	HX_MARK_MEMBER_NAME(notes,"notes");
	HX_MARK_MEMBER_NAME(bpm,"bpm");
	HX_MARK_MEMBER_NAME(needsVoices,"needsVoices");
	HX_MARK_MEMBER_NAME(arrowSkin,"arrowSkin");
	HX_MARK_MEMBER_NAME(splashSkin,"splashSkin");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(player1,"player1");
	HX_MARK_MEMBER_NAME(player2,"player2");
	HX_MARK_MEMBER_NAME(player3,"player3");
	HX_MARK_END_CLASS();
}

void Song_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(song,"song");
	HX_VISIT_MEMBER_NAME(notes,"notes");
	HX_VISIT_MEMBER_NAME(bpm,"bpm");
	HX_VISIT_MEMBER_NAME(needsVoices,"needsVoices");
	HX_VISIT_MEMBER_NAME(arrowSkin,"arrowSkin");
	HX_VISIT_MEMBER_NAME(splashSkin,"splashSkin");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(player1,"player1");
	HX_VISIT_MEMBER_NAME(player2,"player2");
	HX_VISIT_MEMBER_NAME(player3,"player3");
}

::hx::Val Song_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { return ::hx::Val( bpm ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"song") ) { return ::hx::Val( song ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { return ::hx::Val( notes ); }
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { return ::hx::Val( player1 ); }
		if (HX_FIELD_EQ(inName,"player2") ) { return ::hx::Val( player2 ); }
		if (HX_FIELD_EQ(inName,"player3") ) { return ::hx::Val( player3 ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrowSkin") ) { return ::hx::Val( arrowSkin ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"splashSkin") ) { return ::hx::Val( splashSkin ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsVoices") ) { return ::hx::Val( needsVoices ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Song_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromJson") ) { outValue = loadFromJson_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseJSONshit") ) { outValue = parseJSONshit_dyn(); return true; }
	}
	return false;
}

::hx::Val Song_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"bpm") ) { bpm=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"song") ) { song=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"notes") ) { notes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { player1=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player2") ) { player2=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player3") ) { player3=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"arrowSkin") ) { arrowSkin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"splashSkin") ) { splashSkin=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"needsVoices") ) { needsVoices=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Song_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("song",d5,23,58,4c));
	outFields->push(HX_("notes",41,dc,ca,9f));
	outFields->push(HX_("bpm",df,be,4a,00));
	outFields->push(HX_("needsVoices",be,05,e9,0d));
	outFields->push(HX_("arrowSkin",e6,d4,f8,07));
	outFields->push(HX_("splashSkin",84,03,e1,a1));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("player1",b0,09,15,8a));
	outFields->push(HX_("player2",b1,09,15,8a));
	outFields->push(HX_("player3",b2,09,15,8a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Song_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(Song_obj,song),HX_("song",d5,23,58,4c)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(Song_obj,notes),HX_("notes",41,dc,ca,9f)},
	{::hx::fsFloat,(int)offsetof(Song_obj,bpm),HX_("bpm",df,be,4a,00)},
	{::hx::fsBool,(int)offsetof(Song_obj,needsVoices),HX_("needsVoices",be,05,e9,0d)},
	{::hx::fsString,(int)offsetof(Song_obj,arrowSkin),HX_("arrowSkin",e6,d4,f8,07)},
	{::hx::fsString,(int)offsetof(Song_obj,splashSkin),HX_("splashSkin",84,03,e1,a1)},
	{::hx::fsFloat,(int)offsetof(Song_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsString,(int)offsetof(Song_obj,player1),HX_("player1",b0,09,15,8a)},
	{::hx::fsString,(int)offsetof(Song_obj,player2),HX_("player2",b1,09,15,8a)},
	{::hx::fsString,(int)offsetof(Song_obj,player3),HX_("player3",b2,09,15,8a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Song_obj_sStaticStorageInfo = 0;
#endif

static ::String Song_obj_sMemberFields[] = {
	HX_("song",d5,23,58,4c),
	HX_("notes",41,dc,ca,9f),
	HX_("bpm",df,be,4a,00),
	HX_("needsVoices",be,05,e9,0d),
	HX_("arrowSkin",e6,d4,f8,07),
	HX_("splashSkin",84,03,e1,a1),
	HX_("speed",87,97,69,81),
	HX_("player1",b0,09,15,8a),
	HX_("player2",b1,09,15,8a),
	HX_("player3",b2,09,15,8a),
	::String(null()) };

::hx::Class Song_obj::__mClass;

static ::String Song_obj_sStaticFields[] = {
	HX_("loadFromJson",f8,fc,9c,5d),
	HX_("parseJSONshit",1b,89,4d,3b),
	::String(null())
};

void Song_obj::__register()
{
	Song_obj _hx_dummy;
	Song_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Song",f5,4f,31,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Song_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Song_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Song_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Song_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Song_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Song_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

