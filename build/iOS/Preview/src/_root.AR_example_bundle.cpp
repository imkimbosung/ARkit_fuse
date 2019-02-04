// This file was generated based on /Users/kbs/Fuse/AR_example/AR_example.unoproj.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AR_example_bundle.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
static uString* STRINGS[8];

namespace g{

// public static generated class AR_example_bundle :0
// {
// static AR_example_bundle() :0
static void AR_example_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    AR_example_bundle::ARscreen4293cf5d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AR_example"*/]))->GetFile(::STRINGS[1/*"arscreen-85...*/]);
    AR_example_bundle::back19b58a4d_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AR_example"*/]))->GetFile(::STRINGS[2/*"back-b716c6...*/]);
    AR_example_bundle::CounterPage608bfab1_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AR_example"*/]))->GetFile(::STRINGS[3/*"counterpage...*/]);
    AR_example_bundle::HomePageed8c17c6_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AR_example"*/]))->GetFile(::STRINGS[4/*"homepage-a6...*/]);
    AR_example_bundle::logo3b7e0030c_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AR_example"*/]))->GetFile(::STRINGS[5/*"logo3-11eb0...*/]);
    AR_example_bundle::RespberryPi391ee3a9_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AR_example"*/]))->GetFile(::STRINGS[6/*"respberrypi...*/]);
    AR_example_bundle::ScreenPagec881ae49_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[0/*"AR_example"*/]))->GetFile(::STRINGS[7/*"screenpage-...*/]);
}

static void AR_example_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("AR_example");
    ::STRINGS[1] = uString::Const("arscreen-853234af.js");
    ::STRINGS[2] = uString::Const("back-b716c6ab.png");
    ::STRINGS[3] = uString::Const("counterpage-1c4ed25f.js");
    ::STRINGS[4] = uString::Const("homepage-a66ffa00.js");
    ::STRINGS[5] = uString::Const("logo3-11eb0c26.png");
    ::STRINGS[6] = uString::Const("respberrypi-90439cef.js");
    ::STRINGS[7] = uString::Const("screenpage-549f3817.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AR_example_bundle::ARscreen4293cf5d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AR_example_bundle::back19b58a4d_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AR_example_bundle::CounterPage608bfab1_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AR_example_bundle::HomePageed8c17c6_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AR_example_bundle::logo3b7e0030c_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AR_example_bundle::RespberryPi391ee3a9_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&AR_example_bundle::ScreenPagec881ae49_, uFieldFlagsStatic);
    type->Reflection.SetFields(7,
        new uField("ARscreen4293cf5d", 0),
        new uField("back19b58a4d", 1),
        new uField("CounterPage608bfab1", 2),
        new uField("HomePageed8c17c6", 3),
        new uField("logo3b7e0030c", 4),
        new uField("RespberryPi391ee3a9", 5),
        new uField("ScreenPagec881ae49", 6));
}

uClassType* AR_example_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("AR_example_bundle", options);
    type->fp_build_ = AR_example_bundle_build;
    type->fp_cctor_ = AR_example_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> AR_example_bundle::ARscreen4293cf5d_;
uSStrong< ::g::Uno::IO::BundleFile*> AR_example_bundle::back19b58a4d_;
uSStrong< ::g::Uno::IO::BundleFile*> AR_example_bundle::CounterPage608bfab1_;
uSStrong< ::g::Uno::IO::BundleFile*> AR_example_bundle::HomePageed8c17c6_;
uSStrong< ::g::Uno::IO::BundleFile*> AR_example_bundle::logo3b7e0030c_;
uSStrong< ::g::Uno::IO::BundleFile*> AR_example_bundle::RespberryPi391ee3a9_;
uSStrong< ::g::Uno::IO::BundleFile*> AR_example_bundle::ScreenPagec881ae49_;
// }

} // ::g
