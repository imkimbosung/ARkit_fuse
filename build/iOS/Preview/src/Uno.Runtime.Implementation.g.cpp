// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.ByteArrayExtensions.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Runtime.Implementation.BufferImpl.h>
#include <Uno.Runtime.Implementation.GraphicsContextHandle.h>
#include <Uno.Runtime.Implementation.PlatformWindowHandle.h>
#include <Uno.UInt.h>
#include <Uno.UShort.h>

namespace g{
namespace Uno{
namespace Runtime{
namespace Implementation{

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/BufferImpl.uno
// -------------------------------------------------------------------------------------------------

// public static class BufferImpl :6
// {
static void BufferImpl_build(uType* type)
{
    type->Reflection.SetFunctions(4,
        new uFunction("GetFloat", NULL, (void*)BufferImpl__GetFloat_fn, 0, true, ::g::Uno::Float_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("GetUInt", NULL, (void*)BufferImpl__GetUInt_fn, 0, true, ::g::Uno::UInt_typeof(), 3, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetFloat", NULL, (void*)BufferImpl__SetFloat_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::Float_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetUShort", NULL, (void*)BufferImpl__SetUShort_fn, 0, true, uVoid_typeof(), 4, ::g::Uno::Byte_typeof()->Array(), ::g::Uno::Int_typeof(), ::g::Uno::UShort_typeof(), ::g::Uno::Bool_typeof()));
}

uClassType* BufferImpl_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Runtime.Implementation.BufferImpl", options);
    type->fp_build_ = BufferImpl_build;
    return type;
}

// public static float GetFloat(byte[] buffer, int offset, bool littleEndian) :68
void BufferImpl__GetFloat_fn(uArray* buffer, int32_t* offset, bool* littleEndian, float* __retval)
{
    *__retval = BufferImpl::GetFloat(buffer, *offset, *littleEndian);
}

// public static uint GetUInt(byte[] buffer, int offset, bool littleEndian) :38
void BufferImpl__GetUInt_fn(uArray* buffer, int32_t* offset, bool* littleEndian, uint32_t* __retval)
{
    *__retval = BufferImpl::GetUInt(buffer, *offset, *littleEndian);
}

// public static void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) :73
void BufferImpl__SetFloat_fn(uArray* buffer, int32_t* offset, float* value, bool* littleEndian)
{
    BufferImpl::SetFloat(buffer, *offset, *value, *littleEndian);
}

// public static void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) :23
void BufferImpl__SetUShort_fn(uArray* buffer, int32_t* offset, uint16_t* value, bool* littleEndian)
{
    BufferImpl::SetUShort(buffer, *offset, *value, *littleEndian);
}

// public static float GetFloat(byte[] buffer, int offset, bool littleEndian) [static] :68
float BufferImpl::GetFloat(uArray* buffer, int32_t offset, bool littleEndian)
{
    uStackFrame __("Uno.Runtime.Implementation.BufferImpl", "GetFloat(byte[],int,bool)");
    return ::g::Uno::ByteArrayExtensions::GetFloat(buffer, offset, littleEndian);
}

// public static uint GetUInt(byte[] buffer, int offset, bool littleEndian) [static] :38
uint32_t BufferImpl::GetUInt(uArray* buffer, int32_t offset, bool littleEndian)
{
    uStackFrame __("Uno.Runtime.Implementation.BufferImpl", "GetUInt(byte[],int,bool)");
    return ::g::Uno::ByteArrayExtensions::GetUInt(buffer, offset, littleEndian);
}

// public static void SetFloat(byte[] buffer, int offset, float value, bool littleEndian) [static] :73
void BufferImpl::SetFloat(uArray* buffer, int32_t offset, float value, bool littleEndian)
{
    uStackFrame __("Uno.Runtime.Implementation.BufferImpl", "SetFloat(byte[],int,float,bool)");
    ::g::Uno::ByteArrayExtensions::Set4(buffer, offset, value, littleEndian);
}

// public static void SetUShort(byte[] buffer, int offset, ushort value, bool littleEndian) [static] :23
void BufferImpl::SetUShort(uArray* buffer, int32_t offset, uint16_t value, bool littleEndian)
{
    uStackFrame __("Uno.Runtime.Implementation.BufferImpl", "SetUShort(byte[],int,ushort,bool)");
    ::g::Uno::ByteArrayExtensions::Set23(buffer, offset, value, littleEndian);
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/GraphicsControllerImpl.uno
// -------------------------------------------------------------------------------------------------------------

// internal struct GraphicsContextHandle :12
// {
static void GraphicsContextHandle_build(uType* type)
{
}

uStructType* GraphicsContextHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(void*);
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.GraphicsContextHandle", options);
    type->fp_build_ = GraphicsContextHandle_build;
    return type;
}
// }

// /usr/local/share/uno/Packages/UnoCore/1.10.0-rc1/Source/Uno/Runtime/Implementation/PlatformWindowImpl.uno
// ---------------------------------------------------------------------------------------------------------

// public struct PlatformWindowHandle :11
// {
static void PlatformWindowHandle_build(uType* type)
{
}

uStructType* PlatformWindowHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(void*);
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.Implementation.PlatformWindowHandle", options);
    type->fp_build_ = PlatformWindowHandle_build;
    return type;
}
// }

}}}} // ::g::Uno::Runtime::Implementation
