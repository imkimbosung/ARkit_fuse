// This file was generated based on /Users/kbs/Fuse/AR_example/build/Android/Preview/cache/ux15/RespberryPi.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AR_example_bundle.h>
#include <_root.AR_example_Fuse-37cf1a87.h>
#include <_root.AR_example_Fuse-773d244d.h>
#include <_root.RespberryPi.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.DockPanel.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.StackPanel.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInput.h>
#include <Fuse.Controls.TextInputControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.Clicked.h>
#include <Fuse.Gestures.ClickedHandler.h>
#include <Fuse.Layer.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Navigation.Router.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Data.h>
#include <Fuse.Reactive.DataBinding.h>
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
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[11];
static uType* TYPES[5];

namespace g{

// public partial sealed class RespberryPi :2
// {
// static RespberryPi() :15
static void RespberryPi__cctor_4_fn(uType* __type)
{
    RespberryPi::__g_static_nametable1_ = uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[0/*"router"*/], ::STRINGS[1/*"temp_eb6"*/], ::STRINGS[2/*"temp_eb7"*/]);
    RespberryPi::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[3/*"Value"*/]);
}

static void RespberryPi_build(uType* type)
{
    ::STRINGS[0] = uString::Const("router");
    ::STRINGS[1] = uString::Const("temp_eb6");
    ::STRINGS[2] = uString::Const("temp_eb7");
    ::STRINGS[3] = uString::Const("Value");
    ::STRINGS[4] = uString::Const("back");
    ::STRINGS[5] = uString::Const("displayText");
    ::STRINGS[6] = uString::Const("sendText");
    ::STRINGS[7] = uString::Const("emitData");
    ::STRINGS[8] = uString::Const("Pages/RespberryPi.ux");
    ::STRINGS[9] = uString::Const("Enter some text");
    ::STRINGS[10] = uString::Const("Send some data");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Gestures::ClickedHandler_typeof();
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[3] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    ::TYPES[4] = ::g::Uno::Collections::ICollection_typeof()->MakeType(uObject_typeof(), NULL);
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
        ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/], offsetof(::g::Fuse::Controls::Panel_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface12),
        ::g::Fuse::Triggers::Actions::IShow_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface13),
        ::g::Fuse::Triggers::Actions::IHide_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface14),
        ::g::Fuse::Triggers::Actions::ICollapse_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface15),
        ::g::Fuse::IActualPlacement_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface16),
        ::g::Fuse::Animations::IResize_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface17),
        ::g::Fuse::Drawing::ISurfaceDrawable_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface18));
    type->SetFields(126,
        ::g::Fuse::Navigation::Router_typeof(), offsetof(RespberryPi, router), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(RespberryPi, temp_Value_inst), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(RespberryPi, temp1_Value_inst), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(RespberryPi, temp_eb6), 0,
        ::g::Fuse::Reactive::EventBinding_typeof(), offsetof(RespberryPi, temp_eb7), 0,
        ::g::Uno::UX::NameTable_typeof(), offsetof(RespberryPi, __g_nametable1), 0,
        ::TYPES[0/*string[]*/], (uintptr_t)&RespberryPi::__g_static_nametable1_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&RespberryPi::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RespberryPi__New5_fn, 0, true, type, 1, ::g::Fuse::Navigation::Router_typeof()));
}

::g::Fuse::Controls::Panel_type* RespberryPi_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Page_typeof();
    options.FieldCount = 134;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RespberryPi);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("RespberryPi", options);
    type->fp_build_ = RespberryPi_build;
    type->fp_cctor_ = RespberryPi__cctor_4_fn;
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

// public RespberryPi(Fuse.Navigation.Router router) :19
void RespberryPi__ctor_8_fn(RespberryPi* __this, ::g::Fuse::Navigation::Router* router1)
{
    __this->ctor_8(router1);
}

// private void InitializeUX() :25
void RespberryPi__InitializeUX_fn(RespberryPi* __this)
{
    __this->InitializeUX();
}

// public RespberryPi New(Fuse.Navigation.Router router) :19
void RespberryPi__New5_fn(::g::Fuse::Navigation::Router* router1, RespberryPi** __retval)
{
    *__retval = RespberryPi::New5(router1);
}

uSStrong<uArray*> RespberryPi::__g_static_nametable1_;
::g::Uno::UX::Selector RespberryPi::__selector0_;

// public RespberryPi(Fuse.Navigation.Router router) [instance] :19
void RespberryPi::ctor_8(::g::Fuse::Navigation::Router* router1)
{
    uStackFrame __("RespberryPi", ".ctor(Fuse.Navigation.Router)");
    ctor_7();
    router = router1;
    InitializeUX();
}

// private void InitializeUX() [instance] :25
void RespberryPi::InitializeUX()
{
    uStackFrame __("RespberryPi", "InitializeUX()");
    __g_nametable1 = ::g::Uno::UX::NameTable::New1(NULL, RespberryPi::__g_static_nametable1_);
    ::g::Fuse::Reactive::Data* temp2 = ::g::Fuse::Reactive::Data::New1(::STRINGS[4/*"back"*/]);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AR_example_FuseControlsTextControl_Value_Property::New1(temp, RespberryPi::__selector0_);
    ::g::Fuse::Reactive::Data* temp3 = ::g::Fuse::Reactive::Data::New1(::STRINGS[5/*"displayText"*/]);
    ::g::Fuse::Controls::TextInput* temp1 = ::g::Fuse::Controls::TextInput::New3();
    temp1_Value_inst = ::g::AR_example_FuseControlsTextInputControl_Value_Property::New1(temp1, RespberryPi::__selector0_);
    ::g::Fuse::Reactive::Data* temp4 = ::g::Fuse::Reactive::Data::New1(::STRINGS[6/*"sendText"*/]);
    ::g::Fuse::Reactive::Data* temp5 = ::g::Fuse::Reactive::Data::New1(::STRINGS[7/*"emitData"*/]);
    ::g::Fuse::Reactive::JavaScript* temp6 = ::g::Fuse::Reactive::JavaScript::New2(__g_nametable1);
    ::g::Fuse::Controls::Image* temp7 = ::g::Fuse::Controls::Image::New3();
    temp_eb6 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp2);
    ::g::Fuse::Controls::DockPanel* temp8 = ::g::Fuse::Controls::DockPanel::New4();
    ::g::Fuse::Controls::StackPanel* temp9 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp10 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp3, 3);
    ::g::Fuse::Controls::StackPanel* temp11 = ::g::Fuse::Controls::StackPanel::New4();
    ::g::Fuse::Reactive::DataBinding* temp12 = ::g::Fuse::Reactive::DataBinding::New1(temp1_Value_inst, (uObject*)temp4, 3);
    ::g::Fuse::Controls::Rectangle* temp13 = ::g::Fuse::Controls::Rectangle::New3();
    ::g::Fuse::Controls::Button* temp14 = ::g::Fuse::Controls::Button::New5();
    temp_eb7 = ::g::Fuse::Reactive::EventBinding::New1((uObject*)temp5);
    SourceLineNumber(1);
    SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    temp6->LineNumber(3);
    temp6->FileName(::STRINGS[8/*"Pages/Respb...*/]);
    temp6->SourceLineNumber(3);
    temp6->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    temp6->File(::g::Uno::UX::BundleFileSource::New1(::g::AR_example_bundle::RespberryPi391ee3a9()));
    temp7->Width(::g::Uno::UX::Size__New1(30.0f, 1));
    temp7->Height(::g::Uno::UX::Size__New1(40.0f, 1));
    temp7->Alignment(5);
    temp7->Margin(::g::Uno::Float4__New2(20.0f, 20.0f, 0.0f, 0.0f));
    temp7->Padding(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 0.0f));
    temp7->Layer(2);
    temp7->SourceLineNumber(5);
    temp7->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp7, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb6)));
    temp7->File(::g::Uno::UX::BundleFileSource::New1(::g::AR_example_bundle::back19b58a4d()));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp7->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb6);
    temp2->SourceLineNumber(5);
    temp2->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    temp8->SourceLineNumber(6);
    temp8->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp9);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp8->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp11);
    temp9->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp9->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    temp9->Alignment(4);
    temp9->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp9->SourceLineNumber(8);
    temp9->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp9, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp9->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
    temp->FontSize(18.0f);
    temp->Color(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp->Alignment(10);
    temp->SourceLineNumber(9);
    temp->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp10);
    temp3->SourceLineNumber(9);
    temp3->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    temp11->Width(::g::Uno::UX::Size__New1(100.0f, 4));
    temp11->Height(::g::Uno::UX::Size__New1(56.0f, 1));
    temp11->Alignment(4);
    temp11->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp11->SourceLineNumber(12);
    temp11->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    ::g::Fuse::Controls::DockPanel::SetDock(temp11, 2);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp13);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp11->Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp14);
    temp1->PlaceholderText(::STRINGS[9/*"Enter some ...*/]);
    temp1->PlaceholderColor(::g::Uno::Float4__New2(0.8f, 0.8f, 0.8f, 1.0f));
    temp1->TextColor(::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f));
    temp1->CaretColor(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp1->Margin(::g::Uno::Float4__New2(10.0f, 0.0f, 10.0f, 0.0f));
    temp1->Padding(::g::Uno::Float4__New2(5.0f, 0.0f, 0.0f, 0.0f));
    temp1->SourceLineNumber(13);
    temp1->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp1->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp12);
    temp4->SourceLineNumber(13);
    temp4->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    temp13->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp13->Height(::g::Uno::UX::Size__New1(1.0f, 1));
    temp13->Alignment(12);
    temp13->Margin(::g::Uno::Float4__New2(10.0f, 10.0f, 10.0f, 10.0f));
    temp13->SourceLineNumber(14);
    temp13->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    temp14->Text(::STRINGS[10/*"Send some d...*/]);
    temp14->Color(::g::Uno::Float4__New2(0.2666667f, 0.3803922f, 0.4705882f, 1.0f));
    temp14->Width(::g::Uno::UX::Size__New1(200.0f, 1));
    temp14->Height(::g::Uno::UX::Size__New1(30.0f, 1));
    temp14->Opacity(1.0f);
    temp14->SourceLineNumber(15);
    temp14->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    ::g::Fuse::Gestures::Clicked::AddHandler(temp14, uDelegate::New(::TYPES[1/*Fuse.Gestures.ClickedHandler*/], (void*)::g::Fuse::Reactive::EventBinding__OnEvent_fn, uPtr(temp_eb7)));
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp14->Bindings()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp_eb7);
    temp5->SourceLineNumber(15);
    temp5->SourceFileName(::STRINGS[8/*"Pages/Respb...*/]);
    uPtr(__g_nametable1)->This(this);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), router);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(__g_nametable1)->Objects()), ::TYPES[4/*Uno.Collections.ICollection<object>*/]), temp_eb7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp6);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp7);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[3/*Uno.Collections.ICollection<Fuse.Node>*/]), temp8);
}

// public RespberryPi New(Fuse.Navigation.Router router) [static] :19
RespberryPi* RespberryPi::New5(::g::Fuse::Navigation::Router* router1)
{
    RespberryPi* obj1 = (RespberryPi*)uNew(RespberryPi_typeof());
    obj1->ctor_8(router1);
    return obj1;
}
// }

} // ::g
