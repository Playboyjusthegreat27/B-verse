#include <hxcpp.h>

#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_CustomFadeTransition
#include <CustomFadeTransition.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxGradient
#include <flixel/util/FlxGradient.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_11636191a51c3638_16_new,"CustomFadeTransition","new",0x93baefd4,"CustomFadeTransition.new","CustomFadeTransition.hx",16,0xa4d2e61c)
static const int _hx_array_data_00f1b5e2_1[] = {
	(int)0,(int)-16777216,
};
static const int _hx_array_data_00f1b5e2_2[] = {
	(int)-16777216,(int)0,
};
HX_DEFINE_STACK_FRAME(_hx_pos_11636191a51c3638_39_new,"CustomFadeTransition","new",0x93baefd4,"CustomFadeTransition.new","CustomFadeTransition.hx",39,0xa4d2e61c)
HX_DEFINE_STACK_FRAME(_hx_pos_11636191a51c3638_41_new,"CustomFadeTransition","new",0x93baefd4,"CustomFadeTransition.new","CustomFadeTransition.hx",41,0xa4d2e61c)
HX_DEFINE_STACK_FRAME(_hx_pos_11636191a51c3638_46_new,"CustomFadeTransition","new",0x93baefd4,"CustomFadeTransition.new","CustomFadeTransition.hx",46,0xa4d2e61c)
HX_DEFINE_STACK_FRAME(_hx_pos_11636191a51c3638_50_new,"CustomFadeTransition","new",0x93baefd4,"CustomFadeTransition.new","CustomFadeTransition.hx",50,0xa4d2e61c)
HX_LOCAL_STACK_FRAME(_hx_pos_11636191a51c3638_55_destroy,"CustomFadeTransition","destroy",0x2de4166e,"CustomFadeTransition.destroy","CustomFadeTransition.hx",55,0xa4d2e61c)

void CustomFadeTransition_obj::__construct(Float duration,bool isTransIn){
            	HX_GC_STACKFRAME(&_hx_pos_11636191a51c3638_16_new)
HXLINE(  18)		this->leTween = null();
HXLINE(  19)		 ::CustomFadeTransition _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  20)		super::__construct();
HXLINE(  22)		Float zoom = ::CoolUtil_obj::boundTo(::flixel::FlxG_obj::camera->zoom,((Float)0.05),( (Float)(1) ));
HXLINE(  23)		int width = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::width) ) / zoom));
HXLINE(  24)		int height = ::Std_obj::_hx_int((( (Float)(::flixel::FlxG_obj::height) ) / zoom));
HXLINE(  25)		::Array< int > transGradient;
HXDLIN(  25)		if (isTransIn) {
HXLINE(  25)			transGradient = ::Array_obj< int >::fromData( _hx_array_data_00f1b5e2_1,2);
            		}
            		else {
HXLINE(  25)			transGradient = ::Array_obj< int >::fromData( _hx_array_data_00f1b5e2_2,2);
            		}
HXDLIN(  25)		 ::flixel::FlxSprite transGradient1 = ::flixel::util::FlxGradient_obj::createGradientFlxSprite(width,height,transGradient,null(),null(),null());
HXLINE(  26)		transGradient1->scrollFactor->set(null(),null());
HXLINE(  27)		this->add(transGradient1);
HXLINE(  29)		 ::flixel::FlxSprite transBlack =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null())->makeGraphic(width,(height + 400),-16777216,null(),null());
HXLINE(  30)		transBlack->scrollFactor->set(null(),null());
HXLINE(  31)		this->add(transBlack);
HXLINE(  33)		transGradient1->set_x((transGradient1->x - (( (Float)((width - ::flixel::FlxG_obj::width)) ) / ( (Float)(2) ))));
HXLINE(  34)		transBlack->set_x(transGradient1->x);
HXLINE(  36)		if (isTransIn) {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::flixel::FlxSprite,transGradient1, ::flixel::FlxSprite,transBlack) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_11636191a51c3638_39_new)
HXLINE(  39)				 ::flixel::FlxSprite transBlack1 = transBlack;
HXDLIN(  39)				Float transGradient = transGradient1->y;
HXDLIN(  39)				transBlack1->set_y((transGradient + transGradient1->get_height()));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::CustomFadeTransition,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_11636191a51c3638_41_new)
HXLINE(  41)				_gthis->close();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  37)			 ::flixel::FlxSprite transGradient = transGradient1;
HXDLIN(  37)			Float transBlack1 = transBlack->y;
HXDLIN(  37)			transGradient->set_y((transBlack1 - transBlack->get_height()));
HXLINE(  38)			 ::flixel::FlxSprite transGradient2 = transGradient1;
HXDLIN(  38)			Float _hx_tmp = (transGradient1->get_height() + 50);
HXDLIN(  38)			::flixel::tweens::FlxTween_obj::tween(transGradient2, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),_hx_tmp)),duration, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_1(_gthis)))
            				->setFixed(2,HX_("onUpdate",88,7c,b2,66), ::Dynamic(new _hx_Closure_0(transGradient1,transBlack)))));
            		}
            		else {
            			HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_2, ::flixel::FlxSprite,transGradient1, ::flixel::FlxSprite,transBlack) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_11636191a51c3638_46_new)
HXLINE(  47)				 ::flixel::FlxSprite transBlack1 = transBlack;
HXDLIN(  47)				 ::flixel::FlxSprite transBlack2 = transBlack;
HXDLIN(  47)				Float transGradient = transGradient1->y;
HXDLIN(  47)				transBlack1->set_y(transBlack2->set_y(((transGradient - transBlack->get_height()) + 50)));
HXLINE(  48)				if ((transBlack->y > 0)) {
HXLINE(  48)					transBlack->set_y(( (Float)(0) ));
            				}
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_3) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_GC_STACKFRAME(&_hx_pos_11636191a51c3638_50_new)
HXLINE(  50)				::CustomFadeTransition_obj::finishCallback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  44)			 ::flixel::FlxSprite transGradient = transGradient1;
HXDLIN(  44)			transGradient->set_y(-(transGradient1->get_height()));
HXLINE(  45)			 ::flixel::FlxSprite transBlack1 = transBlack;
HXDLIN(  45)			Float transGradient2 = transGradient1->y;
HXDLIN(  45)			transBlack1->set_y(((transGradient2 - transBlack->get_height()) + 50));
HXLINE(  46)			 ::flixel::FlxSprite transGradient3 = transGradient1;
HXDLIN(  46)			Float _hx_tmp = (transGradient1->get_height() + 50);
HXDLIN(  46)			this->leTween = ::flixel::tweens::FlxTween_obj::tween(transGradient3, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("y",79,00,00,00),_hx_tmp)),duration, ::Dynamic(::hx::Anon_obj::Create(3)
            				->setFixed(0,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::linear_dyn())
            				->setFixed(1,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_3()))
            				->setFixed(2,HX_("onUpdate",88,7c,b2,66), ::Dynamic(new _hx_Closure_2(transGradient1,transBlack)))));
            		}
            	}

Dynamic CustomFadeTransition_obj::__CreateEmpty() { return new CustomFadeTransition_obj; }

void *CustomFadeTransition_obj::_hx_vtable = 0;

Dynamic CustomFadeTransition_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CustomFadeTransition_obj > _hx_result = new CustomFadeTransition_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CustomFadeTransition_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x0add7632) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0add7632;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void CustomFadeTransition_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_11636191a51c3638_55_destroy)
HXLINE(  56)		if (::hx::IsNotNull( this->leTween )) {
HXLINE(  57)			::CustomFadeTransition_obj::finishCallback();
HXLINE(  58)			this->leTween->cancel();
            		}
HXLINE(  60)		this->super::destroy();
            	}


 ::Dynamic CustomFadeTransition_obj::finishCallback;


::hx::ObjectPtr< CustomFadeTransition_obj > CustomFadeTransition_obj::__new(Float duration,bool isTransIn) {
	::hx::ObjectPtr< CustomFadeTransition_obj > __this = new CustomFadeTransition_obj();
	__this->__construct(duration,isTransIn);
	return __this;
}

::hx::ObjectPtr< CustomFadeTransition_obj > CustomFadeTransition_obj::__alloc(::hx::Ctx *_hx_ctx,Float duration,bool isTransIn) {
	CustomFadeTransition_obj *__this = (CustomFadeTransition_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CustomFadeTransition_obj), true, "CustomFadeTransition"));
	*(void **)__this = CustomFadeTransition_obj::_hx_vtable;
	__this->__construct(duration,isTransIn);
	return __this;
}

CustomFadeTransition_obj::CustomFadeTransition_obj()
{
}

void CustomFadeTransition_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CustomFadeTransition);
	HX_MARK_MEMBER_NAME(leTween,"leTween");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CustomFadeTransition_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(leTween,"leTween");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CustomFadeTransition_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leTween") ) { return ::hx::Val( leTween ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CustomFadeTransition_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { outValue = ( finishCallback ); return true; }
	}
	return false;
}

::hx::Val CustomFadeTransition_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leTween") ) { leTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CustomFadeTransition_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"finishCallback") ) { finishCallback=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void CustomFadeTransition_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("leTween",32,a5,b7,99));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CustomFadeTransition_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CustomFadeTransition_obj,leTween),HX_("leTween",32,a5,b7,99)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CustomFadeTransition_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &CustomFadeTransition_obj::finishCallback,HX_("finishCallback",38,a1,bc,b4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CustomFadeTransition_obj_sMemberFields[] = {
	HX_("leTween",32,a5,b7,99),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void CustomFadeTransition_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CustomFadeTransition_obj::finishCallback,"finishCallback");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CustomFadeTransition_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CustomFadeTransition_obj::finishCallback,"finishCallback");
};

#endif

::hx::Class CustomFadeTransition_obj::__mClass;

static ::String CustomFadeTransition_obj_sStaticFields[] = {
	HX_("finishCallback",38,a1,bc,b4),
	::String(null())
};

void CustomFadeTransition_obj::__register()
{
	CustomFadeTransition_obj _hx_dummy;
	CustomFadeTransition_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CustomFadeTransition",e2,b5,f1,00);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CustomFadeTransition_obj::__GetStatic;
	__mClass->mSetStaticField = &CustomFadeTransition_obj::__SetStatic;
	__mClass->mMarkFunc = CustomFadeTransition_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CustomFadeTransition_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CustomFadeTransition_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CustomFadeTransition_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CustomFadeTransition_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CustomFadeTransition_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CustomFadeTransition_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

