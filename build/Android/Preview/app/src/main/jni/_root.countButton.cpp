// This file was generated based on /Users/kbs/Fuse/AR_example/build/Android/Preview/cache/ux15/countButton.g.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.AR_example_acce-5bb4b2a9.h>
#include <_root.AR_example_Fuse-37cf1a87.h>
#include <_root.countButton.h>
#include <Fuse.Controls.Text.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.HitTestMode.h>
#include <Fuse.Reactive.BindingMode.h>
#include <Fuse.Reactive.Constan-264ec80.h>
#include <Fuse.Reactive.Constant.h>
#include <Fuse.Reactive.DataBinding.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.Property.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Property.h>
#include <Uno.UX.Property1-1.h>
#include <Uno.UX.PropertyAccessor.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Unit.h>
static uString* STRINGS[3];
static uType* TYPES[2];

namespace g{

// public partial sealed class countButton :2
// {
// static countButton() :20
static void countButton__cctor_4_fn(uType* __type)
{
    countButton::__selector0_ = ::g::Uno::UX::Selector__op_Implicit1(::STRINGS[0/*"Value"*/]);
}

static void countButton_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Value");
    ::STRINGS[1] = uString::Const("Pages/CounterPage.ux");
    ::STRINGS[2] = uString::Const("Text");
    ::TYPES[0] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL);
    ::TYPES[1] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), NULL);
    type->SetDependencies(
        ::g::AR_example_accessor_countButton_Text_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Controls::Panel_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Controls::Panel_type, interface4),
        ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/], offsetof(::g::Fuse::Controls::Panel_type, interface5),
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
    type->SetFields(120,
        ::g::Uno::String_typeof(), offsetof(countButton, _field_Text), 0,
        ::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), NULL), offsetof(countButton, temp_Value_inst), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&countButton::__selector0_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(4,
        new uFunction(".ctor", NULL, (void*)countButton__New4_fn, 0, true, type, 0),
        new uFunction("SetText", NULL, (void*)countButton__SetText_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::UX::IPropertyListener_typeof()),
        new uFunction("get_Text", NULL, (void*)countButton__get_Text_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Text", NULL, (void*)countButton__set_Text_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()));
}

::g::Fuse::Controls::Panel_type* countButton_typeof()
{
    static uSStrong< ::g::Fuse::Controls::Panel_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Panel_typeof();
    options.FieldCount = 123;
    options.InterfaceCount = 19;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(countButton);
    options.TypeSize = sizeof(::g::Fuse::Controls::Panel_type);
    type = (::g::Fuse::Controls::Panel_type*)uClassType::New("countButton", options);
    type->fp_build_ = countButton_build;
    type->fp_ctor_ = (void*)countButton__New4_fn;
    type->fp_cctor_ = countButton__cctor_4_fn;
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

// public countButton() :24
void countButton__ctor_7_fn(countButton* __this)
{
    __this->ctor_7();
}

// private void InitializeUX() :28
void countButton__InitializeUX_fn(countButton* __this)
{
    __this->InitializeUX();
}

// public countButton New() :24
void countButton__New4_fn(countButton** __retval)
{
    *__retval = countButton::New4();
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) :11
void countButton__SetText_fn(countButton* __this, uString* value, uObject* origin)
{
    __this->SetText(value, origin);
}

// public string get_Text() :8
void countButton__get_Text_fn(countButton* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// public void set_Text(string value) :9
void countButton__set_Text_fn(countButton* __this, uString* value)
{
    __this->Text(value);
}

::g::Uno::UX::Selector countButton::__selector0_;

// public countButton() [instance] :24
void countButton::ctor_7()
{
    uStackFrame __("countButton", ".ctor()");
    ctor_6();
    InitializeUX();
}

// private void InitializeUX() [instance] :28
void countButton::InitializeUX()
{
    uStackFrame __("countButton", "InitializeUX()");
    ::g::Fuse::Reactive::Constant* temp1 = ::g::Fuse::Reactive::Constant::New1(this);
    ::g::Fuse::Controls::Text* temp = ::g::Fuse::Controls::Text::New3();
    temp_Value_inst = ::g::AR_example_FuseControlsTextControl_Value_Property::New1(temp, countButton::__selector0_);
    ::g::Fuse::Reactive::Property* temp2 = ::g::Fuse::Reactive::Property::New1(temp1, ::g::AR_example_accessor_countButton_Text::Singleton());
    ::g::Fuse::Reactive::DataBinding* temp3 = ::g::Fuse::Reactive::DataBinding::New1(temp_Value_inst, (uObject*)temp2, 1);
    Color(::g::Uno::Float4__New2(0.1333333f, 0.3333333f, 0.6666667f, 1.0f));
    HitTestMode(2);
    Height(::g::Uno::UX::Size__New1(50.0f, 1));
    Alignment(14);
    Margin(::g::Uno::Float4__New2(4.0f, 4.0f, 4.0f, 4.0f));
    SourceLineNumber(12);
    SourceFileName(::STRINGS[1/*"Pages/Count...*/]);
    temp->Color(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f));
    temp->Alignment(10);
    temp->Margin(::g::Uno::Float4__New2(30.0f, 15.0f, 30.0f, 15.0f));
    temp->SourceLineNumber(14);
    temp->SourceFileName(::STRINGS[1/*"Pages/Count...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Bindings()), ::TYPES[0/*Uno.Collections.ICollection<Fuse.Binding>*/]), temp3);
    temp2->SourceLineNumber(14);
    temp2->SourceFileName(::STRINGS[1/*"Pages/Count...*/]);
    temp1->SourceLineNumber(14);
    temp1->SourceFileName(::STRINGS[1/*"Pages/Count...*/]);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Children()), ::TYPES[1/*Uno.Collections.ICollection<Fuse.Node>*/]), temp);
}

// public void SetText(string value, Uno.UX.IPropertyListener origin) [instance] :11
void countButton::SetText(uString* value, uObject* origin)
{
    uStackFrame __("countButton", "SetText(string,Uno.UX.IPropertyListener)");

    if (::g::Uno::String::op_Inequality(value, _field_Text))
    {
        _field_Text = value;
        OnPropertyChanged1(::g::Uno::UX::Selector__op_Implicit1(::STRINGS[2/*"Text"*/]), origin);
    }
}

// public string get_Text() [instance] :8
uString* countButton::Text()
{
    return _field_Text;
}

// public void set_Text(string value) [instance] :9
void countButton::Text(uString* value)
{
    uStackFrame __("countButton", "set_Text(string)");
    SetText(value, NULL);
}

// public countButton New() [static] :24
countButton* countButton::New4()
{
    countButton* obj1 = (countButton*)uNew(countButton_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

} // ::g
