#include <hxcpp.h>

#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_DisclaimerState
#include <DisclaimerState.h>
#endif
#ifndef INCLUDED_MainMenuState
#include <MainMenuState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_TransitionData
#include <flixel/addons/transition/TransitionData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_ColorTween
#include <flixel/tweens/misc/ColorTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_be445f7d438e7400_13_new,"DisclaimerState","new",0x272d4088,"DisclaimerState.new","DisclaimerState.hx",13,0x1bba27e8)
static const ::String _hx_array_data_5bd89c96_1[] = {
	HX_("#314d7f",00,3a,f0,6c),HX_("#4e7093",c7,f0,f5,c5),HX_("#70526e",08,5c,7a,73),HX_("#594465",86,29,b7,d4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_be445f7d438e7400_29_create,"DisclaimerState","create",0x852c7fd4,"DisclaimerState.create","DisclaimerState.hx",29,0x1bba27e8)
HX_LOCAL_STACK_FRAME(_hx_pos_be445f7d438e7400_56_update,"DisclaimerState","update",0x90229ee1,"DisclaimerState.update","DisclaimerState.hx",56,0x1bba27e8)
HX_LOCAL_STACK_FRAME(_hx_pos_be445f7d438e7400_15_boot,"DisclaimerState","boot",0x1884370a,"DisclaimerState.boot","DisclaimerState.hx",15,0x1bba27e8)
HX_LOCAL_STACK_FRAME(_hx_pos_be445f7d438e7400_17_boot,"DisclaimerState","boot",0x1884370a,"DisclaimerState.boot","DisclaimerState.hx",17,0x1bba27e8)
HX_LOCAL_STACK_FRAME(_hx_pos_be445f7d438e7400_18_boot,"DisclaimerState","boot",0x1884370a,"DisclaimerState.boot","DisclaimerState.hx",18,0x1bba27e8)

void DisclaimerState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_be445f7d438e7400_13_new)
HXLINE(  26)		this->colorRotation = 1;
HXLINE(  20)		this->bgColors = ::Array_obj< ::String >::fromData( _hx_array_data_5bd89c96_1,4);
HXLINE(  13)		super::__construct(TransIn,TransOut);
            	}

Dynamic DisclaimerState_obj::__CreateEmpty() { return new DisclaimerState_obj; }

void *DisclaimerState_obj::_hx_vtable = 0;

Dynamic DisclaimerState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DisclaimerState_obj > _hx_result = new DisclaimerState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DisclaimerState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x27ff81d6) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x27ff81d6;
			}
		} else {
			return inClassId==(int)0x2f064378 || inClassId==(int)0x3f706236;
		}
	} else {
		if (inClassId<=(int)0x7c795c9f) {
			return inClassId==(int)0x62817b24 || inClassId==(int)0x7c795c9f;
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	}
}

void DisclaimerState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_be445f7d438e7400_29_create)
HXLINE(  30)		this->super::create();
HXLINE(  31)		::DisclaimerState_obj::leftState = true;
HXLINE(  32)		{
HXLINE(  32)			 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  32)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  32)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
HXLINE(  33)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  33)		::String library = null();
HXDLIN(  33)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  33)		 ::Dynamic bg1;
HXDLIN(  33)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  33)			bg1 = imageToReturn;
            		}
            		else {
HXLINE(  33)			bg1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  33)		 ::flixel::FlxSprite bg2 = bg->loadGraphic(bg1,null(),null(),null(),null(),null());
HXLINE(  34)		this->add(bg2);
HXLINE(  38)		 ::flixel::text::FlxText txt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,0,0,::flixel::FlxG_obj::width,((HX_("DISCLAIMER:\n\n",ff,1a,eb,1d) + HX_("\nRAINBOW U SUCK",c9,5a,5f,d5)) + HX_("\nJk it's no nut nover.\n\n",2a,40,e6,62)),32,null());
HXLINE(  44)		int Alpha = 255;
HXDLIN(  44)		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN(  44)		{
HXLINE(  44)			color = (color & -16711681);
HXDLIN(  44)			color = (color | 13107200);
            		}
HXDLIN(  44)		{
HXLINE(  44)			color = (color & -65281);
HXDLIN(  44)			color = (color | 51200);
            		}
HXDLIN(  44)		{
HXLINE(  44)			color = (color & -256);
HXDLIN(  44)			color = (color | 200);
            		}
HXDLIN(  44)		{
HXLINE(  44)			color = (color & 16777215);
HXDLIN(  44)			int color1;
HXDLIN(  44)			if ((Alpha > 255)) {
HXLINE(  44)				color1 = 255;
            			}
            			else {
HXLINE(  44)				if ((Alpha < 0)) {
HXLINE(  44)					color1 = 0;
            				}
            				else {
HXLINE(  44)					color1 = Alpha;
            				}
            			}
HXDLIN(  44)			color = (color | (color1 << 24));
            		}
HXDLIN(  44)		txt->setFormat(HX_("VCR OSD Mono",be,44,e4,b8),32,color,HX_("center",d5,25,db,05),null(),null(),null());
HXLINE(  45)		txt->set_borderColor(-16777216);
HXLINE(  46)		txt->set_borderSize(( (Float)(3) ));
HXLINE(  47)		txt->set_borderStyle(::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn());
HXLINE(  48)		txt->screenCenter(null());
HXLINE(  49)		this->add(txt);
HXLINE(  51)		int bg3 = bg2->color;
HXDLIN(  51)		::flixel::tweens::FlxTween_obj::color(bg2,2,bg3,( (int)(::flixel::util::_FlxColor::FlxColor_Impl__obj::fromString(this->bgColors->__get(this->colorRotation))) ),null());
            	}


void DisclaimerState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_be445f7d438e7400_56_update)
HXLINE(  58)		bool _hx_tmp;
HXDLIN(  58)		if (!(::PlayerSettings_obj::player1->controls->_back->check())) {
HXLINE(  58)			_hx_tmp = ::PlayerSettings_obj::player1->controls->_accept->check();
            		}
            		else {
HXLINE(  58)			_hx_tmp = true;
            		}
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  60)			::DisclaimerState_obj::leftState = true;
HXLINE(  61)			{
HXLINE(  61)				 ::flixel::FlxState nextState =  ::MainMenuState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  61)				if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  61)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
HXLINE(  63)		this->super::update(elapsed);
            	}


bool DisclaimerState_obj::leftState;

::String DisclaimerState_obj::needVer;

::String DisclaimerState_obj::currChanges;


::hx::ObjectPtr< DisclaimerState_obj > DisclaimerState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< DisclaimerState_obj > __this = new DisclaimerState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< DisclaimerState_obj > DisclaimerState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	DisclaimerState_obj *__this = (DisclaimerState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DisclaimerState_obj), true, "DisclaimerState"));
	*(void **)__this = DisclaimerState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

DisclaimerState_obj::DisclaimerState_obj()
{
}

void DisclaimerState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisclaimerState);
	HX_MARK_MEMBER_NAME(bgColors,"bgColors");
	HX_MARK_MEMBER_NAME(colorRotation,"colorRotation");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisclaimerState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bgColors,"bgColors");
	HX_VISIT_MEMBER_NAME(colorRotation,"colorRotation");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DisclaimerState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"bgColors") ) { return ::hx::Val( bgColors ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colorRotation") ) { return ::hx::Val( colorRotation ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DisclaimerState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"needVer") ) { outValue = ( needVer ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { outValue = ( leftState ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currChanges") ) { outValue = ( currChanges ); return true; }
	}
	return false;
}

::hx::Val DisclaimerState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"bgColors") ) { bgColors=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"colorRotation") ) { colorRotation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool DisclaimerState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"needVer") ) { needVer=ioValue.Cast< ::String >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"leftState") ) { leftState=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currChanges") ) { currChanges=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void DisclaimerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bgColors",55,b1,8d,9b));
	outFields->push(HX_("colorRotation",c1,05,49,0b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DisclaimerState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DisclaimerState_obj,bgColors),HX_("bgColors",55,b1,8d,9b)},
	{::hx::fsInt,(int)offsetof(DisclaimerState_obj,colorRotation),HX_("colorRotation",c1,05,49,0b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo DisclaimerState_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &DisclaimerState_obj::leftState,HX_("leftState",8a,64,eb,98)},
	{::hx::fsString,(void *) &DisclaimerState_obj::needVer,HX_("needVer",ad,ff,17,aa)},
	{::hx::fsString,(void *) &DisclaimerState_obj::currChanges,HX_("currChanges",31,b0,21,ba)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String DisclaimerState_obj_sMemberFields[] = {
	HX_("bgColors",55,b1,8d,9b),
	HX_("colorRotation",c1,05,49,0b),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

static void DisclaimerState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisclaimerState_obj::leftState,"leftState");
	HX_MARK_MEMBER_NAME(DisclaimerState_obj::needVer,"needVer");
	HX_MARK_MEMBER_NAME(DisclaimerState_obj::currChanges,"currChanges");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DisclaimerState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisclaimerState_obj::leftState,"leftState");
	HX_VISIT_MEMBER_NAME(DisclaimerState_obj::needVer,"needVer");
	HX_VISIT_MEMBER_NAME(DisclaimerState_obj::currChanges,"currChanges");
};

#endif

::hx::Class DisclaimerState_obj::__mClass;

static ::String DisclaimerState_obj_sStaticFields[] = {
	HX_("leftState",8a,64,eb,98),
	HX_("needVer",ad,ff,17,aa),
	HX_("currChanges",31,b0,21,ba),
	::String(null())
};

void DisclaimerState_obj::__register()
{
	DisclaimerState_obj _hx_dummy;
	DisclaimerState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DisclaimerState",96,9c,d8,5b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DisclaimerState_obj::__GetStatic;
	__mClass->mSetStaticField = &DisclaimerState_obj::__SetStatic;
	__mClass->mMarkFunc = DisclaimerState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(DisclaimerState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DisclaimerState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DisclaimerState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DisclaimerState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DisclaimerState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DisclaimerState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void DisclaimerState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_be445f7d438e7400_15_boot)
HXDLIN(  15)		leftState = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_be445f7d438e7400_17_boot)
HXDLIN(  17)		needVer = HX_("IDFK LOL",29,9e,7f,9c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_be445f7d438e7400_18_boot)
HXDLIN(  18)		currChanges = HX_("dk",87,57,00,00);
            	}
}

