// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/ARView.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AR.iOS.ARView.h>
#include <Fuse.Controls.ARConfig.h>
#include <Fuse.Controls.ARNodes.h>
#include <Fuse.Controls.ARView.h>
#include <Fuse.Controls.IARView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
static uString* STRINGS[1];
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class ARView :9
// {
static void ARView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Statistics");
    ::TYPES[0] = ::g::Fuse::Controls::IARView_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Controls::ARNodes_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::ARNodes_typeof(), NULL);
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(120,
        ::g::Fuse::Controls::ARConfig_typeof(), offsetof(ARView, _arConfig), 0,
        ::TYPES[0/*Fuse.Controls.IARView*/], offsetof(ARView, _arViewClient), 0,
        ::TYPES[2/*Uno.Collections.ObservableList<Fuse.Controls.ARNodes>*/], offsetof(ARView, _arnodes), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _willUpdateNodesNextFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _arReady), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _willUpdateARNextFrame), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(ARView, _showStatisticsName), 0);
    type->Reflection.SetFunctions(10,
        new uFunction("get_ARNodes", NULL, (void*)ARView__get_ARNodes_fn, 0, false, ::TYPES[2/*Uno.Collections.ObservableList<Fuse.Controls.ARNodes>*/], 0),
        new uFunction("get_Debug", NULL, (void*)ARView__get_Debug_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Debug", NULL, (void*)ARView__set_Debug_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ARView__New4_fn, 0, true, type, 0),
        new uFunction("SetAR", NULL, (void*)ARView__SetAR_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetStatistics", NULL, (void*)ARView__SetStatistics_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_ShowStatistics", NULL, (void*)ARView__get_ShowStatistics_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowStatistics", NULL, (void*)ARView__set_ShowStatistics_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_Statistics", NULL, (void*)ARView__get_Statistics_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Statistics", NULL, (void*)ARView__set_Statistics_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()));
}

::g::Fuse::Controls::Panel_type* ARView_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 127;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ARView);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("Fuse.Controls.ARView", options);
    type->fp_build_ = ARView_build;
    type->fp_ctor_ = (void*)ARView__New4_fn;
    type->fp_CreateNativeView = (void(*)(::g::Fuse::Controls::Control*, uObject**))ARView__CreateNativeView_fn;
    type->interface18.fp_Draw = (void(*)(uObject*, ::g::Fuse::Drawing::Surface*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableDraw_fn;
    type->interface18.fp_get_IsPrimary = (void(*)(uObject*, bool*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_IsPrimary_fn;
    type->interface18.fp_get_ElementSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Controls::Panel__FuseDrawingISurfaceDrawableget_ElementSize_fn;
    type->interface13.fp_Show = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIShowShow_fn;
    type->interface15.fp_Collapse = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsICollapseCollapse_fn;
    type->interface14.fp_Hide = (void(*)(uObject*))::g::Fuse::Elements::Element__FuseTriggersActionsIHideHide_fn;
    type->interface17.fp_SetSize = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::Elements::Element__FuseAnimationsIResizeSetSize_fn;
    type->interface16.fp_get_ActualSize = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualSize_fn;
    type->interface16.fp_get_ActualPosition = (void(*)(uObject*, ::g::Uno::Float3*))::g::Fuse::Elements::Element__FuseIActualPlacementget_ActualPosition_fn;
    type->interface16.fp_add_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__add_Placed_fn;
    type->interface16.fp_remove_Placed = (void(*)(uObject*, uDelegate*))::g::Fuse::Elements::Element__remove_Placed_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Controls::Control__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public ARView() :95
void ARView__ctor_7_fn(ARView* __this)
{
    __this->ctor_7();
}

// internal void AddNodes(Fuse.Controls.ARNodes a) :170
void ARView__AddNodes_fn(ARView* __this, ::g::Fuse::Controls::ARNodes* a)
{
    __this->AddNodes(a);
}

// private void ApplyARState() :299
void ARView__ApplyARState_fn(ARView* __this)
{
    __this->ApplyARState();
}

// private bool get_ARIsReady() :243
void ARView__get_ARIsReady_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->ARIsReady();
}

// public Uno.Collections.ObservableList<Fuse.Controls.ARNodes> get_ARNodes() :163
void ARView__get_ARNodes_fn(ARView* __this, ::g::Uno::Collections::ObservableList** __retval)
{
    *__retval = __this->ARNodes();
}

// internal Fuse.Controls.IARView get_ARViewClient() :132
void ARView__get_ARViewClient_fn(ARView* __this, uObject** __retval)
{
    *__retval = __this->ARViewClient();
}

// internal void set_ARViewClient(Fuse.Controls.IARView value) :133
void ARView__set_ARViewClient_fn(ARView* __this, uObject* value)
{
    __this->ARViewClient(value);
}

// protected override sealed Fuse.Controls.Native.IView CreateNativeView() :110
void ARView__CreateNativeView_fn(ARView* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Controls.ARView", "CreateNativeView()");
    return *__retval = (uObject*)::g::Fuse::AR::iOS::ARView::Create(__this), void();
}

// public bool get_Debug() :264
void ARView__get_Debug_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->Debug();
}

// public void set_Debug(bool value) :265
void ARView__set_Debug_fn(ARView* __this, bool* value)
{
    __this->Debug(*value);
}

// private void DeferredNodesUpdate() :209
void ARView__DeferredNodesUpdate_fn(ARView* __this)
{
    __this->DeferredNodesUpdate();
}

// public ARView New() :95
void ARView__New4_fn(ARView** __retval)
{
    *__retval = ARView::New4();
}

// private void OnARReady() :223
void ARView__OnARReady_fn(ARView* __this)
{
    __this->OnARReady();
}

// private void OnNodesAdded(Fuse.Controls.ARNodes marker) :191
void ARView__OnNodesAdded_fn(ARView* __this, ::g::Fuse::Controls::ARNodes* marker)
{
    __this->OnNodesAdded(marker);
}

// private void OnNodesRemoved(Fuse.Controls.ARNodes marker) :196
void ARView__OnNodesRemoved_fn(ARView* __this, ::g::Fuse::Controls::ARNodes* marker)
{
    __this->OnNodesRemoved(marker);
}

// internal void RemoveNodes(Fuse.Controls.ARNodes a) :176
void ARView__RemoveNodes_fn(ARView* __this, ::g::Fuse::Controls::ARNodes* a)
{
    __this->RemoveNodes(a);
}

// public void SetAR(bool showPlane, bool showStatistics, bool debug) :232
void ARView__SetAR_fn(ARView* __this, bool* showPlane, bool* showStatistics, bool* debug)
{
    __this->SetAR(*showPlane, *showStatistics, *debug);
}

// public void SetStatistics(bool value, Uno.UX.IPropertyListener origin) :341
void ARView__SetStatistics_fn(ARView* __this, bool* value, uObject* origin)
{
    __this->SetStatistics(*value, origin);
}

// public bool get_ShowStatistics() :257
void ARView__get_ShowStatistics_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->ShowStatistics();
}

// public void set_ShowStatistics(bool value) :258
void ARView__set_ShowStatistics_fn(ARView* __this, bool* value)
{
    __this->ShowStatistics(*value);
}

// public bool get_Statistics() :337
void ARView__get_Statistics_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->Statistics();
}

// public void set_Statistics(bool value) :338
void ARView__set_Statistics_fn(ARView* __this, bool* value)
{
    __this->Statistics(*value);
}

// internal void UpdateCameraNextFrame() :292
void ARView__UpdateCameraNextFrame_fn(ARView* __this)
{
    __this->UpdateCameraNextFrame();
}

// private void UpdateNodes() :215
void ARView__UpdateNodes_fn(ARView* __this)
{
    __this->UpdateNodes();
}

// private void UpdateNodesNextFrame() :202
void ARView__UpdateNodesNextFrame_fn(ARView* __this)
{
    __this->UpdateNodesNextFrame();
}

// public ARView() [instance] :95
void ARView::ctor_7()
{
    uStackFrame __("Fuse.Controls.ARView", ".ctor()");
    _showStatisticsName = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[0/*"Statistics"*/]);
    ctor_6();
    _arConfig = ::g::Fuse::Controls::ARConfig::New1();
}

// internal void AddNodes(Fuse.Controls.ARNodes a) [instance] :170
void ARView::AddNodes(::g::Fuse::Controls::ARNodes* a)
{
    uStackFrame __("Fuse.Controls.ARView", "AddNodes(Fuse.Controls.ARNodes)");
    bool ret2;

    if ((::g::Uno::Collections::ObservableList__Contains_fn(uPtr(ARNodes()), a, &ret2), ret2))
        return;

    ::g::Uno::Collections::ObservableList__Add_fn(uPtr(ARNodes()), a);
}

// private void ApplyARState() [instance] :299
void ARView::ApplyARState()
{
    _willUpdateARNextFrame = false;

    if (ARIsReady())
        ;
}

// private bool get_ARIsReady() [instance] :243
bool ARView::ARIsReady()
{
    return _arReady;
}

// public Uno.Collections.ObservableList<Fuse.Controls.ARNodes> get_ARNodes() [instance] :163
::g::Uno::Collections::ObservableList* ARView::ARNodes()
{
    uStackFrame __("Fuse.Controls.ARView", "get_ARNodes()");

    if (_arnodes == NULL)
        _arnodes = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[2/*Uno.Collections.ObservableList<Fuse.Controls.ARNodes>*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Controls.ARNodes>*/], (void*)ARView__OnNodesAdded_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Controls.ARNodes>*/], (void*)ARView__OnNodesRemoved_fn, this)));

    return _arnodes;
}

// internal Fuse.Controls.IARView get_ARViewClient() [instance] :132
uObject* ARView::ARViewClient()
{
    return _arViewClient;
}

// internal void set_ARViewClient(Fuse.Controls.IARView value) [instance] :133
void ARView::ARViewClient(uObject* value)
{
    uStackFrame __("Fuse.Controls.ARView", "set_ARViewClient(Fuse.Controls.IARView)");
    _arViewClient = value;

    if (_arViewClient == NULL)
    {
        _arReady = false;
        return;
    }

    ::g::Fuse::Controls::IARView::OnReady(uInterface(uPtr(ARViewClient()), ::TYPES[0/*Fuse.Controls.IARView*/]), uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ARView__OnARReady_fn, this));
    uPtr(_arConfig)->Apply(ARViewClient());
}

// public bool get_Debug() [instance] :264
bool ARView::Debug()
{
    uStackFrame __("Fuse.Controls.ARView", "get_Debug()");
    return uPtr(_arConfig)->Debug();
}

// public void set_Debug(bool value) [instance] :265
void ARView::Debug(bool value)
{
    uStackFrame __("Fuse.Controls.ARView", "set_Debug(bool)");
    uPtr(_arConfig)->Debug(value);
}

// private void DeferredNodesUpdate() [instance] :209
void ARView::DeferredNodesUpdate()
{
    uStackFrame __("Fuse.Controls.ARView", "DeferredNodesUpdate()");
    _willUpdateNodesNextFrame = false;
    UpdateNodes();
}

// private void OnARReady() [instance] :223
void ARView::OnARReady()
{
    uStackFrame __("Fuse.Controls.ARView", "OnARReady()");

    if (ARViewClient() == NULL)
        return;

    _arReady = true;
    ::g::Fuse::Controls::IARView::OnReady(uInterface(uPtr(ARViewClient()), ::TYPES[0/*Fuse.Controls.IARView*/]), NULL);
    ApplyARState();
}

// private void OnNodesAdded(Fuse.Controls.ARNodes marker) [instance] :191
void ARView::OnNodesAdded(::g::Fuse::Controls::ARNodes* marker)
{
    UpdateNodesNextFrame();
}

// private void OnNodesRemoved(Fuse.Controls.ARNodes marker) [instance] :196
void ARView::OnNodesRemoved(::g::Fuse::Controls::ARNodes* marker)
{
    UpdateNodesNextFrame();
}

// internal void RemoveNodes(Fuse.Controls.ARNodes a) [instance] :176
void ARView::RemoveNodes(::g::Fuse::Controls::ARNodes* a)
{
    uStackFrame __("Fuse.Controls.ARView", "RemoveNodes(Fuse.Controls.ARNodes)");
    bool ret3;
    ::g::Uno::Collections::ObservableList__Remove_fn(uPtr(ARNodes()), a, &ret3);
}

// public void SetAR(bool showPlane, bool showStatistics, bool debug) [instance] :232
void ARView::SetAR(bool showPlane, bool showStatistics, bool debug)
{
    uStackFrame __("Fuse.Controls.ARView", "SetAR(bool,bool,bool)");
    ShowStatistics(showStatistics);
    Debug(debug);
}

// public void SetStatistics(bool value, Uno.UX.IPropertyListener origin) [instance] :341
void ARView::SetStatistics(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Controls.ARView", "SetStatistics(bool,Uno.UX.IPropertyListener)");
    uPtr(_arConfig)->ShowStatistics(value);
    UpdateCameraNextFrame();
    OnPropertyChanged1(_showStatisticsName, origin);
}

// public bool get_ShowStatistics() [instance] :257
bool ARView::ShowStatistics()
{
    uStackFrame __("Fuse.Controls.ARView", "get_ShowStatistics()");
    return uPtr(_arConfig)->ShowStatistics();
}

// public void set_ShowStatistics(bool value) [instance] :258
void ARView::ShowStatistics(bool value)
{
    uStackFrame __("Fuse.Controls.ARView", "set_ShowStatistics(bool)");
    uPtr(_arConfig)->ShowStatistics(value);
}

// public bool get_Statistics() [instance] :337
bool ARView::Statistics()
{
    uStackFrame __("Fuse.Controls.ARView", "get_Statistics()");
    return uPtr(_arConfig)->ShowStatistics();
}

// public void set_Statistics(bool value) [instance] :338
void ARView::Statistics(bool value)
{
    uStackFrame __("Fuse.Controls.ARView", "set_Statistics(bool)");
    SetStatistics(value, (uObject*)this);
}

// internal void UpdateCameraNextFrame() [instance] :292
void ARView::UpdateCameraNextFrame()
{
    uStackFrame __("Fuse.Controls.ARView", "UpdateCameraNextFrame()");

    if (!ARIsReady() || _willUpdateARNextFrame)
        return;

    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ARView__ApplyARState_fn, this), 0, 1);
    _willUpdateARNextFrame = true;
}

// private void UpdateNodes() [instance] :215
void ARView::UpdateNodes()
{
    uStackFrame __("Fuse.Controls.ARView", "UpdateNodes()");

    if (ARIsReady())
        ::g::Fuse::Controls::IARView::UpdateNodes(uInterface(uPtr(ARViewClient()), ::TYPES[0/*Fuse.Controls.IARView*/]));
}

// private void UpdateNodesNextFrame() [instance] :202
void ARView::UpdateNodesNextFrame()
{
    uStackFrame __("Fuse.Controls.ARView", "UpdateNodesNextFrame()");

    if (!ARIsReady() || _willUpdateNodesNextFrame)
        return;

    ::g::Fuse::UpdateManager::PerformNextFrame(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)ARView__DeferredNodesUpdate_fn, this), 0, 1);
    _willUpdateNodesNextFrame = true;
}

// public ARView New() [static] :95
ARView* ARView::New4()
{
    ARView* obj1 = (ARView*)uNew(ARView_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}}} // ::g::Fuse::Controls
