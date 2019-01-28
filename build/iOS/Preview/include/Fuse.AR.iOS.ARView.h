// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Fuse.iOS.ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IARView.h>
#include <Fuse.Controls.Native.ILeafView.h>
#include <Fuse.Controls.Native.iOS.LeafView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace AR{namespace iOS{struct ARView;}}}}
namespace g{namespace Fuse{namespace AR{namespace iOS{struct ARViewContainer;}}}}
namespace g{namespace Fuse{namespace AR{namespace iOS{struct FuseARView;}}}}
namespace g{namespace Fuse{namespace Controls{struct Abox;}}}
namespace g{namespace Fuse{namespace Controls{struct ARNodes;}}}
namespace g{namespace Fuse{namespace Controls{struct ARView;}}}
namespace g{namespace ObjC{struct Object;}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace AR{
namespace iOS{

// public sealed extern class ARView :164
// {
struct ARView_type : ::g::Fuse::Controls::Native::iOS::LeafView_type
{
    ::g::Fuse::Controls::IARView interface3;
};

ARView_type* ARView_typeof();
void ARView__ctor_5_fn(ARView* __this, ::g::Fuse::Controls::ARView* arViewHost, ::g::Fuse::AR::iOS::ARViewContainer* avc);
void ARView__get_Aboxs_fn(ARView* __this, ::g::Uno::Collections::ObservableList** __retval);
void ARView__ApplyTo_fn(ARView* __this, bool* ShowPlane1, bool* ShowsStatistics, bool* Debug1, uArray* PlaneFile1);
void ARView__get_ARNodes_fn(ARView* __this, ::g::Uno::Collections::ObservableList** __retval);
void ARView__ClearNodes_fn(ARView* __this);
void ARView__Configure_fn(ARView* __this, ::g::ObjC::Object* ARView1, ::g::ObjC::Object** __retval);
void ARView__Create_fn(::g::Fuse::Controls::ARView* arViewHost, ARView** __retval);
void ARView__CreateBox_fn(ARView* __this, int32_t* uid, float* width, float* height, float* length, float* x, float* y, float* z, int32_t* __retval);
void ARView__get_Debug_fn(ARView* __this, bool* __retval);
void ARView__set_Debug_fn(ARView* __this, bool* value);
void ARView__New3_fn(::g::Fuse::Controls::ARView* arViewHost, ::g::Fuse::AR::iOS::ARViewContainer* avc, ARView** __retval);
void ARView__get_OnPaused_fn(ARView* __this, uDelegate** __retval);
void ARView__set_OnPaused_fn(ARView* __this, uDelegate* value);
void ARView__OnPausedInternal_fn(ARView* __this);
void ARView__get_OnReady_fn(ARView* __this, uDelegate** __retval);
void ARView__set_OnReady_fn(ARView* __this, uDelegate* value);
void ARView__OnReadyInternal_fn(ARView* __this);
void ARView__get_PlaneFile_fn(ARView* __this, ::g::Uno::UX::FileSource** __retval);
void ARView__set_PlaneFile_fn(ARView* __this, ::g::Uno::UX::FileSource* value);
void ARView__SetAR_fn(ARView* __this, bool* ShowPlane1, bool* ShowsStatistics, bool* Debug1, ::g::Uno::UX::FileSource* PlaneFile1);
void ARView__get_ShowPlane_fn(ARView* __this, bool* __retval);
void ARView__set_ShowPlane_fn(ARView* __this, bool* value);
void ARView__get_ShowStatistics_fn(ARView* __this, bool* __retval);
void ARView__set_ShowStatistics_fn(ARView* __this, bool* value);
void ARView__UpdateNodes_fn(ARView* __this);

struct ARView : ::g::Fuse::Controls::Native::iOS::LeafView
{
    uStrong< ::g::Fuse::AR::iOS::ARViewContainer*> _container;
    uStrong< ::g::Fuse::AR::iOS::FuseARView*> _arView;
    uStrong< ::g::ObjC::Object*> _arViewDelegate;
    uStrong< ::g::Fuse::Controls::ARView*> _arViewHost;
    bool _isReady;
    bool _isPaused;
    bool _Debug;
    uStrong<uDelegate*> _OnPaused;
    uStrong<uDelegate*> _OnReady;
    uStrong< ::g::Uno::UX::FileSource*> _PlaneFile;
    bool _ShowPlane;

    void ctor_5(::g::Fuse::Controls::ARView* arViewHost, ::g::Fuse::AR::iOS::ARViewContainer* avc);
    ::g::Uno::Collections::ObservableList* Aboxs();
    void ApplyTo(bool ShowPlane1, bool ShowsStatistics, bool Debug1, uArray* PlaneFile1);
    ::g::Uno::Collections::ObservableList* ARNodes();
    void ClearNodes();
    ::g::ObjC::Object* Configure(::g::ObjC::Object* ARView1);
    int32_t CreateBox(int32_t uid, float width, float height, float length, float x, float y, float z);
    bool Debug();
    void Debug(bool value);
    uDelegate* OnPaused();
    void OnPaused(uDelegate* value);
    void OnPausedInternal();
    uDelegate* OnReady();
    void OnReady(uDelegate* value);
    void OnReadyInternal();
    ::g::Uno::UX::FileSource* PlaneFile();
    void PlaneFile(::g::Uno::UX::FileSource* value);
    void SetAR(bool ShowPlane1, bool ShowsStatistics, bool Debug1, ::g::Uno::UX::FileSource* PlaneFile1);
    bool ShowPlane();
    void ShowPlane(bool value);
    bool ShowStatistics();
    void ShowStatistics(bool value);
    void UpdateNodes();
    static ARView* Create(::g::Fuse::Controls::ARView* arViewHost);
    static ARView* New3(::g::Fuse::Controls::ARView* arViewHost, ::g::Fuse::AR::iOS::ARViewContainer* avc);
};
// }

}}}} // ::g::Fuse::AR::iOS
