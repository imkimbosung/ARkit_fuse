// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.ARConfig.h>
#include <Fuse.Controls.IARView.h>
#include <Uno.Bool.h>
#include <Uno.UX.FileSource.h>
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
        ::g::Uno::UX::FileSource_typeof(), offsetof(ARConfig, _PlaneFile), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARConfig, _ShowPlane), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARConfig, _ShowStatistics), 0);
}

uType* ARConfig_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
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

// public void Apply(Fuse.Controls.IARView av) :76
void ARConfig__Apply_fn(ARConfig* __this, uObject* av)
{
    __this->Apply(av);
}

// public void CopyFrom(Fuse.Controls.IARView av) :67
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

// public generated Uno.UX.FileSource get_PlaneFile() :56
void ARConfig__get_PlaneFile_fn(ARConfig* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->PlaneFile();
}

// public generated void set_PlaneFile(Uno.UX.FileSource value) :56
void ARConfig__set_PlaneFile_fn(ARConfig* __this, ::g::Uno::UX::FileSource* value)
{
    __this->PlaneFile(value);
}

// public generated bool get_ShowPlane() :53
void ARConfig__get_ShowPlane_fn(ARConfig* __this, bool* __retval)
{
    *__retval = __this->ShowPlane();
}

// public generated void set_ShowPlane(bool value) :53
void ARConfig__set_ShowPlane_fn(ARConfig* __this, bool* value)
{
    __this->ShowPlane(*value);
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
    ShowPlane(false);
    ShowStatistics(true);
    Debug(false);
}

// public void Apply(Fuse.Controls.IARView av) [instance] :76
void ARConfig::Apply(uObject* av)
{
    uStackFrame __("Fuse.Controls.ARConfig", "Apply(Fuse.Controls.IARView)");
    ::g::Fuse::Controls::IARView::ShowPlane(uInterface(uPtr(av), ::TYPES[0/*Fuse.Controls.IARView*/]), ShowPlane());
    ::g::Fuse::Controls::IARView::ShowStatistics(uInterface(av, ::TYPES[0/*Fuse.Controls.IARView*/]), ShowStatistics());
    ::g::Fuse::Controls::IARView::Debug(uInterface(av, ::TYPES[0/*Fuse.Controls.IARView*/]), Debug());
    ::g::Fuse::Controls::IARView::PlaneFile(uInterface(av, ::TYPES[0/*Fuse.Controls.IARView*/]), PlaneFile());
}

// public void CopyFrom(Fuse.Controls.IARView av) [instance] :67
void ARConfig::CopyFrom(uObject* av)
{
    uStackFrame __("Fuse.Controls.ARConfig", "CopyFrom(Fuse.Controls.IARView)");
    ShowPlane(::g::Fuse::Controls::IARView::ShowPlane(uInterface(uPtr(av), ::TYPES[0/*Fuse.Controls.IARView*/])));
    ShowStatistics(::g::Fuse::Controls::IARView::ShowStatistics(uInterface(av, ::TYPES[0/*Fuse.Controls.IARView*/])));
    Debug(::g::Fuse::Controls::IARView::Debug(uInterface(av, ::TYPES[0/*Fuse.Controls.IARView*/])));
    PlaneFile(::g::Fuse::Controls::IARView::PlaneFile(uInterface(av, ::TYPES[0/*Fuse.Controls.IARView*/])));
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

// public generated Uno.UX.FileSource get_PlaneFile() [instance] :56
::g::Uno::UX::FileSource* ARConfig::PlaneFile()
{
    return _PlaneFile;
}

// public generated void set_PlaneFile(Uno.UX.FileSource value) [instance] :56
void ARConfig::PlaneFile(::g::Uno::UX::FileSource* value)
{
    _PlaneFile = value;
}

// public generated bool get_ShowPlane() [instance] :53
bool ARConfig::ShowPlane()
{
    return _ShowPlane;
}

// public generated void set_ShowPlane(bool value) [instance] :53
void ARConfig::ShowPlane(bool value)
{
    _ShowPlane = value;
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
