// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Fuse.iOS.ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace AR{namespace iOS{struct ARViewContainer;}}}}
namespace g{namespace Fuse{namespace AR{namespace iOS{struct FuseARView;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace AR{
namespace iOS{

// internal sealed extern class ARViewContainer :110
// {
uType* ARViewContainer_typeof();
void ARViewContainer__ctor__fn(ARViewContainer* __this, ::g::Fuse::AR::iOS::FuseARView* ar);
void ARViewContainer__Create_fn(ARViewContainer* __this, ::g::ObjC::Object* view, uDelegate* onReady, uDelegate* onResize, uDelegate* onPaused, ::g::ObjC::Object** __retval);
void ARViewContainer__GetView_fn(ARViewContainer* __this, ::g::ObjC::Object** __retval);
void ARViewContainer__New1_fn(::g::Fuse::AR::iOS::FuseARView* ar, ARViewContainer** __retval);
void ARViewContainer__viewDidAppear_fn(ARViewContainer* __this);
void ARViewContainer__viewDidResize_fn(ARViewContainer* __this);
void ARViewContainer__viewWillDisappear_fn(ARViewContainer* __this);

struct ARViewContainer : uObject
{
    uStrong<uDelegate*> OnReady;
    uStrong<uDelegate*> OnResize;
    uStrong<uDelegate*> OnPaused;
    uStrong< ::g::Fuse::AR::iOS::FuseARView*> AR;
    uStrong< ::g::ObjC::Object*> Handle;

    void ctor_(::g::Fuse::AR::iOS::FuseARView* ar);
    ::g::ObjC::Object* Create(::g::ObjC::Object* view, uDelegate* onReady, uDelegate* onResize, uDelegate* onPaused);
    ::g::ObjC::Object* GetView();
    void viewDidAppear();
    void viewDidResize();
    void viewWillDisappear();
    static ARViewContainer* New1(::g::Fuse::AR::iOS::FuseARView* ar);
};
// }

}}}} // ::g::Fuse::AR::iOS
