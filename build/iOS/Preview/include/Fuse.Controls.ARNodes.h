// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/ARNodes.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct ARNodes;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public class ARNodes :7
// {
::g::Fuse::Node_type* ARNodes_typeof();
void ARNodes__ctor_2_fn(ARNodes* __this);
void ARNodes__Draw_fn(ARNodes* __this);
void ARNodes__New2_fn(ARNodes** __retval);
void ARNodes__OnRooted_fn(ARNodes* __this);
void ARNodes__OnUnrooted_fn(ARNodes* __this);
void ARNodes__get_type_fn(ARNodes* __this, uString** __retval);
void ARNodes__set_type_fn(ARNodes* __this, uString* value);
void ARNodes__get_x_fn(ARNodes* __this, float* __retval);
void ARNodes__set_x_fn(ARNodes* __this, float* value);
void ARNodes__get_y_fn(ARNodes* __this, float* __retval);
void ARNodes__set_y_fn(ARNodes* __this, float* value);
void ARNodes__get_z_fn(ARNodes* __this, float* __retval);
void ARNodes__set_z_fn(ARNodes* __this, float* value);

struct ARNodes : ::g::Fuse::Node
{
    static int32_t UID_POOL_;
    static int32_t& UID_POOL() { return UID_POOL_; }
    int32_t uid;
    float _x;
    float _y;
    float _z;
    uStrong<uString*> _type;

    void ctor_2();
    void Draw();
    uString* type();
    void type(uString* value);
    float x();
    void x(float value);
    float y();
    void y(float value);
    float z();
    void z(float value);
    static ARNodes* New2();
};
// }

}}} // ::g::Fuse::Controls
