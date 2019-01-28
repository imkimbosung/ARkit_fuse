// This file was generated based on /Users/kbs/Fuse/AR_example/build/iOS/Preview/cache/ux15/ARscreen.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Page.h>
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
namespace g{namespace Fuse{namespace Controls{struct ARView;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct ARscreen;}

namespace g{

// public partial sealed class ARscreen :2
// {
::g::Fuse::Controls::Panel_type* ARscreen_typeof();
void ARscreen__ctor_8_fn(ARscreen* __this, ::g::Fuse::Navigation::Router* router1);
void ARscreen__InitializeUX_fn(ARscreen* __this);
void ARscreen__New5_fn(::g::Fuse::Navigation::Router* router1, ARscreen** __retval);

struct ARscreen : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Controls::ARView*> ARView;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb0;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ARscreen_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ARscreen_typeof()->Init(), __selector0_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static ARscreen* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
