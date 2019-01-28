// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Fuse.iOS.ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <ARDelegate.h>
#include <Fuse.AR.iOS.ARView.h>
#include <Fuse.AR.iOS.ARViewContainer.h>
#include <Fuse.AR.iOS.FuseARView.h>
#include <Fuse.Controls.Abox.h>
#include <Fuse.Controls.ARNodes.h>
#include <Fuse.Controls.ARView.h>
#include <ObjC.Object.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <uObjC.Foreign.h>
static uString* STRINGS[5];
static uType* TYPES[4];

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
    ::TYPES[1] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[2] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Controls::Abox_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof());
    type->SetInterfaces(
        ::TYPES[3/*Uno.IDisposable*/], offsetof(ARView_type, interface0),
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
        ::TYPES[0/*Uno.Action*/], offsetof(ARView, _OnReady), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(ARView, _PlaneFile), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _ShowPlane), 0);
    type->Reflection.SetFunctions(18,
        new uFunction("get_Aboxs", NULL, (void*)ARView__get_Aboxs_fn, 0, false, ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Controls::Abox_typeof(), NULL), 0),
        new uFunction("ApplyTo", NULL, (void*)ARView__ApplyTo_fn, 0, false, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Byte_typeof()->Array()),
        new uFunction("get_ARNodes", NULL, (void*)ARView__get_ARNodes_fn, 0, false, ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Controls::ARNodes_typeof(), NULL), 0),
        new uFunction("Create", NULL, (void*)ARView__Create_fn, 0, true, type, 1, ::g::Fuse::Controls::ARView_typeof()),
        new uFunction("get_Debug", NULL, (void*)ARView__get_Debug_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Debug", NULL, (void*)ARView__set_Debug_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_OnPaused", NULL, (void*)ARView__get_OnPaused_fn, 0, false, ::TYPES[0/*Uno.Action*/], 0),
        new uFunction("set_OnPaused", NULL, (void*)ARView__set_OnPaused_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Uno.Action*/]),
        new uFunction("get_OnReady", NULL, (void*)ARView__get_OnReady_fn, 0, false, ::TYPES[0/*Uno.Action*/], 0),
        new uFunction("set_OnReady", NULL, (void*)ARView__set_OnReady_fn, 0, false, uVoid_typeof(), 1, ::TYPES[0/*Uno.Action*/]),
        new uFunction("get_PlaneFile", NULL, (void*)ARView__get_PlaneFile_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_PlaneFile", NULL, (void*)ARView__set_PlaneFile_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("SetAR", NULL, (void*)ARView__SetAR_fn, 0, false, uVoid_typeof(), 4, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::UX::FileSource_typeof()),
        new uFunction("get_ShowPlane", NULL, (void*)ARView__get_ShowPlane_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowPlane", NULL, (void*)ARView__set_ShowPlane_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
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
    options.FieldCount = 21;
    options.InterfaceCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ARView);
    options.TypeSize = sizeof(ARView_type);
    type = (ARView_type*)uClassType::New("Fuse.AR.iOS.ARView", options);
    type->fp_build_ = ARView_build;
    type->interface3.fp_ApplyTo = (void(*)(uObject*, bool*, bool*, bool*, uArray*))ARView__ApplyTo_fn;
    type->interface3.fp_SetAR = (void(*)(uObject*, bool*, bool*, bool*, ::g::Uno::UX::FileSource*))ARView__SetAR_fn;
    type->interface3.fp_UpdateNodes = (void(*)(uObject*))ARView__UpdateNodes_fn;
    type->interface3.fp_get_ARNodes = (void(*)(uObject*, ::g::Uno::Collections::ObservableList**))ARView__get_ARNodes_fn;
    type->interface3.fp_get_Aboxs = (void(*)(uObject*, ::g::Uno::Collections::ObservableList**))ARView__get_Aboxs_fn;
    type->interface3.fp_get_ShowPlane = (void(*)(uObject*, bool*))ARView__get_ShowPlane_fn;
    type->interface3.fp_set_ShowPlane = (void(*)(uObject*, bool*))ARView__set_ShowPlane_fn;
    type->interface3.fp_get_ShowStatistics = (void(*)(uObject*, bool*))ARView__get_ShowStatistics_fn;
    type->interface3.fp_set_ShowStatistics = (void(*)(uObject*, bool*))ARView__set_ShowStatistics_fn;
    type->interface3.fp_get_Debug = (void(*)(uObject*, bool*))ARView__get_Debug_fn;
    type->interface3.fp_set_Debug = (void(*)(uObject*, bool*))ARView__set_Debug_fn;
    type->interface3.fp_get_PlaneFile = (void(*)(uObject*, ::g::Uno::UX::FileSource**))ARView__get_PlaneFile_fn;
    type->interface3.fp_set_PlaneFile = (void(*)(uObject*, ::g::Uno::UX::FileSource*))ARView__set_PlaneFile_fn;
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

// public Uno.Collections.ObservableList<Fuse.Controls.Abox> get_Aboxs() :308
void ARView__get_Aboxs_fn(ARView* __this, ::g::Uno::Collections::ObservableList** __retval)
{
    *__retval = __this->Aboxs();
}

// public extern void ApplyTo(bool ShowPlane, bool ShowsStatistics, bool Debug, byte[] PlaneFile) :279
void ARView__ApplyTo_fn(ARView* __this, bool* ShowPlane1, bool* ShowsStatistics, bool* Debug1, uArray* PlaneFile1)
{
    __this->ApplyTo(*ShowPlane1, *ShowsStatistics, *Debug1, PlaneFile1);
}

// public Uno.Collections.ObservableList<Fuse.Controls.ARNodes> get_ARNodes() :302
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

// private int CreateBox(int uid, float width, float height, float length, float x, float y, float z) :332
void ARView__CreateBox_fn(ARView* __this, int32_t* uid, float* width, float* height, float* length, float* x, float* y, float* z, int32_t* __retval)
{
    *__retval = __this->CreateBox(*uid, *width, *height, *length, *x, *y, *z);
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

// public generated Uno.UX.FileSource get_PlaneFile() :266
void ARView__get_PlaneFile_fn(ARView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->PlaneFile();
}

// public generated void set_PlaneFile(Uno.UX.FileSource value) :266
void ARView__set_PlaneFile_fn(ARView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->PlaneFile(value);
}

// public void SetAR(bool ShowPlane, bool ShowsStatistics, bool Debug, Uno.UX.FileSource PlaneFile) :292
void ARView__SetAR_fn(ARView* __this, bool* ShowPlane1, bool* ShowsStatistics, bool* Debug1, ::g::Uno::UX::FileSource* PlaneFile1)
{
    __this->SetAR(*ShowPlane1, *ShowsStatistics, *Debug1, PlaneFile1);
}

// public generated bool get_ShowPlane() :256
void ARView__get_ShowPlane_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->ShowPlane();
}

// public generated void set_ShowPlane(bool value) :256
void ARView__set_ShowPlane_fn(ARView* __this, bool* value)
{
    __this->ShowPlane(*value);
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

// public void UpdateNodes() :354
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

// public Uno.Collections.ObservableList<Fuse.Controls.Abox> get_Aboxs() [instance] :308
::g::Uno::Collections::ObservableList* ARView::Aboxs()
{
    uStackFrame __("Fuse.AR.iOS.ARView", "get_Aboxs()");
    return uPtr(_arViewHost)->Aboxs();
}

// public extern void ApplyTo(bool ShowPlane, bool ShowsStatistics, bool Debug, byte[] PlaneFile) [instance] :279
void ARView::ApplyTo(bool ShowPlane1, bool ShowsStatistics, bool Debug1, uArray* PlaneFile1)
{
    @autoreleasepool
    {
        [] (id<UnoObject> _this, bool ShowPlane, bool ShowsStatistics, bool Debug, id<UnoArray> PlaneFile) -> void
        {
            ARDelegate* dg = (ARDelegate*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ARView*>((_this).unoObject, ARView_typeof())->_arViewDelegate); }();
            
            if(PlaneFile){
            	uArray* arr = [PlaneFile unoArray];
            	NSData* imageData = [NSData dataWithBytes:arr->Ptr() length:[PlaneFile count]];
            	[dg applyTo:ShowPlane ShowsStatistics:ShowsStatistics Debug:Debug PlaneFile:imageData];
            }
            //[dg applyTo:ShowPlane ShowsStatistics:ShowsStatistics Debug:Debug File:File];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], ShowPlane1, ShowsStatistics, Debug1, [::StrongUnoArray strongUnoArrayWithUnoArray: PlaneFile1 getAt: ^ id (::uArray* arr, int i) { return ::uObjC::Box<uint8_t>(arr->Item<uint8_t>(i)); } setAt: ^ (::uArray* arr, int i, id obj) { arr->Item<uint8_t>(i) = ::uObjC::Unbox<uint8_t>(obj); }]);
        
    }
    
}

// public Uno.Collections.ObservableList<Fuse.Controls.ARNodes> get_ARNodes() [instance] :302
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

// private int CreateBox(int uid, float width, float height, float length, float x, float y, float z) [instance] :332
int32_t ARView::CreateBox(int32_t uid, float width, float height, float length, float x, float y, float z)
{
    @autoreleasepool
    {
        return [] (id<UnoObject> _this, int32_t uid, float width, float height, float length, float x, float y, float z) -> int32_t
        {
            ARDelegate* dg = (ARDelegate*)[&]() -> ::id { ::uForeignPool __foreignPool; return ::g::ObjC::Object::GetHandle(uCast<ARView*>((_this).unoObject, ARView_typeof())->_arViewDelegate); }();
            return [dg createBox:width height:height length:length x:x y:y z:z nodeID:uid];
        } ([::StrongUnoObject strongUnoObjectWithUnoObject: this], uid, width, height, length, x, y, z);
        
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

// public generated Uno.UX.FileSource get_PlaneFile() [instance] :266
::g::Uno::UX::FileSource* ARView::PlaneFile()
{
    return _PlaneFile;
}

// public generated void set_PlaneFile(Uno.UX.FileSource value) [instance] :266
void ARView::PlaneFile(::g::Uno::UX::FileSource* value)
{
    _PlaneFile = value;
}

// public void SetAR(bool ShowPlane, bool ShowsStatistics, bool Debug, Uno.UX.FileSource PlaneFile) [instance] :292
void ARView::SetAR(bool ShowPlane1, bool ShowsStatistics, bool Debug1, ::g::Uno::UX::FileSource* PlaneFile1)
{
    uStackFrame __("Fuse.AR.iOS.ARView", "SetAR(bool,bool,bool,Uno.UX.FileSource)");
    ApplyTo(ShowPlane1, ShowsStatistics, Debug1, uPtr(PlaneFile1)->ReadAllBytes());
}

// public generated bool get_ShowPlane() [instance] :256
bool ARView::ShowPlane()
{
    return _ShowPlane;
}

// public generated void set_ShowPlane(bool value) [instance] :256
void ARView::ShowPlane(bool value)
{
    _ShowPlane = value;
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

// public void UpdateNodes() [instance] :354
void ARView::UpdateNodes()
{
    uStackFrame __("Fuse.AR.iOS.ARView", "UpdateNodes()");
    ::g::Fuse::Controls::Abox* ret3;
    ClearNodes();
    ::g::Uno::Diagnostics::Debug::Log3(::STRINGS[3/*"update Nodes"*/], 0, ::STRINGS[1/*"/Users/kbs/...*/], 357);
    ::g::Uno::Diagnostics::Debug::Log1(Aboxs(), 0, ::STRINGS[1/*"/Users/kbs/...*/], 359);
    uObject* enum1 = (uObject*)uPtr(Aboxs())->GetEnumerator();

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[1/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Controls::Abox* a = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[2/*Uno.Collections.IEnumerator<Fuse.Controls.Abox>*/]), &ret3), ret3);
                    CreateBox(uPtr(a)->uid, uPtr(a)->width(), uPtr(a)->height(), uPtr(a)->length(), uPtr(a)->x(), uPtr(a)->y(), uPtr(a)->z());
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[3/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[3/*Uno.IDisposable*/]));
        }
        __after_finally_0:;
    }
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
    ARView* obj2 = (ARView*)uNew(ARView_typeof());
    obj2->ctor_5(arViewHost, avc);
    return obj2;
}
// }

}}}} // ::g::Fuse::AR::iOS
