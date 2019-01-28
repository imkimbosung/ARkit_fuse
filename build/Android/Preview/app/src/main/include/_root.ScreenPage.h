// This file was generated based on /Users/kbs/Fuse/AR_example/build/Android/Preview/cache/ux15/ScreenPage.g.uno.
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
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-ea70af1f.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{struct ScreenPage;}

namespace g{

// public partial sealed class ScreenPage :2
// {
::g::Fuse::Controls::Panel_type* ScreenPage_typeof();
void ScreenPage__ctor_8_fn(ScreenPage* __this, ::g::Fuse::Navigation::Router* router1);
void ScreenPage__InitializeUX_fn(ScreenPage* __this);
void ScreenPage__New5_fn(::g::Fuse::Navigation::Router* router1, ScreenPage** __retval);

struct ScreenPage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb8;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return ScreenPage_typeof()->Init(), __g_static_nametable1_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static ScreenPage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
