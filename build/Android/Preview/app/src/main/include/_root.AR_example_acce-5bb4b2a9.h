// This file was generated based on /Users/kbs/Fuse/AR_example/build/Android/Preview/cache/ux15/AR_example.unoproj.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.UX.PropertyAccessor.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct AR_example_accessor_countButton_Text;}

namespace g{

// internal sealed class AR_example_accessor_countButton_Text :1
// {
::g::Uno::UX::PropertyAccessor_type* AR_example_accessor_countButton_Text_typeof();
void AR_example_accessor_countButton_Text__ctor_1_fn(AR_example_accessor_countButton_Text* __this);
void AR_example_accessor_countButton_Text__GetAsObject_fn(AR_example_accessor_countButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval);
void AR_example_accessor_countButton_Text__get_Name_fn(AR_example_accessor_countButton_Text* __this, ::g::Uno::UX::Selector* __retval);
void AR_example_accessor_countButton_Text__New1_fn(AR_example_accessor_countButton_Text** __retval);
void AR_example_accessor_countButton_Text__get_PropertyType_fn(AR_example_accessor_countButton_Text* __this, uType** __retval);
void AR_example_accessor_countButton_Text__SetAsObject_fn(AR_example_accessor_countButton_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin);
void AR_example_accessor_countButton_Text__get_SupportsOriginSetter_fn(AR_example_accessor_countButton_Text* __this, bool* __retval);

struct AR_example_accessor_countButton_Text : ::g::Uno::UX::PropertyAccessor
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor*> Singleton_;
    static uSStrong< ::g::Uno::UX::PropertyAccessor*>& Singleton() { return AR_example_accessor_countButton_Text_typeof()->Init(), Singleton_; }
    static ::g::Uno::UX::Selector _name_;
    static ::g::Uno::UX::Selector& _name() { return AR_example_accessor_countButton_Text_typeof()->Init(), _name_; }

    void ctor_1();
    static AR_example_accessor_countButton_Text* New1();
};
// }

} // ::g
