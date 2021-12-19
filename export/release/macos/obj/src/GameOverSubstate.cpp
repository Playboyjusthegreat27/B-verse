#include <hxcpp.h>

#ifndef INCLUDED_Boyfriend
#include <Boyfriend.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_Conductor
#include <Conductor.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_FreeplayState
#include <FreeplayState.h>
#endif
#ifndef INCLUDED_GameOverSubstate
#include <GameOverSubstate.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_StoryMenuState
#include <StoryMenuState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxCameraFollowStyle
#include <flixel/FlxCameraFollowStyle.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_SoundChannel
#include <openfl/media/SoundChannel.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b2ae8d30512793fc_13_new,"GameOverSubstate","new",0xba5265a9,"GameOverSubstate.new","GameOverSubstate.hx",13,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_60_update,"GameOverSubstate","update",0x4cd2a460,"GameOverSubstate.update","GameOverSubstate.hx",60,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_110_beatHit,"GameOverSubstate","beatHit",0xc1b25846,"GameOverSubstate.beatHit","GameOverSubstate.hx",110,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_118_coolStartDeath,"GameOverSubstate","coolStartDeath",0x265fa8f2,"GameOverSubstate.coolStartDeath","GameOverSubstate.hx",118,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_126_endBullshit,"GameOverSubstate","endBullshit",0xd9747d97,"GameOverSubstate.endBullshit","GameOverSubstate.hx",126,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_136_endBullshit,"GameOverSubstate","endBullshit",0xd9747d97,"GameOverSubstate.endBullshit","GameOverSubstate.hx",136,0x01fbc1e7)
HX_LOCAL_STACK_FRAME(_hx_pos_b2ae8d30512793fc_134_endBullshit,"GameOverSubstate","endBullshit",0xd9747d97,"GameOverSubstate.endBullshit","GameOverSubstate.hx",134,0x01fbc1e7)

void GameOverSubstate_obj::__construct(Float x,Float y,Float camX,Float camY){
            	HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_13_new)
HXLINE( 115)		this->isEnding = false;
HXLINE(  20)		this->stageSuffix = HX_("",00,00,00,00);
HXLINE(  18)		this->updateCamera = false;
HXLINE(  24)		::String daBf = HX_("",00,00,00,00);
HXLINE(  25)		::String _hx_switch_0 = ::PlayState_obj::curStage;
            		if (  (_hx_switch_0==HX_("school",74,b8,c8,40)) ||  (_hx_switch_0==HX_("schoolEvil",28,a1,f5,f7)) ){
HXLINE(  28)			this->stageSuffix = HX_("-pixel",39,03,b3,c0);
HXLINE(  29)			daBf = HX_("bf-pixel-dead",34,d0,3d,c4);
HXLINE(  27)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  31)			daBf = HX_("bf",c4,55,00,00);
            		}
            		_hx_goto_0:;
HXLINE(  34)		super::__construct();
HXLINE(  36)		::Conductor_obj::songPosition = ( (Float)(0) );
HXLINE(  38)		this->bf =  ::Boyfriend_obj::__alloc( HX_CTX ,x,y,daBf);
HXLINE(  39)		this->add(this->bf);
HXLINE(  41)		Float _hx_tmp = this->bf->getGraphicMidpoint(null())->x;
HXDLIN(  41)		this->camFollow =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,_hx_tmp,this->bf->getGraphicMidpoint(null())->y);
HXLINE(  43)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN(  43)		_hx_tmp1->play(::Paths_obj::sound((HX_("fnf_loss_sfx",6a,36,72,11) + this->stageSuffix),null()),null(),null(),null(),null(),null());
HXLINE(  44)		::Conductor_obj::changeBPM(( (Float)(100) ));
HXLINE(  47)		::flixel::FlxG_obj::camera->scroll->set(null(),null());
HXLINE(  48)		::flixel::FlxG_obj::camera->target = null();
HXLINE(  50)		this->bf->playAnim(HX_("firstDeath",e4,d8,fc,14),null(),null(),null());
HXLINE(  54)		this->camFollowPos =  ::flixel::FlxObject_obj::__alloc( HX_CTX ,0,0,1,1);
HXLINE(  55)		this->camFollowPos->setPosition((::flixel::FlxG_obj::camera->scroll->x + (( (Float)(::flixel::FlxG_obj::camera->width) ) / ( (Float)(2) ))),(::flixel::FlxG_obj::camera->scroll->y + (( (Float)(::flixel::FlxG_obj::camera->height) ) / ( (Float)(2) ))));
HXLINE(  56)		this->add(this->camFollowPos);
            	}

Dynamic GameOverSubstate_obj::__CreateEmpty() { return new GameOverSubstate_obj; }

void *GameOverSubstate_obj::_hx_vtable = 0;

Dynamic GameOverSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GameOverSubstate_obj > _hx_result = new GameOverSubstate_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool GameOverSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7c795c9f) {
		if (inClassId<=(int)0x62817b24) {
			if (inClassId<=(int)0x5661ffbf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x5661ffbf;
			} else {
				return inClassId==(int)0x62817b24;
			}
		} else {
			return inClassId==(int)0x7c795c9f;
		}
	} else {
		if (inClassId<=(int)0x7d3f71b3) {
			return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7d3f71b3;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void GameOverSubstate_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_60_update)
HXLINE(  61)		this->super::update(elapsed);
HXLINE(  63)		if (this->updateCamera) {
HXLINE(  64)			Float lerpVal = ::CoolUtil_obj::boundTo((elapsed * ((Float)0.6)),( (Float)(0) ),( (Float)(1) ));
HXLINE(  65)			Float a = this->camFollowPos->x;
HXDLIN(  65)			Float a1 = this->camFollowPos->y;
HXDLIN(  65)			this->camFollowPos->setPosition((a + (lerpVal * (this->camFollow->x - a))),(a1 + (lerpVal * (this->camFollow->y - a1))));
            		}
HXLINE(  68)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE(  70)			this->endBullshit();
            		}
HXLINE(  73)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  73)		if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE(  75)			{
HXLINE(  75)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN(  75)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE(  76)			::PlayState_obj::deathCounter = 0;
HXLINE(  77)			::PlayState_obj::seenCutscene = false;
HXLINE(  79)			if (::PlayState_obj::isStoryMode) {
HXLINE(  80)				::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            			}
            			else {
HXLINE(  82)				::MusicBeatState_obj::switchState( ::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            			}
HXLINE(  84)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(  84)			::String library = null();
HXDLIN(  84)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + (HX_("menu_",e0,a5,c3,05) + ::flixel::FlxG_obj::random->_hx_int(1,2,null()))) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
            		}
HXLINE(  87)		if ((this->bf->animation->_curAnim->name == HX_("firstDeath",e4,d8,fc,14))) {
HXLINE(  89)			if ((this->bf->animation->_curAnim->curFrame == 12)) {
HXLINE(  91)				::flixel::FlxG_obj::camera->follow(this->camFollowPos,::flixel::FlxCameraFollowStyle_obj::LOCKON_dyn(),1);
HXLINE(  92)				this->updateCamera = true;
            			}
HXLINE(  95)			if (this->bf->animation->_curAnim->finished) {
HXLINE(  97)				this->coolStartDeath(null());
HXLINE(  98)				this->bf->startedDeath = true;
            			}
            		}
HXLINE( 102)		if (::hx::IsNotNull( ::flixel::FlxG_obj::sound->music->_channel )) {
HXLINE( 104)			::Conductor_obj::songPosition = ::flixel::FlxG_obj::sound->music->_time;
            		}
            	}


void GameOverSubstate_obj::beatHit(){
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_110_beatHit)
HXDLIN( 110)		this->super::beatHit();
            	}


void GameOverSubstate_obj::coolStartDeath( ::Dynamic __o_volume){
            		 ::Dynamic volume = __o_volume;
            		if (::hx::IsNull(__o_volume)) volume = 1;
            	HX_STACKFRAME(&_hx_pos_b2ae8d30512793fc_118_coolStartDeath)
HXLINE( 119)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 119)		::String library = null();
HXDLIN( 119)		_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + (HX_("gameOver",66,92,de,b5) + this->stageSuffix)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),volume,null(),null());
HXLINE( 121)		if (::hx::IsEq( ::PlayState_obj::SONG->__Field(HX_("player2",b1,09,15,8a),::hx::paccDynamic),HX_("monster",1a,54,b0,b8) )) {
HXLINE( 122)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 122)			::String library = null();
HXDLIN( 122)			_hx_tmp->play(::Paths_obj::sound((HX_("tankman/tankmanLose",06,d2,11,d8) + ::flixel::FlxG_obj::random->_hx_int(1,7,null())),library),((Float)1.2),null(),null(),null(),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GameOverSubstate_obj,coolStartDeath,(void))

void GameOverSubstate_obj::endBullshit(){
            	HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_126_endBullshit)
HXDLIN( 126)		if (!(this->isEnding)) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer tmr){
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            				void _hx_run(){
            					HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_136_endBullshit)
HXLINE( 136)					::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(( ( ::flixel::FlxState)( ::PlayState_obj::__alloc( HX_CTX ,null(),null())) ),false));
            				}
            				HX_END_LOCAL_FUNC0((void))

            				HX_GC_STACKFRAME(&_hx_pos_b2ae8d30512793fc_134_endBullshit)
HXLINE( 134)				::flixel::FlxG_obj::camera->fade(-16777216,2,false, ::Dynamic(new _hx_Closure_0()),null());
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 128)			this->isEnding = true;
HXLINE( 129)			this->bf->playAnim(HX_("deathConfirm",2c,44,2b,12),true,null(),null());
HXLINE( 130)			{
HXLINE( 130)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 130)				_this->cleanup(_this->autoDestroy,true);
            			}
HXLINE( 131)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 131)			::String library = null();
HXDLIN( 131)			_hx_tmp->play(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + (HX_("gameOverEnd",15,2d,a9,8d) + this->stageSuffix)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null(),null(),null());
HXLINE( 132)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(((Float)0.7), ::Dynamic(new _hx_Closure_1()),null());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(GameOverSubstate_obj,endBullshit,(void))


::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__new(Float x,Float y,Float camX,Float camY) {
	::hx::ObjectPtr< GameOverSubstate_obj > __this = new GameOverSubstate_obj();
	__this->__construct(x,y,camX,camY);
	return __this;
}

::hx::ObjectPtr< GameOverSubstate_obj > GameOverSubstate_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float camX,Float camY) {
	GameOverSubstate_obj *__this = (GameOverSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(GameOverSubstate_obj), true, "GameOverSubstate"));
	*(void **)__this = GameOverSubstate_obj::_hx_vtable;
	__this->__construct(x,y,camX,camY);
	return __this;
}

GameOverSubstate_obj::GameOverSubstate_obj()
{
}

void GameOverSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverSubstate);
	HX_MARK_MEMBER_NAME(bf,"bf");
	HX_MARK_MEMBER_NAME(camFollow,"camFollow");
	HX_MARK_MEMBER_NAME(camFollowPos,"camFollowPos");
	HX_MARK_MEMBER_NAME(updateCamera,"updateCamera");
	HX_MARK_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_MARK_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bf,"bf");
	HX_VISIT_MEMBER_NAME(camFollow,"camFollow");
	HX_VISIT_MEMBER_NAME(camFollowPos,"camFollowPos");
	HX_VISIT_MEMBER_NAME(updateCamera,"updateCamera");
	HX_VISIT_MEMBER_NAME(stageSuffix,"stageSuffix");
	HX_VISIT_MEMBER_NAME(isEnding,"isEnding");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val GameOverSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { return ::hx::Val( bf ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"beatHit") ) { return ::hx::Val( beatHit_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { return ::hx::Val( isEnding ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"camFollow") ) { return ::hx::Val( camFollow ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { return ::hx::Val( stageSuffix ); }
		if (HX_FIELD_EQ(inName,"endBullshit") ) { return ::hx::Val( endBullshit_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"camFollowPos") ) { return ::hx::Val( camFollowPos ); }
		if (HX_FIELD_EQ(inName,"updateCamera") ) { return ::hx::Val( updateCamera ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"coolStartDeath") ) { return ::hx::Val( coolStartDeath_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val GameOverSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bf") ) { bf=inValue.Cast<  ::Boyfriend >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"isEnding") ) { isEnding=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"camFollow") ) { camFollow=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"stageSuffix") ) { stageSuffix=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"camFollowPos") ) { camFollowPos=inValue.Cast<  ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"updateCamera") ) { updateCamera=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bf",c4,55,00,00));
	outFields->push(HX_("camFollow",e0,6e,47,22));
	outFields->push(HX_("camFollowPos",94,32,de,8d));
	outFields->push(HX_("updateCamera",8e,ed,4f,b7));
	outFields->push(HX_("stageSuffix",2f,64,9f,2f));
	outFields->push(HX_("isEnding",71,3f,f2,52));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo GameOverSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Boyfriend */ ,(int)offsetof(GameOverSubstate_obj,bf),HX_("bf",c4,55,00,00)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(GameOverSubstate_obj,camFollow),HX_("camFollow",e0,6e,47,22)},
	{::hx::fsObject /*  ::flixel::FlxObject */ ,(int)offsetof(GameOverSubstate_obj,camFollowPos),HX_("camFollowPos",94,32,de,8d)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,updateCamera),HX_("updateCamera",8e,ed,4f,b7)},
	{::hx::fsString,(int)offsetof(GameOverSubstate_obj,stageSuffix),HX_("stageSuffix",2f,64,9f,2f)},
	{::hx::fsBool,(int)offsetof(GameOverSubstate_obj,isEnding),HX_("isEnding",71,3f,f2,52)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *GameOverSubstate_obj_sStaticStorageInfo = 0;
#endif

static ::String GameOverSubstate_obj_sMemberFields[] = {
	HX_("bf",c4,55,00,00),
	HX_("camFollow",e0,6e,47,22),
	HX_("camFollowPos",94,32,de,8d),
	HX_("updateCamera",8e,ed,4f,b7),
	HX_("stageSuffix",2f,64,9f,2f),
	HX_("update",09,86,05,87),
	HX_("beatHit",7d,ea,04,74),
	HX_("isEnding",71,3f,f2,52),
	HX_("coolStartDeath",9b,db,39,51),
	HX_("endBullshit",4e,f7,81,48),
	::String(null()) };

::hx::Class GameOverSubstate_obj::__mClass;

void GameOverSubstate_obj::__register()
{
	GameOverSubstate_obj _hx_dummy;
	GameOverSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("GameOverSubstate",37,5d,9a,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(GameOverSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< GameOverSubstate_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GameOverSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GameOverSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

