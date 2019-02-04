// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.10.0-rc1/Renderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Text{struct Quad;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal struct Quad :50
// {
uStructType* Quad_typeof();
void Quad__ctor_1_fn(Quad* __this, ::g::Uno::Float2* position, ::g::Uno::Recti* texCoords, float* scale);
void Quad__New1_fn(::g::Uno::Float2* position, ::g::Uno::Recti* texCoords, float* scale, Quad* __retval);

struct Quad
{
    ::g::Uno::Float2 Position;
    ::g::Uno::Recti TexCoords;
    float Scale;
    ::g::Uno::Rect Rect;

    void ctor_1(::g::Uno::Float2 position, ::g::Uno::Recti texCoords, float scale);
};

Quad Quad__New1(::g::Uno::Float2 position, ::g::Uno::Recti texCoords, float scale);
// }

}}} // ::g::Fuse::Text
