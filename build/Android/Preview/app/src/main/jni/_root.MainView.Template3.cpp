// This file was generated based on /Users/kbs/Fuse/AR_example/build/Android/Preview/cache/ux15/MainView.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.ARscreen.h>
#include <_root.MainView.h>
#include <_root.MainView.Template3.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Node.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[2];

namespace g{

// public partial sealed class MainView.Template3 :75
// {
// static Template3() :84
static void MainView__Template3__cctor__fn(uType* __type)
{
    MainView__Template3::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"ARscreen"*/]);
}

static void MainView__Template3_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ARscreen");
    ::STRINGS[1] = uString::Const("MainView.ux");
    type->SetFields(2,
        ::g::MainView_typeof(), offsetof(MainView__Template3, __parent1), uFieldFlagsWeak,
        ::g::MainView_typeof(), offsetof(MainView__Template3, __parentInstance1), uFieldFlagsWeak,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&MainView__Template3::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MainView__Template3__New2_fn, 0, true, type, 2, ::g::MainView_typeof(), ::g::MainView_typeof()));
}

::g::Uno::UX::Template_type* MainView__Template3_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Template_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(MainView__Template3);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("MainView.Template3", options);
    type->fp_build_ = MainView__Template3_build;
    type->fp_cctor_ = MainView__Template3__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Template*, uObject**))MainView__Template3__New1_fn;
    return type;
}

// public Template3(MainView parent, MainView parentInstance) :79
void MainView__Template3__ctor_1_fn(MainView__Template3* __this, ::g::MainView* parent, ::g::MainView* parentInstance)
{
    __this->ctor_1(parent, parentInstance);
}

// public override sealed object New() :87
void MainView__Template3__New1_fn(MainView__Template3* __this, uObject** __retval)
{
    uStackFrame __("MainView.Template3", "New()");
    ::g::ARscreen* __self1 = ::g::ARscreen::New5(uPtr(__this->__parent1)->router);
    __self1->Name(MainView__Template3::__selector0_);
    __self1->SourceLineNumber(7);
    __self1->SourceFileName(::STRINGS[1/*"MainView.ux"*/]);
    return *__retval = __self1, void();
}

// public Template3 New(MainView parent, MainView parentInstance) :79
void MainView__Template3__New2_fn(::g::MainView* parent, ::g::MainView* parentInstance, MainView__Template3** __retval)
{
    *__retval = MainView__Template3::New2(parent, parentInstance);
}

::g::Uno::UX::Selector MainView__Template3::__selector0_;

// public Template3(MainView parent, MainView parentInstance) [instance] :79
void MainView__Template3::ctor_1(::g::MainView* parent, ::g::MainView* parentInstance)
{
    ctor_(::STRINGS[0/*"ARscreen"*/], false);
    __parent1 = parent;
    __parentInstance1 = parentInstance;
}

// public Template3 New(MainView parent, MainView parentInstance) [static] :79
MainView__Template3* MainView__Template3::New2(::g::MainView* parent, ::g::MainView* parentInstance)
{
    MainView__Template3* obj1 = (MainView__Template3*)uNew(MainView__Template3_typeof());
    obj1->ctor_1(parent, parentInstance);
    return obj1;
}
// }

} // ::g
