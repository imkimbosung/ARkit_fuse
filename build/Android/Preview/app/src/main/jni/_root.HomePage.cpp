// This file was generated based on /Users/kbs/Fuse/AR_example/build/Android/Preview/cache/ux15/HomePage.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AR_example_bundle.h>
#include <_root.HomePage.h>
#include <Fuse.Animations.Animator.h>
#include <Fuse.Animations.Scale.h>
#include <Fuse.Animations.TrackAnimator.h>
#include <Fuse.Animations.Trans-997c8373.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.StrokeAlignment.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.WhilePressed.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.EventBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.JavaScript.h>
#include <Fuse.Scaling.h>
#include <Fuse.Triggers.Actions.Callback.h>
#include <Fuse.Triggers.Actions-fcab7e57.h>
#include <Fuse.Triggers.Trigger.h>
#include <Fuse.VisualEventHandler.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.NameTable.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[23];
static uType* TYPES[9];

namespace g{

// public partial sealed class HomePage :2
// {
// static HomePage() :45
static void HomePage__cctor_4_fn(uType* __type)
{
    HomePage::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 19, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"ARscreen"*/], ::STRINGS[2/*"ARrect"*/], ::STRINGS[3/*"ARrectColor"*/], ::STRINGS[4/*"ARrectStroke"*/], ::STRINGS[5/*"ARrectStrok...*/], ::STRINGS[6/*"temp_eb3"*/], ::STRINGS[7/*"RespberryPi"*/], ::STRINGS[8/*"Pirect"*/], ::STRINGS[9/*"PirectColor"*/], ::STRINGS[10/*"PirectStroke"*/], ::STRINGS[11/*"PirectStrok...*/], ::STRINGS[12/*"temp_eb4"*/], ::STRINGS[13/*"Counter"*/], ::STRINGS[14/*"CTrect"*/], ::STRINGS[15/*"CTrectColor"*/], ::STRINGS[16/*"CTrectStroke"*/], ::STRINGS[17/*"CTrectStrok...*/], ::STRINGS[18/*"temp_eb5"*/]);
    HomePage::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[1/*"ARscreen"*/]);
    HomePage::__selector1_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"ARrect"*/]);
    HomePage::__selector2_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[7/*"RespberryPi"*/]);
    HomePage::__selector3_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[8/*"Pirect"*/]);
    HomePage::__selector4_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[13/*"Counter"*/]);
    HomePage::__selector5_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[14/*"CTrect"*/]);
}

static void HomePage_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("ARscreen");
    ::STRINGS[2] = uString::Const("ARrect");
    ::STRINGS[3] = uString::Const("ARrectColor");
    ::STRINGS[4] = uString::Const("ARrectStroke");
    ::STRINGS[5] = uString::Const("ARrectStrokeColor");
    ::STRINGS[6] = uString::Const("temp_eb3");
    ::STRINGS[7] = uString::Const("RespberryPi");
    ::STRINGS[8] = uString::Const("Pirect");
    ::STRINGS[9] = uString::Const("PirectColor");
    ::STRINGS[10] = uString::Const("PirectStroke");
    ::STRINGS[11] = uString::Const("PirectStrokeColor");
    ::STRINGS[12] = uString::Const("temp_eb4");
    ::STRINGS[13] = uString::Const("Counter");
    ::STRINGS[14] = uString::Const("CTrect");
    ::STRINGS[15] = uString::Const("CTrectColor");
    ::STRINGS[16] = uString::Const("CTrectStroke");
    ::STRINGS[17] = uString::Const("CTrectStrokeColor");
    ::STRINGS[18] = uString::Const("temp_eb5");
    ::STRINGS[19] = uString::Const("CounterPage");
    ::STRINGS[20] = uString::Const("Pages/HomePage.ux");
    ::STRINGS[21] = uString::Const("AR Start");
    ::STRINGS[22] = uString::Const("Sensor");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Animations::Animator_typeof(), NULL);
    ::TYPES[5] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Triggers::Actions::TriggerAction_typeof(), NULL);
    ::TYPES[6] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[7] = ::g::Fuse::VisualEventHandler_typeof();
    ::TYPES[8] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
    type->SetDependencies(
        ::g::AR_example_bundle_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface10),
        ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(HomePage, router), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(HomePage, ARscreen), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(HomePage, ARrect), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(HomePage, ARrectColor), 0,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(HomePage, ARrectStroke), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(HomePage, ARrectStrokeColor), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(HomePage, temp_eb3), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(HomePage, RespberryPi), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(HomePage, Pirect), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(HomePage, PirectColor), 0,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(HomePage, PirectStroke), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(HomePage, PirectStrokeColor), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(HomePage, temp_eb4), 0,
        ::g::Fuse::Controls::Text_typeof(), offsetof(HomePage, Counter), 0,
        ::g::Fuse::Controls::Rectangle_typeof(), offsetof(HomePage, CTrect), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(HomePage, CTrectColor), 0,
        ::g::Fuse::Drawing::Stroke_typeof(), offsetof(HomePage, CTrectStroke), 0,
        ::g::Fuse::Drawing::SolidColor_typeof(), offsetof(HomePage, CTrectStrokeColor), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(HomePage, temp_eb5), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(HomePage, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&HomePage::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HomePage::__selector0_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HomePage::__selector1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HomePage::__selector2_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HomePage::__selector3_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HomePage::__selector4_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&HomePage::__selector5_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)HomePage__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* HomePage_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 153;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HomePage);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("HomePage", options);
    type->fp_build_ = HomePage_build;
    type->fp_cctor_ = HomePage__cctor_4_fn;
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

// public HomePage(Fuse.Navigation.Router router) :49
void HomePage__ctor_8_fn(HomePage* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :55
void HomePage__InitializeUX_fn(HomePage* __this)
{
    __this->InitializeUX();
}

// public HomePage New(Fuse.Navigation.Router router) :49
void HomePage__New5_fn(::g::Fuse::Navigation::Router* router1, HomePage** __retval)
{
    *__retval = HomePage::New5(router1);
}

uSStrong<uArray*> HomePage::__g_static_nametable1_;
::g::Uno::UX::Selector HomePage::__selector0_;
::g::Uno::UX::Selector HomePage::__selector1_;
::g::Uno::UX::Selector HomePage::__selector2_;
::g::Uno::UX::Selector HomePage::__selector3_;
::g::Uno::UX::Selector HomePage::__selector4_;
::g::Uno::UX::Selector HomePage::__selector5_;

// public HomePage(Fuse.Navigation.Router router) [instance] :49
void HomePage::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("HomePage", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :55
void HomePage::InitializeUX()
{
    uStackFrame __("HomePage", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, HomePage::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp = ::g::Fuse::Reactive::Data::New1(::STRINGS[1/*"ARscreen"*/]);
    ::g::Fuse::Reactive::Data* temp1 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"RespberryPi"*/]);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[19/*"CounterPage"*/]);
    ::g::Fuse::Reactive::JavaScript* temp3 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Panel* temp4 = ::g::Fuse::Controls::Panel::New3();
    ARscreen = ::g::Fuse::Controls::Text::New3();
    ARrect = ::g::Fuse::Controls::Rectangle::New3();
    ARrectColor = ::g::Fuse::Drawing::SolidColor::New2();
    ARrectStroke = ::g::Fuse::Drawing::Stroke::New2();
    ARrectStrokeColor = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Gestures::WhilePressed* temp5 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp6 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp7 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp8 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb3 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp);
    ::g::Fuse::Controls::Panel* temp9 = ::g::Fuse::Controls::Panel::New3();
    RespberryPi = ::g::Fuse::Controls::Text::New3();
    Pirect = ::g::Fuse::Controls::Rectangle::New3();
    PirectColor = ::g::Fuse::Drawing::SolidColor::New2();
    PirectStroke = ::g::Fuse::Drawing::Stroke::New2();
    PirectStrokeColor = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Gestures::WhilePressed* temp10 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp11 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp12 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp13 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb4 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp1);
    ::g::Fuse::Controls::Panel* temp14 = ::g::Fuse::Controls::Panel::New3();
    Counter = ::g::Fuse::Controls::Text::New3();
    CTrect = ::g::Fuse::Controls::Rectangle::New3();
    CTrectColor = ::g::Fuse::Drawing::SolidColor::New2();
    CTrectStroke = ::g::Fuse::Drawing::Stroke::New2();
    CTrectStrokeColor = ::g::Fuse::Drawing::SolidColor::New2();
    ::g::Fuse::Gestures::WhilePressed* temp15 = ::g::Fuse::Gestures::WhilePressed::New2();
    ::g::Fuse::Animations::Scale* temp16 = ::g::Fuse::Animations::Scale::New2();
    ::g::Fuse::Gestures::Clicked* temp17 = ::g::Fuse::Gestures::Clicked::New2();
    ::g::Fuse::Triggers::Actions::Callback* temp18 = ::g::Fuse::Triggers::Actions::Callback::New2();
    temp_eb5 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    temp3->LineNumber(3);
    temp3->FileName(::STRINGS[20/*"Pages/HomeP...*/]);
    temp3->SourceLineNumber(3);
    temp3->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    temp3->File(::g::Uno::UX::BundleFileSource::New1(::g::AR_example_bundle::HomePageed8c17c6()));
    temp4->SourceLineNumber(5);
    temp4->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), ARscreen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), ARrect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp4->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    uPtr(ARscreen)->Value(::STRINGS[21/*"AR Start"*/]);
    uPtr(ARscreen)->FontSize(16.0f);
    uPtr(ARscreen)->Color(::g::Uno::Float4__New2(0.0f, 0.6f, 0.0f, 1.0f));
    uPtr(ARscreen)->Alignment(2);
    uPtr(ARscreen)->Y(::g::Uno::UX::Size__New1(170.0f, 1));
    uPtr(ARscreen)->Name(HomePage::__selector0_);
    uPtr(ARscreen)->SourceLineNumber(6);
    uPtr(ARscreen)->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    uPtr(ARrect)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(ARrect)->Width(::g::Uno::UX::Size__New1(146.0f, 1));
    uPtr(ARrect)->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    uPtr(ARrect)->Margin(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    uPtr(ARrect)->Y(::g::Uno::UX::Size__New1(150.0f, 1));
    uPtr(ARrect)->Name(HomePage::__selector1_);
    uPtr(ARrect)->SourceLineNumber(8);
    uPtr(ARrect)->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ARrect)->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), ARrectColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(ARrect)->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), ARrectStroke);
    uPtr(ARrectColor)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(ARrectStroke)->Width(4.0f);
    uPtr(ARrectStroke)->Alignment(0);
    uPtr(ARrectStroke)->Brush(ARrectStrokeColor);
    uPtr(ARrectStrokeColor)->Color(::g::Uno::Float4__New2(0.0f, 0.6f, 0.0f, 1.0f));
    temp5->SourceLineNumber(15);
    temp5->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp5->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp6);
    temp6->Factor(0.9f);
    temp6->Duration(0.05);
    temp6->Target(ARscreen);
    temp7->SourceLineNumber(19);
    temp7->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp8);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb3);
    temp8->SourceLineNumber(20);
    temp8->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    temp8->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb3)));
    temp->SourceLineNumber(20);
    temp->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    temp9->SourceLineNumber(24);
    temp9->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), RespberryPi);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Pirect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp10);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp12);
    uPtr(RespberryPi)->Value(::STRINGS[22/*"Sensor"*/]);
    uPtr(RespberryPi)->FontSize(16.0f);
    uPtr(RespberryPi)->Color(::g::Uno::Float4__New2(0.0f, 0.6f, 0.0f, 1.0f));
    uPtr(RespberryPi)->Alignment(2);
    uPtr(RespberryPi)->Y(::g::Uno::UX::Size__New1(340.0f, 1));
    uPtr(RespberryPi)->Name(HomePage::__selector2_);
    uPtr(RespberryPi)->SourceLineNumber(25);
    uPtr(RespberryPi)->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    uPtr(Pirect)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(Pirect)->Width(::g::Uno::UX::Size__New1(146.0f, 1));
    uPtr(Pirect)->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    uPtr(Pirect)->Y(::g::Uno::UX::Size__New1(320.0f, 1));
    uPtr(Pirect)->Name(HomePage::__selector3_);
    uPtr(Pirect)->SourceLineNumber(27);
    uPtr(Pirect)->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Pirect)->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), PirectColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(Pirect)->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), PirectStroke);
    uPtr(PirectColor)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(PirectStroke)->Width(4.0f);
    uPtr(PirectStroke)->Alignment(0);
    uPtr(PirectStroke)->Brush(PirectStrokeColor);
    uPtr(PirectStrokeColor)->Color(::g::Uno::Float4__New2(0.0f, 0.6f, 0.0f, 1.0f));
    temp10->SourceLineNumber(34);
    temp10->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp10->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp11);
    temp11->Factor(0.9f);
    temp11->Duration(0.05);
    temp11->Target(RespberryPi);
    temp12->SourceLineNumber(38);
    temp12->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp12->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb4);
    temp13->SourceLineNumber(39);
    temp13->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    temp13->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb4)));
    temp1->SourceLineNumber(39);
    temp1->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    temp14->SourceLineNumber(43);
    temp14->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), Counter);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), CTrect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp15);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp17);
    uPtr(Counter)->Value(::STRINGS[13/*"Counter"*/]);
    uPtr(Counter)->FontSize(16.0f);
    uPtr(Counter)->Color(::g::Uno::Float4__New2(0.0f, 0.6f, 0.0f, 1.0f));
    uPtr(Counter)->Alignment(2);
    uPtr(Counter)->Y(::g::Uno::UX::Size__New1(510.0f, 1));
    uPtr(Counter)->Name(HomePage::__selector4_);
    uPtr(Counter)->SourceLineNumber(44);
    uPtr(Counter)->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    uPtr(CTrect)->CornerRadius(::g::Uno::Float4__New2(30.0f, 30.0f, 30.0f, 30.0f));
    uPtr(CTrect)->Width(::g::Uno::UX::Size__New1(146.0f, 1));
    uPtr(CTrect)->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    uPtr(CTrect)->Y(::g::Uno::UX::Size__New1(490.0f, 1));
    uPtr(CTrect)->Name(HomePage::__selector5_);
    uPtr(CTrect)->SourceLineNumber(46);
    uPtr(CTrect)->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CTrect)->Fills()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/]), CTrectColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(CTrect)->Strokes()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/]), CTrectStroke);
    uPtr(CTrectColor)->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    uPtr(CTrectStroke)->Width(4.0f);
    uPtr(CTrectStroke)->Alignment(0);
    uPtr(CTrectStroke)->Brush(CTrectStrokeColor);
    uPtr(CTrectStrokeColor)->Color(::g::Uno::Float4__New2(0.0f, 0.6f, 0.0f, 1.0f));
    temp15->SourceLineNumber(53);
    temp15->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp15->Animators()), ::TYPES[4/*Uno.Collections.ICollection<Fuse.Animations.Animator>*/]), temp16);
    temp16->Factor(0.9f);
    temp16->Duration(0.05);
    temp16->Target(Counter);
    temp17->SourceLineNumber(57);
    temp17->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Actions()), ::TYPES[5/*Uno.Collections.ICollection<Fuse.Triggers.Actions.TriggerAction>*/]), temp18);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp17->Bindings()), ::TYPES[6/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb5);
    temp18->SourceLineNumber(58);
    temp18->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    temp18->add_Handler(uDelegate::New(::TYPES[7/*Fuse.VisualEventHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb5)));
    temp2->SourceLineNumber(58);
    temp2->SourceFileName(::STRINGS[20/*"Pages/HomeP...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), ARscreen);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), ARrect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), ARrectColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), ARrectStroke);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), ARrectStrokeColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), RespberryPi);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), Pirect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), PirectColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), PirectStroke);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), PirectStrokeColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), Counter);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), CTrect);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), CTrectColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), CTrectStroke);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), CTrectStrokeColor);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[8/*Uno.Collections.ICollection<object>*/]), temp_eb5);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp3);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp4);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
}

// public HomePage New(Fuse.Navigation.Router router) [static] :49
HomePage* HomePage::New5(::g::Fuse::Navigation::Router* router1)
{
    HomePage* obj1 = (HomePage*)uNew(HomePage_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
