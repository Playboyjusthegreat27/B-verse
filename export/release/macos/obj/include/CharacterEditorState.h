#ifndef INCLUDED_CharacterEditorState
#define INCLUDED_CharacterEditorState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
HX_DECLARE_CLASS0(Character)
HX_DECLARE_CLASS0(CharacterEditorState)
HX_DECLARE_CLASS0(FlxUIDropDownMenuCustom)
HX_DECLARE_CLASS0(HealthIcon)
HX_DECLARE_CLASS0(MusicBeatState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,transition,FlxTransitionableState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUICheckBox)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIGroup)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIInputText)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUINumericStepper)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUIState)
HX_DECLARE_CLASS3(flixel,addons,ui,FlxUITabMenu)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ICursorPointable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IEventGetter)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIClickable)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIState)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IFlxUIWidget)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IHasParams)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,ILabeled)
HX_DECLARE_CLASS4(flixel,addons,ui,interfaces,IResizable)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton_flixel_text_FlxText)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(openfl,events,ErrorEvent)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IOErrorEvent)
HX_DECLARE_CLASS2(openfl,events,TextEvent)
HX_DECLARE_CLASS2(openfl,net,FileReference)



class HXCPP_CLASS_ATTRIBUTES CharacterEditorState_obj : public  ::MusicBeatState_obj
{
	public:
		typedef  ::MusicBeatState_obj super;
		typedef CharacterEditorState_obj OBJ_;
		CharacterEditorState_obj();

	public:
		enum { _hx_ClassId = 0x0669563f };

		void __construct(::String __o_daAnim);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="CharacterEditorState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"CharacterEditorState"); }
		static ::hx::ObjectPtr< CharacterEditorState_obj > __new(::String __o_daAnim);
		static ::hx::ObjectPtr< CharacterEditorState_obj > __alloc(::hx::Ctx *_hx_ctx,::String __o_daAnim);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CharacterEditorState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CharacterEditorState",1b,d8,00,38); }

		 ::Character _hx_char;
		 ::flixel::text::FlxText textAnim;
		 ::flixel::group::FlxTypedGroup bgLayer;
		 ::flixel::group::FlxTypedGroup charLayer;
		 ::flixel::group::FlxTypedGroup dumbTexts;
		int curAnim;
		::String daAnim;
		 ::flixel::FlxObject camFollow;
		 ::flixel::addons::ui::FlxUITabMenu UI_box;
		 ::flixel::addons::ui::FlxUITabMenu UI_characterbox;
		 ::flixel::FlxCamera camEditor;
		 ::flixel::FlxCamera camHUD;
		 ::flixel::FlxCamera camMenu;
		 ::flixel::ui::FlxButton changeBGbutton;
		 ::HealthIcon leHealthIcon;
		::Array< ::String > characterList;
		 ::flixel::FlxSprite cameraFollowPointer;
		 ::flixel::FlxSprite healthBarBG;
		void create();

		bool onPixelBG;
		Float OFFSET_X;
		void reloadBGs();
		::Dynamic reloadBGs_dyn();

		 ::FlxUIDropDownMenuCustom charDropDown;
		void addSettingsUI();
		::Dynamic addSettingsUI_dyn();

		 ::flixel::addons::ui::FlxUIInputText imageInputText;
		 ::flixel::addons::ui::FlxUIInputText healthIconInputText;
		 ::flixel::addons::ui::FlxUINumericStepper singDurationStepper;
		 ::flixel::addons::ui::FlxUINumericStepper scaleStepper;
		 ::flixel::addons::ui::FlxUINumericStepper positionXStepper;
		 ::flixel::addons::ui::FlxUINumericStepper positionYStepper;
		 ::flixel::addons::ui::FlxUINumericStepper positionCameraXStepper;
		 ::flixel::addons::ui::FlxUINumericStepper positionCameraYStepper;
		 ::flixel::addons::ui::FlxUICheckBox flipXCheckBox;
		 ::flixel::addons::ui::FlxUICheckBox noAntialiasingCheckBox;
		 ::flixel::addons::ui::FlxUINumericStepper healthColorStepperR;
		 ::flixel::addons::ui::FlxUINumericStepper healthColorStepperG;
		 ::flixel::addons::ui::FlxUINumericStepper healthColorStepperB;
		void addCharacterUI();
		::Dynamic addCharacterUI_dyn();

		 ::FlxUIDropDownMenuCustom animationDropDown;
		 ::flixel::addons::ui::FlxUIInputText animationInputText;
		 ::flixel::addons::ui::FlxUIInputText animationNameInputText;
		 ::flixel::addons::ui::FlxUIInputText animationIndicesInputText;
		 ::flixel::addons::ui::FlxUINumericStepper animationNameFramerate;
		 ::flixel::addons::ui::FlxUICheckBox animationLoopCheckBox;
		void addAnimationsUI();
		::Dynamic addAnimationsUI_dyn();

		void getEvent(::String id, ::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params);

		void reloadCharacterImage();
		::Dynamic reloadCharacterImage_dyn();

		void genBoyOffsets();
		::Dynamic genBoyOffsets_dyn();

		void loadChar(bool isDad,::hx::Null< bool >  blahBlahBlah);
		::Dynamic loadChar_dyn();

		void updatePointerPos();
		::Dynamic updatePointerPos_dyn();

		 ::Dynamic findAnimationByName(::String name);
		::Dynamic findAnimationByName_dyn();

		void reloadCharacterOptions();
		::Dynamic reloadCharacterOptions_dyn();

		void reloadAnimationDropDown();
		::Dynamic reloadAnimationDropDown_dyn();

		void reloadCharacterDropDown();
		::Dynamic reloadCharacterDropDown_dyn();

		void resetHealthBarColor();
		::Dynamic resetHealthBarColor_dyn();

		void updatePresence();
		::Dynamic updatePresence_dyn();

		void update(Float elapsed);

		 ::openfl::net::FileReference _file;
		void onSaveComplete( ::openfl::events::Event _);
		::Dynamic onSaveComplete_dyn();

		void onSaveCancel( ::openfl::events::Event _);
		::Dynamic onSaveCancel_dyn();

		void onSaveError( ::openfl::events::IOErrorEvent _);
		::Dynamic onSaveError_dyn();

		void saveCharacter();
		::Dynamic saveCharacter_dyn();

		::String ClipboardAdd(::String prefix);
		::Dynamic ClipboardAdd_dyn();

};


#endif /* INCLUDED_CharacterEditorState */ 
