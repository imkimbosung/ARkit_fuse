// This file was generated based on /usr/local/share/uno/Packages/Fuse.Maps/1.10.0-rc1/MapView.Events.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct MapEventArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class MapEventArgs :24
// {
struct MapEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

MapEventArgs_type* MapEventArgs_typeof();
void MapEventArgs__ctor_1_fn(MapEventArgs* __this, double* latitude, double* longitude);
void MapEventArgs__FuseScriptingIScriptEventSerialize_fn(MapEventArgs* __this, uObject* s);
void MapEventArgs__New2_fn(double* latitude, double* longitude, MapEventArgs** __retval);

struct MapEventArgs : ::g::Uno::EventArgs
{
    double Latitude;
    double Longitude;

    void ctor_1(double latitude, double longitude);
    static MapEventArgs* New2(double latitude, double longitude);
};
// }

}}} // ::g::Fuse::Controls
