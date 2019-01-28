// This file was generated based on /Users/kbs/Fuse/AR_example/build/iOS/Preview/cache/ux15/ScreenPage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AR_example_bundle.h>
#include <_root.ScreenPage.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
static uString* STRINGS[4];
static uType* TYPES[5];

namespace g{

// public partial sealed class ScreenPage :2
// {
// static ScreenPage() :11
static void ScreenPage__cctor_4_fn(uType* __type)
{
    ScreenPage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb8"*/]);
}

static void ScreenPage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb8");
    ::STRINGS[2] = uString::Const("main");
    ::STRINGS[3] = uString::Const("Pages/ScreenPage.ux");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::AR_example_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(ScreenPage, router), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(ScreenPage, temp_eb8), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(ScreenPage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&ScreenPage::__g_static_nametable1_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ScreenPage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* ScreenPage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 130;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ScreenPage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("ScreenPage", options);
    type->fp_build_ = ScreenPage_build;
    type->fp_cctor_ = ScreenPage__cctor_4_fn;
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

// public ScreenPage(Fuse.Navigation.Router router) :15
void ScreenPage__ctor_8_fn(ScreenPage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :21
void ScreenPage__InitializeUX_fn(ScreenPage* __this)
{
    __this->InitializeUX();
}

// public ScreenPage New(Fuse.Navigation.Router router) :15
void ScreenPage__New5_fn(::g::Fuse::Navigation::Router* router1, ScreenPage** __retval)
{
    *__retval = ScreenPage::New5(router1);
}

uSStrong<uArray*> ScreenPage::__g_static_nametable1_;

// public ScreenPage(Fuse.Navigation.Router router) [instance] :15
void ScreenPage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("ScreenPage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :21
void ScreenPage::InitializeUX()
{
    uStackFrame __("ScreenPage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, ScreenPage::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[2/*"main"*/]);
    ::g::Fuse::Reactive::JavaScript* temp1 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Image* temp2 = ::g::Fuse::Controls::Image::New3();
    temp_eb8 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    ::g::Fuse::Drawing::StaticSolidColor* temp3 = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Uno::Float4__New2(0.8627451f, 0.8823529f, 0.8901961f, 1.0f));
    SourceLineNumber(1);
    SourceFileName(::STRINGS[3/*"Pages/Scree...*/]);
    temp1->LineNumber(3);
    temp1->FileName(::STRINGS[3/*"Pages/Scree...*/]);
    temp1->SourceLineNumber(3);
    temp1->SourceFileName(::STRINGS[3/*"Pages/Scree...*/]);
    temp1->File(::g::Uno::UX::BundleFileSource::New1(::g::AR_example_bundle::ScreenPagec881ae49()));
    temp2->Alignment(2);
    temp2->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp2->Layer(2);
    temp2->SourceLineNumber(5);
    temp2->SourceFileName(::STRINGS[3/*"Pages/Scree...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp2, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb8)));
    temp2->File(::g::Uno::UX::BundleFileSource::New1(::g::AR_example_bundle::logo3b7e0030c()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp2->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb8);
    temp->SourceLineNumber(5);
    temp->SourceFileName(::STRINGS[3/*"Pages/Scree...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[3/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[3/*Uno.Collections.ICollection<object>*/]), temp_eb8);
    Background(temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Node>*/]), temp2);
}

// public ScreenPage New(Fuse.Navigation.Router router) [static] :15
ScreenPage* ScreenPage::New5(::g::Fuse::Navigation::Router* router1)
{
    ScreenPage* obj1 = (ScreenPage*)uNew(ScreenPage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
