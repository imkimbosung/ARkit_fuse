// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ARConfig;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class ARConfig :51
// {
uType* ARConfig_typeof();
void ARConfig__ctor__fn(ARConfig* __this);
void ARConfig__Apply_fn(ARConfig* __this, uObject* av);
void ARConfig__CopyFrom_fn(ARConfig* __this, uObject* av);
void ARConfig__get_Debug_fn(ARConfig* __this, bool* __retval);
void ARConfig__set_Debug_fn(ARConfig* __this, bool* value);
void ARConfig__New1_fn(ARConfig** __retval);
void ARConfig__get_ShowStatistics_fn(ARConfig* __this, bool* __retval);
void ARConfig__set_ShowStatistics_fn(ARConfig* __this, bool* value);

struct ARConfig : uObject
{
    bool _Debug;
    bool _ShowStatistics;

    void ctor_();
    void Apply(uObject* av);
    void CopyFrom(uObject* av);
    bool Debug();
    void Debug(bool value);
    bool ShowStatistics();
    void ShowStatistics(bool value);
    static ARConfig* New1();
};
// }

}}} // ::g::Fuse::Controls
