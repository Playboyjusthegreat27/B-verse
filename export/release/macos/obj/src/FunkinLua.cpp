#include <hxcpp.h>

#ifndef INCLUDED_FunkinLua
#include <FunkinLua.h>
#endif
#ifndef INCLUDED_LuaSprite
#include <LuaSprite.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_ac4b451d003459d8_25_new,"FunkinLua","new",0x0f3d1459,"FunkinLua.new","FunkinLua.hx",25,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_716_resetSpriteTag,"FunkinLua","resetSpriteTag",0x3513682d,"FunkinLua.resetSpriteTag","FunkinLua.hx",716,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_735_cancelTween,"FunkinLua","cancelTween",0xb2cc778a,"FunkinLua.cancelTween","FunkinLua.hx",735,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_742_tweenShit,"FunkinLua","tweenShit",0xb737bc84,"FunkinLua.tweenShit","FunkinLua.hx",742,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_757_cancelTimer,"FunkinLua","cancelTimer",0xa9918ce4,"FunkinLua.cancelTimer","FunkinLua.hx",757,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_765_getFlxEaseByString,"FunkinLua","getFlxEaseByString",0x2e3003d9,"FunkinLua.getFlxEaseByString","FunkinLua.hx",765,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_835_call,"FunkinLua","call",0x3eec4e85,"FunkinLua.call","FunkinLua.hx",835,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_848_set,"FunkinLua","set",0x0f40df9b,"FunkinLua.set","FunkinLua.hx",848,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_859_setTweensActive,"FunkinLua","setTweensActive",0xf59effc9,"FunkinLua.setTweensActive","FunkinLua.hx",859,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_871_stop,"FunkinLua","stop",0x498e25e9,"FunkinLua.stop","FunkinLua.hx",871,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_26_boot,"FunkinLua","boot",0x3e4dba19,"FunkinLua.boot","FunkinLua.hx",26,0x00117937)
HX_LOCAL_STACK_FRAME(_hx_pos_ac4b451d003459d8_27_boot,"FunkinLua","boot",0x3e4dba19,"FunkinLua.boot","FunkinLua.hx",27,0x00117937)

void FunkinLua_obj::__construct(::String script){
            	HX_GC_STACKFRAME(&_hx_pos_ac4b451d003459d8_25_new)
HXLINE(  39)		this->timers =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  38)		this->accessedProps =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  37)		this->sprites =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  36)		this->tweens =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  33)		this->lePlayState = null();
            	}

Dynamic FunkinLua_obj::__CreateEmpty() { return new FunkinLua_obj; }

void *FunkinLua_obj::_hx_vtable = 0;

Dynamic FunkinLua_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FunkinLua_obj > _hx_result = new FunkinLua_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FunkinLua_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x574d0d5f;
}

void FunkinLua_obj::resetSpriteTag(::String tag){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_716_resetSpriteTag)
HXLINE( 717)		if (!(this->sprites->exists(tag))) {
HXLINE( 718)			return;
            		}
HXLINE( 721)		 ::LuaSprite pee = ( ( ::LuaSprite)(this->sprites->get(tag)) );
HXLINE( 722)		pee->kill();
HXLINE( 723)		if (pee->wasAdded) {
HXLINE( 724)			if (pee->isInFront) {
HXLINE( 725)				this->lePlayState->foregroundGroup->remove(pee,true).StaticCast<  ::flixel::FlxSprite >();
            			}
            			else {
HXLINE( 727)				this->lePlayState->backgroundGroup->remove(pee,true).StaticCast<  ::flixel::FlxSprite >();
            			}
            		}
HXLINE( 730)		pee->destroy();
HXLINE( 731)		this->sprites->remove(tag);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,resetSpriteTag,(void))

void FunkinLua_obj::cancelTween(::String tag){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_735_cancelTween)
HXDLIN( 735)		if (this->tweens->exists(tag)) {
HXLINE( 736)			( ( ::flixel::tweens::FlxTween)(this->tweens->get(tag)) )->cancel();
HXLINE( 737)			( ( ::flixel::tweens::FlxTween)(this->tweens->get(tag)) )->destroy();
HXLINE( 738)			this->tweens->remove(tag);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,cancelTween,(void))

 ::Dynamic FunkinLua_obj::tweenShit(::String tag,::String vars){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_742_tweenShit)
HXLINE( 743)		this->cancelTween(tag);
HXLINE( 744)		::Array< ::String > variables = ::StringTools_obj::replace(vars,HX_(" ",20,00,00,00),HX_("",00,00,00,00)).split(HX_(".",2e,00,00,00));
HXLINE( 745)		 ::Dynamic sexyProp = ::Reflect_obj::getProperty(this->lePlayState,variables->__get(0));
HXLINE( 746)		bool _hx_tmp;
HXDLIN( 746)		if (::hx::IsNull( sexyProp )) {
HXLINE( 746)			_hx_tmp = this->sprites->exists(variables->__get(0));
            		}
            		else {
HXLINE( 746)			_hx_tmp = false;
            		}
HXDLIN( 746)		if (_hx_tmp) {
HXLINE( 747)			sexyProp = this->sprites->get(variables->__get(0));
            		}
HXLINE( 750)		{
HXLINE( 750)			int _g = 1;
HXDLIN( 750)			int _g1 = variables->length;
HXDLIN( 750)			while((_g < _g1)){
HXLINE( 750)				_g = (_g + 1);
HXDLIN( 750)				int i = (_g - 1);
HXLINE( 751)				sexyProp = ::Reflect_obj::getProperty(sexyProp,variables->__get(i));
            			}
            		}
HXLINE( 753)		return sexyProp;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunkinLua_obj,tweenShit,return )

void FunkinLua_obj::cancelTimer(::String tag){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_757_cancelTimer)
HXDLIN( 757)		if (this->timers->exists(tag)) {
HXLINE( 758)			( ( ::flixel::util::FlxTimer)(this->timers->get(tag)) )->cancel();
HXLINE( 759)			( ( ::flixel::util::FlxTimer)(this->timers->get(tag)) )->destroy();
HXLINE( 760)			this->timers->remove(tag);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,cancelTimer,(void))

 ::Dynamic FunkinLua_obj::getFlxEaseByString(::String __o_ease){
            		::String ease = __o_ease;
            		if (::hx::IsNull(__o_ease)) ease = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_765_getFlxEaseByString)
HXLINE( 766)		::String _hx_switch_0 = ease.toLowerCase();
            		if (  (_hx_switch_0==HX_("backin",cc,4d,99,4a)) ){
HXLINE( 767)			return ::flixel::tweens::FlxEase_obj::backIn_dyn();
HXDLIN( 767)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("backinout",42,fa,a0,07)) ){
HXLINE( 768)			return ::flixel::tweens::FlxEase_obj::backInOut_dyn();
HXDLIN( 768)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("backout",c7,58,8f,fb)) ){
HXLINE( 769)			return ::flixel::tweens::FlxEase_obj::backOut_dyn();
HXDLIN( 769)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("bouncein",6d,53,b0,4c)) ){
HXLINE( 770)			return ::flixel::tweens::FlxEase_obj::bounceIn_dyn();
HXDLIN( 770)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("bounceinout",41,6f,66,e6)) ){
HXLINE( 771)			return ::flixel::tweens::FlxEase_obj::bounceInOut_dyn();
HXDLIN( 771)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("bounceout",06,40,9d,cd)) ){
HXLINE( 772)			return ::flixel::tweens::FlxEase_obj::bounceOut_dyn();
HXDLIN( 772)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("circin",7c,6f,0d,56)) ){
HXLINE( 773)			return ::flixel::tweens::FlxEase_obj::circIn_dyn();
HXDLIN( 773)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("circinout",92,06,0d,e1)) ){
HXLINE( 774)			return ::flixel::tweens::FlxEase_obj::circInOut_dyn();
HXDLIN( 774)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("circout",17,b1,b8,f5)) ){
HXLINE( 775)			return ::flixel::tweens::FlxEase_obj::circOut_dyn();
HXDLIN( 775)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("cubein",1a,80,4a,34)) ){
HXLINE( 776)			return ::flixel::tweens::FlxEase_obj::cubeIn_dyn();
HXDLIN( 776)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("cubeinout",b4,ac,c9,c2)) ){
HXLINE( 777)			return ::flixel::tweens::FlxEase_obj::cubeInOut_dyn();
HXDLIN( 777)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("cubeout",b9,2a,ea,8c)) ){
HXLINE( 778)			return ::flixel::tweens::FlxEase_obj::cubeOut_dyn();
HXDLIN( 778)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("elasticin",fa,3c,61,27)) ){
HXLINE( 779)			return ::flixel::tweens::FlxEase_obj::elasticIn_dyn();
HXDLIN( 779)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("elasticinout",d4,3b,a0,39)) ){
HXLINE( 780)			return ::flixel::tweens::FlxEase_obj::elasticInOut_dyn();
HXDLIN( 780)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("elasticout",d9,b1,b8,4d)) ){
HXLINE( 781)			return ::flixel::tweens::FlxEase_obj::elasticOut_dyn();
HXDLIN( 781)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("expoin",97,89,7d,c4)) ){
HXLINE( 782)			return ::flixel::tweens::FlxEase_obj::expoIn_dyn();
HXDLIN( 782)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("expoinout",57,ef,01,5a)) ){
HXLINE( 783)			return ::flixel::tweens::FlxEase_obj::expoInOut_dyn();
HXDLIN( 783)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("expoout",9c,6e,5f,29)) ){
HXLINE( 784)			return ::flixel::tweens::FlxEase_obj::expoOut_dyn();
HXDLIN( 784)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("quadin",6c,94,9f,cc)) ){
HXLINE( 785)			return ::flixel::tweens::FlxEase_obj::quadIn_dyn();
HXDLIN( 785)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("quadinout",a2,97,0c,bc)) ){
HXLINE( 786)			return ::flixel::tweens::FlxEase_obj::quadInOut_dyn();
HXDLIN( 786)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("quadout",27,de,06,3f)) ){
HXLINE( 787)			return ::flixel::tweens::FlxEase_obj::quadOut_dyn();
HXDLIN( 787)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("quartin",a4,9b,4b,48)) ){
HXLINE( 788)			return ::flixel::tweens::FlxEase_obj::quartIn_dyn();
HXDLIN( 788)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("quartinout",6a,e3,62,99)) ){
HXLINE( 789)			return ::flixel::tweens::FlxEase_obj::quartInOut_dyn();
HXDLIN( 789)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("quartout",ef,27,e1,f9)) ){
HXLINE( 790)			return ::flixel::tweens::FlxEase_obj::quartOut_dyn();
HXDLIN( 790)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("quintin",30,65,db,e0)) ){
HXLINE( 791)			return ::flixel::tweens::FlxEase_obj::quintIn_dyn();
HXDLIN( 791)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("quintinout",5e,99,a0,bc)) ){
HXLINE( 792)			return ::flixel::tweens::FlxEase_obj::quintInOut_dyn();
HXDLIN( 792)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("quintout",e3,b8,21,df)) ){
HXLINE( 793)			return ::flixel::tweens::FlxEase_obj::quintOut_dyn();
HXDLIN( 793)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("sinein",72,df,1f,b9)) ){
HXLINE( 794)			return ::flixel::tweens::FlxEase_obj::sineIn_dyn();
HXDLIN( 794)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("sineinout",5c,74,84,36)) ){
HXLINE( 795)			return ::flixel::tweens::FlxEase_obj::sineInOut_dyn();
HXDLIN( 795)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("sineout",61,38,c8,42)) ){
HXLINE( 796)			return ::flixel::tweens::FlxEase_obj::sineOut_dyn();
HXDLIN( 796)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("smootherstepin",8c,7c,27,7b)) ){
HXLINE( 800)			return ::flixel::tweens::FlxEase_obj::smootherStepIn_dyn();
HXDLIN( 800)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("smootherstepinout",82,83,8c,0a)) ){
HXLINE( 801)			return ::flixel::tweens::FlxEase_obj::smootherStepInOut_dyn();
HXDLIN( 801)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("smootherstepout",07,12,6a,47)) ){
HXLINE( 802)			return ::flixel::tweens::FlxEase_obj::smootherStepOut_dyn();
HXDLIN( 802)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("smoothstepin",df,0c,da,16)) ){
HXLINE( 797)			return ::flixel::tweens::FlxEase_obj::smoothStepIn_dyn();
HXDLIN( 797)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("smoothstepinout",0f,a9,b0,af)) ){
HXLINE( 798)			return ::flixel::tweens::FlxEase_obj::smoothStepInOut_dyn();
HXDLIN( 798)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_0==HX_("smoothstepout",54,ca,f5,e7)) ){
HXLINE( 799)			return ::flixel::tweens::FlxEase_obj::smoothStepInOut_dyn();
HXDLIN( 799)			goto _hx_goto_6;
            		}
            		_hx_goto_6:;
HXLINE( 804)		return ::flixel::tweens::FlxEase_obj::linear_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,getFlxEaseByString,return )

 ::Dynamic FunkinLua_obj::call(::String event,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_835_call)
HXDLIN( 835)		return ::FunkinLua_obj::Function_Continue;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunkinLua_obj,call,return )

void FunkinLua_obj::set(::String variable, ::Dynamic data){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_848_set)
            	}


HX_DEFINE_DYNAMIC_FUNC2(FunkinLua_obj,set,(void))

void FunkinLua_obj::setTweensActive(bool value){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_859_setTweensActive)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FunkinLua_obj,setTweensActive,(void))

void FunkinLua_obj::stop(){
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_871_stop)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FunkinLua_obj,stop,(void))

int FunkinLua_obj::Function_Stop;

int FunkinLua_obj::Function_Continue;


::hx::ObjectPtr< FunkinLua_obj > FunkinLua_obj::__new(::String script) {
	::hx::ObjectPtr< FunkinLua_obj > __this = new FunkinLua_obj();
	__this->__construct(script);
	return __this;
}

::hx::ObjectPtr< FunkinLua_obj > FunkinLua_obj::__alloc(::hx::Ctx *_hx_ctx,::String script) {
	FunkinLua_obj *__this = (FunkinLua_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FunkinLua_obj), true, "FunkinLua"));
	*(void **)__this = FunkinLua_obj::_hx_vtable;
	__this->__construct(script);
	return __this;
}

FunkinLua_obj::FunkinLua_obj()
{
}

void FunkinLua_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FunkinLua);
	HX_MARK_MEMBER_NAME(lePlayState,"lePlayState");
	HX_MARK_MEMBER_NAME(tweens,"tweens");
	HX_MARK_MEMBER_NAME(sprites,"sprites");
	HX_MARK_MEMBER_NAME(accessedProps,"accessedProps");
	HX_MARK_MEMBER_NAME(timers,"timers");
	HX_MARK_END_CLASS();
}

void FunkinLua_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lePlayState,"lePlayState");
	HX_VISIT_MEMBER_NAME(tweens,"tweens");
	HX_VISIT_MEMBER_NAME(sprites,"sprites");
	HX_VISIT_MEMBER_NAME(accessedProps,"accessedProps");
	HX_VISIT_MEMBER_NAME(timers,"timers");
}

::hx::Val FunkinLua_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"stop") ) { return ::hx::Val( stop_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"tweens") ) { return ::hx::Val( tweens ); }
		if (HX_FIELD_EQ(inName,"timers") ) { return ::hx::Val( timers ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { return ::hx::Val( sprites ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tweenShit") ) { return ::hx::Val( tweenShit_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lePlayState") ) { return ::hx::Val( lePlayState ); }
		if (HX_FIELD_EQ(inName,"cancelTween") ) { return ::hx::Val( cancelTween_dyn() ); }
		if (HX_FIELD_EQ(inName,"cancelTimer") ) { return ::hx::Val( cancelTimer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accessedProps") ) { return ::hx::Val( accessedProps ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetSpriteTag") ) { return ::hx::Val( resetSpriteTag_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setTweensActive") ) { return ::hx::Val( setTweensActive_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getFlxEaseByString") ) { return ::hx::Val( getFlxEaseByString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FunkinLua_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"Function_Stop") ) { outValue = ( Function_Stop ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"Function_Continue") ) { outValue = ( Function_Continue ); return true; }
	}
	return false;
}

::hx::Val FunkinLua_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tweens") ) { tweens=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timers") ) { timers=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"sprites") ) { sprites=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"lePlayState") ) { lePlayState=inValue.Cast<  ::PlayState >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"accessedProps") ) { accessedProps=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FunkinLua_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"Function_Stop") ) { Function_Stop=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"Function_Continue") ) { Function_Continue=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void FunkinLua_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lePlayState",c4,0d,f9,81));
	outFields->push(HX_("tweens",a8,73,24,29));
	outFields->push(HX_("sprites",ce,a8,8a,5f));
	outFields->push(HX_("accessedProps",6d,6d,dc,c1));
	outFields->push(HX_("timers",0e,0d,d2,1e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FunkinLua_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::PlayState */ ,(int)offsetof(FunkinLua_obj,lePlayState),HX_("lePlayState",c4,0d,f9,81)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FunkinLua_obj,tweens),HX_("tweens",a8,73,24,29)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FunkinLua_obj,sprites),HX_("sprites",ce,a8,8a,5f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FunkinLua_obj,accessedProps),HX_("accessedProps",6d,6d,dc,c1)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(FunkinLua_obj,timers),HX_("timers",0e,0d,d2,1e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FunkinLua_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &FunkinLua_obj::Function_Stop,HX_("Function_Stop",c9,a5,e8,d3)},
	{::hx::fsInt,(void *) &FunkinLua_obj::Function_Continue,HX_("Function_Continue",ae,85,11,8b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FunkinLua_obj_sMemberFields[] = {
	HX_("lePlayState",c4,0d,f9,81),
	HX_("tweens",a8,73,24,29),
	HX_("sprites",ce,a8,8a,5f),
	HX_("accessedProps",6d,6d,dc,c1),
	HX_("timers",0e,0d,d2,1e),
	HX_("resetSpriteTag",86,2b,7a,b0),
	HX_("cancelTween",91,12,99,b7),
	HX_("tweenShit",cb,b7,19,83),
	HX_("cancelTimer",eb,27,5e,ae),
	HX_("getFlxEaseByString",b2,e7,5d,b6),
	HX_("call",9e,18,ba,41),
	HX_("set",a2,9b,57,00),
	HX_("setTweensActive",50,2a,23,74),
	HX_("stop",02,f0,5b,4c),
	::String(null()) };

static void FunkinLua_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FunkinLua_obj::Function_Stop,"Function_Stop");
	HX_MARK_MEMBER_NAME(FunkinLua_obj::Function_Continue,"Function_Continue");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FunkinLua_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FunkinLua_obj::Function_Stop,"Function_Stop");
	HX_VISIT_MEMBER_NAME(FunkinLua_obj::Function_Continue,"Function_Continue");
};

#endif

::hx::Class FunkinLua_obj::__mClass;

static ::String FunkinLua_obj_sStaticFields[] = {
	HX_("Function_Stop",c9,a5,e8,d3),
	HX_("Function_Continue",ae,85,11,8b),
	::String(null())
};

void FunkinLua_obj::__register()
{
	FunkinLua_obj _hx_dummy;
	FunkinLua_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FunkinLua",e7,f3,7b,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FunkinLua_obj::__GetStatic;
	__mClass->mSetStaticField = &FunkinLua_obj::__SetStatic;
	__mClass->mMarkFunc = FunkinLua_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FunkinLua_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FunkinLua_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FunkinLua_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FunkinLua_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FunkinLua_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FunkinLua_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FunkinLua_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_26_boot)
HXDLIN(  26)		Function_Stop = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_ac4b451d003459d8_27_boot)
HXDLIN(  27)		Function_Continue = 0;
            	}
}

