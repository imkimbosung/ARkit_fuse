// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/ARView.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AR.iOS.ARView.h>
#include <Fuse.Controls.Abox.h>
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
#include <Uno.Byte.h>
#include <Uno.Collections.ObservableList-1.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.PropertyObject.h>
static uString* STRINGS[2];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class ARView :9
// {
static void ARView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Plane");
    ::STRINGS[1] = uString::Const("Statistics");
    ::TYPES[0] = ::g::Fuse::Controls::IARView_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Controls::Abox_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Abox_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Controls::ARNodes_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::ARNodes_typeof(), NULL);
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
        ::TYPES[2/*Uno.Collections.ObservableList<Fuse.Controls.Abox>*/], offsetof(ARView, _aboxs), 0,
        ::TYPES[4/*Uno.Collections.ObservableList<Fuse.Controls.ARNodes>*/], offsetof(ARView, _arnodes), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _willUpdateNodesNextFrame), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _arReady), 0,
        ::g::Uno::Bool_typeof(), offsetof(ARView, _willUpdateARNextFrame), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(ARView, _showPlaneName), 0,
        ::g::Uno::UX::Selector_typeof(), offsetof(ARView, _showStatisticsName), 0);
    type->Reflection.SetFunctions(18,
        new uFunction("get_Aboxs", NULL, (void*)ARView__get_Aboxs_fn, 0, false, ::TYPES[2/*Uno.Collections.ObservableList<Fuse.Controls.Abox>*/], 0),
        new uFunction("get_ARNodes", NULL, (void*)ARView__get_ARNodes_fn, 0, false, ::TYPES[4/*Uno.Collections.ObservableList<Fuse.Controls.ARNodes>*/], 0),
        new uFunction("get_Debug", NULL, (void*)ARView__get_Debug_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Debug", NULL, (void*)ARView__set_Debug_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)ARView__New4_fn, 0, true, type, 0),
        new uFunction("get_Plane", NULL, (void*)ARView__get_Plane_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_Plane", NULL, (void*)ARView__set_Plane_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_PlaneFile", NULL, (void*)ARView__get_PlaneFile_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_PlaneFile", NULL, (void*)ARView__set_PlaneFile_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("SetAR", NULL, (void*)ARView__SetAR_fn, 0, false, uVoid_typeof(), 3, ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof()),
        new uFunction("SetPlane", NULL, (void*)ARView__SetPlane_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("SetStatistics", NULL, (void*)ARView__SetStatistics_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::Bool_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_ShowPlane", NULL, (void*)ARView__get_ShowPlane_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_ShowPlane", NULL, (void*)ARView__set_ShowPlane_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
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
    options.FieldCount = 129;
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

// public ARView() :96
void ARView__ctor_7_fn(ARView* __this)
{
    __this->ctor_7();
}

// public Uno.Collections.ObservableList<Fuse.Controls.Abox> get_Aboxs() :153
void ARView__get_Aboxs_fn(ARView* __this, ::g::Uno::Collections::ObservableList** __retval)
{
    *__retval = __this->Aboxs();
}

// internal void AddNodes(Fuse.Controls.ARNodes a) :170
void ARView__AddNodes_fn(ARView* __this, ::g::Fuse::Controls::ARNodes* a)
{
    __this->AddNodes(a);
}

// private void ApplyARState() :298
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

// internal Fuse.Controls.IARView get_ARViewClient() :133
void ARView__get_ARViewClient_fn(ARView* __this, uObject** __retval)
{
    *__retval = __this->ARViewClient();
}

// internal void set_ARViewClient(Fuse.Controls.IARView value) :134
void ARView__set_ARViewClient_fn(ARView* __this, uObject* value)
{
    __this->ARViewClient(value);
}

// protected override sealed Fuse.Controls.Native.IView CreateNativeView() :111
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

// public ARView New() :96
void ARView__New4_fn(ARView** __retval)
{
    *__retval = ARView::New4();
}

// private void OnAboxsAdded(Fuse.Controls.Abox abox) :181
void ARView__OnAboxsAdded_fn(ARView* __this, ::g::Fuse::Controls::Abox* abox)
{
    __this->OnAboxsAdded(abox);
}

// private void OnAboxsRemoved(Fuse.Controls.Abox abox) :186
void ARView__OnAboxsRemoved_fn(ARView* __this, ::g::Fuse::Controls::Abox* abox)
{
    __this->OnAboxsRemoved(abox);
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

// public bool get_Plane() :318
void ARView__get_Plane_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->Plane();
}

// public void set_Plane(bool value) :319
void ARView__set_Plane_fn(ARView* __this, bool* value)
{
    __this->Plane(*value);
}

// public Uno.UX.FileSource get_PlaneFile() :272
void ARView__get_PlaneFile_fn(ARView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->PlaneFile();
}

// public void set_PlaneFile(Uno.UX.FileSource value) :273
void ARView__set_PlaneFile_fn(ARView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->PlaneFile(value);
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

// public void SetPlane(bool value, Uno.UX.IPropertyListener origin) :322
void ARView__SetPlane_fn(ARView* __this, bool* value, uObject* origin)
{
    __this->SetPlane(*value, origin);
}

// public void SetStatistics(bool value, Uno.UX.IPropertyListener origin) :340
void ARView__SetStatistics_fn(ARView* __this, bool* value, uObject* origin)
{
    __this->SetStatistics(*value, origin);
}

// public bool get_ShowPlane() :249
void ARView__get_ShowPlane_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->ShowPlane();
}

// public void set_ShowPlane(bool value) :250
void ARView__set_ShowPlane_fn(ARView* __this, bool* value)
{
    __this->ShowPlane(*value);
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

// public bool get_Statistics() :336
void ARView__get_Statistics_fn(ARView* __this, bool* __retval)
{
    *__retval = __this->Statistics();
}

// public void set_Statistics(bool value) :337
void ARView__set_Statistics_fn(ARView* __this, bool* value)
{
    __this->Statistics(*value);
}

// internal void UpdateCameraNextFrame() :291
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

// public ARView() [instance] :96
void ARView::ctor_7()
{
    uStackFrame __("Fuse.Controls.ARView", ".ctor()");
    _showPlaneName = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Plane"*/]);
    _showStatisticsName = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"Statistics"*/]);
    ctor_6();
    _arConfig = ::g::Fuse::Controls::ARConfig::New1();
}

// public Uno.Collections.ObservableList<Fuse.Controls.Abox> get_Aboxs() [instance] :153
::g::Uno::Collections::ObservableList* ARView::Aboxs()
{
    uStackFrame __("Fuse.Controls.ARView", "get_Aboxs()");

    if (_aboxs == NULL)
        _aboxs = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[2/*Uno.Collections.ObservableList<Fuse.Controls.Abox>*/], uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Controls.Abox>*/], (void*)ARView__OnAboxsAdded_fn, this), uDelegate::New(::TYPES[3/*Uno.Action<Fuse.Controls.Abox>*/], (void*)ARView__OnAboxsRemoved_fn, this)));

    return _aboxs;
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

// private void ApplyARState() [instance] :298
void ARView::ApplyARState()
{
    uStackFrame __("Fuse.Controls.ARView", "ApplyARState()");
    _willUpdateARNextFrame = false;

    if (ARIsReady())
        ::g::Fuse::Controls::IARView::ApplyTo(uInterface(uPtr(ARViewClient()), ::TYPES[0/*Fuse.Controls.IARView*/]), ShowPlane(), ShowStatistics(), Debug(), uPtr(PlaneFile())->ReadAllBytes());
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
        _arnodes = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[4/*Uno.Collections.ObservableList<Fuse.Controls.ARNodes>*/], uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Controls.ARNodes>*/], (void*)ARView__OnNodesAdded_fn, this), uDelegate::New(::TYPES[5/*Uno.Action<Fuse.Controls.ARNodes>*/], (void*)ARView__OnNodesRemoved_fn, this)));

    return _arnodes;
}

// internal Fuse.Controls.IARView get_ARViewClient() [instance] :133
uObject* ARView::ARViewClient()
{
    return _arViewClient;
}

// internal void set_ARViewClient(Fuse.Controls.IARView value) [instance] :134
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

// private void OnAboxsAdded(Fuse.Controls.Abox abox) [instance] :181
void ARView::OnAboxsAdded(::g::Fuse::Controls::Abox* abox)
{
    UpdateNodesNextFrame();
}

// private void OnAboxsRemoved(Fuse.Controls.Abox abox) [instance] :186
void ARView::OnAboxsRemoved(::g::Fuse::Controls::Abox* abox)
{
    UpdateNodesNextFrame();
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

// public bool get_Plane() [instance] :318
bool ARView::Plane()
{
    uStackFrame __("Fuse.Controls.ARView", "get_Plane()");
    return uPtr(_arConfig)->ShowPlane();
}

// public void set_Plane(bool value) [instance] :319
void ARView::Plane(bool value)
{
    uStackFrame __("Fuse.Controls.ARView", "set_Plane(bool)");
    SetPlane(value, (uObject*)this);
}

// public Uno.UX.FileSource get_PlaneFile() [instance] :272
::g::Uno::UX::FileSource* ARView::PlaneFile()
{
    uStackFrame __("Fuse.Controls.ARView", "get_PlaneFile()");
    return uPtr(_arConfig)->PlaneFile();
}

// public void set_PlaneFile(Uno.UX.FileSource value) [instance] :273
void ARView::PlaneFile(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Controls.ARView", "set_PlaneFile(Uno.UX.FileSource)");
    uPtr(_arConfig)->PlaneFile(value);
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
    ShowPlane(showPlane);
    ShowStatistics(showStatistics);
    Debug(debug);
}

// public void SetPlane(bool value, Uno.UX.IPropertyListener origin) [instance] :322
void ARView::SetPlane(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Controls.ARView", "SetPlane(bool,Uno.UX.IPropertyListener)");
    uPtr(_arConfig)->ShowPlane(value);
    UpdateCameraNextFrame();
    OnPropertyChanged1(_showPlaneName, origin);
}

// public void SetStatistics(bool value, Uno.UX.IPropertyListener origin) [instance] :340
void ARView::SetStatistics(bool value, uObject* origin)
{
    uStackFrame __("Fuse.Controls.ARView", "SetStatistics(bool,Uno.UX.IPropertyListener)");
    uPtr(_arConfig)->ShowStatistics(value);
    UpdateCameraNextFrame();
    OnPropertyChanged1(_showStatisticsName, origin);
}

// public bool get_ShowPlane() [instance] :249
bool ARView::ShowPlane()
{
    uStackFrame __("Fuse.Controls.ARView", "get_ShowPlane()");
    return uPtr(_arConfig)->ShowPlane();
}

// public void set_ShowPlane(bool value) [instance] :250
void ARView::ShowPlane(bool value)
{
    uStackFrame __("Fuse.Controls.ARView", "set_ShowPlane(bool)");
    uPtr(_arConfig)->ShowPlane(value);
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

// public bool get_Statistics() [instance] :336
bool ARView::Statistics()
{
    uStackFrame __("Fuse.Controls.ARView", "get_Statistics()");
    return uPtr(_arConfig)->ShowStatistics();
}

// public void set_Statistics(bool value) [instance] :337
void ARView::Statistics(bool value)
{
    uStackFrame __("Fuse.Controls.ARView", "set_Statistics(bool)");
    SetStatistics(value, (uObject*)this);
}

// internal void UpdateCameraNextFrame() [instance] :291
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

// public ARView New() [static] :96
ARView* ARView::New4()
{
    ARView* obj1 = (ARView*)uNew(ARView_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}}} // ::g::Fuse::Controls
