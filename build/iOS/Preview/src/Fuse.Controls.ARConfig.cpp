// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.ARConfig.h>
#include <Fuse.Controls.IARView.h>
#include <Uno.Bool.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class ARConfig :51
// {
static void ARConfig_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::IARView_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(ARConfig, _Debug), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARConfig, _ShowStatistics), 0);
}

uType* ARConfig_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ARConfig);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.ARConfig", options);
    type->fp_build_ = ARConfig_build;
    type->fp_ctor_ = (void*)ARConfig__New1_fn;
    return type;
}

// public ARConfig() :59
void ARConfig__ctor__fn(ARConfig* __this)
{
    __this->ctor_();
}

// public void Apply(Fuse.Controls.IARView av) :75
void ARConfig__Apply_fn(ARConfig* __this, uObject* av)
{
    __this->Apply(av);
}

// public void CopyFrom(Fuse.Controls.IARView av) :66
void ARConfig__CopyFrom_fn(ARConfig* __this, uObject* av)
{
    __this->CopyFrom(av);
}

// public generated bool get_Debug() :55
void ARConfig__get_Debug_fn(ARConfig* __this, bool* __retval)
{
    *__retval = __this->Debug();
}

// public generated void set_Debug(bool value) :55
void ARConfig__set_Debug_fn(ARConfig* __this, bool* value)
{
    __this->Debug(*value);
}

// public ARConfig New() :59
void ARConfig__New1_fn(ARConfig** __retval)
{
    *__retval = ARConfig::New1();
}

// public generated bool get_ShowStatistics() :54
void ARConfig__get_ShowStatistics_fn(ARConfig* __this, bool* __retval)
{
    *__retval = __this->ShowStatistics();
}

// public generated void set_ShowStatistics(bool value) :54
void ARConfig__set_ShowStatistics_fn(ARConfig* __this, bool* value)
{
    __this->ShowStatistics(*value);
}

// public ARConfig() [instance] :59
void ARConfig::ctor_()
{
    ShowStatistics(true);
    Debug(false);
}

// public void Apply(Fuse.Controls.IARView av) [instance] :75
void ARConfig::Apply(uObject* av)
{
    uStackFrame __("Fuse.Controls.ARConfig", "Apply(Fuse.Controls.IARView)");
    ::g::Fuse::Controls::IARView::ShowStatistics(uInterface(uPtr(av), ::TYPES[0/*Fuse.Controls.IARView*/]), ShowStatistics());
    ::g::Fuse::Controls::IARView::Debug(uInterface(av, ::TYPES[0/*Fuse.Controls.IARView*/]), Debug());
}

// public void CopyFrom(Fuse.Controls.IARView av) [instance] :66
void ARConfig::CopyFrom(uObject* av)
{
    uStackFrame __("Fuse.Controls.ARConfig", "CopyFrom(Fuse.Controls.IARView)");
    ShowStatistics(::g::Fuse::Controls::IARView::ShowStatistics(uInterface(uPtr(av), ::TYPES[0/*Fuse.Controls.IARView*/])));
    Debug(::g::Fuse::Controls::IARView::Debug(uInterface(av, ::TYPES[0/*Fuse.Controls.IARView*/])));
}

// public generated bool get_Debug() [instance] :55
bool ARConfig::Debug()
{
    return _Debug;
}

// public generated void set_Debug(bool value) [instance] :55
void ARConfig::Debug(bool value)
{
    _Debug = value;
}

// public generated bool get_ShowStatistics() [instance] :54
bool ARConfig::ShowStatistics()
{
    return _ShowStatistics;
}

// public generated void set_ShowStatistics(bool value) [instance] :54
void ARConfig::ShowStatistics(bool value)
{
    _ShowStatistics = value;
}

// public ARConfig New() [static] :59
ARConfig* ARConfig::New1()
{
    ARConfig* obj1 = (ARConfig*)uNew(ARConfig_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}} // ::g::Fuse::Controls
