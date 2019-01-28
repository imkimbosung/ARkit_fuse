// This file was generated based on /Users/kbs/Fuse/AR_example/build/Android/Preview/cache/ux15/AR_example.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AR_example_acce-5bb4b2a9.h>
#include <_root.countButton.h>
#include <Uno.Bool.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[1];
static uType* TYPES[3];

namespace g{

// internal sealed class AR_example_accessor_countButton_Text :1
// {
// static generated AR_example_accessor_countButton_Text() :1
static void AR_example_accessor_countButton_Text__cctor__fn(uType* __type)
{
    AR_example_accessor_countButton_Text::Singleton_ = AR_example_accessor_countButton_Text::New1();
    AR_example_accessor_countButton_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Text"*/]);
}

static void AR_example_accessor_countButton_Text_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Text");
    ::TYPES[0] = ::g::countButton_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&AR_example_accessor_countButton_Text::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&AR_example_accessor_countButton_Text::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* AR_example_accessor_countButton_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AR_example_accessor_countButton_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("AR_example_accessor_countButton_Text", options);
    type->fp_build_ = AR_example_accessor_countButton_Text_build;
    type->fp_ctor_ = (void*)AR_example_accessor_countButton_Text__New1_fn;
    type->fp_cctor_ = AR_example_accessor_countButton_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))AR_example_accessor_countButton_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))AR_example_accessor_countButton_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))AR_example_accessor_countButton_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))AR_example_accessor_countButton_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))AR_example_accessor_countButton_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated AR_example_accessor_countButton_Text() :1
void AR_example_accessor_countButton_Text__ctor_1_fn(AR_example_accessor_countButton_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj) :7
void AR_example_accessor_countButton_Text__GetAsObject_fn(AR_example_accessor_countButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    uStackFrame __("AR_example_accessor_countButton_Text", "GetAsObject(Uno.UX.PropertyObject)");
    return *__retval = uPtr(uCast< ::g::countButton*>(obj, ::TYPES[0/*countButton*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name() :4
void AR_example_accessor_countButton_Text__get_Name_fn(AR_example_accessor_countButton_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = AR_example_accessor_countButton_Text::_name_, void();
}

// public generated AR_example_accessor_countButton_Text New() :1
void AR_example_accessor_countButton_Text__New1_fn(AR_example_accessor_countButton_Text** __retval)
{
    *__retval = AR_example_accessor_countButton_Text::New1();
}

// public override sealed Uno.Type get_PropertyType() :6
void AR_example_accessor_countButton_Text__get_PropertyType_fn(AR_example_accessor_countButton_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[1/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin) :8
void AR_example_accessor_countButton_Text__SetAsObject_fn(AR_example_accessor_countButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uStackFrame __("AR_example_accessor_countButton_Text", "SetAsObject(Uno.UX.PropertyObject,object,Uno.UX.IPropertyListener)");
    uPtr(uCast< ::g::countButton*>(obj, ::TYPES[0/*countButton*/]))->SetText(uCast<uString*>(v, ::TYPES[1/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter() :9
void AR_example_accessor_countButton_Text__get_SupportsOriginSetter_fn(AR_example_accessor_countButton_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> AR_example_accessor_countButton_Text::Singleton_;
::g::Uno::UX::Selector AR_example_accessor_countButton_Text::_name_;

// public generated AR_example_accessor_countButton_Text() [instance] :1
void AR_example_accessor_countButton_Text::ctor_1()
{
    ctor_();
}

// public generated AR_example_accessor_countButton_Text New() [static] :1
AR_example_accessor_countButton_Text* AR_example_accessor_countButton_Text::New1()
{
    AR_example_accessor_countButton_Text* obj1 = (AR_example_accessor_countButton_Text*)uNew(AR_example_accessor_countButton_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

} // ::g
