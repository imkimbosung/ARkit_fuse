// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Fuse.iOS.ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <ARKit/ARKit.h>
#include <Fuse.AR.iOS.FuseARView.h>
#include <ObjC.Object.h>
#include <SceneKit/SceneKit.h>
#include <UIKit/UIKit.h>
#include <Uno.Bool.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>

namespace g{
namespace Fuse{
namespace AR{
namespace iOS{

// internal sealed extern class FuseARView :23
// {
static void FuseARView_build(uType* type)
{
    type->SetFields(0,
        ::g::ObjC::Object_typeof(), offsetof(FuseARView, Handle), 0,
        ::g::ObjC::Object_typeof(), offsetof(FuseARView, Container), 0);
}

uType* FuseARView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseARView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.AR.iOS.FuseARView", options);
    type->fp_build_ = FuseARView_build;
    type->fp_ctor_ = (void*)FuseARView__New1_fn;
    return type;
}

// public FuseARView() :28
void FuseARView__ctor__fn(FuseARView* __this)
{
    __this->ctor_();
}

// private ObjC.Object CreateAR(ObjC.Object container) :45
void FuseARView__CreateAR_fn(FuseARView* __this, ::g::ObjC::Object* container, ::g::ObjC::Object** __retval)
{
    *__retval = __this->CreateAR(container);
}

// private ObjC.Object CreateContainer() :36
void FuseARView__CreateContainer_fn(FuseARView* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->CreateContainer();
}

// public bool GetBoolValue(string key) :67
void FuseARView__GetBoolValue_fn(FuseARView* __this, uString* key, bool* __retval)
{
    *__retval = __this->GetBoolValue(key);
}

// public string GetStringValue(string key) :74
void FuseARView__GetStringValue_fn(FuseARView* __this, uString* key, uString** __retval)
{
    *__retval = __this->GetStringValue(key);
}

// public FuseARView New() :28
void FuseARView__New1_fn(FuseARView** __retval)
{
    *__retval = FuseARView::New1();
}

// public void SetBoolValue(string key, bool val) :80
void FuseARView__SetBoolValue_fn(FuseARView* __this, uString* key, bool* val)
{
    __this->SetBoolValue(key, *val);
}

// public void SetIntValue(string key, int val) :86
void FuseARView__SetIntValue_fn(FuseARView* __this, uString* key, int32_t* val)
{
    __this->SetIntValue(key, *val);
}

// public void SetStringValue(string key, string val) :93
void FuseARView__SetStringValue_fn(FuseARView* __this, uString* key, uString* val)
{
    __this->SetStringValue(key, val);
}

// public FuseARView() [instance] :28
void FuseARView::ctor_()
{
    Container = CreateContainer();
    Handle = CreateAR(Container);
}

// private ObjC.Object CreateAR(ObjC.Object container) [instance] :45
::g::ObjC::Object* FuseARView::CreateAR(::g::ObjC::Object* container)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id container) -> ::id
        {
            UIView* avc = container;
            //ARSCNView* sceneView = [[ARSCNView alloc] initWithFrame:CGRectMake(0, 0, [[UIScreen mainScreen] bounds].size.width, [[UIScreen mainScreen] bounds].size.height)];
            //ARSCNView* sceneView = [[ARSCNView alloc] initWithFrame:CGRectMake(0, 0, 1000, 1000)];
            //ARSCNView* sceneView = [[ARSCNView alloc] initWithFrame:[UIScreen mainScreen].bounds];
            
            ARSCNView* sceneView = [[ARSCNView alloc] initWithFrame:CGRectMake(0, 0, [[UIScreen mainScreen] bounds].size.width, [[UIScreen mainScreen] bounds].size.height - 100 )];
            
            
            [avc addSubview:sceneView];
            
             
            return sceneView;
        } (::g::ObjC::Object::GetHandle(container)));
        
    }
    
}

// private ObjC.Object CreateContainer() [instance] :36
::g::ObjC::Object* FuseARView::CreateContainer()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] () -> ::id
        {
            UIView* view = [[UIView alloc] init];
            
            //ARSCNView* view = [[ARSCNView alloc] init];
            return view;
        } ());
        
    }
    
}

// public bool GetBoolValue(string key) [instance] :67
bool FuseARView::GetBoolValue(uString* key)
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this, ::NSString* key) -> bool
        {
            id result = [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseARView*>((_this).unoObject, FuseARView_typeof())->Handle); }() valueForKey:key];
            return [result boolValue];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key));
        
    }
    
}

// public string GetStringValue(string key) [instance] :74
uString* FuseARView::GetStringValue(uString* key)
{
    @autoreleasepool
    {
        return ::uObjC::UnoString([] (id<UnoObject> _this, ::NSString* key) -> ::NSString*
        {
            return [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseARView*>((_this).unoObject, FuseARView_typeof())->Handle); }() valueForKey:key];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key)));
        
    }
    
}

// public void SetBoolValue(string key, bool val) [instance] :80
void FuseARView::SetBoolValue(uString* key, bool val)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* key, bool val) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseARView*>((_this).unoObject, FuseARView_typeof())->Handle); }() setValue:[NSNumber numberWithBool:val] forKey:key];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key), val);
        
    }
    
}

// public void SetIntValue(string key, int val) [instance] :86
void FuseARView::SetIntValue(uString* key, int32_t val)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* key, int32_t val) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseARView*>((_this).unoObject, FuseARView_typeof())->Handle); }() setValue:[NSNumber numberWithInt:val] forKey:key];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key), val);
        
    }
    
}

// public void SetStringValue(string key, string val) [instance] :93
void FuseARView::SetStringValue(uString* key, uString* val)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, ::NSString* key, ::NSString* val) -> void
        {
            [[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<FuseARView*>((_this).unoObject, FuseARView_typeof())->Handle); }() setValue:[NSString stringWithString:val] forKey:key];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ::uObjC::NativeString(key), ::uObjC::NativeString(val));
        
    }
    
}

// public FuseARView New() [static] :28
FuseARView* FuseARView::New1()
{
    FuseARView* obj1 = (FuseARView*)uNew(FuseARView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

}}}} // ::g::Fuse::AR::iOS
