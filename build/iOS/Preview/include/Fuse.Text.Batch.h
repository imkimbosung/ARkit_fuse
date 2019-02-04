// This file was generated based on /usr/local/share/uno/Packages/Fuse.Text/1.10.0-rc1/Renderer.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Text{struct Batch;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Text{

// internal struct Batch :66
// {
struct Batch_type : uStructType
{
    ::g::Uno::IDisposable interface0;
};

Batch_type* Batch_typeof();
void Batch__ctor_1_fn(Batch* __this, int32_t* textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int32_t* quadCount);
void Batch__Dispose_fn(Batch* __this);
void Batch__New1_fn(int32_t* textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int32_t* quadCount, Batch* __retval);

struct Batch
{
    int32_t TextureIndex;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> VertexBuffer;
    int32_t QuadCount;

    void ctor_1(int32_t textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int32_t quadCount);
    void Dispose();
};

Batch Batch__New1(int32_t textureIndex, ::g::Uno::Graphics::VertexBuffer* vbo, int32_t quadCount);
// }

}}} // ::g::Fuse::Text
