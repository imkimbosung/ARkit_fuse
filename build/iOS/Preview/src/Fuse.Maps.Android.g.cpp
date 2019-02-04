// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Maps.Android.TouchAction.h>
#include <Uno.Bool.h>

namespace g{
namespace Fuse{
namespace Maps{
namespace Android{

// /usr/local/share/uno/Packages/Fuse.Maps/1.10.0-rc1/Android/MapView.uno
// ----------------------------------------------------------------------

// internal enum TouchAction :10
uEnumType* TouchAction_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != NULL) return type;

    type = uEnumType::New("Fuse.Maps.Android.TouchAction", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "DOWN", 0LL,
        "UP", 1LL,
        "MOVE", 2LL);
    return type;
}

}}}} // ::g::Fuse::Maps::Android
