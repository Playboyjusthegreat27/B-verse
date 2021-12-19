#include <hxcpp.h>

#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_MenuCharacter
#include <MenuCharacter.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ab0efa272e315d84_11_new,"MenuCharacter","new",0x6b6b77dc,"MenuCharacter.new","MenuCharacter.hx",11,0x28a93714)
HX_LOCAL_STACK_FRAME(_hx_pos_ab0efa272e315d84_17_changeCharacter,"MenuCharacter","changeCharacter",0x891f6d95,"MenuCharacter.changeCharacter","MenuCharacter.hx",17,0x28a93714)

void MenuCharacter_obj::__construct(Float x,::String __o_character){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_11_new)
HXLINE(  12)		super::__construct(x,null(),null());
HXLINE(  14)		this->changeCharacter(character);
            	}

Dynamic MenuCharacter_obj::__CreateEmpty() { return new MenuCharacter_obj; }

void *MenuCharacter_obj::_hx_vtable = 0;

Dynamic MenuCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MenuCharacter_obj > _hx_result = new MenuCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MenuCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5962df7e) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5962df7e;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void MenuCharacter_obj::changeCharacter(::String __o_character){
            		::String character = __o_character;
            		if (::hx::IsNull(__o_character)) character = HX_("bf",c4,55,00,00);
            	HX_STACKFRAME(&_hx_pos_ab0efa272e315d84_17_changeCharacter)
HXLINE(  18)		if ((character == this->character)) {
HXLINE(  18)			return;
            		}
HXLINE(  20)		this->character = character;
HXLINE(  21)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  23)		::String _hx_switch_0 = character;
            		if (  (_hx_switch_0==HX_("bf",c4,55,00,00)) ){
HXLINE(  25)			::String library = null();
HXDLIN(  25)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_BF",3e,5f,59,e8));
HXDLIN(  25)			bool xmlExists = false;
HXDLIN(  25)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_BF",3e,5f,59,e8)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  25)				xmlExists = true;
            			}
HXDLIN(  25)			 ::Dynamic _hx_tmp;
HXDLIN(  25)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  25)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  25)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_BF",3e,5f,59,e8));
HXDLIN(  25)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  25)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  25)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_BF",3e,5f,59,e8)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  25)			::String _hx_tmp1;
HXDLIN(  25)			if (xmlExists) {
HXLINE(  25)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_BF",3e,5f,59,e8)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  25)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_BF",3e,5f,59,e8)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  25)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  26)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("M BF Idle",3d,1c,ce,eb),24,null(),null(),null());
HXLINE(  27)			this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("M bf HEY",d3,65,11,66),24,false,null(),null());
HXLINE(  24)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("dad",47,36,4c,00)) ){
HXLINE(  34)			::String library = null();
HXDLIN(  34)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Dad",6d,93,db,65));
HXDLIN(  34)			bool xmlExists = false;
HXDLIN(  34)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Dad",6d,93,db,65)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  34)				xmlExists = true;
            			}
HXDLIN(  34)			 ::Dynamic _hx_tmp;
HXDLIN(  34)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  34)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  34)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Dad",6d,93,db,65));
HXDLIN(  34)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  34)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  34)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Dad",6d,93,db,65)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  34)			::String _hx_tmp1;
HXDLIN(  34)			if (xmlExists) {
HXLINE(  34)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Dad",6d,93,db,65)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  34)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Dad",6d,93,db,65)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  34)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  35)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("M Dad Idle",00,f6,aa,c0),24,null(),null(),null());
HXLINE(  33)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("gf",1f,5a,00,00)) ){
HXLINE(  30)			::String library = null();
HXDLIN(  30)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_GF",99,63,59,e8));
HXDLIN(  30)			bool xmlExists = false;
HXDLIN(  30)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_GF",99,63,59,e8)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  30)				xmlExists = true;
            			}
HXDLIN(  30)			 ::Dynamic _hx_tmp;
HXDLIN(  30)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  30)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  30)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_GF",99,63,59,e8));
HXDLIN(  30)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  30)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  30)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_GF",99,63,59,e8)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  30)			::String _hx_tmp1;
HXDLIN(  30)			if (xmlExists) {
HXLINE(  30)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_GF",99,63,59,e8)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  30)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_GF",99,63,59,e8)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  30)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  31)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("M GF Idle",02,6e,b9,bb),24,null(),null(),null());
HXLINE(  29)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("mom",cb,16,53,00)) ){
HXLINE(  46)			::String library = null();
HXDLIN(  46)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Mom",f1,73,e2,65));
HXDLIN(  46)			bool xmlExists = false;
HXDLIN(  46)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Mom",f1,73,e2,65)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  46)				xmlExists = true;
            			}
HXDLIN(  46)			 ::Dynamic _hx_tmp;
HXDLIN(  46)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  46)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  46)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Mom",f1,73,e2,65));
HXDLIN(  46)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  46)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  46)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Mom",f1,73,e2,65)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  46)			::String _hx_tmp1;
HXDLIN(  46)			if (xmlExists) {
HXLINE(  46)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Mom",f1,73,e2,65)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  46)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Mom",f1,73,e2,65)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  46)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  47)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("M Mom Idle",fc,b6,d3,a2),24,null(),null(),null());
HXLINE(  45)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("parents-christmas",fe,94,c5,32)) ){
HXLINE(  50)			::String library = null();
HXDLIN(  50)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Parents",2f,68,02,df));
HXDLIN(  50)			bool xmlExists = false;
HXDLIN(  50)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Parents",2f,68,02,df)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  50)				xmlExists = true;
            			}
HXDLIN(  50)			 ::Dynamic _hx_tmp;
HXDLIN(  50)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  50)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  50)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Parents",2f,68,02,df));
HXDLIN(  50)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  50)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  50)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Parents",2f,68,02,df)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  50)			::String _hx_tmp1;
HXDLIN(  50)			if (xmlExists) {
HXLINE(  50)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Parents",2f,68,02,df)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  50)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Parents",2f,68,02,df)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  50)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  51)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("M Parents Idle",7e,32,83,84),24,null(),null(),null());
HXLINE(  49)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("pico",e5,e8,57,4a)) ){
HXLINE(  42)			::String library = null();
HXDLIN(  42)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Pico",ff,0c,3a,c2));
HXDLIN(  42)			bool xmlExists = false;
HXDLIN(  42)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Pico",ff,0c,3a,c2)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  42)				xmlExists = true;
            			}
HXDLIN(  42)			 ::Dynamic _hx_tmp;
HXDLIN(  42)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  42)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  42)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Pico",ff,0c,3a,c2));
HXDLIN(  42)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  42)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  42)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Pico",ff,0c,3a,c2)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  42)			::String _hx_tmp1;
HXDLIN(  42)			if (xmlExists) {
HXLINE(  42)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Pico",ff,0c,3a,c2)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  42)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Pico",ff,0c,3a,c2)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  42)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  43)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("M Pico Idle",9c,3a,20,41),24,null(),null(),null());
HXLINE(  41)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  54)			::String library = null();
HXDLIN(  54)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Senpai",d6,bd,54,3b));
HXDLIN(  54)			bool xmlExists = false;
HXDLIN(  54)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Senpai",d6,bd,54,3b)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  54)				xmlExists = true;
            			}
HXDLIN(  54)			 ::Dynamic _hx_tmp;
HXDLIN(  54)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  54)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  54)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Senpai",d6,bd,54,3b));
HXDLIN(  54)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  54)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  54)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Senpai",d6,bd,54,3b)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  54)			::String _hx_tmp1;
HXDLIN(  54)			if (xmlExists) {
HXLINE(  54)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Senpai",d6,bd,54,3b)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  54)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Senpai",d6,bd,54,3b)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  54)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  55)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("M Senpai Idle",25,d6,98,dc),24,null(),null(),null());
HXLINE(  53)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE(  38)			::String library = null();
HXDLIN(  38)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Spooky_Kids",07,02,30,ff));
HXDLIN(  38)			bool xmlExists = false;
HXDLIN(  38)			if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Spooky_Kids",07,02,30,ff)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  38)				xmlExists = true;
            			}
HXDLIN(  38)			 ::Dynamic _hx_tmp;
HXDLIN(  38)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  38)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  38)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("menucharacters/Menu_Spooky_Kids",07,02,30,ff));
HXDLIN(  38)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  38)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  38)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Spooky_Kids",07,02,30,ff)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  38)			::String _hx_tmp1;
HXDLIN(  38)			if (xmlExists) {
HXLINE(  38)				_hx_tmp1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Spooky_Kids",07,02,30,ff)) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  38)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("menucharacters/Menu_Spooky_Kids",07,02,30,ff)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  38)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  39)			this->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("M Spooky Kids Idle",45,3a,83,d7),24,null(),null(),null());
HXLINE(  37)			goto _hx_goto_1;
            		}
            		_hx_goto_1:;
HXLINE(  57)		this->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE(  58)		this->updateHitbox();
HXLINE(  60)		::String _hx_switch_1 = character;
            		if (  (_hx_switch_1==HX_("bf",c4,55,00,00)) ){
HXLINE(  62)			this->offset->set(15,-40);
HXDLIN(  62)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_1==HX_("gf",1f,5a,00,00)) ){
HXLINE(  65)			this->offset->set(0,-25);
HXDLIN(  65)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_1==HX_("mom",cb,16,53,00)) ){
HXLINE(  74)			this->offset->set(0,10);
HXDLIN(  74)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_1==HX_("parents-christmas",fe,94,c5,32)) ){
HXLINE(  77)			this->offset->set(110,10);
HXDLIN(  77)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_1==HX_("pico",e5,e8,57,4a)) ){
HXLINE(  71)			this->offset->set(0,-120);
HXDLIN(  71)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_1==HX_("senpai",3c,df,8d,6b)) ){
HXLINE(  80)			this->offset->set(60,-70);
HXDLIN(  80)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_1==HX_("spooky",eb,bd,9e,c1)) ){
HXLINE(  68)			this->offset->set(0,-80);
HXDLIN(  68)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MenuCharacter_obj,changeCharacter,(void))


::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__new(Float x,::String __o_character) {
	::hx::ObjectPtr< MenuCharacter_obj > __this = new MenuCharacter_obj();
	__this->__construct(x,__o_character);
	return __this;
}

::hx::ObjectPtr< MenuCharacter_obj > MenuCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,::String __o_character) {
	MenuCharacter_obj *__this = (MenuCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MenuCharacter_obj), true, "MenuCharacter"));
	*(void **)__this = MenuCharacter_obj::_hx_vtable;
	__this->__construct(x,__o_character);
	return __this;
}

MenuCharacter_obj::MenuCharacter_obj()
{
}

void MenuCharacter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuCharacter);
	HX_MARK_MEMBER_NAME(character,"character");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuCharacter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(character,"character");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val MenuCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { return ::hx::Val( character ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeCharacter") ) { return ::hx::Val( changeCharacter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MenuCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"character") ) { character=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("character",a9,db,d1,41));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MenuCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MenuCharacter_obj,character),HX_("character",a9,db,d1,41)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MenuCharacter_obj_sStaticStorageInfo = 0;
#endif

static ::String MenuCharacter_obj_sMemberFields[] = {
	HX_("character",a9,db,d1,41),
	HX_("changeCharacter",19,7c,6c,fc),
	::String(null()) };

::hx::Class MenuCharacter_obj::__mClass;

void MenuCharacter_obj::__register()
{
	MenuCharacter_obj _hx_dummy;
	MenuCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("MenuCharacter",ea,99,ab,10);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MenuCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MenuCharacter_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MenuCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MenuCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

