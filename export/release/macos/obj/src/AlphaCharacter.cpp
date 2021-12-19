#include <hxcpp.h>

#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_352_new,"AlphaCharacter","new",0xcdf30efd,"AlphaCharacter.new","Alphabet.hx",352,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_377_createBoldLetter,"AlphaCharacter","createBoldLetter",0xb921b5aa,"AlphaCharacter.createBoldLetter","Alphabet.hx",377,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_384_createBoldNumber,"AlphaCharacter","createBoldNumber",0xb7938f8d,"AlphaCharacter.createBoldNumber","Alphabet.hx",384,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_391_createBoldSymbol,"AlphaCharacter","createBoldSymbol",0x04f6b81c,"AlphaCharacter.createBoldSymbol","Alphabet.hx",391,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_430_createLetter,"AlphaCharacter","createLetter",0xc29272c5,"AlphaCharacter.createLetter","Alphabet.hx",430,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_446_createNumber,"AlphaCharacter","createNumber",0xc1044ca8,"AlphaCharacter.createNumber","Alphabet.hx",446,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_457_createSymbol,"AlphaCharacter","createSymbol",0x0e677537,"AlphaCharacter.createSymbol","Alphabet.hx",457,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_354_boot,"AlphaCharacter","boot",0x5ed30ef5,"AlphaCharacter.boot","Alphabet.hx",354,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_356_boot,"AlphaCharacter","boot",0x5ed30ef5,"AlphaCharacter.boot","Alphabet.hx",356,0xc2e40fcb)
HX_LOCAL_STACK_FRAME(_hx_pos_0b74b60e7bf66d88_358_boot,"AlphaCharacter","boot",0x5ed30ef5,"AlphaCharacter.boot","Alphabet.hx",358,0xc2e40fcb)

void AlphaCharacter_obj::__construct(Float x,Float y,Float textSize){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_352_new)
HXLINE( 362)		this->textSize = ((Float)1);
HXLINE( 360)		this->row = 0;
HXLINE( 366)		super::__construct(x,y,null());
HXLINE( 367)		::String library = null();
HXDLIN( 367)		 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("alphabet",b3,7c,38,21));
HXDLIN( 367)		bool xmlExists = false;
HXDLIN( 367)		if (::sys::FileSystem_obj::exists((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("alphabet",b3,7c,38,21)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 367)			xmlExists = true;
            		}
HXDLIN( 367)		 ::Dynamic tex;
HXDLIN( 367)		if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 367)			tex = imageLoaded;
            		}
            		else {
HXLINE( 367)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("alphabet",b3,7c,38,21));
HXDLIN( 367)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 367)				tex = imageToReturn;
            			}
            			else {
HXLINE( 367)				tex = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("alphabet",b3,7c,38,21)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
            		}
HXDLIN( 367)		::String tex1;
HXDLIN( 367)		if (xmlExists) {
HXLINE( 367)			tex1 = ::sys::io::File_obj::getContent((HX_("mods/",9e,2f,58,0c) + ((HX_("images/",77,50,74,c1) + HX_("alphabet",b3,7c,38,21)) + HX_(".xml",69,3e,c3,1e))));
            		}
            		else {
HXLINE( 367)			tex1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("alphabet",b3,7c,38,21)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            		}
HXDLIN( 367)		 ::flixel::graphics::frames::FlxAtlasFrames tex2 = ::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(tex,tex1);
HXLINE( 368)		this->set_frames(tex2);
HXLINE( 370)		this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * textSize)),null());
HXLINE( 371)		this->updateHitbox();
HXLINE( 372)		this->textSize = textSize;
HXLINE( 373)		this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            	}

Dynamic AlphaCharacter_obj::__CreateEmpty() { return new AlphaCharacter_obj; }

void *AlphaCharacter_obj::_hx_vtable = 0;

Dynamic AlphaCharacter_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AlphaCharacter_obj > _hx_result = new AlphaCharacter_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool AlphaCharacter_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2c01639b) {
		if (inClassId<=(int)0x10d46877) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x10d46877;
		} else {
			return inClassId==(int)0x2c01639b;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void AlphaCharacter_obj::createBoldLetter(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_377_createBoldLetter)
HXLINE( 378)		 ::flixel::animation::FlxAnimationController _hx_tmp = this->animation;
HXDLIN( 378)		_hx_tmp->addByPrefix(letter,(letter.toUpperCase() + HX_(" bold",a5,11,ee,ad)),24,null(),null(),null());
HXLINE( 379)		this->animation->play(letter,null(),null(),null());
HXLINE( 380)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createBoldLetter,(void))

void AlphaCharacter_obj::createBoldNumber(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_384_createBoldNumber)
HXLINE( 385)		this->animation->addByPrefix(letter,(HX_("bold",85,81,1b,41) + letter),24,null(),null(),null());
HXLINE( 386)		this->animation->play(letter,null(),null(),null());
HXLINE( 387)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createBoldNumber,(void))

void AlphaCharacter_obj::createBoldSymbol(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_391_createBoldSymbol)
HXLINE( 392)		::String _hx_switch_0 = letter;
            		if (  (_hx_switch_0==HX_("!",21,00,00,00)) ){
HXLINE( 401)			this->animation->addByPrefix(letter,HX_("EXCLAMATION POINT bold",e8,54,4d,e9),24,null(),null(),null());
HXDLIN( 401)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("'",27,00,00,00)) ){
HXLINE( 397)			this->animation->addByPrefix(letter,HX_("APOSTRAPHIE bold",41,48,86,a1),24,null(),null(),null());
HXDLIN( 397)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("(",28,00,00,00)) ){
HXLINE( 403)			this->animation->addByPrefix(letter,HX_("bold (",cd,c8,22,60),24,null(),null(),null());
HXDLIN( 403)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_(")",29,00,00,00)) ){
HXLINE( 405)			this->animation->addByPrefix(letter,HX_("bold )",ce,c8,22,60),24,null(),null(),null());
HXDLIN( 405)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_(".",2e,00,00,00)) ){
HXLINE( 395)			this->animation->addByPrefix(letter,HX_("PERIOD bold",04,41,9c,ad),24,null(),null(),null());
HXDLIN( 395)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("?",3f,00,00,00)) ){
HXLINE( 399)			this->animation->addByPrefix(letter,HX_("QUESTION MARK bold",fe,8c,0a,9b),24,null(),null(),null());
HXDLIN( 399)			goto _hx_goto_3;
            		}
            		/* default */{
HXLINE( 407)			this->animation->addByPrefix(letter,(HX_("bold ",fb,d2,f5,b6) + letter),24,null(),null(),null());
            		}
            		_hx_goto_3:;
HXLINE( 409)		this->animation->play(letter,null(),null(),null());
HXLINE( 410)		this->updateHitbox();
HXLINE( 411)		::String _hx_switch_1 = letter;
            		if (  (_hx_switch_1==HX_("'",27,00,00,00)) ){
HXLINE( 414)			this->set_y((this->y - (( (Float)(20) ) * this->textSize)));
HXDLIN( 414)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_1==HX_("(",28,00,00,00)) ){
HXLINE( 419)			this->set_x((this->x - (( (Float)(65) ) * this->textSize)));
HXLINE( 420)			this->set_y((this->y - (( (Float)(5) ) * this->textSize)));
HXLINE( 421)			this->offset->set_x((( (Float)(-58) ) * this->textSize));
HXLINE( 418)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_1==HX_(")",29,00,00,00)) ){
HXLINE( 423)			this->set_x((this->x - (( (Float)(20) ) / this->textSize)));
HXLINE( 424)			this->set_y((this->y - (( (Float)(5) ) * this->textSize)));
HXLINE( 425)			this->offset->set_x((( (Float)(12) ) * this->textSize));
HXLINE( 422)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_1==HX_("-",2d,00,00,00)) ){
HXLINE( 416)			this->set_x((this->x - (( (Float)(35) ) - (( (Float)(90) ) * (((Float)1.0) - this->textSize)))));
HXLINE( 417)			this->set_y((this->y - (( (Float)(16) ) * this->textSize)));
HXLINE( 415)			goto _hx_goto_4;
            		}
            		_hx_goto_4:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createBoldSymbol,(void))

void AlphaCharacter_obj::createLetter(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_430_createLetter)
HXLINE( 431)		::String letterCase = HX_("lowercase",31,ad,a5,66);
HXLINE( 432)		if ((letter.toLowerCase() != letter)) {
HXLINE( 434)			letterCase = HX_("capital",a8,a6,0b,a0);
            		}
HXLINE( 437)		this->animation->addByPrefix(letter,((letter + HX_(" ",20,00,00,00)) + letterCase),24,null(),null(),null());
HXLINE( 438)		this->animation->play(letter,null(),null(),null());
HXLINE( 439)		this->updateHitbox();
HXLINE( 441)		this->set_y((( (Float)(110) ) - this->get_height()));
HXLINE( 442)		this->set_y((this->y + (this->row * 60)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createLetter,(void))

void AlphaCharacter_obj::createNumber(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_446_createNumber)
HXLINE( 447)		this->animation->addByPrefix(letter,letter,24,null(),null(),null());
HXLINE( 448)		this->animation->play(letter,null(),null(),null());
HXLINE( 450)		this->updateHitbox();
HXLINE( 452)		this->set_y((( (Float)(110) ) - this->get_height()));
HXLINE( 453)		this->set_y((this->y + (this->row * 60)));
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createNumber,(void))

void AlphaCharacter_obj::createSymbol(::String letter){
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_457_createSymbol)
HXLINE( 458)		::String _hx_switch_0 = letter;
            		if (  (_hx_switch_0==HX_("!",21,00,00,00)) ){
HXLINE( 470)			this->animation->addByPrefix(letter,HX_("exclamation point",dd,17,c1,eb),24,null(),null(),null());
HXDLIN( 470)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("#",23,00,00,00)) ){
HXLINE( 461)			this->animation->addByPrefix(letter,HX_("hashtag",4c,7f,81,29),24,null(),null(),null());
HXDLIN( 461)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("'",27,00,00,00)) ){
HXLINE( 465)			this->animation->addByPrefix(letter,HX_("apostraphie",04,43,cf,ad),24,null(),null(),null());
HXLINE( 466)			this->set_y((this->y - ( (Float)(50) )));
HXLINE( 464)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_(",",2c,00,00,00)) ){
HXLINE( 472)			this->animation->addByPrefix(letter,HX_("comma",d5,31,5d,4a),24,null(),null(),null());
HXDLIN( 472)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_(".",2e,00,00,00)) ){
HXLINE( 463)			this->animation->addByPrefix(letter,HX_("period",01,61,1b,3b),24,null(),null(),null());
HXDLIN( 463)			goto _hx_goto_8;
            		}
            		if (  (_hx_switch_0==HX_("?",3f,00,00,00)) ){
HXLINE( 468)			this->animation->addByPrefix(letter,HX_("question mark",47,0b,f6,d2),24,null(),null(),null());
HXDLIN( 468)			goto _hx_goto_8;
            		}
            		/* default */{
HXLINE( 474)			this->animation->addByPrefix(letter,letter,24,null(),null(),null());
            		}
            		_hx_goto_8:;
HXLINE( 476)		this->animation->play(letter,null(),null(),null());
HXLINE( 478)		this->updateHitbox();
HXLINE( 480)		this->set_y((( (Float)(110) ) - this->get_height()));
HXLINE( 481)		this->set_y((this->y + (this->row * 60)));
HXLINE( 482)		::String _hx_switch_1 = letter;
            		if (  (_hx_switch_1==HX_("'",27,00,00,00)) ){
HXLINE( 485)			this->set_y((this->y - ( (Float)(20) )));
HXDLIN( 485)			goto _hx_goto_9;
            		}
            		if (  (_hx_switch_1==HX_("-",2d,00,00,00)) ){
HXLINE( 487)			this->set_x((this->x - (( (Float)(35) ) - (( (Float)(90) ) * (((Float)1.0) - this->textSize)))));
HXLINE( 488)			this->set_y((this->y - ( (Float)(16) )));
HXLINE( 486)			goto _hx_goto_9;
            		}
            		_hx_goto_9:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(AlphaCharacter_obj,createSymbol,(void))

::String AlphaCharacter_obj::alphabet;

::String AlphaCharacter_obj::numbers;

::String AlphaCharacter_obj::symbols;


::hx::ObjectPtr< AlphaCharacter_obj > AlphaCharacter_obj::__new(Float x,Float y,Float textSize) {
	::hx::ObjectPtr< AlphaCharacter_obj > __this = new AlphaCharacter_obj();
	__this->__construct(x,y,textSize);
	return __this;
}

::hx::ObjectPtr< AlphaCharacter_obj > AlphaCharacter_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,Float textSize) {
	AlphaCharacter_obj *__this = (AlphaCharacter_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(AlphaCharacter_obj), true, "AlphaCharacter"));
	*(void **)__this = AlphaCharacter_obj::_hx_vtable;
	__this->__construct(x,y,textSize);
	return __this;
}

AlphaCharacter_obj::AlphaCharacter_obj()
{
}

::hx::Val AlphaCharacter_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { return ::hx::Val( row ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { return ::hx::Val( textSize ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createLetter") ) { return ::hx::Val( createLetter_dyn() ); }
		if (HX_FIELD_EQ(inName,"createNumber") ) { return ::hx::Val( createNumber_dyn() ); }
		if (HX_FIELD_EQ(inName,"createSymbol") ) { return ::hx::Val( createSymbol_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"createBoldLetter") ) { return ::hx::Val( createBoldLetter_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBoldNumber") ) { return ::hx::Val( createBoldNumber_dyn() ); }
		if (HX_FIELD_EQ(inName,"createBoldSymbol") ) { return ::hx::Val( createBoldSymbol_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool AlphaCharacter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numbers") ) { outValue = ( numbers ); return true; }
		if (HX_FIELD_EQ(inName,"symbols") ) { outValue = ( symbols ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphabet") ) { outValue = ( alphabet ); return true; }
	}
	return false;
}

::hx::Val AlphaCharacter_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"row") ) { row=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"textSize") ) { textSize=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool AlphaCharacter_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"numbers") ) { numbers=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"symbols") ) { symbols=ioValue.Cast< ::String >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"alphabet") ) { alphabet=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void AlphaCharacter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("row",1a,e2,56,00));
	outFields->push(HX_("textSize",0e,f4,4e,4f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo AlphaCharacter_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(AlphaCharacter_obj,row),HX_("row",1a,e2,56,00)},
	{::hx::fsFloat,(int)offsetof(AlphaCharacter_obj,textSize),HX_("textSize",0e,f4,4e,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo AlphaCharacter_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AlphaCharacter_obj::alphabet,HX_("alphabet",b3,7c,38,21)},
	{::hx::fsString,(void *) &AlphaCharacter_obj::numbers,HX_("numbers",8a,69,bb,a9)},
	{::hx::fsString,(void *) &AlphaCharacter_obj::symbols,HX_("symbols",1b,be,1b,13)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String AlphaCharacter_obj_sMemberFields[] = {
	HX_("row",1a,e2,56,00),
	HX_("textSize",0e,f4,4e,4f),
	HX_("createBoldLetter",67,92,a3,7f),
	HX_("createBoldNumber",4a,6c,15,7e),
	HX_("createBoldSymbol",d9,94,78,cb),
	HX_("createLetter",02,ed,5d,c5),
	HX_("createNumber",e5,c6,cf,c3),
	HX_("createSymbol",74,ef,32,11),
	::String(null()) };

static void AlphaCharacter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AlphaCharacter_obj::alphabet,"alphabet");
	HX_MARK_MEMBER_NAME(AlphaCharacter_obj::numbers,"numbers");
	HX_MARK_MEMBER_NAME(AlphaCharacter_obj::symbols,"symbols");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AlphaCharacter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AlphaCharacter_obj::alphabet,"alphabet");
	HX_VISIT_MEMBER_NAME(AlphaCharacter_obj::numbers,"numbers");
	HX_VISIT_MEMBER_NAME(AlphaCharacter_obj::symbols,"symbols");
};

#endif

::hx::Class AlphaCharacter_obj::__mClass;

static ::String AlphaCharacter_obj_sStaticFields[] = {
	HX_("alphabet",b3,7c,38,21),
	HX_("numbers",8a,69,bb,a9),
	HX_("symbols",1b,be,1b,13),
	::String(null())
};

void AlphaCharacter_obj::__register()
{
	AlphaCharacter_obj _hx_dummy;
	AlphaCharacter_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("AlphaCharacter",8b,cc,2e,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AlphaCharacter_obj::__GetStatic;
	__mClass->mSetStaticField = &AlphaCharacter_obj::__SetStatic;
	__mClass->mMarkFunc = AlphaCharacter_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AlphaCharacter_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(AlphaCharacter_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< AlphaCharacter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AlphaCharacter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AlphaCharacter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AlphaCharacter_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AlphaCharacter_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_354_boot)
HXDLIN( 354)		alphabet = HX_("abcdefghijklmnopqrstuvwxyz",6d,97,f1,fb);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_356_boot)
HXDLIN( 356)		numbers = HX_("1234567890",5b,2e,e3,45);
            	}
{
            	HX_STACKFRAME(&_hx_pos_0b74b60e7bf66d88_358_boot)
HXDLIN( 358)		symbols = HX_("|~#$%()*+-:;<=>@[]^_.,'!?",f7,99,8c,d3);
            	}
}

