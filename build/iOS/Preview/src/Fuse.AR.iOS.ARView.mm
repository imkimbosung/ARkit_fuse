// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Fuse.iOS.ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <ARDelegate.h>
#include <Fuse.AR.iOS.ARView.h>
#include <Fuse.AR.iOS.ARViewContainer.h>
#include <Fuse.AR.iOS.FuseARView.h>
#include <Fuse.Controls.ARNodes.h>
#include <Fuse.Controls.ARView.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[5];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace AR{
namespace iOS{

// public sealed extern class ARView :164
// {
static void ARView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("paused");
    ::STRINGS[1] = uString::Const("/Users/kbs/Fuse/AR_example/iOS/Fuse.iOS.ARView.uno");
    ::STRINGS[2] = uString::Const("ready");
    ::STRINGS[3] = uString::Const("update Nodes");
    ::STRINGS[4] = uString::Const("ShowsStatistics");
    ::TYPES[0] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ARView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(ARView_type, interface1),
        ::g::Fuse::Controls::Native::ILeafView_typeof(), offsetof(ARView_type, interface2),
        ::g::Fuse::Controls::IARView_typeof(), offsetof(ARView_type, interface3));
    type->SetFields(10,
        ::g::Fuse::AR::iOS::ARViewContainer_typeof(), offsetof(ARView, _container), 0,
        ::g::Fuse::AR::iOS::FuseARView_typeof(), offsetof(ARView, _arView), 0,
        ::g::ObjC::Object_typeof(), offsetof(ARView, _arViewDelegate), 0,
        ::g::Fuse::Controls::ARView_typeof(), offsetof(ARView, _arViewHost), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _isReady), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _isPaused), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _Debug), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(ARView, _OnPaused), 0,
        ::TYPES[0/*Uno.Action*/], offsetof(ARView, _OnReady), 0);
    type->Reflection.SetFunctions(11,
        new uFunction("get_ARNodes", NULL, (void*)ARView__get_ARNodes_fn, 0, false, ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Controls::ARNodes_typeof(), NULL), 0),
        new uFunction("Create", NULL, (void*)ARView__Create_fn, 0, true, type, 1, ::g::Fuse::Controls::ARView_typeof()),
        new uFunction("get_Debug", NULL, (void*)ARView__get_Debug_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Debug", NULL, (void*)ARView__set_Debug_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_OnPaused", NULL, (void*)ARView__get_OnPaused_fn, 0, false, ::TYPES[0/*Uno.Action*/], 0),
        new uFunction("set_OnPaused", NULL, (void*)ARView__set_OnPaused_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Uno.Action*/]),
        new uFunction("get_OnReady", NULL, (void*)ARView__get_OnReady_fn, 0, false, ::TYPES[0/*Uno.Action*/], 0),
        new uFunction("set_OnReady", NULL, (void*)ARView__set_OnReady_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Uno.Action*/]),
        new uFunction("get_ShowStatistics", NULL, (void*)ARView__get_ShowStatistics_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowStatistics", NULL, (void*)ARView__set_ShowStatistics_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("UpdateNodes", NULL, (void*)ARView__UpdateNodes_fn, 0, false, uVoid_typeof(), 0));
}

ARView_type* ARView_typeof()
{
    static uSStrong<ARView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::iOS::LeafView_typeof();
    options.FieldCount = 19;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ARView);
    options.TypeSize = sizeof(ARView_type);
    type = (ARView_type*)uClassType::New("Fuse.AR.iOS.ARView", options);
    type->fp_build_ = ARView_build;
    type->interface3.fp_UpdateNodes = (void(*)(uObject*))ARView__UpdateNodes_fn;
    type->interface3.fp_get_ARNodes = (void(*)(uObject*, ::g::Uno::Collections::ObservableList**))ARView__get_ARNodes_fn;
    type->interface3.fp_get_ShowStatistics = (void(*)(uObject*, bool*))ARView__get_ShowStatistics_fn;
    type->interface3.fp_set_ShowStatistics = (void(*)(uObject*, bool*))ARView__set_ShowStatistics_fn;
    type->interface3.fp_get_Debug = (void(*)(uObject*, bool*))ARView__get_Debug_fn;
    type->interface3.fp_set_Debug = (void(*)(uObject*, bool*))ARView__set_Debug_fn;
    type->interface3.fp_get_OnReady = (void(*)(uObject*, uDelegate**))ARView__get_OnReady_fn;
    type->interface3.fp_set_OnReady = (void(*)(uObject*, uDelegate*))ARView__set_OnReady_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// private ARView(Fuse.Controls.ARView arViewHost, Fuse.AR.iOS.ARViewContainer avc) :186
void ARView__ctor_5_fn(ARView* __this, ::g::Fuse::Controls::ARView* arViewHost, ::g::Fuse::AR::iOS::ARViewContainer* avc)
{
    __this->ctor_5(arViewHost, avc);
}

// public Uno.Collections.ObservableList<Fuse.Controls.ARNodes> get_ARNodes() :303
void ARView__get_ARNodes_fn(ARView* __this, ::g::Uno::Collections::ObservableList** __retval)
{
    *__retval = __this->ARNodes();
}

// private void ClearNodes() :249
void ARView__ClearNodes_fn(ARView* __this)
{
    __this->ClearNodes();
}

// private ObjC.Object Configure(ObjC.Object ARView) :232
void ARView__Configure_fn(ARView* __this, ::g::ObjC::Object* ARView1, ::g::ObjC::Object** __retval)
{
    *__retval = __this->Configure(ARView1);
}

// public static Fuse.AR.iOS.ARView Create(Fuse.Controls.ARView arViewHost) :173
void ARView__Create_fn(::g::Fuse::Controls::ARView* arViewHost, ARView** __retval)
{
    *__retval = ARView::Create(arViewHost);
}

// public generated bool get_Debug() :264
void ARView__get_Debug_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->Debug();
}

// public generated void set_Debug(bool value) :264
void ARView__set_Debug_fn(ARView* __this, bool* value)
{
    __this->Debug(*value);
}

// private ARView New(Fuse.Controls.ARView arViewHost, Fuse.AR.iOS.ARViewContainer avc) :186
void ARView__New3_fn(::g::Fuse::Controls::ARView* arViewHost, ::g::Fuse::AR::iOS::ARViewContainer* avc, ARView** __retval)
{
    *__retval = ARView::New3(arViewHost, avc);
}

// public generated Uno.Action get_OnPaused() :219
void ARView__get_OnPaused_fn(ARView* __this, uDelegate** __retval)
{
    *__retval = __this->OnPaused();
}

// public generated void set_OnPaused(Uno.Action value) :219
void ARView__set_OnPaused_fn(ARView* __this, uDelegate* value)
{
    __this->OnPaused(value);
}

// private void OnPausedInternal() :221
void ARView__OnPausedInternal_fn(ARView* __this)
{
    __this->OnPausedInternal();
}

// public generated Uno.Action get_OnReady() :209
void ARView__get_OnReady_fn(ARView* __this, uDelegate** __retval)
{
    *__retval = __this->OnReady();
}

// public generated void set_OnReady(Uno.Action value) :209
void ARView__set_OnReady_fn(ARView* __this, uDelegate* value)
{
    __this->OnReady(value);
}

// private void OnReadyInternal() :211
void ARView__OnReadyInternal_fn(ARView* __this)
{
    __this->OnReadyInternal();
}

// public bool get_ShowStatistics() :260
void ARView__get_ShowStatistics_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->ShowStatistics();
}

// public void set_ShowStatistics(bool value) :261
void ARView__set_ShowStatistics_fn(ARView* __this, bool* value)
{
    __this->ShowStatistics(*value);
}

// public void UpdateNodes() :341
void ARView__UpdateNodes_fn(ARView* __this)
{
    __this->UpdateNodes();
}

// private ARView(Fuse.Controls.ARView arViewHost, Fuse.AR.iOS.ARViewContainer avc) [instance] :186
void ARView::ctor_5(::g::Fuse::Controls::ARView* arViewHost, ::g::Fuse::AR::iOS::ARViewContainer* avc)
{
    uStackFrame __("Fuse.AR.iOS.ARView", ".ctor(Fuse.Controls.ARView,Fuse.AR.iOS.ARViewContainer)");
    ctor_4(uPtr(avc)->GetView());
    _arViewHost = arViewHost;
    _container = avc;
    uPtr(_container)->OnReady = uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ARView__OnReadyInternal_fn, this);
    uPtr(_container)->OnPaused = uDelegate::New(::TYPES[0/*Uno.Action*/], (void*)ARView__OnPausedInternal_fn, this);
    _arView = uPtr(_container)->AR;
    _arViewDelegate = Configure(uPtr(_arView)->Handle);
    uPtr(_arViewHost)->ARViewClient((uObject*)this);
}

// public Uno.Collections.ObservableList<Fuse.Controls.ARNodes> get_ARNodes() [instance] :303
::g::Uno::Collections::ObservableList* ARView::ARNodes()
{
    uStackFrame __("Fuse.AR.iOS.ARView", "get_ARNodes()");
    return uPtr(_arViewHost)->ARNodes();
}

// private void ClearNodes() [instance] :249
void ARView::ClearNodes()
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this) -> void
        {
            NSLog(@"@clearnodes");
            ARDelegate* dg = (ARDelegate*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ARView*>((_this).unoObject, ARView_typeof())->_arViewDelegate); }();
            [dg clearNodes];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this]);
        
    }
    
}

// private ObjC.Object Configure(ObjC.Object ARView) [instance] :232
::g::ObjC::Object* ARView::Configure(::g::ObjC::Object* ARView1)
{
    @autoreleasepool
    {
        return ::g::ObjC::Object::Create([] (::id ARView) -> ::id
        {
            ARSCNView* sceneView = ARView;
            //NSLog(@"CONFIGURE - IN FUSE");
            
            //NSLog(@"%@", sceneView);
            //NSLog(@"%@", sceneView.scene);
            ARDelegate* dg = [[ARDelegate alloc] init];
            
            //NSLog(@"%@", dg);
            [dg setAsDelegate:sceneView];
            //NSLog(@"%@", dg);
            
            return dg;
        } (::g::ObjC::Object::GetHandle(ARView1)));
        
    }
    
}

// public generated bool get_Debug() [instance] :264
bool ARView::Debug()
{
    return _Debug;
}

// public generated void set_Debug(bool value) [instance] :264
void ARView::Debug(bool value)
{
    _Debug = value;
}

// public generated Uno.Action get_OnPaused() [instance] :219
uDelegate* ARView::OnPaused()
{
    return _OnPaused;
}

// public generated void set_OnPaused(Uno.Action value) [instance] :219
void ARView::OnPaused(uDelegate* value)
{
    _OnPaused = value;
}

// private void OnPausedInternal() [instance] :221
void ARView::OnPausedInternal()
{
    uStackFrame __("Fuse.AR.iOS.ARView", "OnPausedInternal()");
    _isPaused = true;
    ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[0/*"paused"*/], 0, ::STRINGS[1/*"/Users/kbs/...*/], 224);

    if (::g::Uno::Delegate::op_Inequality(OnPaused(), NULL))
        uPtr(OnPaused())->InvokeVoid();
}

// public generated Uno.Action get_OnReady() [instance] :209
uDelegate* ARView::OnReady()
{
    return _OnReady;
}

// public generated void set_OnReady(Uno.Action value) [instance] :209
void ARView::OnReady(uDelegate* value)
{
    _OnReady = value;
}

// private void OnReadyInternal() [instance] :211
void ARView::OnReadyInternal()
{
    uStackFrame __("Fuse.AR.iOS.ARView", "OnReadyInternal()");
    _isReady = true;
    ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[2/*"ready"*/], 0, ::STRINGS[1/*"/Users/kbs/...*/], 214);

    if (::g::Uno::Delegate::op_Inequality(OnReady(), NULL))
        uPtr(OnReady())->InvokeVoid();
}

// public bool get_ShowStatistics() [instance] :260
bool ARView::ShowStatistics()
{
    uStackFrame __("Fuse.AR.iOS.ARView", "get_ShowStatistics()");
    return uPtr(_arView)->GetBoolValue(::STRINGS[4/*"ShowsStatis...*/]);
}

// public void set_ShowStatistics(bool value) [instance] :261
void ARView::ShowStatistics(bool value)
{
    uStackFrame __("Fuse.AR.iOS.ARView", "set_ShowStatistics(bool)");
    uPtr(_arView)->SetBoolValue(::STRINGS[4/*"ShowsStatis...*/], value);
}

// public void UpdateNodes() [instance] :341
void ARView::UpdateNodes()
{
    uStackFrame __("Fuse.AR.iOS.ARView", "UpdateNodes()");
    ClearNodes();
    ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[3/*"update Nodes"*/], 0, ::STRINGS[1/*"/Users/kbs/...*/], 344);
}

// public static Fuse.AR.iOS.ARView Create(Fuse.Controls.ARView arViewHost) [static] :173
ARView* ARView::Create(::g::Fuse::Controls::ARView* arViewHost)
{
    ::g::Fuse::AR::iOS::FuseARView* v = ::g::Fuse::AR::iOS::FuseARView::New1();
    ::g::Fuse::AR::iOS::ARViewContainer* avc = ::g::Fuse::AR::iOS::ARViewContainer::New1(v);
    return ARView::New3(arViewHost, avc);
}

// private ARView New(Fuse.Controls.ARView arViewHost, Fuse.AR.iOS.ARViewContainer avc) [static] :186
ARView* ARView::New3(::g::Fuse::Controls::ARView* arViewHost, ::g::Fuse::AR::iOS::ARViewContainer* avc)
{
    ARView* obj1 = (ARView*)uNew(ARView_typeof());
    obj1->ctor_5(arViewHost, avc);
    return obj1;
}
// }

}}}} // ::g::Fuse::AR::iOS
