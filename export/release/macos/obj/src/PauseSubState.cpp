#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_BGSprite
#include <BGSprite.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
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
#ifndef INCLUDED_Highscore
#include <Highscore.h>
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
#ifndef INCLUDED_PauseSubState
#include <PauseSubState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_system_frontEnds_CameraFrontEnd
#include <flixel/system/frontEnds/CameraFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_17d383cbce329512_17_new,"PauseSubState","new",0x00d575d9,"PauseSubState.new","PauseSubState.hx",17,0x953dc7b7)
static const ::String _hx_array_data_08e59567_2[] = {
	HX_("Downscroll",0f,4a,85,46),HX_("Middlescroll",42,a5,d6,f5),HX_("Ghost Tapping",44,6c,9f,40),HX_("Biros soundcloud",37,10,8b,28),HX_("BACK",27,a2,d1,2b),
};
static const ::String _hx_array_data_08e59567_3[] = {
	HX_("Normal",47,e6,fd,64),HX_("Hard",0b,5b,e1,2f),HX_("BACK",27,a2,d1,2b),
};
static const ::String _hx_array_data_08e59567_4[] = {
	HX_("Change Difficulty",eb,7e,37,a6),HX_("Toggle Practice Mode",7c,8b,b4,6b),HX_("Quick Settings",b6,a0,94,69),HX_("Botplay",5b,23,fb,2e),HX_("BACK",27,a2,d1,2b),
};
static const ::String _hx_array_data_08e59567_5[] = {
	HX_("Resume",cd,dd,18,3d),HX_("Restart Song",06,b6,fe,13),HX_("Settings",03,39,ef,64),HX_("Exit to menu",82,87,9a,a9),
};
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_128_update,"PauseSubState","update",0x6d53d230,"PauseSubState.update","PauseSubState.hx",128,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_230_destroy,"PauseSubState","destroy",0xc2ba82f3,"PauseSubState.destroy","PauseSubState.hx",230,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_237_changeSelection,"PauseSubState","changeSelection",0x8f960fb5,"PauseSubState.changeSelection","PauseSubState.hx",237,0x953dc7b7)
HX_LOCAL_STACK_FRAME(_hx_pos_17d383cbce329512_265_regenMenu,"PauseSubState","regenMenu",0xfb4cc935,"PauseSubState.regenMenu","PauseSubState.hx",265,0x953dc7b7)

void PauseSubState_obj::__construct(Float x,Float y){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_17_new)
HXLINE(  32)		this->curSelected = 0;
HXLINE(  31)		this->quickSettings = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_2,5);
HXLINE(  30)		this->difficultyChoices = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_3,3);
HXLINE(  23)		this->settingChoices = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_4,5);
HXLINE(  22)		this->menuItemsOG = ::Array_obj< ::String >::fromData( _hx_array_data_08e59567_5,4);
HXLINE(  21)		this->menuItems = ::Array_obj< ::String >::__new(0);
HXLINE(  42)		super::__construct();
HXLINE(  43)		this->menuItems = this->menuItemsOG;
HXLINE(  52)		 ::flixel::_hx_system::FlxSound _hx_tmp =  ::flixel::_hx_system::FlxSound_obj::__alloc( HX_CTX );
HXDLIN(  52)		::String library = null();
HXDLIN(  52)		this->pauseMusic = _hx_tmp->loadEmbedded(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + HX_("breakfast",db,b2,0c,49)) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),true,true,null());
HXLINE(  53)		this->pauseMusic->set_volume(( (Float)(0) ));
HXLINE(  54)		 ::flixel::_hx_system::FlxSound _hx_tmp1 = this->pauseMusic;
HXDLIN(  54)		 ::flixel::math::FlxRandom _hx_tmp2 = ::flixel::FlxG_obj::random;
HXDLIN(  54)		_hx_tmp1->play(false,_hx_tmp2->_hx_int(0,::Std_obj::_hx_int((this->pauseMusic->_length / ( (Float)(2) ))),null()),null());
HXLINE(  56)		::flixel::FlxG_obj::sound->list->add(this->pauseMusic).StaticCast<  ::flixel::_hx_system::FlxSound >();
HXLINE(  58)		 ::BGSprite bg =  ::BGSprite_obj::__alloc( HX_CTX ,HX_("roompasue",37,64,6b,16),-660,-500,((Float)0.9),((Float)0.9),null(),null());
HXLINE(  59)		bg->setGraphicSize(::Std_obj::_hx_int((bg->get_width() * ((Float)0.5))),null());
HXLINE(  60)		this->add(bg);
HXLINE(  62)		 ::flixel::text::FlxText levelInfo =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,15,0,HX_("",00,00,00,00),32,null());
HXLINE(  63)		levelInfo->set_text(( (::String)((levelInfo->text + ::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic))) ));
HXLINE(  64)		levelInfo->scrollFactor->set(null(),null());
HXLINE(  65)		levelInfo->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  66)		levelInfo->updateHitbox();
HXLINE(  67)		this->add(levelInfo);
HXLINE(  69)		 ::flixel::text::FlxText levelDifficulty =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,47,0,HX_("",00,00,00,00),32,null());
HXLINE(  70)		::String levelDifficulty1 = levelDifficulty->text;
HXDLIN(  70)		levelDifficulty->set_text((levelDifficulty1 + ::CoolUtil_obj::difficultyString()));
HXLINE(  71)		levelDifficulty->scrollFactor->set(null(),null());
HXLINE(  72)		levelDifficulty->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  73)		levelDifficulty->updateHitbox();
HXLINE(  74)		this->add(levelDifficulty);
HXLINE(  76)		 ::flixel::text::FlxText blueballedTxt =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,79,0,HX_("",00,00,00,00),32,null());
HXLINE(  77)		blueballedTxt->set_text((HX_("Blueballed: ",fe,a6,48,b4) + ::PlayState_obj::deathCounter));
HXLINE(  78)		blueballedTxt->scrollFactor->set(null(),null());
HXLINE(  79)		blueballedTxt->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  80)		blueballedTxt->updateHitbox();
HXLINE(  81)		this->add(blueballedTxt);
HXLINE(  83)		this->practiceText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,116,0,HX_("PRACTICE MODE",e8,14,ba,86),32,null());
HXLINE(  84)		this->practiceText->scrollFactor->set(null(),null());
HXLINE(  85)		this->practiceText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  86)		 ::flixel::text::FlxText _hx_tmp3 = this->practiceText;
HXDLIN(  86)		int _hx_tmp4 = ::flixel::FlxG_obj::width;
HXDLIN(  86)		_hx_tmp3->set_x((( (Float)(_hx_tmp4) ) - (this->practiceText->get_width() + 20)));
HXLINE(  87)		this->practiceText->updateHitbox();
HXLINE(  88)		this->practiceText->set_visible(::PlayState_obj::practiceMode);
HXLINE(  89)		this->add(this->practiceText);
HXLINE(  91)		this->botplayText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,20,(::flixel::FlxG_obj::height - 40),0,HX_("BOTPLAY",5b,cf,7d,e1),32,null());
HXLINE(  92)		this->botplayText->scrollFactor->set(null(),null());
HXLINE(  93)		this->botplayText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,null(),null(),null(),null(),null());
HXLINE(  94)		 ::flixel::text::FlxText _hx_tmp5 = this->botplayText;
HXDLIN(  94)		int _hx_tmp6 = ::flixel::FlxG_obj::width;
HXDLIN(  94)		_hx_tmp5->set_x((( (Float)(_hx_tmp6) ) - (this->botplayText->get_width() + 20)));
HXLINE(  95)		this->botplayText->updateHitbox();
HXLINE(  96)		this->botplayText->set_visible(::PlayState_obj::cpuControlled);
HXLINE(  97)		this->add(this->botplayText);
HXLINE(  99)		blueballedTxt->set_alpha(( (Float)(0) ));
HXLINE( 100)		levelDifficulty->set_alpha(( (Float)(0) ));
HXLINE( 101)		levelInfo->set_alpha(( (Float)(0) ));
HXLINE( 103)		int _hx_tmp7 = ::flixel::FlxG_obj::width;
HXDLIN( 103)		levelInfo->set_x((( (Float)(_hx_tmp7) ) - (levelInfo->get_width() + 20)));
HXLINE( 104)		int _hx_tmp8 = ::flixel::FlxG_obj::width;
HXDLIN( 104)		levelDifficulty->set_x((( (Float)(_hx_tmp8) ) - (levelDifficulty->get_width() + 20)));
HXLINE( 105)		int _hx_tmp9 = ::flixel::FlxG_obj::width;
HXDLIN( 105)		blueballedTxt->set_x((( (Float)(_hx_tmp9) ) - (blueballedTxt->get_width() + 20)));
HXLINE( 107)		::flixel::tweens::FlxTween_obj::tween(levelInfo, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),20)
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.3))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 108)		::flixel::tweens::FlxTween_obj::tween(levelDifficulty, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(levelDifficulty->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.5))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 109)		::flixel::tweens::FlxTween_obj::tween(blueballedTxt, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("y",79,00,00,00),(blueballedTxt->y + 5))
            			->setFixed(1,HX_("alpha",5e,a7,96,21),1)),((Float)0.4), ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("startDelay",c1,af,3d,f3),((Float)0.7))
            			->setFixed(1,HX_("ease",ee,8b,0c,43),::flixel::tweens::FlxEase_obj::quartInOut_dyn())));
HXLINE( 111)		this->grpMenuShit =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 112)		this->add(this->grpMenuShit);
HXLINE( 114)		{
HXLINE( 114)			int _g = 0;
HXDLIN( 114)			int _g1 = this->menuItems->length;
HXDLIN( 114)			while((_g < _g1)){
HXLINE( 114)				_g = (_g + 1);
HXDLIN( 114)				int i = (_g - 1);
HXLINE( 116)				 ::Alphabet songText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 117)				songText->isMenuItem = true;
HXLINE( 118)				songText->targetY = ( (Float)(i) );
HXLINE( 119)				this->grpMenuShit->add(songText).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 122)		this->changeSelection(null());
HXLINE( 124)		this->set_cameras(::Array_obj< ::Dynamic>::__new(1)->init(0,::flixel::FlxG_obj::cameras->list->__get((::flixel::FlxG_obj::cameras->list->length - 1)).StaticCast<  ::flixel::FlxCamera >()));
            	}

Dynamic PauseSubState_obj::__CreateEmpty() { return new PauseSubState_obj; }

void *PauseSubState_obj::_hx_vtable = 0;

Dynamic PauseSubState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PauseSubState_obj > _hx_result = new PauseSubState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool PauseSubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x519cdafb) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x519cdafb;
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

void PauseSubState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_128_update)
HXLINE( 129)		if ((this->pauseMusic->_volume < ((Float)0.5))) {
HXLINE( 130)			 ::flixel::_hx_system::FlxSound fh = this->pauseMusic;
HXDLIN( 130)			fh->set_volume((fh->_volume + (((Float)0.01) * elapsed)));
            		}
HXLINE( 132)		this->super::update(elapsed);
HXLINE( 134)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 135)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 136)		bool accepted = ::PlayerSettings_obj::player1->controls->_accept->check();
HXLINE( 138)		if (upP) {
HXLINE( 140)			this->changeSelection(-1);
            		}
HXLINE( 142)		if (downP) {
HXLINE( 144)			this->changeSelection(1);
            		}
HXLINE( 147)		if (accepted) {
HXLINE( 149)			::String daSelected = this->menuItems->__get(this->curSelected);
HXLINE( 150)			{
HXLINE( 150)				int _g = 0;
HXDLIN( 150)				int _g1 = (this->difficultyChoices->length - 1);
HXDLIN( 150)				while((_g < _g1)){
HXLINE( 150)					_g = (_g + 1);
HXDLIN( 150)					int i = (_g - 1);
HXLINE( 151)					if ((this->difficultyChoices->__get(i) == daSelected)) {
HXLINE( 152)						::String name = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
HXLINE( 153)						::String poop = ::Highscore_obj::formatSong(name,this->curSelected);
HXLINE( 154)						::PlayState_obj::SONG = ::Song_obj::loadFromJson(poop,name);
HXLINE( 155)						::PlayState_obj::storyDifficulty = this->curSelected;
HXLINE( 156)						::MusicBeatState_obj::resetState();
HXLINE( 157)						::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 158)						::PlayState_obj::changedDifficulty = true;
HXLINE( 159)						::PlayState_obj::cpuControlled = false;
HXLINE( 160)						return;
            					}
            				}
            			}
HXLINE( 164)			::String _hx_switch_0 = daSelected;
            			if (  (_hx_switch_0==HX_("BACK",27,a2,d1,2b)) ){
HXLINE( 223)				this->menuItems = this->menuItemsOG;
HXLINE( 224)				this->regenMenu();
HXLINE( 222)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Biros soundcloud",37,10,8b,28)) ){
HXLINE( 198)				::CoolUtil_obj::browserLoad(HX_("https://soundcloud.com/nadeko_jr",e8,73,1f,71));
HXDLIN( 198)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Botplay",5b,23,fb,2e)) ){
HXLINE( 179)				::PlayState_obj::cpuControlled = !(::PlayState_obj::cpuControlled);
HXLINE( 180)				::PlayState_obj::usedPractice = true;
HXLINE( 181)				this->botplayText->set_visible(::PlayState_obj::cpuControlled);
HXLINE( 178)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Change Difficulty",eb,7e,37,a6)) ){
HXLINE( 169)				this->menuItems = this->difficultyChoices;
HXLINE( 170)				this->regenMenu();
HXLINE( 168)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Downscroll",0f,4a,85,46)) ){
HXLINE( 192)				::ClientPrefs_obj::downScroll = !(::ClientPrefs_obj::downScroll);
HXLINE( 193)				::MusicBeatState_obj::switchState( ::PlayState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 191)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Exit to menu",82,87,9a,a9)) ){
HXLINE( 200)				::PlayState_obj::deathCounter = 0;
HXLINE( 201)				::PlayState_obj::seenCutscene = false;
HXLINE( 202)				if (::PlayState_obj::isStoryMode) {
HXLINE( 203)					::MusicBeatState_obj::switchState( ::StoryMenuState_obj::__alloc( HX_CTX ,null(),null()));
            				}
            				else {
HXLINE( 205)					::MusicBeatState_obj::switchState( ::FreeplayState_obj::__alloc( HX_CTX ,null(),null()));
            				}
HXLINE( 207)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 207)				::String library = null();
HXDLIN( 207)				_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + (HX_("menu_",e0,a5,c3,05) + ::flixel::FlxG_obj::random->_hx_int(1,2,null()))) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),null(),null(),null());
HXLINE( 208)				::PlayState_obj::usedPractice = false;
HXLINE( 209)				::PlayState_obj::changedDifficulty = false;
HXLINE( 210)				::PlayState_obj::cpuControlled = false;
HXLINE( 199)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Ghost Tapping",44,6c,9f,40)) ){
HXLINE( 195)				::ClientPrefs_obj::ghostTapping = !(::ClientPrefs_obj::ghostTapping);
HXLINE( 196)				::MusicBeatState_obj::switchState( ::PlayState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 194)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Hard",0b,5b,e1,2f)) ){
HXLINE( 218)				::String _hx_tmp = (( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase() + HX_("-hard",98,49,10,2e));
HXDLIN( 218)				::PlayState_obj::SONG = ::Song_obj::loadFromJson(_hx_tmp,( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase());
HXLINE( 219)				::PlayState_obj::storyDifficulty = 2;
HXLINE( 221)				{
HXLINE( 221)					 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 221)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 221)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 217)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Middlescroll",42,a5,d6,f5)) ){
HXLINE( 189)				::ClientPrefs_obj::middleScroll = !(::ClientPrefs_obj::middleScroll);
HXLINE( 190)				::MusicBeatState_obj::switchState( ::PlayState_obj::__alloc( HX_CTX ,null(),null()));
HXLINE( 188)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Normal",47,e6,fd,64)) ){
HXLINE( 213)				::String _hx_tmp = ( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase();
HXDLIN( 213)				::PlayState_obj::SONG = ::Song_obj::loadFromJson(_hx_tmp,( (::String)(::PlayState_obj::SONG->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic)) ).toLowerCase());
HXLINE( 214)				::PlayState_obj::storyDifficulty = 1;
HXLINE( 216)				{
HXLINE( 216)					 ::flixel::FlxState nextState =  ::PlayState_obj::__alloc( HX_CTX ,null(),null());
HXDLIN( 216)					if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE( 216)						::flixel::FlxG_obj::game->_requestedState = nextState;
            					}
            				}
HXLINE( 212)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Quick Settings",b6,a0,94,69)) ){
HXLINE( 186)				this->menuItems = this->quickSettings;
HXLINE( 187)				this->regenMenu();
HXLINE( 185)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Restart Song",06,b6,fe,13)) ){
HXLINE( 176)				::MusicBeatState_obj::resetState();
HXLINE( 177)				::flixel::FlxG_obj::sound->music->set_volume(( (Float)(0) ));
HXLINE( 175)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Resume",cd,dd,18,3d)) ){
HXLINE( 167)				this->close();
HXDLIN( 167)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Settings",03,39,ef,64)) ){
HXLINE( 183)				this->menuItems = this->settingChoices;
HXLINE( 184)				this->regenMenu();
HXLINE( 182)				goto _hx_goto_7;
            			}
            			if (  (_hx_switch_0==HX_("Toggle Practice Mode",7c,8b,b4,6b)) ){
HXLINE( 172)				::PlayState_obj::practiceMode = !(::PlayState_obj::practiceMode);
HXLINE( 173)				::PlayState_obj::usedPractice = true;
HXLINE( 174)				this->practiceText->set_visible(::PlayState_obj::practiceMode);
HXLINE( 171)				goto _hx_goto_7;
            			}
            			_hx_goto_7:;
            		}
            	}


void PauseSubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_230_destroy)
HXLINE( 231)		this->pauseMusic->destroy();
HXLINE( 233)		this->super::destroy();
            	}


void PauseSubState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_17d383cbce329512_237_changeSelection)
HXLINE( 238)		 ::PauseSubState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 238)		_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 240)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 240)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 242)		if ((this->curSelected < 0)) {
HXLINE( 243)			this->curSelected = (this->menuItems->length - 1);
            		}
HXLINE( 244)		if ((this->curSelected >= this->menuItems->length)) {
HXLINE( 245)			this->curSelected = 0;
            		}
HXLINE( 247)		int bullShit = 0;
HXLINE( 249)		{
HXLINE( 249)			int _g = 0;
HXDLIN( 249)			::Array< ::Dynamic> _g1 = this->grpMenuShit->members;
HXDLIN( 249)			while((_g < _g1->length)){
HXLINE( 249)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 249)				_g = (_g + 1);
HXLINE( 251)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 252)				bullShit = (bullShit + 1);
HXLINE( 254)				item->set_alpha(((Float)0.6));
HXLINE( 257)				if ((item->targetY == 0)) {
HXLINE( 259)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(PauseSubState_obj,changeSelection,(void))

void PauseSubState_obj::regenMenu(){
            	HX_GC_STACKFRAME(&_hx_pos_17d383cbce329512_265_regenMenu)
HXLINE( 266)		{
HXLINE( 266)			int _g = 0;
HXDLIN( 266)			int _g1 = this->grpMenuShit->members->get_length();
HXDLIN( 266)			while((_g < _g1)){
HXLINE( 266)				_g = (_g + 1);
HXDLIN( 266)				int i = (_g - 1);
HXLINE( 267)				this->grpMenuShit->remove(Dynamic( this->grpMenuShit->members->__get(0)).StaticCast<  ::Alphabet >(),true).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 269)		{
HXLINE( 269)			int _g2 = 0;
HXDLIN( 269)			int _g3 = this->menuItems->length;
HXDLIN( 269)			while((_g2 < _g3)){
HXLINE( 269)				_g2 = (_g2 + 1);
HXDLIN( 269)				int i = (_g2 - 1);
HXLINE( 270)				 ::Alphabet item =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(((70 * i) + 30)) ),this->menuItems->__get(i),true,false,null(),null());
HXLINE( 271)				item->isMenuItem = true;
HXLINE( 272)				item->targetY = ( (Float)(i) );
HXLINE( 273)				this->grpMenuShit->add(item).StaticCast<  ::Alphabet >();
            			}
            		}
HXLINE( 275)		this->curSelected = 0;
HXLINE( 276)		this->changeSelection(null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(PauseSubState_obj,regenMenu,(void))

 ::flixel::FlxCamera PauseSubState_obj::transCamera;


::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__new(Float x,Float y) {
	::hx::ObjectPtr< PauseSubState_obj > __this = new PauseSubState_obj();
	__this->__construct(x,y);
	return __this;
}

::hx::ObjectPtr< PauseSubState_obj > PauseSubState_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y) {
	PauseSubState_obj *__this = (PauseSubState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PauseSubState_obj), true, "PauseSubState"));
	*(void **)__this = PauseSubState_obj::_hx_vtable;
	__this->__construct(x,y);
	return __this;
}

PauseSubState_obj::PauseSubState_obj()
{
}

void PauseSubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PauseSubState);
	HX_MARK_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_MARK_MEMBER_NAME(menuItems,"menuItems");
	HX_MARK_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_MARK_MEMBER_NAME(settingChoices,"settingChoices");
	HX_MARK_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_MARK_MEMBER_NAME(quickSettings,"quickSettings");
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_MARK_MEMBER_NAME(practiceText,"practiceText");
	HX_MARK_MEMBER_NAME(botplayText,"botplayText");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PauseSubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpMenuShit,"grpMenuShit");
	HX_VISIT_MEMBER_NAME(menuItems,"menuItems");
	HX_VISIT_MEMBER_NAME(menuItemsOG,"menuItemsOG");
	HX_VISIT_MEMBER_NAME(settingChoices,"settingChoices");
	HX_VISIT_MEMBER_NAME(difficultyChoices,"difficultyChoices");
	HX_VISIT_MEMBER_NAME(quickSettings,"quickSettings");
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(pauseMusic,"pauseMusic");
	HX_VISIT_MEMBER_NAME(practiceText,"practiceText");
	HX_VISIT_MEMBER_NAME(botplayText,"botplayText");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PauseSubState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { return ::hx::Val( menuItems ); }
		if (HX_FIELD_EQ(inName,"regenMenu") ) { return ::hx::Val( regenMenu_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { return ::hx::Val( pauseMusic ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { return ::hx::Val( grpMenuShit ); }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { return ::hx::Val( menuItemsOG ); }
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		if (HX_FIELD_EQ(inName,"botplayText") ) { return ::hx::Val( botplayText ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { return ::hx::Val( practiceText ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"quickSettings") ) { return ::hx::Val( quickSettings ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"settingChoices") ) { return ::hx::Val( settingChoices ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { return ::hx::Val( difficultyChoices ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PauseSubState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { outValue = ( transCamera ); return true; }
	}
	return false;
}

::hx::Val PauseSubState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"menuItems") ) { menuItems=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"pauseMusic") ) { pauseMusic=inValue.Cast<  ::flixel::_hx_system::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"grpMenuShit") ) { grpMenuShit=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"menuItemsOG") ) { menuItemsOG=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"botplayText") ) { botplayText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"practiceText") ) { practiceText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"quickSettings") ) { quickSettings=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"settingChoices") ) { settingChoices=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"difficultyChoices") ) { difficultyChoices=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PauseSubState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"transCamera") ) { transCamera=ioValue.Cast<  ::flixel::FlxCamera >(); return true; }
	}
	return false;
}

void PauseSubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpMenuShit",04,32,b8,f0));
	outFields->push(HX_("menuItems",e1,15,e5,5c));
	outFields->push(HX_("menuItemsOG",39,55,bf,30));
	outFields->push(HX_("settingChoices",42,4e,4f,54));
	outFields->push(HX_("difficultyChoices",f7,9c,00,1a));
	outFields->push(HX_("quickSettings",f0,f4,50,9e));
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("pauseMusic",cf,6d,d3,e5));
	outFields->push(HX_("practiceText",08,73,28,84));
	outFields->push(HX_("botplayText",c8,cd,df,87));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PauseSubState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PauseSubState_obj,grpMenuShit),HX_("grpMenuShit",04,32,b8,f0)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItems),HX_("menuItems",e1,15,e5,5c)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,menuItemsOG),HX_("menuItemsOG",39,55,bf,30)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,settingChoices),HX_("settingChoices",42,4e,4f,54)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,difficultyChoices),HX_("difficultyChoices",f7,9c,00,1a)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(PauseSubState_obj,quickSettings),HX_("quickSettings",f0,f4,50,9e)},
	{::hx::fsInt,(int)offsetof(PauseSubState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::_hx_system::FlxSound */ ,(int)offsetof(PauseSubState_obj,pauseMusic),HX_("pauseMusic",cf,6d,d3,e5)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,practiceText),HX_("practiceText",08,73,28,84)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PauseSubState_obj,botplayText),HX_("botplayText",c8,cd,df,87)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PauseSubState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::FlxCamera */ ,(void *) &PauseSubState_obj::transCamera,HX_("transCamera",ed,e0,5c,21)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PauseSubState_obj_sMemberFields[] = {
	HX_("grpMenuShit",04,32,b8,f0),
	HX_("menuItems",e1,15,e5,5c),
	HX_("menuItemsOG",39,55,bf,30),
	HX_("settingChoices",42,4e,4f,54),
	HX_("difficultyChoices",f7,9c,00,1a),
	HX_("quickSettings",f0,f4,50,9e),
	HX_("curSelected",fb,eb,ab,32),
	HX_("pauseMusic",cf,6d,d3,e5),
	HX_("practiceText",08,73,28,84),
	HX_("botplayText",c8,cd,df,87),
	HX_("update",09,86,05,87),
	HX_("destroy",fa,2c,86,24),
	HX_("changeSelection",bc,98,b5,48),
	HX_("regenMenu",fc,42,dc,26),
	::String(null()) };

static void PauseSubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PauseSubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PauseSubState_obj::transCamera,"transCamera");
};

#endif

::hx::Class PauseSubState_obj::__mClass;

static ::String PauseSubState_obj_sStaticFields[] = {
	HX_("transCamera",ed,e0,5c,21),
	::String(null())
};

void PauseSubState_obj::__register()
{
	PauseSubState_obj _hx_dummy;
	PauseSubState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PauseSubState",67,95,e5,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PauseSubState_obj::__GetStatic;
	__mClass->mSetStaticField = &PauseSubState_obj::__SetStatic;
	__mClass->mMarkFunc = PauseSubState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PauseSubState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PauseSubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PauseSubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PauseSubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PauseSubState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

