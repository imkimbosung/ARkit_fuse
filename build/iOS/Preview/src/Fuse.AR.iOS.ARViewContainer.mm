// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Fuse.iOS.ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <ARViewController.h>
#include <Fuse.AR.iOS.ARViewContainer.h>
#include <Fuse.AR.iOS.FuseARView.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <uObjC.Foreign.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace AR{
namespace iOS{

// internal sealed extern class ARViewContainer :110
// {
static void ARViewContainer_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[0/*Uno.Action*/], offsetof(ARViewContainer, OnReady), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(ARViewContainer, OnResize), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(ARViewContainer, OnPaused), 0,
        ::g::Fuse::AR::iOS::FuseARView_typeof(), offsetof(ARViewContainer, AR), 0,
        ::g::ObjC::Object_typeof(), offsetof(ARViewContainer, Handle), 0);
}

uType* ARViewContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(ARViewContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.AR.iOS.ARViewContainer", options);
    type->fp_build_ = ARViewContainer_build;
    return type;
}

// public ARViewContainer(Fuse.AR.iOS.FuseARView ar) :119
void ARViewContainer__ctor__fn(ARViewContainer* __this, ::g::Fuse::AR::iOS::FuseARView* ar)
{
    __this->ctor_(ar);
}

// private ObjC.Object Create(ObjC.Object view, Uno.Action onReady, Uno.Action onResize, Uno.Action onPaused) :127
void ARViewContainer__Create_fn(ARViewContainer* __this, ::g::ObjC::Object* view, uDelegate* onReady, uDelegate* onResize, uDelegate* onPaused, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Create(view, onReady, onResize, onPaused);
}

// public ObjC.Object GetView() :134
void ARViewContainer__GetView_fn(ARViewContainer* __this, ::g::ObjC::Object** __retval)
{
    *__retval = __this->GetView();
}

// public ARViewContainer New(Fuse.AR.iOS.FuseARView ar) :119
void ARViewContainer__New1_fn(::g::Fuse::AR::iOS::FuseARView* ar, ARViewContainer** __retval)
{
    *__retval = ARViewContainer::New1(ar);
}

// private void viewDidAppear() :141
void ARViewContainer__viewDidAppear_fn(ARViewContainer* __this)
{
    __this->viewDidAppear();
}

// private void viewDidResize() :147
void ARViewContainer__viewDidResize_fn(ARViewContainer* __this)
{
    __this->viewDidResize();
}

// private void viewWillDisappear() :154
void ARViewContainer__viewWillDisappear_fn(ARViewContainer* __this)
{
    __this->viewWillDisappear();
}

// public ARViewContainer(Fuse.AR.iOS.FuseARView ar) [instance] :119
void ARViewContainer::ctor_(::g::Fuse::AR::iOS::FuseARView* ar)
{
    uStackFrame __("Fuse.AR.iOS.ARViewContainer", ".ctor(Fuse.AR.iOS.FuseARView)");
    AR = ar;
    Handle = Create(uPtr(AR)->Container, uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ARViewContainer__viewDidAppear_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ARViewContainer__viewDidResize_fn, this), uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ARViewContainer__viewWillDisappear_fn, this));
}

// private ObjC.Object Create(ObjC.Object view, Uno.Action onReady, Uno.Action onResize, Uno.Action onPaused) [instance] :127
::g::ObjC::Object* ARViewContainer::Create(::g::ObjC::Object* view, uDelegate* onReady, uDelegate* onResize, uDelegate* onPaused)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id view, ::uObjC::Function<void> onReady, ::uObjC::Function<void> onResize, ::uObjC::Function<void> onPaused) -> ::id
        {
            return [[ARViewController alloc] initWithView:view onAppeared:onReady onResize:onResize onDisappeared:onPaused];
        } (::g::ObjC::Object::GetHandle(view), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onReady]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onResize]), [] (id<UnoObject> __delegateRef) -> ::uObjC::Function<void>
        {
            return __delegateRef == nil ? (::uObjC::Function<void>)nil : (^ void ()
            {
                ::uForeignPool __foreignPool;
                uDelegate* __unoDelegate = (uDelegate*)__delegateRef.unoObject;
                __unoDelegate->InvokeVoid();
                
            });
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: onPaused])));
        
    }
    
}

// public ObjC.Object GetView() [instance] :134
::g::ObjC::Object* ARViewContainer::GetView()
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (id<UnoObject> _this) -> ::id
        {
            UIViewController* vc = [&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ARViewContainer*>((_this).unoObject, ARViewContainer_typeof())->Handle); }();
            
            return vc.view;
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]));
        
    }
    
}

// private void viewDidAppear() [instance] :141
void ARViewContainer::viewDidAppear()
{
    uStackFrame __("Fuse.AR.iOS.ARViewContainer", "viewDidAppear()");

    if (::g::Uno::Delegate::op_Inequality(OnReady, NULL))
        uPtr(OnReady)->InvokeVoid();
}

// private void viewDidResize() [instance] :147
void ARViewContainer::viewDidResize()
{
    uStackFrame __("Fuse.AR.iOS.ARViewContainer", "viewDidResize()");

    if (::g::Uno::Delegate::op_Inequality(OnResize, NULL))
        uPtr(OnResize)->InvokeVoid();
}

// private void viewWillDisappear() [instance] :154
void ARViewContainer::viewWillDisappear()
{
    uStackFrame __("Fuse.AR.iOS.ARViewContainer", "viewWillDisappear()");

    if (::g::Uno::Delegate::op_Inequality(OnPaused, NULL))
        uPtr(OnPaused)->InvokeVoid();
}

// public ARViewContainer New(Fuse.AR.iOS.FuseARView ar) [static] :119
ARViewContainer* ARViewContainer::New1(::g::Fuse::AR::iOS::FuseARView* ar)
{
    ARViewContainer* obj1 = (ARViewContainer*)uNew(ARViewContainer_typeof());
    obj1->ctor_(ar);
    return obj1;
}
// }

}}}} // ::g::Fuse::AR::iOS
