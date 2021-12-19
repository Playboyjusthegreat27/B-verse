#include <hxcpp.h>

#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_Highscore
#include <Highscore.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_17_resetSong,"Highscore","resetSong",0x458023e6,"Highscore.resetSong","Highscore.hx",17,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_26_resetWeek,"Highscore","resetWeek",0x481d6005,"Highscore.resetWeek","Highscore.hx",26,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_30_saveScore,"Highscore","saveScore",0xbac27177,"Highscore.saveScore","Highscore.hx",30,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_46_saveWeekScore,"Highscore","saveWeekScore",0x4660a363,"Highscore.saveWeekScore","Highscore.hx",46,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_62_setScore,"Highscore","setScore",0x2adf0fee,"Highscore.setScore","Highscore.hx",62,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_70_setRating,"Highscore","setRating",0xce6da001,"Highscore.setRating","Highscore.hx",70,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_79_formatSong,"Highscore","formatSong",0x2cf91dca,"Highscore.formatSong","Highscore.hx",79,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_83_getScore,"Highscore","getScore",0x7c81b67a,"Highscore.getScore","Highscore.hx",83,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_91_getRating,"Highscore","getRating",0xeb1cb3f5,"Highscore.getRating","Highscore.hx",91,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_99_getWeekScore,"Highscore","getWeekScore",0xb3da25e6,"Highscore.getWeekScore","Highscore.hx",99,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_107_load,"Highscore","load",0x978326c4,"Highscore.load","Highscore.hx",107,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_8_boot,"Highscore","boot",0x90e710d0,"Highscore.boot","Highscore.hx",8,0x77c0e42e)
HX_LOCAL_STACK_FRAME(_hx_pos_59d01746e3baf250_9_boot,"Highscore","boot",0x90e710d0,"Highscore.boot","Highscore.hx",9,0x77c0e42e)

void Highscore_obj::__construct() { }

Dynamic Highscore_obj::__CreateEmpty() { return new Highscore_obj; }

void *Highscore_obj::_hx_vtable = 0;

Dynamic Highscore_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Highscore_obj > _hx_result = new Highscore_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Highscore_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55f38dd0;
}

 ::haxe::ds::StringMap Highscore_obj::songScores;

 ::haxe::ds::StringMap Highscore_obj::songRating;

void Highscore_obj::resetSong(::String song,::hx::Null< int >  __o_diff){
            		int diff = __o_diff.Default(0);
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_17_resetSong)
HXLINE(  18)		::String daSong = ::Highscore_obj::formatSong(song,diff);
HXLINE(  20)		::Highscore_obj::setScore(daSong,0);
HXLINE(  21)		::Highscore_obj::setRating(daSong,( (Float)(0) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,resetSong,(void))

void Highscore_obj::resetWeek(int week,::hx::Null< int >  __o_diff){
            		int diff = __o_diff.Default(0);
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_26_resetWeek)
HXDLIN(  26)		::Highscore_obj::setScore(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff),0);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,resetWeek,(void))

void Highscore_obj::saveScore(::String song,::hx::Null< int >  __o_score, ::Dynamic __o_diff, ::Dynamic __o_rating){
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            		 ::Dynamic rating = __o_rating;
            		if (::hx::IsNull(__o_rating)) rating = -1;
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_30_saveScore)
HXLINE(  31)		::String daSong = ::Highscore_obj::formatSong(song,( (int)(diff) ));
HXLINE(  33)		if (::Highscore_obj::songScores->exists(daSong)) {
HXLINE(  34)			if (::hx::IsLess( ::Highscore_obj::songScores->get(daSong),score )) {
HXLINE(  35)				::Highscore_obj::setScore(daSong,score);
HXLINE(  36)				if (::hx::IsGreaterEq( rating,0 )) {
HXLINE(  36)					::Highscore_obj::setRating(daSong,( (Float)(rating) ));
            				}
            			}
            		}
            		else {
HXLINE(  40)			::Highscore_obj::setScore(daSong,score);
HXLINE(  41)			if (::hx::IsGreaterEq( rating,0 )) {
HXLINE(  41)				::Highscore_obj::setRating(daSong,( (Float)(rating) ));
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Highscore_obj,saveScore,(void))

void Highscore_obj::saveWeekScore(::hx::Null< int >  __o_week,::hx::Null< int >  __o_score, ::Dynamic __o_diff){
            		int week = __o_week.Default(1);
            		int score = __o_score.Default(0);
            		 ::Dynamic diff = __o_diff;
            		if (::hx::IsNull(__o_diff)) diff = 0;
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_46_saveWeekScore)
HXLINE(  47)		::String daWeek = ::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),( (int)(diff) ));
HXLINE(  49)		if (::Highscore_obj::songScores->exists(daWeek)) {
HXLINE(  51)			if (::hx::IsLess( ::Highscore_obj::songScores->get(daWeek),score )) {
HXLINE(  52)				::Highscore_obj::setScore(daWeek,score);
            			}
            		}
            		else {
HXLINE(  55)			::Highscore_obj::setScore(daWeek,score);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Highscore_obj,saveWeekScore,(void))

void Highscore_obj::setScore(::String song,int score){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_62_setScore)
HXLINE(  64)		::Highscore_obj::songScores->set(song,score);
HXLINE(  65)		::flixel::FlxG_obj::save->data->__SetField(HX_("songScores",96,1a,f0,a0),::Highscore_obj::songScores,::hx::paccDynamic);
HXLINE(  66)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setScore,(void))

void Highscore_obj::setRating(::String song,Float rating){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_70_setRating)
HXLINE(  72)		::Highscore_obj::songRating->set(song,rating);
HXLINE(  73)		::flixel::FlxG_obj::save->data->__SetField(HX_("songRating",d2,d9,0e,17),::Highscore_obj::songRating,::hx::paccDynamic);
HXLINE(  74)		::flixel::FlxG_obj::save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,setRating,(void))

::String Highscore_obj::formatSong(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_79_formatSong)
HXDLIN(  79)		return (song + ::CoolUtil_obj::difficultyStuff->__get(diff)->__GetItem(1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,formatSong,return )

int Highscore_obj::getScore(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_83_getScore)
HXLINE(  84)		::Dynamic this1 = ::Highscore_obj::songScores;
HXDLIN(  84)		if (!(( ( ::haxe::ds::StringMap)(this1) )->exists(::Highscore_obj::formatSong(song,diff)))) {
HXLINE(  85)			::Highscore_obj::setScore(::Highscore_obj::formatSong(song,diff),0);
            		}
HXLINE(  87)		::Dynamic this2 = ::Highscore_obj::songScores;
HXDLIN(  87)		return ( ( ::haxe::ds::StringMap)(this2) )->get_int(::Highscore_obj::formatSong(song,diff));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getScore,return )

Float Highscore_obj::getRating(::String song,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_91_getRating)
HXLINE(  92)		::Dynamic this1 = ::Highscore_obj::songRating;
HXDLIN(  92)		if (!(( ( ::haxe::ds::StringMap)(this1) )->exists(::Highscore_obj::formatSong(song,diff)))) {
HXLINE(  93)			::Highscore_obj::setRating(::Highscore_obj::formatSong(song,diff),( (Float)(0) ));
            		}
HXLINE(  95)		::Dynamic this2 = ::Highscore_obj::songRating;
HXDLIN(  95)		return ( ( ::haxe::ds::StringMap)(this2) )->get_float(::Highscore_obj::formatSong(song,diff));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getRating,return )

int Highscore_obj::getWeekScore(int week,int diff){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_99_getWeekScore)
HXLINE( 100)		::Dynamic this1 = ::Highscore_obj::songScores;
HXDLIN( 100)		if (!(( ( ::haxe::ds::StringMap)(this1) )->exists(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff)))) {
HXLINE( 101)			::Highscore_obj::setScore(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff),0);
            		}
HXLINE( 103)		::Dynamic this2 = ::Highscore_obj::songScores;
HXDLIN( 103)		return ( ( ::haxe::ds::StringMap)(this2) )->get_int(::Highscore_obj::formatSong((HX_("week",f4,5f,f5,4e) + week),diff));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Highscore_obj,getWeekScore,return )

void Highscore_obj::load(){
            	HX_STACKFRAME(&_hx_pos_59d01746e3baf250_107_load)
HXLINE( 108)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic) )) {
HXLINE( 110)			::Highscore_obj::songScores = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("songScores",96,1a,f0,a0),::hx::paccDynamic)) );
            		}
HXLINE( 112)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("songRating",d2,d9,0e,17),::hx::paccDynamic) )) {
HXLINE( 114)			::Highscore_obj::songRating = ( ( ::haxe::ds::StringMap)(::flixel::FlxG_obj::save->data->__Field(HX_("songRating",d2,d9,0e,17),::hx::paccDynamic)) );
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Highscore_obj,load,(void))


Highscore_obj::Highscore_obj()
{
}

bool Highscore_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setScore") ) { outValue = setScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getScore") ) { outValue = getScore_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetSong") ) { outValue = resetSong_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resetWeek") ) { outValue = resetWeek_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"saveScore") ) { outValue = saveScore_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"setRating") ) { outValue = setRating_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getRating") ) { outValue = getRating_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"songScores") ) { outValue = ( songScores ); return true; }
		if (HX_FIELD_EQ(inName,"songRating") ) { outValue = ( songRating ); return true; }
		if (HX_FIELD_EQ(inName,"formatSong") ) { outValue = formatSong_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWeekScore") ) { outValue = getWeekScore_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"saveWeekScore") ) { outValue = saveWeekScore_dyn(); return true; }
	}
	return false;
}

bool Highscore_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"songScores") ) { songScores=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		if (HX_FIELD_EQ(inName,"songRating") ) { songRating=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Highscore_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Highscore_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::songScores,HX_("songScores",96,1a,f0,a0)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Highscore_obj::songRating,HX_("songRating",d2,d9,0e,17)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Highscore_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Highscore_obj::songScores,"songScores");
	HX_MARK_MEMBER_NAME(Highscore_obj::songRating,"songRating");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Highscore_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Highscore_obj::songScores,"songScores");
	HX_VISIT_MEMBER_NAME(Highscore_obj::songRating,"songRating");
};

#endif

::hx::Class Highscore_obj::__mClass;

static ::String Highscore_obj_sStaticFields[] = {
	HX_("songScores",96,1a,f0,a0),
	HX_("songRating",d2,d9,0e,17),
	HX_("resetSong",44,2d,44,92),
	HX_("resetWeek",63,69,e1,94),
	HX_("saveScore",d5,7a,86,07),
	HX_("saveWeekScore",c1,b3,07,00),
	HX_("setScore",50,dc,0d,87),
	HX_("setRating",5f,a9,31,1b),
	HX_("formatSong",ac,46,bd,0b),
	HX_("getScore",dc,82,b0,d8),
	HX_("getRating",53,bd,e0,37),
	HX_("getWeekScore",48,cb,a3,ea),
	HX_("load",26,9a,b7,47),
	::String(null())
};

void Highscore_obj::__register()
{
	Highscore_obj _hx_dummy;
	Highscore_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Highscore",90,18,b0,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Highscore_obj::__GetStatic;
	__mClass->mSetStaticField = &Highscore_obj::__SetStatic;
	__mClass->mMarkFunc = Highscore_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Highscore_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Highscore_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Highscore_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Highscore_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Highscore_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Highscore_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_59d01746e3baf250_8_boot)
HXDLIN(   8)		songScores =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_59d01746e3baf250_9_boot)
HXDLIN(   9)		songRating =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

