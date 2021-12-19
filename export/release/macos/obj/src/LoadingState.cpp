#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_LoadingState
#include <LoadingState.h>
#endif
#ifndef INCLUDED_MultiCallback
#include <MultiCallback.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
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
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_WeekData
#include <WeekData.h>
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Path
#include <haxe/io/Path.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise_lime_utils_AssetLibrary
#include <lime/app/Promise_lime_utils_AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_AssetManifest
#include <lime/utils/AssetManifest.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_media_Sound
#include <openfl/media/Sound.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IAssetCache
#include <openfl/utils/IAssetCache.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7b9d652bf7289928_19_new,"LoadingState","new",0x2bad3187,"LoadingState.new","LoadingState.hx",19,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_78_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",78,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_63_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",63,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_44_create,"LoadingState","create",0x65cff835,"LoadingState.create","LoadingState.hx",44,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_85_checkLoadSong,"LoadingState","checkLoadSong",0xc27149ea,"LoadingState.checkLoadSong","LoadingState.hx",85,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_94_checkLoadSong,"LoadingState","checkLoadSong",0xc27149ea,"LoadingState.checkLoadSong","LoadingState.hx",94,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_99_checkLibrary,"LoadingState","checkLibrary",0xd141a10c,"LoadingState.checkLibrary","LoadingState.hx",99,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_108_checkLibrary,"LoadingState","checkLibrary",0xd141a10c,"LoadingState.checkLibrary","LoadingState.hx",108,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_114_update,"LoadingState","update",0x70c61742,"LoadingState.update","LoadingState.hx",114,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_131_onLoad,"LoadingState","onLoad",0xd402341e,"LoadingState.onLoad","LoadingState.hx",131,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_188_destroy,"LoadingState","destroy",0xc344ada1,"LoadingState.destroy","LoadingState.hx",188,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_140_getSongPath,"LoadingState","getSongPath",0xa60766f7,"LoadingState.getSongPath","LoadingState.hx",140,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_145_getVocalPath,"LoadingState","getVocalPath",0xfda3e53d,"LoadingState.getVocalPath","LoadingState.hx",145,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_150_loadAndSwitchState,"LoadingState","loadAndSwitchState",0xbf595d65,"LoadingState.loadAndSwitchState","LoadingState.hx",150,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_154_getNextState,"LoadingState","getNextState",0xdef1eea1,"LoadingState.getNextState","LoadingState.hx",154,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_232_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",232,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_254_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",254,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_195_initSongsManifest,"LoadingState","initSongsManifest",0xe6a6ff04,"LoadingState.initSongsManifest","LoadingState.hx",195,0x53ff9bc9)
HX_LOCAL_STACK_FRAME(_hx_pos_7b9d652bf7289928_21_boot,"LoadingState","boot",0x03f7252b,"LoadingState.boot","LoadingState.hx",21,0x53ff9bc9)

void LoadingState_obj::__construct( ::flixel::FlxState target,bool stopMusic){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_19_new)
HXLINE(  32)		this->targetShit = ((Float)0);
HXLINE(  30)		this->stopMusic = false;
HXLINE(  36)		super::__construct(null(),null());
HXLINE(  37)		this->target = target;
HXLINE(  38)		this->stopMusic = stopMusic;
            	}

Dynamic LoadingState_obj::__CreateEmpty() { return new LoadingState_obj; }

void *LoadingState_obj::_hx_vtable = 0;

Dynamic LoadingState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< LoadingState_obj > _hx_result = new LoadingState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LoadingState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x2a8fb4d5) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x2a8fb4d5;
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

void LoadingState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_1, ::LoadingState,_gthis) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetLibrary lib){
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,introComplete) HXARGC(1)
            			void _hx_run( ::flixel::util::FlxTimer _){
            				HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_78_create)
HXLINE(  78)				introComplete();
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_63_create)
HXLINE(  64)			_gthis->callbacks =  ::MultiCallback_obj::__alloc( HX_CTX ,_gthis->onLoad_dyn(),null());
HXLINE(  65)			 ::Dynamic introComplete = _gthis->callbacks->add(HX_("introComplete",45,d3,4c,b2));
HXLINE(  66)			if (::hx::IsNotNull( ::PlayState_obj::SONG )) {
HXLINE(  67)				 ::LoadingState _gthis1 = _gthis;
HXDLIN(  67)				_gthis1->checkLoadSong(::LoadingState_obj::getSongPath());
HXLINE(  68)				if (( (bool)(::PlayState_obj::SONG->__Field(HX_("needsVoices",be,05,e9,0d),::hx::paccDynamic)) )) {
HXLINE(  69)					 ::LoadingState _gthis1 = _gthis;
HXDLIN(  69)					_gthis1->checkLoadSong(::LoadingState_obj::getVocalPath());
            				}
            			}
HXLINE(  71)			_gthis->checkLibrary(HX_("shared",a5,5e,2b,1d),null());
HXLINE(  73)			::String directory = ::WeekData_obj::getWeekDirectory();
HXLINE(  74)			_gthis->checkLibrary(directory,null());
HXLINE(  76)			Float fadeTime = ((Float)0.5);
HXLINE(  77)			::flixel::FlxG_obj::camera->fade(::flixel::FlxG_obj::camera->bgColor,fadeTime,true,null(),null());
HXLINE(  78)			 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start((fadeTime + ((Float)1.0)), ::Dynamic(new _hx_Closure_0(introComplete)),null());
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_44_create)
HXDLIN(  44)		 ::LoadingState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  45)		 ::flixel::FlxSprite bg =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null())->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,-3473587,null(),null());
HXLINE(  46)		this->add(bg);
HXLINE(  47)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,0,null());
HXDLIN(  47)		this->funkay = _hx_tmp->loadGraphic(::Paths_obj::getPath(HX_("images/funkay.png",b6,f5,59,91),HX_("IMAGE",3b,57,57,3b),null()),null(),null(),null(),null(),null());
HXLINE(  48)		this->funkay->setGraphicSize(0,::flixel::FlxG_obj::height);
HXLINE(  49)		this->funkay->updateHitbox();
HXLINE(  50)		this->funkay->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  51)		this->add(this->funkay);
HXLINE(  52)		this->funkay->scrollFactor->set(null(),null());
HXLINE(  53)		this->funkay->screenCenter(null());
HXLINE(  55)		this->loadBar =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,0,(::flixel::FlxG_obj::height - 20),null())->makeGraphic(::flixel::FlxG_obj::width,10,-59694,null(),null());
HXLINE(  56)		this->loadBar->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  57)		this->loadBar->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  58)		this->add(this->loadBar);
HXLINE(  60)		::LoadingState_obj::initSongsManifest()->onComplete( ::Dynamic(new _hx_Closure_1(_gthis)));
            	}


void LoadingState_obj::checkLoadSong(::String path){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_85_checkLoadSong)
HXDLIN(  85)		if (!(::openfl::utils::IAssetCache_obj::hasSound(::openfl::utils::Assets_obj::cache,path))) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            			void _hx_run( ::openfl::media::Sound _){
            				HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_94_checkLoadSong)
HXLINE(  94)				callback();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  87)			 ::lime::utils::AssetLibrary library = ::openfl::utils::Assets_obj::getLibrary(HX_("songs",fe,36,c7,80));
HXLINE(  88)			::String symbolPath = ( (::String)(path.split(HX_(":",3a,00,00,00))->pop()) );
HXLINE(  93)			 ::Dynamic callback = this->callbacks->add((HX_("song:",c5,36,c7,80) + path));
HXLINE(  94)			::openfl::utils::Assets_obj::loadSound(path,null())->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(LoadingState_obj,checkLoadSong,(void))

void LoadingState_obj::checkLibrary(::String library, ::Dynamic __o_doCheck){
            		 ::Dynamic doCheck = __o_doCheck;
            		if (::hx::IsNull(__o_doCheck)) doCheck = false;
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_99_checkLibrary)
HXDLIN(  99)		bool _hx_tmp;
HXDLIN(  99)		if (!(!(( (bool)(doCheck) )))) {
HXDLIN(  99)			_hx_tmp = !(::ClientPrefs_obj::lowQuality);
            		}
            		else {
HXDLIN(  99)			_hx_tmp = true;
            		}
HXDLIN(  99)		if (_hx_tmp) {
HXLINE( 100)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 100)			bool _hx_tmp1 = ::openfl::utils::Assets_obj::hasLibrary(library);
HXDLIN( 100)			_hx_tmp(_hx_tmp1,::hx::SourceInfo(HX_("source/LoadingState.hx",55,7f,fd,f0),100,HX_("LoadingState",15,62,ae,41),HX_("checkLibrary",13,df,f6,2c)));
HXLINE( 101)			if (::hx::IsNull( ::openfl::utils::Assets_obj::getLibrary(library) )) {
            				HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,callback) HXARGC(1)
            				void _hx_run( ::openfl::utils::AssetLibrary _){
            					HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_108_checkLibrary)
HXLINE( 108)					callback();
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 104)				if (!(::lime::utils::Assets_obj::libraryPaths->exists(library))) {
HXLINE( 105)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Missing library: ",07,45,01,4f) + library)));
            				}
HXLINE( 107)				 ::Dynamic callback = this->callbacks->add((HX_("library:",df,f4,b1,42) + library));
HXLINE( 108)				::openfl::utils::Assets_obj::loadLibrary(library)->onComplete( ::Dynamic(new _hx_Closure_0(callback)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,checkLibrary,(void))

void LoadingState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_114_update)
HXLINE( 115)		this->super::update(elapsed);
HXLINE( 116)		 ::flixel::FlxSprite _hx_tmp = this->funkay;
HXDLIN( 116)		Float _hx_tmp1 = (((Float)0.88) * ( (Float)(::flixel::FlxG_obj::width) ));
HXDLIN( 116)		Float _hx_tmp2 = this->funkay->get_width();
HXDLIN( 116)		_hx_tmp->setGraphicSize(::Std_obj::_hx_int((_hx_tmp1 + (((Float)0.9) * (_hx_tmp2 - (((Float)0.88) * ( (Float)(::flixel::FlxG_obj::width) )))))),null());
HXLINE( 117)		this->funkay->updateHitbox();
HXLINE( 118)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 120)			 ::flixel::FlxSprite _hx_tmp = this->funkay;
HXDLIN( 120)			_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->funkay->get_width() + 60)),null());
HXLINE( 121)			this->funkay->updateHitbox();
            		}
HXLINE( 124)		if (::hx::IsNotNull( this->callbacks )) {
HXLINE( 125)			this->targetShit = ::flixel::math::FlxMath_obj::remapToRange((( (Float)(this->callbacks->numRemaining) ) / ( (Float)(this->callbacks->length) )),( (Float)(1) ),( (Float)(0) ),( (Float)(0) ),( (Float)(1) ));
HXLINE( 126)			 ::flixel::math::FlxPoint fh = this->loadBar->scale;
HXDLIN( 126)			fh->set_x((fh->x + (((Float)0.5) * (this->targetShit - this->loadBar->scale->x))));
            		}
            	}


void LoadingState_obj::onLoad(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_131_onLoad)
HXLINE( 132)		bool _hx_tmp;
HXDLIN( 132)		if (this->stopMusic) {
HXLINE( 132)			_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 132)			_hx_tmp = false;
            		}
HXDLIN( 132)		if (_hx_tmp) {
HXLINE( 133)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 133)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 135)		::MusicBeatState_obj::switchState(this->target);
            	}


HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,onLoad,(void))

void LoadingState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_188_destroy)
HXLINE( 189)		this->super::destroy();
HXLINE( 191)		this->callbacks = null();
            	}


Float LoadingState_obj::MIN_TIME;

::String LoadingState_obj::getSongPath(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_140_getSongPath)
HXDLIN( 140)		return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase()) + HX_("/Inst.",f9,6e,13,1c)) + HX_("ogg",4f,94,54,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getSongPath,return )

::String LoadingState_obj::getVocalPath(){
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_145_getVocalPath)
HXDLIN( 145)		return (((HX_("songs:assets/songs/",c1,ed,e6,7e) + ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase()) + HX_("/Voices.",1e,f6,e5,90)) + HX_("ogg",4f,94,54,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,getVocalPath,return )

void LoadingState_obj::loadAndSwitchState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_150_loadAndSwitchState)
HXDLIN( 150)		::MusicBeatState_obj::switchState(::LoadingState_obj::getNextState(target,stopMusic));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,loadAndSwitchState,(void))

 ::flixel::FlxState LoadingState_obj::getNextState( ::flixel::FlxState target,::hx::Null< bool >  __o_stopMusic){
            		bool stopMusic = __o_stopMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_154_getNextState)
HXLINE( 155)		::Paths_obj::setCurrentLevel(::WeekData_obj::getWeekDirectory());
HXLINE( 169)		bool _hx_tmp;
HXDLIN( 169)		if (stopMusic) {
HXLINE( 169)			_hx_tmp = ::hx::IsNotNull( ::flixel::FlxG_obj::sound->music );
            		}
            		else {
HXLINE( 169)			_hx_tmp = false;
            		}
HXDLIN( 169)		if (_hx_tmp) {
HXLINE( 170)			 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 170)			_this->cleanup(_this->autoDestroy,true);
            		}
HXLINE( 172)		return target;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(LoadingState_obj,getNextState,return )

 ::lime::app::Future LoadingState_obj::initSongsManifest(){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::lime::utils::AssetManifest manifest){
            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_232_initSongsManifest)
HXLINE( 233)			if (::hx::IsNull( manifest )) {
HXLINE( 235)				promise->error(((HX_("Cannot parse asset manifest for library \"",cf,1e,cc,48) + id) + HX_("\"",22,00,00,00)));
HXLINE( 236)				return;
            			}
HXLINE( 239)			 ::lime::utils::AssetLibrary library = ::lime::utils::AssetLibrary_obj::fromManifest(manifest);
HXLINE( 241)			if (::hx::IsNull( library )) {
HXLINE( 243)				promise->error(((HX_("Cannot open library \"",44,cc,55,e7) + id) + HX_("\"",22,00,00,00)));
            			}
            			else {
HXLINE( 248)				::lime::utils::Assets_obj::libraries->set(id,library);
HXLINE( 249)				library->onChange->add(::lime::utils::Assets_obj::onChange->dispatch_dyn(),null(),null());
HXLINE( 250)				 ::lime::app::Promise_lime_utils_AssetLibrary promise1 = promise;
HXDLIN( 250)				promise1->completeWith(::lime::app::Future_obj::withValue(library));
            			}
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_1,::String,id, ::lime::app::Promise_lime_utils_AssetLibrary,promise) HXARGC(1)
            		void _hx_run( ::Dynamic _){
            			HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_254_initSongsManifest)
HXLINE( 254)			promise->error(((HX_("There is no asset library with an ID of \"",8b,06,e2,9a) + id) + HX_("\"",22,00,00,00)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_7b9d652bf7289928_195_initSongsManifest)
HXLINE( 196)		::String id = HX_("songs",fe,36,c7,80);
HXLINE( 197)		 ::lime::app::Promise_lime_utils_AssetLibrary promise =  ::lime::app::Promise_lime_utils_AssetLibrary_obj::__alloc( HX_CTX );
HXLINE( 199)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(id);
HXLINE( 201)		if (::hx::IsNotNull( library )) {
HXLINE( 203)			return ::lime::app::Future_obj::withValue(library);
            		}
HXLINE( 206)		::String path = id;
HXLINE( 207)		::String rootPath = null();
HXLINE( 210)		 ::haxe::ds::StringMap libraryPaths = ::lime::utils::Assets_obj::libraryPaths;
HXLINE( 211)		if (libraryPaths->exists(id)) {
HXLINE( 213)			path = libraryPaths->get_string(id);
HXLINE( 214)			rootPath = ::haxe::io::Path_obj::directory(path);
            		}
            		else {
HXLINE( 218)			if (::StringTools_obj::endsWith(path,HX_(".bundle",30,4a,b8,4e))) {
HXLINE( 220)				rootPath = path;
HXLINE( 221)				path = (path + HX_("/library.json",2a,a7,07,47));
            			}
            			else {
HXLINE( 225)				rootPath = ::haxe::io::Path_obj::directory(path);
            			}
HXLINE( 228)			path = ::lime::utils::Assets_obj::_hx___cacheBreak(path);
            		}
HXLINE( 231)		::lime::utils::AssetManifest_obj::loadFromFile(path,rootPath)->onComplete( ::Dynamic(new _hx_Closure_0(id,promise)))->onError( ::Dynamic(new _hx_Closure_1(id,promise)));
HXLINE( 257)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(LoadingState_obj,initSongsManifest,return )


::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__new( ::flixel::FlxState target,bool stopMusic) {
	::hx::ObjectPtr< LoadingState_obj > __this = new LoadingState_obj();
	__this->__construct(target,stopMusic);
	return __this;
}

::hx::ObjectPtr< LoadingState_obj > LoadingState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::FlxState target,bool stopMusic) {
	LoadingState_obj *__this = (LoadingState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(LoadingState_obj), true, "LoadingState"));
	*(void **)__this = LoadingState_obj::_hx_vtable;
	__this->__construct(target,stopMusic);
	return __this;
}

LoadingState_obj::LoadingState_obj()
{
}

void LoadingState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(LoadingState);
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(stopMusic,"stopMusic");
	HX_MARK_MEMBER_NAME(callbacks,"callbacks");
	HX_MARK_MEMBER_NAME(targetShit,"targetShit");
	HX_MARK_MEMBER_NAME(funkay,"funkay");
	HX_MARK_MEMBER_NAME(loadBar,"loadBar");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void LoadingState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(stopMusic,"stopMusic");
	HX_VISIT_MEMBER_NAME(callbacks,"callbacks");
	HX_VISIT_MEMBER_NAME(targetShit,"targetShit");
	HX_VISIT_MEMBER_NAME(funkay,"funkay");
	HX_VISIT_MEMBER_NAME(loadBar,"loadBar");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val LoadingState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"funkay") ) { return ::hx::Val( funkay ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoad") ) { return ::hx::Val( onLoad_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadBar") ) { return ::hx::Val( loadBar ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { return ::hx::Val( stopMusic ); }
		if (HX_FIELD_EQ(inName,"callbacks") ) { return ::hx::Val( callbacks ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { return ::hx::Val( targetShit ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"checkLibrary") ) { return ::hx::Val( checkLibrary_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkLoadSong") ) { return ::hx::Val( checkLoadSong_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool LoadingState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getSongPath") ) { outValue = getSongPath_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getVocalPath") ) { outValue = getVocalPath_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getNextState") ) { outValue = getNextState_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"initSongsManifest") ) { outValue = initSongsManifest_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"loadAndSwitchState") ) { outValue = loadAndSwitchState_dyn(); return true; }
	}
	return false;
}

::hx::Val LoadingState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::FlxState >(); return inValue; }
		if (HX_FIELD_EQ(inName,"funkay") ) { funkay=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"loadBar") ) { loadBar=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stopMusic") ) { stopMusic=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"callbacks") ) { callbacks=inValue.Cast<  ::MultiCallback >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetShit") ) { targetShit=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LoadingState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("stopMusic",43,09,9d,20));
	outFields->push(HX_("callbacks",0e,f3,bf,a6));
	outFields->push(HX_("targetShit",b1,6b,83,a6));
	outFields->push(HX_("funkay",44,ab,4f,6f));
	outFields->push(HX_("loadBar",4d,2b,d5,08));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo LoadingState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxState */ ,(int)offsetof(LoadingState_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsBool,(int)offsetof(LoadingState_obj,stopMusic),HX_("stopMusic",43,09,9d,20)},
	{::hx::fsObject /*  ::MultiCallback */ ,(int)offsetof(LoadingState_obj,callbacks),HX_("callbacks",0e,f3,bf,a6)},
	{::hx::fsFloat,(int)offsetof(LoadingState_obj,targetShit),HX_("targetShit",b1,6b,83,a6)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,funkay),HX_("funkay",44,ab,4f,6f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(LoadingState_obj,loadBar),HX_("loadBar",4d,2b,d5,08)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo LoadingState_obj_sStaticStorageInfo[] = {
	{::hx::fsFloat,(void *) &LoadingState_obj::MIN_TIME,HX_("MIN_TIME",3a,05,70,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String LoadingState_obj_sMemberFields[] = {
	HX_("target",51,f3,ec,86),
	HX_("stopMusic",43,09,9d,20),
	HX_("callbacks",0e,f3,bf,a6),
	HX_("targetShit",b1,6b,83,a6),
	HX_("funkay",44,ab,4f,6f),
	HX_("loadBar",4d,2b,d5,08),
	HX_("create",fc,66,0f,7c),
	HX_("checkLoadSong",03,52,52,a5),
	HX_("checkLibrary",13,df,f6,2c),
	HX_("update",09,86,05,87),
	HX_("onLoad",e5,a2,41,ea),
	HX_("destroy",fa,2c,86,24),
	::String(null()) };

static void LoadingState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LoadingState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LoadingState_obj::MIN_TIME,"MIN_TIME");
};

#endif

::hx::Class LoadingState_obj::__mClass;

static ::String LoadingState_obj_sStaticFields[] = {
	HX_("MIN_TIME",3a,05,70,2a),
	HX_("getSongPath",d0,06,1e,5e),
	HX_("getVocalPath",44,23,59,59),
	HX_("loadAndSwitchState",ac,5a,a7,a6),
	HX_("getNextState",a8,2c,a7,3a),
	HX_("initSongsManifest",9d,87,b0,e7),
	::String(null())
};

void LoadingState_obj::__register()
{
	LoadingState_obj _hx_dummy;
	LoadingState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("LoadingState",15,62,ae,41);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &LoadingState_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LoadingState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(LoadingState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(LoadingState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< LoadingState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LoadingState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LoadingState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LoadingState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void LoadingState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_7b9d652bf7289928_21_boot)
HXDLIN(  21)		MIN_TIME = ((Float)1.0);
            	}
}

