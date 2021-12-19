#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedSprite
#include <AttachedSprite.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_CreditsState
#include <CreditsState.h>
#endif
#ifndef INCLUDED_DiscordClient
#include <DiscordClient.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
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
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1bf4423a091ce525_19_new,"CreditsState","new",0xfd580e29,"CreditsState.new","CreditsState.hx",19,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_65_create,"CreditsState","create",0x506b2cd3,"CreditsState.create","CreditsState.hx",65,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_115_update,"CreditsState","update",0x5b614be0,"CreditsState.update","CreditsState.hx",115,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_148_changeSelection,"CreditsState","changeSelection",0x5dc3e005,"CreditsState.changeSelection","CreditsState.hx",148,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_166_changeSelection,"CreditsState","changeSelection",0x5dc3e005,"CreditsState.changeSelection","CreditsState.hx",166,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_189_unselectableCheck,"CreditsState","unselectableCheck",0x4473c3a2,"CreditsState.unselectableCheck","CreditsState.hx",189,0xdb40a967)
HX_LOCAL_STACK_FRAME(_hx_pos_1bf4423a091ce525_26_boot,"CreditsState","boot",0xa7cd5649,"CreditsState.boot","CreditsState.hx",26,0xdb40a967)

void CreditsState_obj::__construct( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut){
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_19_new)
HXLINE(  24)		this->iconArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  21)		this->curSelected = 1;
HXLINE(  19)		super::__construct(TransIn,TransOut);
            	}

Dynamic CreditsState_obj::__CreateEmpty() { return new CreditsState_obj; }

void *CreditsState_obj::_hx_vtable = 0;

Dynamic CreditsState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CreditsState_obj > _hx_result = new CreditsState_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CreditsState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x3f706236) {
		if (inClassId<=(int)0x24631877) {
			if (inClassId<=(int)0x23a57bae) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x23a57bae;
			} else {
				return inClassId==(int)0x24631877;
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

void CreditsState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_1bf4423a091ce525_65_create)
HXLINE(  68)		::DiscordClient_obj::changePresence(HX_("In the Menus",0a,c1,ad,c6),null(),null(),null(),null());
HXLINE(  71)		 ::flixel::FlxSprite _hx_tmp =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXDLIN(  71)		::String library = null();
HXDLIN(  71)		 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menuDesat",26,91,04,72));
HXDLIN(  71)		 ::Dynamic _hx_tmp1;
HXDLIN(  71)		if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  71)			_hx_tmp1 = imageToReturn;
            		}
            		else {
HXLINE(  71)			_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menuDesat",26,91,04,72)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            		}
HXDLIN(  71)		this->bg = _hx_tmp->loadGraphic(_hx_tmp1,null(),null(),null(),null(),null());
HXLINE(  72)		this->add(this->bg);
HXLINE(  74)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE(  75)		this->add(this->grpOptions);
HXLINE(  77)		{
HXLINE(  77)			int _g = 0;
HXDLIN(  77)			int _g1 = ::CreditsState_obj::creditsStuff->get_length();
HXDLIN(  77)			while((_g < _g1)){
HXLINE(  77)				_g = (_g + 1);
HXDLIN(  77)				int i = (_g - 1);
HXLINE(  79)				bool isSelectable = !(this->unselectableCheck(i));
HXLINE(  80)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((70 * i)) ),( (::String)(::CreditsState_obj::creditsStuff->__get(i)->__GetItem(0)) ),!(isSelectable),false,null(),null());
HXLINE(  81)				optionText->isMenuItem = true;
HXLINE(  82)				optionText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE(  83)				if (isSelectable) {
HXLINE(  84)					optionText->set_x((optionText->x - ( (Float)(70) )));
            				}
HXLINE(  86)				optionText->forceX = optionText->x;
HXLINE(  88)				optionText->targetY = ( (Float)(i) );
HXLINE(  89)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
HXLINE(  91)				if (isSelectable) {
HXLINE(  92)					 ::AttachedSprite icon =  ::AttachedSprite_obj::__alloc( HX_CTX ,(HX_("credits/",d5,48,ee,de) + ::CreditsState_obj::creditsStuff->__get(i)->__GetItem(1)),null(),null(),null());
HXLINE(  93)					icon->xAdd = (optionText->get_width() + 10);
HXLINE(  94)					icon->sprTracker = optionText;
HXLINE(  97)					this->iconArray->push(icon);
HXLINE(  98)					this->add(icon);
            				}
            			}
            		}
HXLINE( 102)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,600,1180,HX_("",00,00,00,00),32,null());
HXLINE( 103)		this->descText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 104)		this->descText->scrollFactor->set(null(),null());
HXLINE( 105)		this->descText->set_borderSize(((Float)2.4));
HXLINE( 106)		this->add(this->descText);
HXLINE( 108)		this->bg->set_color(( (int)(::CreditsState_obj::creditsStuff->__get(this->curSelected)->__GetItem(4)) ));
HXLINE( 109)		this->intendedColor = this->bg->color;
HXLINE( 110)		this->changeSelection(null());
HXLINE( 111)		this->super::create();
            	}


void CreditsState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_1bf4423a091ce525_115_update)
HXLINE( 116)		if ((::flixel::FlxG_obj::sound->music->_volume < ((Float)0.7))) {
HXLINE( 118)			 ::flixel::_hx_system::FlxSound fh = ::flixel::FlxG_obj::sound->music;
HXDLIN( 118)			fh->set_volume((fh->_volume + (((Float)0.5) * ::flixel::FlxG_obj::elapsed)));
            		}
HXLINE( 121)		bool upP = ::PlayerSettings_obj::player1->controls->_ui_upP->check();
HXLINE( 122)		bool downP = ::PlayerSettings_obj::player1->controls->_ui_downP->check();
HXLINE( 124)		if (upP) {
HXLINE( 126)			this->changeSelection(-1);
            		}
HXLINE( 128)		if (downP) {
HXLINE( 130)			this->changeSelection(1);
            		}
HXLINE( 133)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN( 133)		if (_this->keyManager->checkStatus(27,_this->status)) {
HXLINE( 135)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 136)				this->colorTween->cancel();
            			}
HXLINE( 138)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 138)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
HXLINE( 139)			::MusicBeatState_obj::switchState( ::MainMenuState_obj::__alloc( HX_CTX ,null(),null()));
            		}
HXLINE( 141)		if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 142)			::CoolUtil_obj::browserLoad(( (::String)(::CreditsState_obj::creditsStuff->__get(this->curSelected)->__GetItem(3)) ));
            		}
HXLINE( 144)		this->super::update(elapsed);
            	}


void CreditsState_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_148_changeSelection)
HXDLIN( 148)		 ::CreditsState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 149)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 149)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),((Float)0.4),null(),null(),null(),null());
HXLINE( 150)		while(true){
HXLINE( 151)			 ::CreditsState _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 151)			_hx_tmp->curSelected = (_hx_tmp->curSelected + change);
HXLINE( 152)			if ((this->curSelected < 0)) {
HXLINE( 153)				this->curSelected = (::CreditsState_obj::creditsStuff->get_length() - 1);
            			}
HXLINE( 154)			if ((this->curSelected >= ::CreditsState_obj::creditsStuff->get_length())) {
HXLINE( 155)				this->curSelected = 0;
            			}
HXLINE( 150)			if (!(this->unselectableCheck(this->curSelected))) {
HXLINE( 150)				goto _hx_goto_4;
            			}
            		}
            		_hx_goto_4:;
HXLINE( 158)		int newColor = ( (int)(::CreditsState_obj::creditsStuff->__get(this->curSelected)->__GetItem(4)) );
HXLINE( 159)		if ((newColor != this->intendedColor)) {
            			HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::CreditsState,_gthis) HXARGC(1)
            			void _hx_run( ::flixel::tweens::FlxTween twn){
            				HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_166_changeSelection)
HXLINE( 166)				_gthis->colorTween = null();
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 160)			if (::hx::IsNotNull( this->colorTween )) {
HXLINE( 161)				this->colorTween->cancel();
            			}
HXLINE( 163)			this->intendedColor = newColor;
HXLINE( 164)			this->colorTween = ::flixel::tweens::FlxTween_obj::color(this->bg,1,this->bg->color,this->intendedColor, ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("onComplete",f8,d4,7e,5d), ::Dynamic(new _hx_Closure_0(_gthis)))));
            		}
HXLINE( 171)		int bullShit = 0;
HXLINE( 173)		{
HXLINE( 173)			int _g = 0;
HXDLIN( 173)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN( 173)			while((_g < _g1->length)){
HXLINE( 173)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN( 173)				_g = (_g + 1);
HXLINE( 175)				item->targetY = ( (Float)((bullShit - this->curSelected)) );
HXLINE( 176)				bullShit = (bullShit + 1);
HXLINE( 178)				if (!(this->unselectableCheck((bullShit - 1)))) {
HXLINE( 179)					item->set_alpha(((Float)0.6));
HXLINE( 180)					if ((item->targetY == 0)) {
HXLINE( 181)						item->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE( 185)		this->descText->set_text(( (::String)(::CreditsState_obj::creditsStuff->__get(this->curSelected)->__GetItem(2)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,changeSelection,(void))

bool CreditsState_obj::unselectableCheck(int num){
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_189_unselectableCheck)
HXDLIN( 189)		return ::hx::IsLessEq( ::CreditsState_obj::creditsStuff->__get(num)->__Field(HX_("length",e6,94,07,9f),::hx::paccDynamic),1 );
            	}


HX_DEFINE_DYNAMIC_FUNC1(CreditsState_obj,unselectableCheck,return )

::cpp::VirtualArray CreditsState_obj::creditsStuff;


::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__new( ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	::hx::ObjectPtr< CreditsState_obj > __this = new CreditsState_obj();
	__this->__construct(TransIn,TransOut);
	return __this;
}

::hx::ObjectPtr< CreditsState_obj > CreditsState_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::transition::TransitionData TransIn, ::flixel::addons::transition::TransitionData TransOut) {
	CreditsState_obj *__this = (CreditsState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CreditsState_obj), true, "CreditsState"));
	*(void **)__this = CreditsState_obj::_hx_vtable;
	__this->__construct(TransIn,TransOut);
	return __this;
}

CreditsState_obj::CreditsState_obj()
{
}

void CreditsState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CreditsState);
	HX_MARK_MEMBER_NAME(curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(iconArray,"iconArray");
	HX_MARK_MEMBER_NAME(bg,"bg");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(intendedColor,"intendedColor");
	HX_MARK_MEMBER_NAME(colorTween,"colorTween");
	 ::flixel::addons::ui::FlxUIState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void CreditsState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(iconArray,"iconArray");
	HX_VISIT_MEMBER_NAME(bg,"bg");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(intendedColor,"intendedColor");
	HX_VISIT_MEMBER_NAME(colorTween,"colorTween");
	 ::flixel::addons::ui::FlxUIState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val CreditsState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { return ::hx::Val( bg ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { return ::hx::Val( iconArray ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"colorTween") ) { return ::hx::Val( colorTween ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { return ::hx::Val( curSelected ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { return ::hx::Val( intendedColor ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool CreditsState_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { outValue = ( creditsStuff ); return true; }
	}
	return false;
}

::hx::Val CreditsState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"bg") ) { bg=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"iconArray") ) { iconArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorTween") ) { colorTween=inValue.Cast<  ::flixel::tweens::FlxTween >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"intendedColor") ) { intendedColor=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool CreditsState_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"creditsStuff") ) { creditsStuff=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
	}
	return false;
}

void CreditsState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("curSelected",fb,eb,ab,32));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("iconArray",60,3f,53,5f));
	outFields->push(HX_("bg",c5,55,00,00));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("intendedColor",b8,fb,ff,5a));
	outFields->push(HX_("colorTween",08,c2,dc,3d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CreditsState_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(CreditsState_obj,curSelected),HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(CreditsState_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(CreditsState_obj,iconArray),HX_("iconArray",60,3f,53,5f)},
	{::hx::fsObject /*  ::flixel::FlxSprite */ ,(int)offsetof(CreditsState_obj,bg),HX_("bg",c5,55,00,00)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(CreditsState_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsInt,(int)offsetof(CreditsState_obj,intendedColor),HX_("intendedColor",b8,fb,ff,5a)},
	{::hx::fsObject /*  ::flixel::tweens::FlxTween */ ,(int)offsetof(CreditsState_obj,colorTween),HX_("colorTween",08,c2,dc,3d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo CreditsState_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &CreditsState_obj::creditsStuff,HX_("creditsStuff",7a,9a,7e,73)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String CreditsState_obj_sMemberFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("grpOptions",f9,45,d8,00),
	HX_("iconArray",60,3f,53,5f),
	HX_("bg",c5,55,00,00),
	HX_("descText",9e,53,35,f3),
	HX_("intendedColor",b8,fb,ff,5a),
	HX_("colorTween",08,c2,dc,3d),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("unselectableCheck",19,58,ce,19),
	::String(null()) };

static void CreditsState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CreditsState_obj::creditsStuff,"creditsStuff");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CreditsState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CreditsState_obj::creditsStuff,"creditsStuff");
};

#endif

::hx::Class CreditsState_obj::__mClass;

static ::String CreditsState_obj_sStaticFields[] = {
	HX_("creditsStuff",7a,9a,7e,73),
	::String(null())
};

void CreditsState_obj::__register()
{
	CreditsState_obj _hx_dummy;
	CreditsState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("CreditsState",b7,c5,81,3b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CreditsState_obj::__GetStatic;
	__mClass->mSetStaticField = &CreditsState_obj::__SetStatic;
	__mClass->mMarkFunc = CreditsState_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CreditsState_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CreditsState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CreditsState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CreditsState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CreditsState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CreditsState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CreditsState_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1bf4423a091ce525_26_boot)
HXDLIN(  26)		creditsStuff = ::cpp::VirtualArray_obj::__new(27)->init(0,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("Team 10 of B verse",4c,60,b1,05)))->init(1,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Biro",64,25,f0,2b))->init(1,HX_("biro",44,f9,16,41))->init(2,HX_("Main Programmer/Animator/pixel artist/Charter/storywritter",42,25,67,0e))->init(3,HX_("https://www.youtube.com/channel/UCkDhHejKkl40_S1Mb5RzMBg",76,22,b7,60))->init(4,-8909))->init(2,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Rainbow",16,29,91,d8))->init(1,HX_("rainbow",36,01,40,0b))->init(2,HX_("Main concept artist/bg artist/Icon artist",b8,ac,e9,a1))->init(3,HX_("https://www.youtube.com/channel/UCA93rLHSCGZoradNb0zk1Yg",c7,57,9c,24))->init(4,-3145689))->init(3,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Saturn",2b,23,83,56))->init(1,HX_("saturn",0b,af,ee,21))->init(2,HX_("Music stuff",19,15,65,41))->init(3,HX_("https://www.youtube.com/channel/UCk7Q2kTP7-2J2WX0jLkT5tA",eb,63,2f,0d))->init(4,-10799062))->init(4,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Bagel",0f,7c,de,40))->init(1,HX_("bagel",2f,0c,b1,ad))->init(2,HX_("concept artist/cool art crap",a2,0c,c2,b5))->init(3,HX_("https://www.youtube.com/c/BagelByte",ac,61,57,24))->init(4,-5214636))->init(5,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Kiro",fb,10,e3,31))->init(1,HX_("kiro",db,e4,09,47))->init(2,HX_("THE MUSIC MANNNNN",50,51,86,df))->init(3,HX_("https://www.youtube.com/channel/UCYWbre_6s1DbTpHTRK-GKKQ",65,d2,8a,3c))->init(4,-6736897))->init(6,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Spacemen",30,fd,1d,c9))->init(1,HX_("knight",8d,55,f9,63))->init(2,HX_("the music guy ALSO GO CHECK OUT MASHUP",ec,7a,01,bd))->init(3,HX_("https://www.youtube.com/watch?v=cRZFp8Si6po&t=1s",8b,96,25,a4))->init(4,-1452198))->init(7,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Nitro",b6,0f,01,2f))->init(1,HX_("nitro",d6,9f,d3,9b))->init(2,HX_("Charter",ab,90,cc,9c))->init(3,HX_("https://twitter.com/Nitro21X",bb,89,22,2c))->init(4,-6899151))->init(8,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Shokora",6d,dd,1b,41))->init(1,HX_("shokora",8d,b5,ca,73))->init(2,HX_("Windows compiler + Coding help",3e,9d,74,c6))->init(3,HX_("https://www.youtube.com/channel/UCtt5i053XlP0Ynu_b5dFbeA/videos",92,b1,8c,41))->init(4,-10265736))->init(9,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Yoadza",40,7f,a7,bf))->init(1,HX_("yoadza",20,0b,13,8b))->init(2,HX_("Music guy",70,c9,68,56))->init(3,HX_("https://www.bandlab.com/yoadza",2a,c9,fe,96))->init(4,-5426628))->init(10,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Niko",bf,ae,de,33))->init(1,HX_("niko",9f,82,05,49))->init(2,HX_("MUSIC GUYYYYYYYY",69,f7,d8,79))->init(3,HX_("https://www.youtube.com/channel/UCFV3dbhTKn4CyRqmFL9Dglw",46,a6,f4,3a))->init(4,-9803158))->init(11,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Painty",3b,67,26,1c))->init(1,HX_("painty",1b,f3,91,e7))->init(2,HX_("Concept artist/artist",77,b4,3f,56))->init(3,HX_("https://www.instagram.com/candycloud2/",bd,c1,b5,c9))->init(4,-476167))->init(12,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Milkman",7f,20,c1,f3))->init(1,HX_("milkman",9f,f8,6f,26))->init(2,HX_("Story writter",90,81,6a,6f))->init(3,HX_("https://www.youtube.com/channel/UCXzfc_osmtS0sEw7Lq7ca4g",22,cc,df,96))->init(4,-1799))->init(13,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Nick",c3,a7,de,33))->init(1,HX_("nick",a3,7b,05,49))->init(2,HX_("Ay man LISTEN LISTEN hes the pixel guy",0a,db,0a,9c))->init(3,HX_("https://www.youtube.com/channel/UCIuV47XDp8-zH-qfQ4slwzg",b9,48,71,ba))->init(4,-1769241))->init(14,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("clouditio",86,40,05,5e))->init(1,HX_("clouditio",86,40,05,5e))->init(2,HX_("The guy who made the monster beat",b0,a8,68,d8))->init(3,HX_("https://www.youtube.com/channel/UCaZmOBbtNhdmcuj2F0glAoA",67,d0,6c,3b))->init(4,-3686153))->init(15,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("Psych Engine Team",36,ef,98,3e)))->init(16,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Shadow Mario",c4,01,05,71))->init(1,HX_("shadowmario",24,76,c0,e6))->init(2,HX_("Main Programmer of Psych Engine",6d,91,ad,35))->init(3,HX_("https://twitter.com/Shadow_Mario_",a2,98,47,eb))->init(4,-8909))->init(17,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("RiverOaken",36,1d,dd,33))->init(1,HX_("riveroaken",36,a9,fe,a9))->init(2,HX_("Main Artist/Animator of Psych Engine",f8,d1,00,db))->init(3,HX_("https://twitter.com/river_oaken",17,26,7a,b0))->init(4,-3997563))->init(18,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(19,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("Special Thanks",90,c6,05,41)))->init(20,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("Keoiki",f2,5f,eb,6d))->init(1,HX_("keoiki",d2,eb,56,39))->init(2,HX_("Note Splash Animations",7a,27,38,e2))->init(3,HX_("https://twitter.com/Keoiki_",35,73,4e,3b))->init(4,-1))->init(21,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("",00,00,00,00)))->init(22,::cpp::VirtualArray_obj::__new(1)->init(0,HX_("Funkin' Crew",ab,00,2d,30)))->init(23,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("ninjamuffin99",f7,4c,e5,00))->init(1,HX_("ninjamuffin99",f7,4c,e5,00))->init(2,HX_("Programmer of Friday Night Funkin'",2c,f9,c3,b2))->init(3,HX_("https://twitter.com/ninja_muffin99",7a,ac,b6,89))->init(4,-575432))->init(24,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("PhantomArcade",9d,2d,b3,ef))->init(1,HX_("phantomarcade",9d,69,2e,73))->init(2,HX_("Animator of Friday Night Funkin'",7d,a9,23,e4))->init(3,HX_("https://twitter.com/PhantomArcade3K",9d,e2,57,4f))->init(4,-17637))->init(25,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("evilsk8r",66,38,e0,32))->init(1,HX_("evilsk8r",66,38,e0,32))->init(2,HX_("Artist of Friday Night Funkin'",dd,f8,e7,48))->init(3,HX_("https://twitter.com/evilsk8r",5e,80,bd,94))->init(4,-11279060))->init(26,::cpp::VirtualArray_obj::__new(5)->init(0,HX_("kawaisprite",0e,de,66,45))->init(1,HX_("kawaisprite",0e,de,66,45))->init(2,HX_("Composer of Friday Night Funkin'",36,08,52,24))->init(3,HX_("https://twitter.com/kawaisprite",16,e1,bc,3d))->init(4,-10193421));
            	}
}

