// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Permissions.PlatformPermission.h>
#include <Uno.String.h>

namespace g{
namespace Uno{
namespace Permissions{

// /usr/local/share/uno/Packages/Uno.Permissions/1.10.0-rc1/Permissions.uno
// ------------------------------------------------------------------------

// public struct PlatformPermission :9
// {
static void PlatformPermission_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(PlatformPermission, Name), 0);
    type->Reflection.SetFields(1,
        new uField("Name", 0));
}

uStructType* PlatformPermission_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.Alignment = alignof(PlatformPermission);
    options.ValueSize = sizeof(PlatformPermission);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Permissions.PlatformPermission", options);
    type->fp_build_ = PlatformPermission_build;
    return type;
}
// }

}}} // ::g::Uno::Permissions
