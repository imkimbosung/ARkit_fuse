// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Asphere.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Controls.ARNodes.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct Asphere;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Asphere :7
// {
::g::Fuse::Node_type* Asphere_typeof();
void Asphere__ctor_3_fn(Asphere* __this);
void Asphere__New3_fn(Asphere** __retval);
void Asphere__get_radius_fn(Asphere* __this, float* __retval);
void Asphere__set_radius_fn(Asphere* __this, float* value);

struct Asphere : ::g::Fuse::Controls::ARNodes
{
    uStrong<uString*> _type1;
    float _radius;

    void ctor_3();
    float radius();
    void radius(float value);
    static Asphere* New3();
};
// }

}}} // ::g::Fuse::Controls
