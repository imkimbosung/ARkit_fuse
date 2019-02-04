// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/ARView.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct ARNodes;}}}
namespace g{namespace Uno{namespace Collections{struct ObservableList;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal abstract interface IARView :29
// {
uInterfaceType* IARView_typeof();

struct IARView
{
    void(*fp_get_ARNodes)(uObject*, ::g::Uno::Collections::ObservableList**);
    void(*fp_get_Debug)(uObject*, bool*);
    void(*fp_set_Debug)(uObject*, bool*);
    void(*fp_get_OnReady)(uObject*, uDelegate**);
    void(*fp_set_OnReady)(uObject*, uDelegate*);
    void(*fp_get_ShowStatistics)(uObject*, bool*);
    void(*fp_set_ShowStatistics)(uObject*, bool*);
    void(*fp_UpdateNodes)(uObject*);
    static ::g::Uno::Collections::ObservableList* ARNodes(const uInterface& __this) { ::g::Uno::Collections::ObservableList* __retval; return __this.VTable<IARView>()->fp_get_ARNodes(__this, &__retval), __retval; }
    static bool Debug(const uInterface& __this) { bool __retval; return __this.VTable<IARView>()->fp_get_Debug(__this, &__retval), __retval; }
    static void Debug(const uInterface& __this, bool value) { __this.VTable<IARView>()->fp_set_Debug(__this, &value); }
    static uDelegate* OnReady(const uInterface& __this) { uDelegate* __retval; return __this.VTable<IARView>()->fp_get_OnReady(__this, &__retval), __retval; }
    static void OnReady(const uInterface& __this, uDelegate* value) { __this.VTable<IARView>()->fp_set_OnReady(__this, value); }
    static bool ShowStatistics(const uInterface& __this) { bool __retval; return __this.VTable<IARView>()->fp_get_ShowStatistics(__this, &__retval), __retval; }
    static void ShowStatistics(const uInterface& __this, bool value) { __this.VTable<IARView>()->fp_set_ShowStatistics(__this, &value); }
    static void UpdateNodes(const uInterface& __this) { __this.VTable<IARView>()->fp_UpdateNodes(__this); }
};
// }

}}} // ::g::Fuse::Controls
