#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_DialogueBoxPsych
#include <DialogueBoxPsych.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_NumTween
#include <flixel/tweens/misc/NumTween.h>
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
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_128129519e640548_17_new,"DialogueBoxPsych","new",0x1a49b57a,"DialogueBoxPsych.new","DialogueBoxPsych.hx",17,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_1[] = {
	HX_("left",07,08,b0,47),HX_("center",d5,25,db,05),HX_("right",dc,0b,64,e9),
};
static const ::String _hx_array_data_c9b73088_2[] = {
	HX_("normal",27,72,69,30),HX_("angry",21,49,e2,22),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_38_addCharacter,"DialogueBoxPsych","addCharacter",0xe55ba4ee,"DialogueBoxPsych.addCharacter","DialogueBoxPsych.hx",38,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_187_spawnCharacters,"DialogueBoxPsych","spawnCharacters",0xbe2056df,"DialogueBoxPsych.spawnCharacters","DialogueBoxPsych.hx",187,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_229_update,"DialogueBoxPsych","update",0xc33c4d2f,"DialogueBoxPsych.update","DialogueBoxPsych.hx",229,0xf6ef1736)
static const ::String _hx_array_data_c9b73088_18[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
static const ::String _hx_array_data_c9b73088_19[] = {
	HX_("",00,00,00,00),HX_("center-",b8,f4,e5,19),
};
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_362_startNextDialog,"DialogueBoxPsych","startNextDialog",0x95e56137,"DialogueBoxPsych.startNextDialog","DialogueBoxPsych.hx",362,0xf6ef1736)
HX_LOCAL_STACK_FRAME(_hx_pos_128129519e640548_411_updateBoxOffsets,"DialogueBoxPsych","updateBoxOffsets",0xb38f5cc4,"DialogueBoxPsych.updateBoxOffsets","DialogueBoxPsych.hx",411,0xf6ef1736)

void DialogueBoxPsych_obj::__construct(::Array< ::String > dialogueList,::String song){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_17_new)
HXLINE( 360)		this->lastBoxType = HX_("",00,00,00,00);
HXLINE( 359)		this->lastCharacter = -1;
HXLINE( 227)		this->daText = null();
HXLINE( 226)		this->scrollSpeed = 4500;
HXLINE( 225)		this->textY = 430;
HXLINE( 224)		this->textX = 90;
HXLINE( 184)		this->dialogueEnded = false;
HXLINE( 183)		this->dialogueStarted = false;
HXLINE(  35)		this->charPositionList = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_1,3);
HXLINE(  34)		this->textBoxTypes = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_2,2);
HXLINE(  32)		this->offsetPos = ((Float)-600);
HXLINE(  31)		this->currentText = 1;
HXLINE(  29)		this->arrayPosition = ::Array_obj< int >::__new(0);
HXLINE(  28)		this->arrayStartPos = ::Array_obj< Float >::__new(0);
HXLINE(  27)		this->arrayCharacters = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  25)		this->textToType = HX_("",00,00,00,00);
HXLINE(  23)		this->bgFade = null();
HXLINE(  20)		this->dialogueList = ::Array_obj< ::String >::__new(0);
HXLINE( 147)		super::__construct(null(),null(),null());
HXLINE( 149)		bool _hx_tmp;
HXDLIN( 149)		if (::hx::IsNotNull( song )) {
HXLINE( 149)			_hx_tmp = (song != HX_("",00,00,00,00));
            		}
            		else {
HXLINE( 149)			_hx_tmp = false;
            		}
HXDLIN( 149)		if (_hx_tmp) {
HXLINE( 150)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 150)			::String library = null();
HXDLIN( 150)			_hx_tmp->playMusic(::Paths_obj::getPath((((HX_("music/",ea,bf,1b,3f) + song) + HX_(".",2e,00,00,00)) + HX_("ogg",4f,94,54,00)),HX_("MUSIC",85,08,49,8e),library),0,null(),null());
HXLINE( 151)			{
HXLINE( 151)				 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 151)				 ::Dynamic onComplete = null();
HXDLIN( 151)				if (::hx::IsNull( _this->_channel )) {
HXLINE( 151)					_this->play(null(),null(),null());
            				}
HXDLIN( 151)				if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 151)					_this->fadeTween->cancel();
            				}
HXDLIN( 151)				_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(( (Float)(0) ),( (Float)(1) ),2, ::Dynamic(::hx::Anon_obj::Create(1)
            					->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            			}
            		}
HXLINE( 154)		 ::flixel::FlxSprite _hx_tmp1 =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,-500,-500,null());
HXDLIN( 154)		this->bgFade = _hx_tmp1->makeGraphic((::flixel::FlxG_obj::width * 2),(::flixel::FlxG_obj::height * 2),-1,null(),null());
HXLINE( 155)		this->bgFade->scrollFactor->set(null(),null());
HXLINE( 156)		this->bgFade->set_visible(true);
HXLINE( 157)		this->bgFade->set_alpha(( (Float)(0) ));
HXLINE( 158)		this->add(this->bgFade);
HXLINE( 160)		this->dialogueList = dialogueList;
HXLINE( 161)		this->spawnCharacters(dialogueList->__get(0).split(HX_(" ",20,00,00,00)));
HXLINE( 163)		this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,70,370,null());
HXLINE( 164)		 ::flixel::FlxSprite _hx_tmp2 = this->box;
HXDLIN( 164)		::String library = null();
HXDLIN( 164)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("speech_bubble",49,db,97,da));
HXDLIN( 164)		bool xmlExists = false;
HXDLIN( 164)		if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 164)			xmlExists = true;
            		}
HXDLIN( 164)		 ::Dynamic _hx_tmp3;
HXDLIN( 164)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 164)			_hx_tmp3 = imageLoaded;
            		}
            		else {
HXLINE( 164)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("speech_bubble",49,db,97,da));
HXDLIN( 164)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 164)				_hx_tmp3 = imageToReturn;
            			}
            			else {
HXLINE( 164)				_hx_tmp3 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN( 164)		::String _hx_tmp4;
HXDLIN( 164)		if (xmlExists) {
HXLINE( 164)			_hx_tmp4 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 164)			_hx_tmp4 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("speech_bubble",49,db,97,da)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 164)		_hx_tmp2->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp3,_hx_tmp4));
HXLINE( 165)		this->box->scrollFactor->set(null(),null());
HXLINE( 166)		this->box->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 167)		this->box->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("speech bubble normal",bd,d5,bc,a7),24,null(),null(),null());
HXLINE( 168)		this->box->animation->addByPrefix(HX_("normalOpen",91,41,38,70),HX_("Speech Bubble Normal Open",0d,59,3f,7c),24,false,null(),null());
HXLINE( 169)		this->box->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("AHH speech bubble",eb,de,b2,20),24,null(),null(),null());
HXLINE( 170)		this->box->animation->addByPrefix(HX_("angryOpen",8b,1d,01,b1),HX_("speech bubble loud open",42,35,10,f0),24,false,null(),null());
HXLINE( 171)		this->box->animation->addByPrefix(HX_("center-normal",df,c0,ab,9c),HX_("speech bubble middle",eb,36,b2,c3),24,null(),null(),null());
HXLINE( 172)		this->box->animation->addByPrefix(HX_("center-normalOpen",49,4c,74,58),HX_("Speech Bubble Middle Open",1f,f1,94,ea),24,false,null(),null());
HXLINE( 173)		this->box->animation->addByPrefix(HX_("center-angry",69,39,92,b0),HX_("AHH Speech Bubble middle",ea,0b,3d,74),24,null(),null(),null());
HXLINE( 174)		this->box->animation->addByPrefix(HX_("center-angryOpen",d3,d1,42,e2),HX_("speech bubble Middle loud open",c3,b9,85,ee),24,false,null(),null());
HXLINE( 175)		this->box->set_visible(false);
HXLINE( 176)		 ::flixel::FlxSprite _hx_tmp5 = this->box;
HXDLIN( 176)		_hx_tmp5->setGraphicSize(::Std_obj::_hx_int((this->box->get_width() * ((Float)0.9))),null());
HXLINE( 177)		this->box->updateHitbox();
HXLINE( 178)		this->add(this->box);
HXLINE( 180)		this->startNextDialog();
            	}

Dynamic DialogueBoxPsych_obj::__CreateEmpty() { return new DialogueBoxPsych_obj; }

void *DialogueBoxPsych_obj::_hx_vtable = 0;

Dynamic DialogueBoxPsych_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DialogueBoxPsych_obj > _hx_result = new DialogueBoxPsych_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool DialogueBoxPsych_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x7ccf8994) {
		if (inClassId<=(int)0x2c01639b) {
			if (inClassId<=(int)0x288ce903) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x288ce903;
			} else {
				return inClassId==(int)0x2c01639b;
			}
		} else {
			return inClassId==(int)0x7ccf8994;
		}
	} else {
		return inClassId==(int)0x7d24723c || inClassId==(int)0x7dab0655;
	}
}

void DialogueBoxPsych_obj::addCharacter( ::flixel::FlxSprite _hx_char,::String name){
            	HX_STACKFRAME(&_hx_pos_128129519e640548_38_addCharacter)
HXLINE(  39)		::String _hx_switch_0 = name;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE(  41)			::String library = null();
HXDLIN(  41)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("dialogue/BF_Dialogue",9c,df,64,be));
HXDLIN(  41)			bool xmlExists = false;
HXDLIN(  41)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/BF_Dialogue",9c,df,64,be)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  41)				xmlExists = true;
            			}
HXDLIN(  41)			 ::Dynamic _hx_tmp;
HXDLIN(  41)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  41)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  41)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("dialogue/BF_Dialogue",9c,df,64,be));
HXDLIN(  41)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  41)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  41)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/BF_Dialogue",9c,df,64,be)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  41)			::String _hx_tmp1;
HXDLIN(  41)			if (xmlExists) {
HXLINE(  41)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/BF_Dialogue",9c,df,64,be)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  41)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/BF_Dialogue",9c,df,64,be)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  41)			_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  42)			_hx_char->animation->addByPrefix(HX_("talkIdle",60,92,75,a7),HX_("BFTalk",10,51,6a,e9),24,true,null(),null());
HXLINE(  43)			_hx_char->animation->addByPrefix(HX_("talk",2c,b9,f6,4c),HX_("bftalkloop",54,1f,52,67),24,true,null(),null());
HXLINE(  44)			_hx_char->animation->addByPrefix(HX_("br",d0,55,00,00),HX_("BFbrrrrr",14,9a,38,3c),24,true,null(),null());
HXLINE(  45)			_hx_char->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("BFangry",dd,28,66,d8),24,true,null(),null());
HXLINE(  46)			_hx_char->animation->addByPrefix(HX_("concerned",7f,90,ef,46),HX_("BFconcerned",3b,fe,a3,14),24,true,null(),null());
HXLINE(  47)			_hx_char->animation->addByPrefix(HX_("confident",8c,2e,54,be),HX_("BFconfident",48,9c,08,8c),24,true,null(),null());
HXLINE(  48)			_hx_char->animation->addByPrefix(HX_("dumbfounded",bb,02,12,89),HX_("BFdumbfounded",77,57,0a,7f),24,true,null(),null());
HXLINE(  49)			_hx_char->animation->addByPrefix(HX_("confused",21,0e,1f,2a),HX_("BFconfused",e5,ab,54,6b),24,true,null(),null());
HXLINE(  50)			_hx_char->animation->addByPrefix(HX_("relieved",00,fc,28,c7),HX_("BFrelieved",c4,99,5e,08),24,true,null(),null());
HXLINE(  51)			_hx_char->animation->addByPrefix(HX_("scared",20,78,2a,3c),HX_("BFscared",e4,5c,0a,5a),24,true,null(),null());
HXLINE(  52)			_hx_char->animation->addByPrefix(HX_("shocked",41,ec,7d,6e),HX_("BFshocked",fd,32,86,74),24,true,null(),null());
HXLINE(  53)			_hx_char->animation->addByPrefix(HX_("worried",30,ba,6f,a5),HX_("BFworried",ec,00,78,ab),24,true,null(),null());
HXLINE(  54)			_hx_char->animation->addByPrefix(HX_("embarrassed",d9,38,74,63),HX_("BFembarrassed",95,8d,6c,59),24,true,null(),null());
HXLINE(  55)			_hx_char->animation->addByPrefix(HX_("excited",9a,59,36,a9),HX_("BFexcited",56,a0,3e,af),24,true,null(),null());
HXLINE(  56)			_hx_char->animation->addByPrefix(HX_("happy",20,65,1f,22),HX_("BFhappy",dc,44,a3,d7),24,true,null(),null());
HXLINE(  57)			_hx_char->animation->addByPrefix(HX_("sad",16,98,57,00),HX_("BFSad",b2,88,f6,2e),24,true,null(),null());
HXLINE(  58)			_hx_char->animation->addByPrefix(HX_("slightycheer",37,57,9d,5f),HX_("BFslightycheer",fb,26,ef,a2),24,true,null(),null());
HXLINE(  59)			_hx_char->animation->addByPrefix(HX_("thinking",30,88,2a,68),HX_("BFthinking",f4,25,60,a9),24,true,null(),null());
HXLINE(  60)			_hx_char->animation->addByPrefix(HX_("upset",27,60,41,a8),HX_("BFupset",e3,3f,c5,5d),24,true,null(),null());
HXLINE(  61)			_hx_char->animation->addByPrefix(HX_("GFtalkIdle",7f,87,1f,aa),HX_("GFtalkloop copy",c6,d6,fa,17),24,true,null(),null());
HXLINE(  62)			_hx_char->animation->addByPrefix(HX_("GFangry",a2,7a,51,a8),HX_("GFangryloop copy",0f,1c,e5,ba),24,true,null(),null());
HXLINE(  63)			_hx_char->animation->addByPrefix(HX_("GFunamused",61,f1,e9,dd),HX_("GFpissedloop copy",3a,51,5b,ec),24,true,null(),null());
HXLINE(  64)			_hx_char->animation->addByPrefix(HX_("GFconcerned",80,16,fc,98),HX_("GFConcerned copy",75,39,0f,b6),24,true,null(),null());
HXLINE(  65)			_hx_char->animation->addByPrefix(HX_("GFnormal",86,91,45,6c),HX_("GFNormal copy",6f,0c,89,df),24,true,null(),null());
HXLINE(  66)			_hx_char->animation->addByPrefix(HX_("GFxcited",d4,9e,1a,7d),HX_("GFexcited copy",9a,54,68,48),24,true,null(),null());
HXLINE(  67)			_hx_char->animation->addByPrefix(HX_("GFconfused",40,03,c9,2c),HX_("GFConfused copy",75,d0,0a,7a),24,true,null(),null());
HXLINE(  68)			_hx_char->set_flipX(!(_hx_char->flipX));
HXLINE(  40)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("bump",f6,0f,20,41)) ){
HXLINE( 129)			::String library = null();
HXDLIN( 129)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("dialogue/Bump_Dialogue",4a,a7,53,03));
HXDLIN( 129)			bool xmlExists = false;
HXDLIN( 129)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Bump_Dialogue",4a,a7,53,03)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 129)				xmlExists = true;
            			}
HXDLIN( 129)			 ::Dynamic _hx_tmp;
HXDLIN( 129)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 129)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 129)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("dialogue/Bump_Dialogue",4a,a7,53,03));
HXDLIN( 129)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 129)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE( 129)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Bump_Dialogue",4a,a7,53,03)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN( 129)			::String _hx_tmp1;
HXDLIN( 129)			if (xmlExists) {
HXLINE( 129)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Bump_Dialogue",4a,a7,53,03)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 129)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Bump_Dialogue",4a,a7,53,03)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 129)			_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 130)			_hx_char->animation->addByPrefix(HX_("AngyBOTH",80,ac,22,6a),HX_("AngyBOTH",80,ac,22,6a),24,true,null(),null());
HXLINE( 131)			_hx_char->animation->addByPrefix(HX_("ConfidentBOTH",ed,04,e9,f6),HX_("ConfidentBOTH",ed,04,e9,f6),24,true,null(),null());
HXLINE( 132)			_hx_char->animation->addByPrefix(HX_("ConfidentSKID",df,92,22,02),HX_("ConfidentSKID",df,92,22,02),24,true,null(),null());
HXLINE( 133)			_hx_char->animation->addByPrefix(HX_("MockinglyBOTH",06,38,c1,8b),HX_("MockinglyBOTH",06,38,c1,8b),24,true,null(),null());
HXLINE( 134)			_hx_char->animation->addByPrefix(HX_("annoyedBOTH",eb,a4,7f,ae),HX_("annoyedBOTH",eb,a4,7f,ae),24,true,null(),null());
HXLINE( 135)			_hx_char->animation->addByPrefix(HX_("annoyedPUMP",12,29,c5,b7),HX_("annoyedPUMP",12,29,c5,b7),24,true,null(),null());
HXLINE( 136)			_hx_char->animation->addByPrefix(HX_("annoyedSKID",dd,32,b9,b9),HX_("annoyedSKID",dd,32,b9,b9),24,true,null(),null());
HXLINE( 137)			_hx_char->set_y((_hx_char->y - ( (Float)(140) )));
HXLINE( 128)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE(  81)			::String library = null();
HXDLIN(  81)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("dialogue/dad_Dialogue",07,b8,2a,1b));
HXDLIN(  81)			bool xmlExists = false;
HXDLIN(  81)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/dad_Dialogue",07,b8,2a,1b)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  81)				xmlExists = true;
            			}
HXDLIN(  81)			 ::Dynamic _hx_tmp;
HXDLIN(  81)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  81)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  81)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("dialogue/dad_Dialogue",07,b8,2a,1b));
HXDLIN(  81)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  81)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  81)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/dad_Dialogue",07,b8,2a,1b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  81)			::String _hx_tmp1;
HXDLIN(  81)			if (xmlExists) {
HXLINE(  81)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/dad_Dialogue",07,b8,2a,1b)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  81)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/dad_Dialogue",07,b8,2a,1b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  81)			_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  82)			_hx_char->animation->addByPrefix(HX_("talkIdle",60,92,75,a7),HX_("DADtalkloop",b7,36,bd,d4),24,true,null(),null());
HXLINE(  83)			_hx_char->animation->addByPrefix(HX_("talk",2c,b9,f6,4c),HX_("DAD",27,d2,33,00),24,true,null(),null());
HXLINE(  84)			_hx_char->animation->addByPrefix(HX_("angryIdle",d5,c0,00,ad),HX_("DADangry",9a,49,80,13),24,true,null(),null());
HXLINE(  85)			_hx_char->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("DADangryloop",fe,c4,45,07),24,true,null(),null());
HXLINE(  86)			_hx_char->animation->addByPrefix(HX_("unamusedIdle",76,18,ed,11),HX_("DADpissed",df,e0,08,23),24,true,null(),null());
HXLINE(  87)			_hx_char->animation->addByPrefix(HX_("unamused",42,fc,3f,db),HX_("DADpissedloop",c3,e2,0b,b7),24,true,null(),null());
HXLINE(  88)			_hx_char->animation->addByPrefix(HX_("smug",6c,a5,56,4c),HX_("DADsmug",13,17,7c,7c),24,true,null(),null());
HXLINE(  89)			_hx_char->animation->addByPrefix(HX_("tired-excited",09,50,8b,f0),HX_("Dad tired-excited",50,80,83,ba),24,true,null(),null());
HXLINE(  90)			_hx_char->animation->addByPrefix(HX_("tired",fc,8a,39,10),HX_("Dad tired",43,9c,44,ce),24,true,null(),null());
HXLINE(  91)			_hx_char->set_y((_hx_char->y - ( (Float)(140) )));
HXLINE(  80)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE(  99)			::String library = null();
HXDLIN(  99)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("dialogue/GF_Dialogue",e1,f7,bc,42));
HXDLIN(  99)			bool xmlExists = false;
HXDLIN(  99)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/GF_Dialogue",e1,f7,bc,42)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  99)				xmlExists = true;
            			}
HXDLIN(  99)			 ::Dynamic _hx_tmp;
HXDLIN(  99)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  99)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  99)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("dialogue/GF_Dialogue",e1,f7,bc,42));
HXDLIN(  99)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  99)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  99)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/GF_Dialogue",e1,f7,bc,42)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  99)			::String _hx_tmp1;
HXDLIN(  99)			if (xmlExists) {
HXLINE(  99)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/GF_Dialogue",e1,f7,bc,42)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  99)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/GF_Dialogue",e1,f7,bc,42)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  99)			_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 100)			_hx_char->animation->addByPrefix(HX_("talkIdle",60,92,75,a7),HX_("GFtalkloop",af,5a,4a,c1),24,true,null(),null());
HXLINE( 101)			_hx_char->animation->addByPrefix(HX_("talk",2c,b9,f6,4c),HX_("GF",1f,3e,00,00),24,true,null(),null());
HXLINE( 102)			_hx_char->animation->addByPrefix(HX_("angryIdle",d5,c0,00,ad),HX_("GFangry",a2,7a,51,a8),24,true,null(),null());
HXLINE( 103)			_hx_char->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("GFangryloop",06,1a,38,16),24,true,null(),null());
HXLINE( 104)			_hx_char->animation->addByPrefix(HX_("unamusedIdle",76,18,ed,11),HX_("GFpissed",d7,96,42,c5),24,true,null(),null());
HXLINE( 105)			_hx_char->animation->addByPrefix(HX_("unamused",42,fc,3f,db),HX_("GFpissedloop",bb,f4,23,bc),24,true,null(),null());
HXLINE( 106)			_hx_char->animation->addByPrefix(HX_("concerned",7f,90,ef,46),HX_("GFConcerned",60,f6,ce,3a),24,true,null(),null());
HXLINE( 107)			_hx_char->animation->addByPrefix(HX_("normal",27,72,69,30),HX_("GFNormal",a6,05,da,a0),24,true,null(),null());
HXLINE( 108)			_hx_char->animation->addByPrefix(HX_("excited",9a,59,36,a9),HX_("GFexcited",5b,ad,f5,cd),24,true,null(),null());
HXLINE( 109)			_hx_char->set_y((_hx_char->y - ( (Float)(140) )));
HXLINE(  98)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("monster",1a,54,b0,b8)) ){
HXLINE(  94)			::String library = null();
HXDLIN(  94)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("dialogue/Monster_Dialogue",74,3b,17,72));
HXDLIN(  94)			bool xmlExists = false;
HXDLIN(  94)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Monster_Dialogue",74,3b,17,72)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  94)				xmlExists = true;
            			}
HXDLIN(  94)			 ::Dynamic _hx_tmp;
HXDLIN(  94)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  94)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  94)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("dialogue/Monster_Dialogue",74,3b,17,72));
HXDLIN(  94)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  94)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  94)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Monster_Dialogue",74,3b,17,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  94)			::String _hx_tmp1;
HXDLIN(  94)			if (xmlExists) {
HXLINE(  94)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Monster_Dialogue",74,3b,17,72)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  94)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Monster_Dialogue",74,3b,17,72)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  94)			_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  95)			_hx_char->animation->addByPrefix(HX_("Monstertalk",26,ba,fe,a2),HX_("Monstertalk",26,ba,fe,a2),24,true,null(),null());
HXLINE(  96)			_hx_char->set_y((_hx_char->y - ( (Float)(140) )));
HXLINE(  93)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("pico",e5,e8,57,4a)) ){
HXLINE( 112)			::String library = null();
HXDLIN( 112)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("dialogue/Pico_Dialogue",7b,b8,e6,f5));
HXDLIN( 112)			bool xmlExists = false;
HXDLIN( 112)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Pico_Dialogue",7b,b8,e6,f5)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 112)				xmlExists = true;
            			}
HXDLIN( 112)			 ::Dynamic _hx_tmp;
HXDLIN( 112)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 112)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE( 112)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("dialogue/Pico_Dialogue",7b,b8,e6,f5));
HXDLIN( 112)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 112)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE( 112)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Pico_Dialogue",7b,b8,e6,f5)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN( 112)			::String _hx_tmp1;
HXDLIN( 112)			if (xmlExists) {
HXLINE( 112)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Pico_Dialogue",7b,b8,e6,f5)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE( 112)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Pico_Dialogue",7b,b8,e6,f5)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN( 112)			_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 113)			_hx_char->animation->addByPrefix(HX_("talkIdle",60,92,75,a7),HX_("PICOtalkloop",75,03,dc,75),24,true,null(),null());
HXLINE( 114)			_hx_char->animation->addByPrefix(HX_("talk",2c,b9,f6,4c),HX_("PICO",e5,b0,18,35),24,true,null(),null());
HXLINE( 115)			_hx_char->animation->addByPrefix(HX_("angryIdle",d5,c0,00,ad),HX_("PICOangry",1c,3a,05,d6),24,true,null(),null());
HXLINE( 116)			_hx_char->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("PICOangryloop",80,1e,1a,61),24,true,null(),null());
HXLINE( 117)			_hx_char->animation->addByPrefix(HX_("unamusedIdle",76,18,ed,11),HX_("PICOpissed",1d,62,d6,94),24,true,null(),null());
HXLINE( 118)			_hx_char->animation->addByPrefix(HX_("calmingdown",85,e7,d0,a4),HX_("PICOcalmingdown",c0,46,53,42),24,true,null(),null());
HXLINE( 119)			_hx_char->animation->addByPrefix(HX_("StrangeSilhouette",54,02,d8,fc),HX_("PICOStrangeSilhouette",cf,ff,5d,b4),24,true,null(),null());
HXLINE( 120)			_hx_char->animation->addByPrefix(HX_("smug",6c,a5,56,4c),HX_("PICOsmug",d1,2c,4a,4e),24,true,null(),null());
HXLINE( 121)			_hx_char->animation->addByPrefix(HX_("mockingly",25,a1,bc,38),HX_("PICOmockingly",a0,2b,ab,d5),24,true,null(),null());
HXLINE( 122)			_hx_char->animation->addByPrefix(HX_("furious",87,b1,b8,42),HX_("PICOfurious",42,17,36,39),24,true,null(),null());
HXLINE( 123)			_hx_char->animation->addByPrefix(HX_("emerging",30,30,a9,8f),HX_("PICOemerging",15,ce,e4,46),24,true,null(),null());
HXLINE( 124)			_hx_char->animation->addByPrefix(HX_("tired",fc,8a,39,10),HX_("PICOtired",f7,7b,5c,c3),24,true,null(),null());
HXLINE( 125)			_hx_char->animation->addByPrefix(HX_("unamused",42,fc,3f,db),HX_("PICOpissedloop",01,db,05,f7),24,true,null(),null());
HXLINE( 126)			_hx_char->set_y((_hx_char->y - ( (Float)(140) )));
HXLINE( 111)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("psychic",d5,09,aa,19)) ){
HXLINE(  71)			::String library = null();
HXDLIN(  71)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("dialogue/Psy_Dialogue",78,87,f5,cd));
HXDLIN(  71)			bool xmlExists = false;
HXDLIN(  71)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Psy_Dialogue",78,87,f5,cd)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  71)				xmlExists = true;
            			}
HXDLIN(  71)			 ::Dynamic _hx_tmp;
HXDLIN(  71)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  71)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  71)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("dialogue/Psy_Dialogue",78,87,f5,cd));
HXDLIN(  71)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  71)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  71)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Psy_Dialogue",78,87,f5,cd)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  71)			::String _hx_tmp1;
HXDLIN(  71)			if (xmlExists) {
HXLINE(  71)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("dialogue/Psy_Dialogue",78,87,f5,cd)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  71)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("dialogue/Psy_Dialogue",78,87,f5,cd)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  71)			_hx_char->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  72)			_hx_char->animation->addByPrefix(HX_("talkIdle",60,92,75,a7),HX_("PSYtalk",22,69,f4,b9),24,true,null(),null());
HXLINE(  73)			_hx_char->animation->addByPrefix(HX_("talk",2c,b9,f6,4c),HX_("PSY loop",ce,7d,86,a5),24,true,null(),null());
HXLINE(  74)			_hx_char->animation->addByPrefix(HX_("angryIdle",d5,c0,00,ad),HX_("PSY angry",77,ee,0f,da),24,true,null(),null());
HXLINE(  75)			_hx_char->animation->addByPrefix(HX_("angry",21,49,e2,22),HX_("PSY ANGRY loop",cd,b4,8e,fc),24,true,null(),null());
HXLINE(  76)			_hx_char->animation->addByPrefix(HX_("unamusedIdle",76,18,ed,11),HX_("PSY unamused",ac,d0,3f,67),24,true,null(),null());
HXLINE(  77)			_hx_char->animation->addByPrefix(HX_("unamused",42,fc,3f,db),HX_("PSY UNAMUSED loop",58,e6,aa,11),24,true,null(),null());
HXLINE(  78)			_hx_char->set_y((_hx_char->y - ( (Float)(140) )));
HXLINE(  70)			goto _hx_goto_3;
            		}
            		_hx_goto_3:;
HXLINE( 140)		_hx_char->animation->play(HX_("talkIdle",60,92,75,a7),true,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(DialogueBoxPsych_obj,addCharacter,(void))

void DialogueBoxPsych_obj::spawnCharacters(::Array< ::String > splitSpace){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_187_spawnCharacters)
HXDLIN( 187)		int _g = 0;
HXDLIN( 187)		int _g1 = splitSpace->length;
HXDLIN( 187)		while((_g < _g1)){
HXDLIN( 187)			_g = (_g + 1);
HXDLIN( 187)			int i = (_g - 1);
HXLINE( 188)			::Array< ::String > splitName = splitSpace->__get(i).split(HX_(":",3a,00,00,00));
HXLINE( 189)			Float y = ( (Float)(180) );
HXLINE( 190)			Float x = ( (Float)(50) );
HXLINE( 191)			 ::flixel::FlxSprite _hx_char =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,x,y,null());
HXLINE( 192)			_hx_char->set_x((_hx_char->x + this->offsetPos));
HXLINE( 193)			this->addCharacter(_hx_char,splitName->__get(0));
HXLINE( 195)			_hx_char->setGraphicSize(::Std_obj::_hx_int((_hx_char->get_width() * ((Float)0.7))),null());
HXLINE( 196)			_hx_char->updateHitbox();
HXLINE( 197)			_hx_char->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 198)			_hx_char->scrollFactor->set(null(),null());
HXLINE( 199)			_hx_char->set_alpha(( (Float)(0) ));
HXLINE( 200)			this->add(_hx_char);
HXLINE( 202)			bool saveY = false;
HXLINE( 203)			int pos = 0;
HXLINE( 204)			::String _hx_switch_0 = splitName->__get(1);
            			if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 206)				pos = 1;
HXLINE( 207)				_hx_char->set_x((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )));
HXLINE( 208)				Float char1 = _hx_char->x;
HXDLIN( 208)				_hx_char->set_x((char1 - (_hx_char->get_width() / ( (Float)(2) ))));
HXLINE( 209)				y = _hx_char->y;
HXLINE( 210)				_hx_char->set_y(( (Float)((::flixel::FlxG_obj::height + 50)) ));
HXLINE( 211)				saveY = true;
HXLINE( 205)				goto _hx_goto_6;
            			}
            			if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 213)				pos = 2;
HXLINE( 214)				_hx_char->set_flipX(!(_hx_char->flipX));
HXLINE( 215)				int x1 = ::flixel::FlxG_obj::width;
HXDLIN( 215)				x = ((( (Float)(x1) ) - _hx_char->get_width()) - ( (Float)(100) ));
HXLINE( 216)				_hx_char->set_x((x - this->offsetPos));
HXLINE( 212)				goto _hx_goto_6;
            			}
            			_hx_goto_6:;
HXLINE( 218)			this->arrayCharacters->push(_hx_char);
HXLINE( 219)			Float _hx_tmp;
HXDLIN( 219)			if (saveY) {
HXLINE( 219)				_hx_tmp = y;
            			}
            			else {
HXLINE( 219)				_hx_tmp = x;
            			}
HXDLIN( 219)			this->arrayStartPos->push(_hx_tmp);
HXLINE( 220)			this->arrayPosition->push(pos);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(DialogueBoxPsych_obj,spawnCharacters,(void))

void DialogueBoxPsych_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_229_update)
HXLINE( 230)		if (!(this->dialogueEnded)) {
HXLINE( 231)			 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 231)			fh->set_alpha((fh->alpha + (((Float)0.5) * elapsed)));
HXLINE( 232)			if ((this->bgFade->alpha > ((Float)0.5))) {
HXLINE( 232)				this->bgFade->set_alpha(((Float)0.5));
            			}
HXLINE( 234)			if (( ( ::flixel::input::FlxBaseKeyList)(::flixel::FlxG_obj::keys->justPressed) )->get_ANY()) {
HXLINE( 235)				if (!(this->daText->finishedText)) {
HXLINE( 236)					if (::hx::IsNotNull( this->daText )) {
HXLINE( 237)						this->daText->killTheTimer();
HXLINE( 238)						this->remove(this->daText,null());
            					}
HXLINE( 240)					this->daText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),this->textToType,false,true,((Float)0.0),((Float)0.7));
HXLINE( 241)					this->daText->set_x(( (Float)(this->textX) ));
HXLINE( 242)					this->daText->set_y(( (Float)(this->textY) ));
HXLINE( 243)					this->add(this->daText);
            				}
            				else {
HXLINE( 244)					if ((this->currentText >= this->dialogueList->length)) {
HXLINE( 245)						this->dialogueEnded = true;
HXLINE( 246)						{
HXLINE( 246)							int _g = 0;
HXDLIN( 246)							int _g1 = this->textBoxTypes->length;
HXDLIN( 246)							while((_g < _g1)){
HXLINE( 246)								_g = (_g + 1);
HXDLIN( 246)								int i = (_g - 1);
HXLINE( 247)								::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_18,2);
HXLINE( 248)								::String animName = this->box->animation->_curAnim->name;
HXLINE( 249)								{
HXLINE( 249)									int _g1 = 0;
HXDLIN( 249)									int _g2 = checkArray->length;
HXDLIN( 249)									while((_g1 < _g2)){
HXLINE( 249)										_g1 = (_g1 + 1);
HXDLIN( 249)										int j = (_g1 - 1);
HXLINE( 250)										bool _hx_tmp;
HXDLIN( 250)										if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 250)											_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            										}
            										else {
HXLINE( 250)											_hx_tmp = true;
            										}
HXDLIN( 250)										if (_hx_tmp) {
HXLINE( 251)											this->box->animation->play(((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)),true,null(),null());
            										}
            									}
            								}
            							}
            						}
HXLINE( 256)						this->box->animation->_curAnim->set_curFrame((this->box->animation->_curAnim->frames->length - 1));
HXLINE( 257)						this->box->animation->_curAnim->reverse();
HXLINE( 258)						this->remove(this->daText,null());
HXLINE( 259)						this->daText = null();
HXLINE( 260)						this->updateBoxOffsets();
HXLINE( 261)						{
HXLINE( 261)							 ::flixel::_hx_system::FlxSound _this = ::flixel::FlxG_obj::sound->music;
HXDLIN( 261)							 ::Dynamic To = 0;
HXDLIN( 261)							 ::Dynamic onComplete = null();
HXDLIN( 261)							if (::hx::IsNull( To )) {
HXLINE( 261)								To = 0;
            							}
HXDLIN( 261)							if (::hx::IsNotNull( _this->fadeTween )) {
HXLINE( 261)								_this->fadeTween->cancel();
            							}
HXDLIN( 261)							_this->fadeTween = ::flixel::tweens::FlxTween_obj::num(_this->_volume,( (Float)(To) ),1, ::Dynamic(::hx::Anon_obj::Create(1)
            								->setFixed(0,HX_("onComplete",f8,d4,7e,5d),onComplete)),_this->volumeTween_dyn());
            						}
            					}
            					else {
HXLINE( 263)						this->startNextDialog();
            					}
            				}
HXLINE( 265)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 265)				_hx_tmp->play(::Paths_obj::sound(HX_("dialogueClose",80,e3,49,e3),null()),null(),null(),null(),null(),null());
            			}
            			else {
HXLINE( 266)				if (this->daText->finishedText) {
HXLINE( 267)					 ::flixel::FlxSprite _hx_char = this->arrayCharacters->__get(this->lastCharacter).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 268)					bool _hx_tmp;
HXDLIN( 268)					bool _hx_tmp1;
HXDLIN( 268)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 268)						_hx_tmp1 = !(::StringTools_obj::endsWith(_hx_char->animation->_curAnim->name,HX_("Idle",34,d3,8c,30)));
            					}
            					else {
HXLINE( 268)						_hx_tmp1 = false;
            					}
HXDLIN( 268)					if (_hx_tmp1) {
HXLINE( 268)						_hx_tmp = (_hx_char->animation->_curAnim->curFrame >= (_hx_char->animation->_curAnim->frames->length - 1));
            					}
            					else {
HXLINE( 268)						_hx_tmp = false;
            					}
HXDLIN( 268)					if (_hx_tmp) {
HXLINE( 269)						_hx_char->animation->play((_hx_char->animation->_curAnim->name + HX_("Idle",34,d3,8c,30)),null(),null(),null());
            					}
            				}
            			}
HXLINE( 273)			if (this->box->animation->_curAnim->finished) {
HXLINE( 274)				{
HXLINE( 274)					int _g = 0;
HXDLIN( 274)					int _g1 = this->textBoxTypes->length;
HXDLIN( 274)					while((_g < _g1)){
HXLINE( 274)						_g = (_g + 1);
HXDLIN( 274)						int i = (_g - 1);
HXLINE( 275)						::Array< ::String > checkArray = ::Array_obj< ::String >::fromData( _hx_array_data_c9b73088_19,2);
HXLINE( 276)						::String animName = this->box->animation->_curAnim->name;
HXLINE( 277)						{
HXLINE( 277)							int _g1 = 0;
HXDLIN( 277)							int _g2 = checkArray->length;
HXDLIN( 277)							while((_g1 < _g2)){
HXLINE( 277)								_g1 = (_g1 + 1);
HXDLIN( 277)								int j = (_g1 - 1);
HXLINE( 278)								bool _hx_tmp;
HXDLIN( 278)								if ((animName != (checkArray->__get(j) + this->textBoxTypes->__get(i)))) {
HXLINE( 278)									_hx_tmp = (animName == ((checkArray->__get(j) + this->textBoxTypes->__get(i)) + HX_("Open",ea,2f,8d,34)));
            								}
            								else {
HXLINE( 278)									_hx_tmp = true;
            								}
HXDLIN( 278)								if (_hx_tmp) {
HXLINE( 279)									this->box->animation->play((checkArray->__get(j) + this->textBoxTypes->__get(i)),true,null(),null());
            								}
            							}
            						}
            					}
            				}
HXLINE( 283)				this->updateBoxOffsets();
            			}
HXLINE( 286)			bool _hx_tmp;
HXDLIN( 286)			if ((this->lastCharacter != -1)) {
HXLINE( 286)				_hx_tmp = (this->arrayCharacters->length > 0);
            			}
            			else {
HXLINE( 286)				_hx_tmp = false;
            			}
HXDLIN( 286)			if (_hx_tmp) {
HXLINE( 287)				int _g = 0;
HXDLIN( 287)				int _g1 = this->arrayCharacters->length;
HXDLIN( 287)				while((_g < _g1)){
HXLINE( 287)					_g = (_g + 1);
HXDLIN( 287)					int i = (_g - 1);
HXLINE( 288)					 ::flixel::FlxSprite _hx_char = this->arrayCharacters->__get(i).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 289)					if (::hx::IsNotNull( _hx_char )) {
HXLINE( 290)						if ((i != this->lastCharacter)) {
HXLINE( 291)							::String _hx_switch_0 = this->charPositionList->__get(this->arrayPosition->__get(i));
            							if (  (_hx_switch_0==HX_("center",d5,25,db,05)) ){
HXLINE( 296)								_hx_char->set_y((_hx_char->y + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 297)								if ((_hx_char->y > (::flixel::FlxG_obj::height + 50))) {
HXLINE( 297)									_hx_char->set_y(( (Float)((::flixel::FlxG_obj::height + 50)) ));
            								}
HXLINE( 295)								goto _hx_goto_13;
            							}
            							if (  (_hx_switch_0==HX_("left",07,08,b0,47)) ){
HXLINE( 293)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 294)								if ((_hx_char->x < (this->arrayStartPos->__get(i) + this->offsetPos))) {
HXLINE( 294)									_hx_char->set_x((this->arrayStartPos->__get(i) + this->offsetPos));
            								}
HXLINE( 292)								goto _hx_goto_13;
            							}
            							if (  (_hx_switch_0==HX_("right",dc,0b,64,e9)) ){
HXLINE( 299)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 300)								if ((_hx_char->x > (this->arrayStartPos->__get(i) - this->offsetPos))) {
HXLINE( 300)									_hx_char->set_x((this->arrayStartPos->__get(i) - this->offsetPos));
            								}
HXLINE( 298)								goto _hx_goto_13;
            							}
            							_hx_goto_13:;
HXLINE( 302)							_hx_char->set_alpha((_hx_char->alpha - (( (Float)(3) ) * elapsed)));
HXLINE( 303)							if ((_hx_char->alpha < 0)) {
HXLINE( 303)								_hx_char->set_alpha(( (Float)(0) ));
            							}
            						}
            						else {
HXLINE( 305)							::String _hx_switch_1 = this->charPositionList->__get(this->arrayPosition->__get(i));
            							if (  (_hx_switch_1==HX_("center",d5,25,db,05)) ){
HXLINE( 310)								_hx_char->set_y((_hx_char->y - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 311)								if ((_hx_char->y < this->arrayStartPos->__get(i))) {
HXLINE( 311)									_hx_char->set_y(this->arrayStartPos->__get(i));
            								}
HXLINE( 309)								goto _hx_goto_14;
            							}
            							if (  (_hx_switch_1==HX_("left",07,08,b0,47)) ){
HXLINE( 307)								_hx_char->set_x((_hx_char->x + (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 308)								if ((_hx_char->x > this->arrayStartPos->__get(i))) {
HXLINE( 308)									_hx_char->set_x(this->arrayStartPos->__get(i));
            								}
HXLINE( 306)								goto _hx_goto_14;
            							}
            							if (  (_hx_switch_1==HX_("right",dc,0b,64,e9)) ){
HXLINE( 313)								_hx_char->set_x((_hx_char->x - (( (Float)(this->scrollSpeed) ) * elapsed)));
HXLINE( 314)								if ((_hx_char->x < this->arrayStartPos->__get(i))) {
HXLINE( 314)									_hx_char->set_x(this->arrayStartPos->__get(i));
            								}
HXLINE( 312)								goto _hx_goto_14;
            							}
            							_hx_goto_14:;
HXLINE( 316)							_hx_char->set_alpha((_hx_char->alpha + (( (Float)(3) ) * elapsed)));
HXLINE( 317)							if ((_hx_char->alpha > 1)) {
HXLINE( 317)								_hx_char->set_alpha(( (Float)(1) ));
            							}
            						}
            					}
            				}
            			}
            		}
            		else {
HXLINE( 323)			bool _hx_tmp;
HXDLIN( 323)			if (::hx::IsNotNull( this->box )) {
HXLINE( 323)				_hx_tmp = (this->box->animation->_curAnim->curFrame <= 0);
            			}
            			else {
HXLINE( 323)				_hx_tmp = false;
            			}
HXDLIN( 323)			if (_hx_tmp) {
HXLINE( 324)				this->remove(this->box,null());
HXLINE( 325)				this->box = null();
            			}
HXLINE( 328)			if (::hx::IsNotNull( this->bgFade )) {
HXLINE( 329)				 ::flixel::FlxSprite fh = this->bgFade;
HXDLIN( 329)				fh->set_alpha((fh->alpha - (((Float)0.5) * elapsed)));
HXLINE( 330)				if ((this->bgFade->alpha <= 0)) {
HXLINE( 331)					this->remove(this->bgFade,null());
HXLINE( 332)					this->bgFade = null();
            				}
            			}
HXLINE( 336)			{
HXLINE( 336)				int _g = 0;
HXDLIN( 336)				int _g1 = this->arrayCharacters->length;
HXDLIN( 336)				while((_g < _g1)){
HXLINE( 336)					_g = (_g + 1);
HXDLIN( 336)					int i = (_g - 1);
HXLINE( 337)					 ::flixel::FlxSprite leChar = this->arrayCharacters->__get(i).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 338)					if (::hx::IsNotNull( leChar )) {
HXLINE( 339)						int _hx_tmp;
HXDLIN( 339)						if ((i == 1)) {
HXLINE( 339)							_hx_tmp = 1;
            						}
            						else {
HXLINE( 339)							_hx_tmp = -1;
            						}
HXDLIN( 339)						leChar->set_x((leChar->x + (( (Float)((this->scrollSpeed * _hx_tmp)) ) * elapsed)));
HXLINE( 340)						leChar->set_alpha((leChar->alpha - (elapsed * ( (Float)(10) ))));
            					}
            				}
            			}
HXLINE( 344)			bool _hx_tmp1;
HXDLIN( 344)			if (::hx::IsNull( this->box )) {
HXLINE( 344)				_hx_tmp1 = ::hx::IsNull( this->bgFade );
            			}
            			else {
HXLINE( 344)				_hx_tmp1 = false;
            			}
HXDLIN( 344)			if (_hx_tmp1) {
HXLINE( 345)				{
HXLINE( 345)					int _g = 0;
HXDLIN( 345)					int _g1 = this->arrayCharacters->length;
HXDLIN( 345)					while((_g < _g1)){
HXLINE( 345)						_g = (_g + 1);
HXDLIN( 345)						int i = (_g - 1);
HXLINE( 346)						 ::flixel::FlxSprite leChar = this->arrayCharacters->__get(0).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 347)						if (::hx::IsNotNull( leChar )) {
HXLINE( 348)							this->arrayCharacters->remove(leChar);
HXLINE( 349)							this->remove(leChar,null());
            						}
            					}
            				}
HXLINE( 352)				this->finishThing();
HXLINE( 353)				this->kill();
            			}
            		}
HXLINE( 356)		this->super::update(elapsed);
            	}


void DialogueBoxPsych_obj::startNextDialog(){
            	HX_GC_STACKFRAME(&_hx_pos_128129519e640548_362_startNextDialog)
HXLINE( 363)		::Array< ::String > splitName = this->dialogueList->__get(this->currentText).split(HX_(":",3a,00,00,00));
HXLINE( 364)		int character = ( (int)(::Std_obj::parseInt(splitName->__get(1))) );
HXLINE( 365)		Float speed = ::Std_obj::parseFloat(splitName->__get(3));
HXLINE( 367)		::String animName = splitName->__get(4);
HXLINE( 368)		::String boxType = this->textBoxTypes->__get(0);
HXLINE( 369)		{
HXLINE( 369)			int _g = 0;
HXDLIN( 369)			int _g1 = this->textBoxTypes->length;
HXDLIN( 369)			while((_g < _g1)){
HXLINE( 369)				_g = (_g + 1);
HXDLIN( 369)				int i = (_g - 1);
HXLINE( 370)				if ((this->textBoxTypes->__get(i) == animName)) {
HXLINE( 371)					boxType = animName;
            				}
            			}
            		}
HXLINE( 375)		this->textToType = splitName->__get(5);
HXLINE( 377)		this->box->set_visible(true);
HXLINE( 379)		::String centerPrefix = HX_("",00,00,00,00);
HXLINE( 380)		if ((this->charPositionList->__get(this->arrayPosition->__get(character)) == HX_("center",d5,25,db,05))) {
HXLINE( 380)			centerPrefix = HX_("center-",b8,f4,e5,19);
            		}
HXLINE( 382)		if ((character != this->lastCharacter)) {
HXLINE( 383)			this->box->animation->play(((centerPrefix + boxType) + HX_("Open",ea,2f,8d,34)),true,null(),null());
HXLINE( 384)			this->updateBoxOffsets();
HXLINE( 385)			this->box->set_flipX((this->charPositionList->__get(this->arrayPosition->__get(character)) == HX_("left",07,08,b0,47)));
            		}
            		else {
HXLINE( 386)			if ((boxType != this->lastBoxType)) {
HXLINE( 387)				this->box->animation->play((centerPrefix + boxType),true,null(),null());
HXLINE( 388)				this->updateBoxOffsets();
            			}
            		}
HXLINE( 390)		this->lastCharacter = character;
HXLINE( 391)		this->lastBoxType = boxType;
HXLINE( 393)		if (::hx::IsNotNull( this->daText )) {
HXLINE( 394)			this->daText->killTheTimer();
HXLINE( 395)			this->remove(this->daText,null());
            		}
HXLINE( 397)		this->daText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(this->textX) ),( (Float)(this->textY) ),this->textToType,false,true,speed,((Float)0.7));
HXLINE( 398)		this->add(this->daText);
HXLINE( 400)		 ::flixel::FlxSprite _hx_char = this->arrayCharacters->__get(character).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 401)		if (::hx::IsNotNull( _hx_char )) {
HXLINE( 402)			_hx_char->animation->play(splitName->__get(2),true,null(),null());
HXLINE( 403)			Float rate = (( (Float)(24) ) - (((speed - ((Float)0.05)) / ( (Float)(5) )) * ( (Float)(480) )));
HXLINE( 404)			if ((rate < 12)) {
HXLINE( 404)				rate = ( (Float)(12) );
            			}
            			else {
HXLINE( 405)				if ((rate > 48)) {
HXLINE( 405)					rate = ( (Float)(48) );
            				}
            			}
HXLINE( 406)			_hx_char->animation->_curAnim->set_frameRate(rate);
            		}
HXLINE( 408)		this->currentText++;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,startNextDialog,(void))

void DialogueBoxPsych_obj::updateBoxOffsets(){
            	HX_STACKFRAME(&_hx_pos_128129519e640548_411_updateBoxOffsets)
HXLINE( 412)		this->box->centerOffsets(null());
HXLINE( 413)		this->box->updateHitbox();
HXLINE( 414)		if (::StringTools_obj::startsWith(this->box->animation->_curAnim->name,HX_("angry",21,49,e2,22))) {
HXLINE( 415)			this->box->offset->set(50,65);
            		}
            		else {
HXLINE( 416)			if (::StringTools_obj::startsWith(this->box->animation->_curAnim->name,HX_("center-angry",69,39,92,b0))) {
HXLINE( 417)				this->box->offset->set(50,30);
            			}
            			else {
HXLINE( 419)				this->box->offset->set(10,0);
            			}
            		}
HXLINE( 422)		if (!(this->box->flipX)) {
HXLINE( 422)			 ::flixel::math::FlxPoint fh = this->box->offset;
HXDLIN( 422)			fh->set_y((fh->y + 10));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(DialogueBoxPsych_obj,updateBoxOffsets,(void))


::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__new(::Array< ::String > dialogueList,::String song) {
	::hx::ObjectPtr< DialogueBoxPsych_obj > __this = new DialogueBoxPsych_obj();
	__this->__construct(dialogueList,song);
	return __this;
}

::hx::ObjectPtr< DialogueBoxPsych_obj > DialogueBoxPsych_obj::__alloc(::hx::Ctx *_hx_ctx,::Array< ::String > dialogueList,::String song) {
	DialogueBoxPsych_obj *__this = (DialogueBoxPsych_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DialogueBoxPsych_obj), true, "DialogueBoxPsych"));
	*(void **)__this = DialogueBoxPsych_obj::_hx_vtable;
	__this->__construct(dialogueList,song);
	return __this;
}

DialogueBoxPsych_obj::DialogueBoxPsych_obj()
{
}

void DialogueBoxPsych_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DialogueBoxPsych);
	HX_MARK_MEMBER_NAME(dialogue,"dialogue");
	HX_MARK_MEMBER_NAME(dialogueList,"dialogueList");
	HX_MARK_MEMBER_NAME(finishThing,"finishThing");
	HX_MARK_MEMBER_NAME(bgFade,"bgFade");
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(textToType,"textToType");
	HX_MARK_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_MARK_MEMBER_NAME(arrayStartPos,"arrayStartPos");
	HX_MARK_MEMBER_NAME(arrayPosition,"arrayPosition");
	HX_MARK_MEMBER_NAME(currentText,"currentText");
	HX_MARK_MEMBER_NAME(offsetPos,"offsetPos");
	HX_MARK_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_MARK_MEMBER_NAME(charPositionList,"charPositionList");
	HX_MARK_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_MARK_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_MARK_MEMBER_NAME(textX,"textX");
	HX_MARK_MEMBER_NAME(textY,"textY");
	HX_MARK_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_MARK_MEMBER_NAME(daText,"daText");
	HX_MARK_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_MARK_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DialogueBoxPsych_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(dialogue,"dialogue");
	HX_VISIT_MEMBER_NAME(dialogueList,"dialogueList");
	HX_VISIT_MEMBER_NAME(finishThing,"finishThing");
	HX_VISIT_MEMBER_NAME(bgFade,"bgFade");
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(textToType,"textToType");
	HX_VISIT_MEMBER_NAME(arrayCharacters,"arrayCharacters");
	HX_VISIT_MEMBER_NAME(arrayStartPos,"arrayStartPos");
	HX_VISIT_MEMBER_NAME(arrayPosition,"arrayPosition");
	HX_VISIT_MEMBER_NAME(currentText,"currentText");
	HX_VISIT_MEMBER_NAME(offsetPos,"offsetPos");
	HX_VISIT_MEMBER_NAME(textBoxTypes,"textBoxTypes");
	HX_VISIT_MEMBER_NAME(charPositionList,"charPositionList");
	HX_VISIT_MEMBER_NAME(dialogueStarted,"dialogueStarted");
	HX_VISIT_MEMBER_NAME(dialogueEnded,"dialogueEnded");
	HX_VISIT_MEMBER_NAME(textX,"textX");
	HX_VISIT_MEMBER_NAME(textY,"textY");
	HX_VISIT_MEMBER_NAME(scrollSpeed,"scrollSpeed");
	HX_VISIT_MEMBER_NAME(daText,"daText");
	HX_VISIT_MEMBER_NAME(lastCharacter,"lastCharacter");
	HX_VISIT_MEMBER_NAME(lastBoxType,"lastBoxType");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val DialogueBoxPsych_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return ::hx::Val( box ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { return ::hx::Val( textX ); }
		if (HX_FIELD_EQ(inName,"textY") ) { return ::hx::Val( textY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { return ::hx::Val( bgFade ); }
		if (HX_FIELD_EQ(inName,"daText") ) { return ::hx::Val( daText ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { return ::hx::Val( dialogue ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { return ::hx::Val( offsetPos ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { return ::hx::Val( textToType ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { return ::hx::Val( finishThing ); }
		if (HX_FIELD_EQ(inName,"currentText") ) { return ::hx::Val( currentText ); }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { return ::hx::Val( scrollSpeed ); }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { return ::hx::Val( lastBoxType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { return ::hx::Val( dialogueList ); }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { return ::hx::Val( textBoxTypes ); }
		if (HX_FIELD_EQ(inName,"addCharacter") ) { return ::hx::Val( addCharacter_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"arrayStartPos") ) { return ::hx::Val( arrayStartPos ); }
		if (HX_FIELD_EQ(inName,"arrayPosition") ) { return ::hx::Val( arrayPosition ); }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { return ::hx::Val( dialogueEnded ); }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { return ::hx::Val( lastCharacter ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { return ::hx::Val( arrayCharacters ); }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { return ::hx::Val( dialogueStarted ); }
		if (HX_FIELD_EQ(inName,"spawnCharacters") ) { return ::hx::Val( spawnCharacters_dyn() ); }
		if (HX_FIELD_EQ(inName,"startNextDialog") ) { return ::hx::Val( startNextDialog_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"charPositionList") ) { return ::hx::Val( charPositionList ); }
		if (HX_FIELD_EQ(inName,"updateBoxOffsets") ) { return ::hx::Val( updateBoxOffsets_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val DialogueBoxPsych_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { textX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textY") ) { textY=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bgFade") ) { bgFade=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"daText") ) { daText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"dialogue") ) { dialogue=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"offsetPos") ) { offsetPos=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"textToType") ) { textToType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"finishThing") ) { finishThing=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"currentText") ) { currentText=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollSpeed") ) { scrollSpeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastBoxType") ) { lastBoxType=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"dialogueList") ) { dialogueList=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textBoxTypes") ) { textBoxTypes=inValue.Cast< ::Array< ::String > >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"arrayStartPos") ) { arrayStartPos=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrayPosition") ) { arrayPosition=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueEnded") ) { dialogueEnded=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lastCharacter") ) { lastCharacter=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"arrayCharacters") ) { arrayCharacters=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"dialogueStarted") ) { dialogueStarted=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"charPositionList") ) { charPositionList=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DialogueBoxPsych_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("dialogue",18,2d,94,a7));
	outFields->push(HX_("dialogueList",96,e1,d8,0d));
	outFields->push(HX_("bgFade",e1,fd,cd,ab));
	outFields->push(HX_("box",0b,be,4a,00));
	outFields->push(HX_("textToType",62,de,b2,b9));
	outFields->push(HX_("arrayCharacters",a3,23,67,53));
	outFields->push(HX_("arrayStartPos",0b,f5,d6,c4));
	outFields->push(HX_("arrayPosition",62,8b,38,4d));
	outFields->push(HX_("currentText",86,a5,8b,85));
	outFields->push(HX_("offsetPos",c1,3b,c0,41));
	outFields->push(HX_("textBoxTypes",3b,d8,65,ca));
	outFields->push(HX_("charPositionList",9d,85,5e,97));
	outFields->push(HX_("dialogueStarted",09,77,22,70));
	outFields->push(HX_("dialogueEnded",c2,14,61,0b));
	outFields->push(HX_("textX",0b,4b,99,0d));
	outFields->push(HX_("textY",0c,4b,99,0d));
	outFields->push(HX_("scrollSpeed",3a,e0,46,cb));
	outFields->push(HX_("daText",ca,52,61,0d));
	outFields->push(HX_("lastCharacter",73,b6,0a,40));
	outFields->push(HX_("lastBoxType",af,f2,77,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo DialogueBoxPsych_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBoxPsych_obj,dialogue),HX_("dialogue",18,2d,94,a7)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,dialogueList),HX_("dialogueList",96,e1,d8,0d)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(DialogueBoxPsych_obj,finishThing),HX_("finishThing",9b,aa,8e,36)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,bgFade),HX_("bgFade",e1,fd,cd,ab)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(DialogueBoxPsych_obj,box),HX_("box",0b,be,4a,00)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,textToType),HX_("textToType",62,de,b2,b9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(DialogueBoxPsych_obj,arrayCharacters),HX_("arrayCharacters",a3,23,67,53)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(DialogueBoxPsych_obj,arrayStartPos),HX_("arrayStartPos",0b,f5,d6,c4)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(DialogueBoxPsych_obj,arrayPosition),HX_("arrayPosition",62,8b,38,4d)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,currentText),HX_("currentText",86,a5,8b,85)},
	{::hx::fsFloat,(int)offsetof(DialogueBoxPsych_obj,offsetPos),HX_("offsetPos",c1,3b,c0,41)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,textBoxTypes),HX_("textBoxTypes",3b,d8,65,ca)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(DialogueBoxPsych_obj,charPositionList),HX_("charPositionList",9d,85,5e,97)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueStarted),HX_("dialogueStarted",09,77,22,70)},
	{::hx::fsBool,(int)offsetof(DialogueBoxPsych_obj,dialogueEnded),HX_("dialogueEnded",c2,14,61,0b)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,textX),HX_("textX",0b,4b,99,0d)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,textY),HX_("textY",0c,4b,99,0d)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,scrollSpeed),HX_("scrollSpeed",3a,e0,46,cb)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(DialogueBoxPsych_obj,daText),HX_("daText",ca,52,61,0d)},
	{::hx::fsInt,(int)offsetof(DialogueBoxPsych_obj,lastCharacter),HX_("lastCharacter",73,b6,0a,40)},
	{::hx::fsString,(int)offsetof(DialogueBoxPsych_obj,lastBoxType),HX_("lastBoxType",af,f2,77,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *DialogueBoxPsych_obj_sStaticStorageInfo = 0;
#endif

static ::String DialogueBoxPsych_obj_sMemberFields[] = {
	HX_("dialogue",18,2d,94,a7),
	HX_("dialogueList",96,e1,d8,0d),
	HX_("finishThing",9b,aa,8e,36),
	HX_("bgFade",e1,fd,cd,ab),
	HX_("box",0b,be,4a,00),
	HX_("textToType",62,de,b2,b9),
	HX_("arrayCharacters",a3,23,67,53),
	HX_("arrayStartPos",0b,f5,d6,c4),
	HX_("arrayPosition",62,8b,38,4d),
	HX_("currentText",86,a5,8b,85),
	HX_("offsetPos",c1,3b,c0,41),
	HX_("textBoxTypes",3b,d8,65,ca),
	HX_("charPositionList",9d,85,5e,97),
	HX_("addCharacter",48,fd,25,41),
	HX_("dialogueStarted",09,77,22,70),
	HX_("dialogueEnded",c2,14,61,0b),
	HX_("spawnCharacters",c5,32,da,c2),
	HX_("textX",0b,4b,99,0d),
	HX_("textY",0c,4b,99,0d),
	HX_("scrollSpeed",3a,e0,46,cb),
	HX_("daText",ca,52,61,0d),
	HX_("update",09,86,05,87),
	HX_("lastCharacter",73,b6,0a,40),
	HX_("lastBoxType",af,f2,77,51),
	HX_("startNextDialog",1d,3d,9f,9a),
	HX_("updateBoxOffsets",1e,ea,75,d1),
	::String(null()) };

::hx::Class DialogueBoxPsych_obj::__mClass;

void DialogueBoxPsych_obj::__register()
{
	DialogueBoxPsych_obj _hx_dummy;
	DialogueBoxPsych_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DialogueBoxPsych",88,30,b7,c9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(DialogueBoxPsych_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< DialogueBoxPsych_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DialogueBoxPsych_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DialogueBoxPsych_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

