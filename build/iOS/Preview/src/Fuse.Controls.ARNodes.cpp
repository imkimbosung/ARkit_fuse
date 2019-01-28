// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/ARNodes.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.ARNodes.h>
#include <Fuse.Controls.ARView.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{

// public class ARNodes :7
// {
static void ARNodes_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Controls::ARView_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Uno::Int_typeof(), offsetof(ARNodes, uid), 0,
        ::g::Uno::Float_typeof(), offsetof(ARNodes, _x), 0,
        ::g::Uno::Float_typeof(), offsetof(ARNodes, _y), 0,
        ::g::Uno::Float_typeof(), offsetof(ARNodes, _z), 0,
        ::g::Uno::String_typeof(), offsetof(ARNodes, _type), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&ARNodes::UID_POOL_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("_type", 22),
        new uField("_x", 19),
        new uField("_y", 20),
        new uField("_z", 21));
    type->Reflection.SetFunctions(10,
        new uFunction("Draw", NULL, (void*)ARNodes__Draw_fn, 0, false, uVoid_typeof(), 0),
        new uFunction(".ctor", NULL, (void*)ARNodes__New2_fn, 0, true, type, 0),
        new uFunction("get_type", NULL, (void*)ARNodes__get_type_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_type", NULL, (void*)ARNodes__set_type_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("get_x", NULL, (void*)ARNodes__get_x_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_x", NULL, (void*)ARNodes__set_x_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_y", NULL, (void*)ARNodes__get_y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_y", NULL, (void*)ARNodes__set_y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_z", NULL, (void*)ARNodes__get_z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_z", NULL, (void*)ARNodes__set_z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Node_type* ARNodes_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 24;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(ARNodes);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Controls.ARNodes", options);
    type->fp_build_ = ARNodes_build;
    type->fp_ctor_ = (void*)ARNodes__New2_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))ARNodes__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))ARNodes__OnUnrooted_fn;
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

// public generated ARNodes() :7
void ARNodes__ctor_2_fn(ARNodes* __this)
{
    __this->ctor_2();
}

// public void Draw() :102
void ARNodes__Draw_fn(ARNodes* __this)
{
    __this->Draw();
}

// public generated ARNodes New() :7
void ARNodes__New2_fn(ARNodes** __retval)
{
    *__retval = ARNodes::New2();
}

// protected override sealed void OnRooted() :88
void ARNodes__OnRooted_fn(ARNodes* __this)
{
    uStackFrame __("Fuse.Controls.ARNodes", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Controls::ARView* a = uAs< ::g::Fuse::Controls::ARView*>(__this->Parent(), ::TYPES[0/*Fuse.Controls.ARView*/]);

    if (a != NULL)
        uPtr(a)->AddNodes(__this);
}

// protected override sealed void OnUnrooted() :95
void ARNodes__OnUnrooted_fn(ARNodes* __this)
{
    uStackFrame __("Fuse.Controls.ARNodes", "OnUnrooted()");
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    ::g::Fuse::Controls::ARView* a = uAs< ::g::Fuse::Controls::ARView*>(__this->Parent(), ::TYPES[0/*Fuse.Controls.ARView*/]);

    if (a != NULL)
        uPtr(a)->RemoveNodes(__this);
}

// public string get_type() :59
void ARNodes__get_type_fn(ARNodes* __this, uString** __retval)
{
    *__retval = __this->type();
}

// public void set_type(string value) :63
void ARNodes__set_type_fn(ARNodes* __this, uString* value)
{
    __this->type(value);
}

// public float get_x() :17
void ARNodes__get_x_fn(ARNodes* __this, float* __retval)
{
    *__retval = __this->x();
}

// public void set_x(float value) :21
void ARNodes__set_x_fn(ARNodes* __this, float* value)
{
    __this->x(*value);
}

// public float get_y() :31
void ARNodes__get_y_fn(ARNodes* __this, float* __retval)
{
    *__retval = __this->y();
}

// public void set_y(float value) :35
void ARNodes__set_y_fn(ARNodes* __this, float* value)
{
    __this->y(*value);
}

// public float get_z() :45
void ARNodes__get_z_fn(ARNodes* __this, float* __retval)
{
    *__retval = __this->z();
}

// public void set_z(float value) :49
void ARNodes__set_z_fn(ARNodes* __this, float* value)
{
    __this->z(*value);
}

int32_t ARNodes::UID_POOL_;

// public generated ARNodes() [instance] :7
void ARNodes::ctor_2()
{
    uid = (ARNodes::UID_POOL_++);
    ctor_1();
}

// public void Draw() [instance] :102
void ARNodes::Draw()
{
}

// public string get_type() [instance] :59
uString* ARNodes::type()
{
    return _type;
}

// public void set_type(string value) [instance] :63
void ARNodes::type(uString* value)
{
    _type = value;
    Draw();
}

// public float get_x() [instance] :17
float ARNodes::x()
{
    return _x;
}

// public void set_x(float value) [instance] :21
void ARNodes::x(float value)
{
    _x = value;
    Draw();
}

// public float get_y() [instance] :31
float ARNodes::y()
{
    return _y;
}

// public void set_y(float value) [instance] :35
void ARNodes::y(float value)
{
    _y = value;
    Draw();
}

// public float get_z() [instance] :45
float ARNodes::z()
{
    return _z;
}

// public void set_z(float value) [instance] :49
void ARNodes::z(float value)
{
    _z = value;
    Draw();
}

// public generated ARNodes New() [static] :7
ARNodes* ARNodes::New2()
{
    ARNodes* obj1 = (ARNodes*)uNew(ARNodes_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}} // ::g::Fuse::Controls
