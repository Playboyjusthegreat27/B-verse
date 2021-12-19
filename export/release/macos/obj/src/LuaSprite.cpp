#include <hxcpp.h>

#ifndef INCLUDED_LuaSprite
#include <LuaSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_14194ce63f52f33d_887_new,"LuaSprite","new",0x660a672f,"LuaSprite.new","FunkinLua.hx",887,0x00117937)

void LuaSprite_obj::__construct( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic){
            	HX_STACKFRAME(&_hx_pos_14194ce63f52f33d_887_new)
HXLINE( 890)		this->isInFront = false;
HXLINE( 889)		this->wasAdded = false;
HXLINE( 887)		super::__construct(X,Y,SimpleGraphic);
            	}

Dynamic LuaSprite_obj::__CreateEmpty() { return new LuaSprite_obj; }

void *LuaSprite_obj::_hx_vtable = 0;

Dynamic LuaSprite_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LuaSprite_obj > _hx_result = new LuaSprite_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool LuaSprite_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x40c918fd) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x40c918fd;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}


::hx::ObjectPtr< LuaSprite_obj > LuaSprite_obj::__new( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic) {
	::hx::ObjectPtr< LuaSprite_obj > __this = new LuaSprite_obj();
	__this->__construct(X,Y,SimpleGraphic);
	return __this;
}

::hx::ObjectPtr< LuaSprite_obj > LuaSprite_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic) {
	LuaSprite_obj *__this = (LuaSprite_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LuaSprite_obj), true, "LuaSprite"));
	*(void **)__this = LuaSprite_obj::_hx_vtable;
	__this->__construct(X,Y,SimpleGraphic);
	return __this;
}

LuaSprite_obj::LuaSprite_obj()
{
}

::hx::Val LuaSprite_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wasAdded") ) { return ::hx::Val( wasAdded ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isInFront") ) { return ::hx::Val( isInFront ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val LuaSprite_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"wasAdded") ) { wasAdded=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"isInFront") ) { isInFront=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LuaSprite_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("wasAdded",d7,ce,90,02));
	outFields->push(HX_("isInFront",ba,6b,49,a7));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LuaSprite_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(LuaSprite_obj,wasAdded),HX_("wasAdded",d7,ce,90,02)},
	{::hx::fsBool,(int)offsetof(LuaSprite_obj,isInFront),HX_("isInFront",ba,6b,49,a7)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *LuaSprite_obj_sStaticStorageInfo = 0;
#endif

static ::String LuaSprite_obj_sMemberFields[] = {
	HX_("wasAdded",d7,ce,90,02),
	HX_("isInFront",ba,6b,49,a7),
	::String(null()) };

::hx::Class LuaSprite_obj::__mClass;

void LuaSprite_obj::__register()
{
	LuaSprite_obj _hx_dummy;
	LuaSprite_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LuaSprite",bd,a3,85,7d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LuaSprite_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LuaSprite_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LuaSprite_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LuaSprite_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

