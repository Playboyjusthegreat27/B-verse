#ifndef INCLUDED_LuaSprite
#define INCLUDED_LuaSprite

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
HX_DECLARE_CLASS0(LuaSprite)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES LuaSprite_obj : public  ::flixel::FlxSprite_obj
{
	public:
		typedef  ::flixel::FlxSprite_obj super;
		typedef LuaSprite_obj OBJ_;
		LuaSprite_obj();

	public:
		enum { _hx_ClassId = 0x40c918fd };

		void __construct( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="LuaSprite")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"LuaSprite"); }
		static ::hx::ObjectPtr< LuaSprite_obj > __new( ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic);
		static ::hx::ObjectPtr< LuaSprite_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic SimpleGraphic);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LuaSprite_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LuaSprite",bd,a3,85,7d); }

		bool wasAdded;
		bool isInFront;
};


#endif /* INCLUDED_LuaSprite */ 
