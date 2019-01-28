// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Abox.uno.
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
namespace g{namespace Fuse{namespace Controls{struct Abox;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Abox :7
// {
::g::Fuse::Node_type* Abox_typeof();
void Abox__ctor_2_fn(Abox* __this);
void Abox__get_height_fn(Abox* __this, float* __retval);
void Abox__set_height_fn(Abox* __this, float* value);
void Abox__get_length_fn(Abox* __this, float* __retval);
void Abox__set_length_fn(Abox* __this, float* value);
void Abox__New2_fn(Abox** __retval);
void Abox__get_width_fn(Abox* __this, float* __retval);
void Abox__set_width_fn(Abox* __this, float* value);
void Abox__get_x_fn(Abox* __this, float* __retval);
void Abox__set_x_fn(Abox* __this, float* value);
void Abox__get_y_fn(Abox* __this, float* __retval);
void Abox__set_y_fn(Abox* __this, float* value);
void Abox__get_z_fn(Abox* __this, float* __retval);
void Abox__set_z_fn(Abox* __this, float* value);

struct Abox : ::g::Fuse::Node
{
    static int32_t UID_POOL_;
    static int32_t& UID_POOL() { return UID_POOL_; }
    int32_t uid;
    float _x;
    float _y;
    float _z;
    uStrong<uString*> _type;
    float _width;
    float _height;
    float _length;

    void ctor_2();
    float height();
    void height(float value);
    float length();
    void length(float value);
    float width();
    void width(float value);
    float x();
    void x(float value);
    float y();
    void y(float value);
    float z();
    void z(float value);
    static Abox* New2();
};
// }

}}} // ::g::Fuse::Controls
