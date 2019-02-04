// This file was generated based on /usr/local/share/uno/Packages/Fuse.Controls.Primitives/1.10.0-rc1/TextControls/FuseTextRenderer/CacheState.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Controls{namespace FuseTextRenderer{struct Tolerances;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FuseTextRenderer{

// internal struct Tolerances :54
// {
uStructType* Tolerances_typeof();
void Tolerances__ctor_1_fn(Tolerances* __this, int32_t* dummy);
void Tolerances__New1_fn(int32_t* dummy, Tolerances* __retval);

struct Tolerances
{
    static float Epsilon_;
    static float& Epsilon() { return Tolerances_typeof()->Init(), Epsilon_; }
    float MinWrap;
    float MaxWrap;
    float MinTruncation;
    float MaxTruncation;

    void ctor_1(int32_t dummy);
};

Tolerances Tolerances__New1(int32_t dummy);
// }

}}}} // ::g::Fuse::Controls::FuseTextRenderer
