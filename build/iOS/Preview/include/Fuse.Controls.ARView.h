// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/ARView.ScriptClass.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.ICollapse.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.Selector.h>
namespace g{namespace Fuse{namespace Controls{struct ARConfig;}}}
namespace g{namespace Fuse{namespace Controls{struct ARNodes;}}}
namespace g{namespace Fuse{namespace Controls{struct ARView;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class ARView :9
// {
::g::Fuse::Controls::Panel_type* ARView_typeof();
void ARView__ctor_7_fn(ARView* __this);
void ARView__AddNodes_fn(ARView* __this, ::g::Fuse::Controls::ARNodes* a);
void ARView__ApplyARState_fn(ARView* __this);
void ARView__get_ARIsReady_fn(ARView* __this, bool* __retval);
void ARView__get_ARNodes_fn(ARView* __this, ::g::Uno::Collections::ObservableList** __retval);
void ARView__get_ARViewClient_fn(ARView* __this, uObject** __retval);
void ARView__set_ARViewClient_fn(ARView* __this, uObject* value);
void ARView__CreateNativeView_fn(ARView* __this, uObject** __retval);
void ARView__get_Debug_fn(ARView* __this, bool* __retval);
void ARView__set_Debug_fn(ARView* __this, bool* value);
void ARView__DeferredNodesUpdate_fn(ARView* __this);
void ARView__New4_fn(ARView** __retval);
void ARView__OnARReady_fn(ARView* __this);
void ARView__OnNodesAdded_fn(ARView* __this, ::g::Fuse::Controls::ARNodes* marker);
void ARView__OnNodesRemoved_fn(ARView* __this, ::g::Fuse::Controls::ARNodes* marker);
void ARView__RemoveNodes_fn(ARView* __this, ::g::Fuse::Controls::ARNodes* a);
void ARView__SetAR_fn(ARView* __this, bool* showPlane, bool* showStatistics, bool* debug);
void ARView__SetStatistics_fn(ARView* __this, bool* value, uObject* origin);
void ARView__get_ShowStatistics_fn(ARView* __this, bool* __retval);
void ARView__set_ShowStatistics_fn(ARView* __this, bool* value);
void ARView__get_Statistics_fn(ARView* __this, bool* __retval);
void ARView__set_Statistics_fn(ARView* __this, bool* value);
void ARView__UpdateCameraNextFrame_fn(ARView* __this);
void ARView__UpdateNodes_fn(ARView* __this);
void ARView__UpdateNodesNextFrame_fn(ARView* __this);

struct ARView : ::g::Fuse::Controls::Panel
{
    uStrong< ::g::Fuse::Controls::ARConfig*> _arConfig;
    uStrong<uObject*> _arViewClient;
    uStrong< ::g::Uno::Collections::ObservableList*> _arnodes;
    bool _willUpdateNodesNextFrame;
    bool _arReady;
    bool _willUpdateARNextFrame;
    ::g::Uno::UX::Selector _showStatisticsName;

    void ctor_7();
    void AddNodes(::g::Fuse::Controls::ARNodes* a);
    void ApplyARState();
    bool ARIsReady();
    ::g::Uno::Collections::ObservableList* ARNodes();
    uObject* ARViewClient();
    void ARViewClient(uObject* value);
    bool Debug();
    void Debug(bool value);
    void DeferredNodesUpdate();
    void OnARReady();
    void OnNodesAdded(::g::Fuse::Controls::ARNodes* marker);
    void OnNodesRemoved(::g::Fuse::Controls::ARNodes* marker);
    void RemoveNodes(::g::Fuse::Controls::ARNodes* a);
    void SetAR(bool showPlane, bool showStatistics, bool debug);
    void SetStatistics(bool value, uObject* origin);
    bool ShowStatistics();
    void ShowStatistics(bool value);
    bool Statistics();
    void Statistics(bool value);
    void UpdateCameraNextFrame();
    void UpdateNodes();
    void UpdateNodesNextFrame();
    static ARView* New4();
};
// }

}}} // ::g::Fuse::Controls
