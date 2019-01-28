// This file was generated based on /Users/kbs/Fuse/AR_example/build/iOS/Preview/cache/ux15/sensorButton.g.uno.
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
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}
namespace g{struct sensorButton;}

namespace g{

// public partial sealed class sensorButton :2
// {
::g::Fuse::Controls::Panel_type* sensorButton_typeof();
void sensorButton__ctor_7_fn(sensorButton* __this);
void sensorButton__InitializeUX_fn(sensorButton* __this);
void sensorButton__New4_fn(sensorButton** __retval);
void sensorButton__SetText_fn(sensorButton* __this, uString* value, uObject* origin);
void sensorButton__get_Text_fn(sensorButton* __this, uString** __retval);
void sensorButton__set_Text_fn(sensorButton* __this, uString* value);

struct sensorButton : ::g::Fuse::Controls::Panel
{
    uStrong<uString*> _field_Text;
    uStrong< ::g::Uno::UX::Property1*> temp_Value_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return sensorButton_typeof()->Init(), __selector0_; }

    void ctor_7();
    void InitializeUX();
    void SetText(uString* value, uObject* origin);
    uString* Text();
    void Text(uString* value);
    static sensorButton* New4();
};
// }

} // ::g
