// This file was generated based on /usr/local/share/uno/Packages/Fuse.Maps/1.10.0-rc1/iOS/MapView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Maps{namespace iOS{struct FuseMapView;}}}}
namespace g{namespace Fuse{namespace Maps{namespace iOS{struct MapViewContainer;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace Maps{
namespace iOS{

// internal sealed extern class MapViewContainer :99
// {
uType* MapViewContainer_typeof();
void MapViewContainer__ctor__fn(MapViewContainer* __this, ::g::Fuse::Maps::iOS::FuseMapView* map);
void MapViewContainer__Create_fn(MapViewContainer* __this, ::g::ObjC::Object* view, uDelegate* onReady, uDelegate* onResize, ::g::ObjC::Object** __retval);
void MapViewContainer__GetView_fn(MapViewContainer* __this, ::g::ObjC::Object** __retval);
void MapViewContainer__New1_fn(::g::Fuse::Maps::iOS::FuseMapView* map, MapViewContainer** __retval);
void MapViewContainer__viewDidAppear_fn(MapViewContainer* __this);
void MapViewContainer__viewDidResize_fn(MapViewContainer* __this);

struct MapViewContainer : uObject
{
    uStrong<uDelegate*> OnReady;
    uStrong<uDelegate*> OnResize;
    uStrong< ::g::Fuse::Maps::iOS::FuseMapView*> Map;
    uStrong< ::g::ObjC::Object*> Handle;

    void ctor_(::g::Fuse::Maps::iOS::FuseMapView* map);
    ::g::ObjC::Object* Create(::g::ObjC::Object* view, uDelegate* onReady, uDelegate* onResize);
    ::g::ObjC::Object* GetView();
    void viewDidAppear();
    void viewDidResize();
    static MapViewContainer* New1(::g::Fuse::Maps::iOS::FuseMapView* map);
};
// }

}}}} // ::g::Fuse::Maps::iOS
