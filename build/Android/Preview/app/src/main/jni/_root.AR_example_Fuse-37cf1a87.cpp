// This file was generated based on /Users/kbs/Fuse/AR_example/build/Android/Preview/cache/ux15/AR_example.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AR_example_Fuse-37cf1a87.h>
#include <Fuse.Controls.TextControl.h>
#include <Uno.Bool.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uType* TYPES[1];

namespace g{

// internal sealed class AR_example_FuseControlsTextControl_Value_Property :11
// {
static void AR_example_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL));
    type->SetFields(1,
        ::TYPES[0/*Fuse.Controls.TextControl*/], offsetof(AR_example_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* AR_example_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AR_example_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("AR_example_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = AR_example_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))AR_example_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))AR_example_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))AR_example_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AR_example_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public AR_example_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :14
void AR_example_FuseControlsTextControl_Value_Property__ctor_3_fn(AR_example_FuseControlsTextControl_Value_Property* __this, ::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed string Get(Uno.UX.PropertyObject obj) :16
void AR_example_FuseControlsTextControl_Value_Property__Get1_fn(AR_example_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    uStackFrame __("AR_example_FuseControlsTextControl_Value_Property", "Get(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public AR_example_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) :14
void AR_example_FuseControlsTextControl_Value_Property__New1_fn(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector* name, AR_example_FuseControlsTextControl_Value_Property** __retval)
{
    *__retval = AR_example_FuseControlsTextControl_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object() :15
void AR_example_FuseControlsTextControl_Value_Property__get_Object_fn(AR_example_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin) :17
void AR_example_FuseControlsTextControl_Value_Property__Set1_fn(AR_example_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uStackFrame __("AR_example_FuseControlsTextControl_Value_Property", "Set(Uno.UX.PropertyObject,string,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[0/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter() :18
void AR_example_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(AR_example_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public AR_example_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [instance] :14
void AR_example_FuseControlsTextControl_Value_Property::ctor_3(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public AR_example_FuseControlsTextControl_Value_Property New(Fuse.Controls.TextControl obj, Uno.UX.Selector name) [static] :14
AR_example_FuseControlsTextControl_Value_Property* AR_example_FuseControlsTextControl_Value_Property::New1(::g::Fuse::Controls::TextControl* obj, ::g::Uno::UX::Selector name)
{
    AR_example_FuseControlsTextControl_Value_Property* obj1 = (AR_example_FuseControlsTextControl_Value_Property*)uNew(AR_example_FuseControlsTextControl_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

} // ::g
