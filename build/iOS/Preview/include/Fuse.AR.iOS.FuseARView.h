// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Fuse.iOS.ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace AR{namespace iOS{struct FuseARView;}}}}
namespace g{namespace ObjC{struct Object;}}

namespace g{
namespace Fuse{
namespace AR{
namespace iOS{

// internal sealed extern class FuseARView :23
// {
uType* FuseARView_typeof();
void FuseARView__ctor__fn(FuseARView* __this);
void FuseARView__CreateAR_fn(FuseARView* __this, ::g::ObjC::Object* container, ::g::ObjC::Object** __retval);
void FuseARView__CreateContainer_fn(FuseARView* __this, ::g::ObjC::Object** __retval);
void FuseARView__GetBoolValue_fn(FuseARView* __this, uString* key, bool* __retval);
void FuseARView__GetStringValue_fn(FuseARView* __this, uString* key, uString** __retval);
void FuseARView__New1_fn(FuseARView** __retval);
void FuseARView__SetBoolValue_fn(FuseARView* __this, uString* key, bool* val);
void FuseARView__SetIntValue_fn(FuseARView* __this, uString* key, int32_t* val);
void FuseARView__SetStringValue_fn(FuseARView* __this, uString* key, uString* val);

struct FuseARView : uObject
{
    uStrong< ::g::ObjC::Object*> Handle;
    uStrong< ::g::ObjC::Object*> Container;

    void ctor_();
    ::g::ObjC::Object* CreateAR(::g::ObjC::Object* container);
    ::g::ObjC::Object* CreateContainer();
    bool GetBoolValue(uString* key);
    uString* GetStringValue(uString* key);
    void SetBoolValue(uString* key, bool val);
    void SetIntValue(uString* key, int32_t val);
    void SetStringValue(uString* key, uString* val);
    static FuseARView* New1();
};
// }

}}}} // ::g::Fuse::AR::iOS
