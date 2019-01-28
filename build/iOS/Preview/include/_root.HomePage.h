// This file was generated based on /Users/kbs/Fuse/AR_example/build/iOS/Preview/cache/ux15/HomePage.g.uno.
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
namespace g{namespace Fuse{namespace Controls{struct Rectangle;}}}
namespace g{namespace Fuse{namespace Controls{struct Text;}}}
namespace g{namespace Fuse{namespace Drawing{struct SolidColor;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Navigation{struct Router;}}}
namespace g{namespace Fuse{namespace Reactive{struct EventBinding;}}}
namespace g{namespace Uno{namespace UX{struct NameTable;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct HomePage;}

namespace g{

// public partial sealed class HomePage :2
// {
::g::Fuse::Controls::Panel_type* HomePage_typeof();
void HomePage__ctor_8_fn(HomePage* __this, ::g::Fuse::Navigation::Router* router1);
void HomePage__InitializeUX_fn(HomePage* __this);
void HomePage__New5_fn(::g::Fuse::Navigation::Router* router1, HomePage** __retval);

struct HomePage : ::g::Fuse::Controls::Page
{
    uStrong< ::g::Fuse::Navigation::Router*> router;
    uStrong< ::g::Fuse::Controls::Text*> ARscreen;
    uStrong< ::g::Fuse::Controls::Rectangle*> ARrect;
    uStrong< ::g::Fuse::Drawing::SolidColor*> ARrectColor;
    uStrong< ::g::Fuse::Drawing::Stroke*> ARrectStroke;
    uStrong< ::g::Fuse::Drawing::SolidColor*> ARrectStrokeColor;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb3;
    uStrong< ::g::Fuse::Controls::Text*> RespberryPi;
    uStrong< ::g::Fuse::Controls::Rectangle*> Pirect;
    uStrong< ::g::Fuse::Drawing::SolidColor*> PirectColor;
    uStrong< ::g::Fuse::Drawing::Stroke*> PirectStroke;
    uStrong< ::g::Fuse::Drawing::SolidColor*> PirectStrokeColor;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb4;
    uStrong< ::g::Fuse::Controls::Text*> Counter;
    uStrong< ::g::Fuse::Controls::Rectangle*> CTrect;
    uStrong< ::g::Fuse::Drawing::SolidColor*> CTrectColor;
    uStrong< ::g::Fuse::Drawing::Stroke*> CTrectStroke;
    uStrong< ::g::Fuse::Drawing::SolidColor*> CTrectStrokeColor;
    uStrong< ::g::Fuse::Reactive::EventBinding*> temp_eb5;
    uStrong< ::g::Uno::UX::NameTable*> __g_nametable1;
    static uSStrong<uArray*> __g_static_nametable1_;
    static uSStrong<uArray*>& __g_static_nametable1() { return HomePage_typeof()->Init(), __g_static_nametable1_; }
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return HomePage_typeof()->Init(), __selector0_; }
    static ::g::Uno::UX::Selector __selector1_;
    static ::g::Uno::UX::Selector& __selector1() { return HomePage_typeof()->Init(), __selector1_; }
    static ::g::Uno::UX::Selector __selector2_;
    static ::g::Uno::UX::Selector& __selector2() { return HomePage_typeof()->Init(), __selector2_; }
    static ::g::Uno::UX::Selector __selector3_;
    static ::g::Uno::UX::Selector& __selector3() { return HomePage_typeof()->Init(), __selector3_; }
    static ::g::Uno::UX::Selector __selector4_;
    static ::g::Uno::UX::Selector& __selector4() { return HomePage_typeof()->Init(), __selector4_; }
    static ::g::Uno::UX::Selector __selector5_;
    static ::g::Uno::UX::Selector& __selector5() { return HomePage_typeof()->Init(), __selector5_; }

    void ctor_8(::g::Fuse::Navigation::Router* router1);
    void InitializeUX();
    static HomePage* New5(::g::Fuse::Navigation::Router* router1);
};
// }

} // ::g
