// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Abox.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Abox.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Abox :7
// {
static void Abox_build(uType* type)
{
    ::STRINGS[0] = uString::Const("box");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(18,
        ::g::Uno::Int_typeof(), offsetof(Abox, uid), 0,
        ::g::Uno::Float_typeof(), offsetof(Abox, _x), 0,
        ::g::Uno::Float_typeof(), offsetof(Abox, _y), 0,
        ::g::Uno::Float_typeof(), offsetof(Abox, _z), 0,
        ::g::Uno::String_typeof(), offsetof(Abox, _type), 0,
        ::g::Uno::Float_typeof(), offsetof(Abox, _width), 0,
        ::g::Uno::Float_typeof(), offsetof(Abox, _height), 0,
        ::g::Uno::Float_typeof(), offsetof(Abox, _length), 0,
        ::g::Uno::Int_typeof(), (uintptr_t)&Abox::UID_POOL_, uFieldFlagsStatic);
    type->Reflection.SetFields(4,
        new uField("_type", 22),
        new uField("_x", 19),
        new uField("_y", 20),
        new uField("_z", 21));
    type->Reflection.SetFunctions(13,
        new uFunction("get_height", NULL, (void*)Abox__get_height_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_height", NULL, (void*)Abox__set_height_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_length", NULL, (void*)Abox__get_length_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_length", NULL, (void*)Abox__set_length_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction(".ctor", NULL, (void*)Abox__New2_fn, 0, true, type, 0),
        new uFunction("get_width", NULL, (void*)Abox__get_width_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_width", NULL, (void*)Abox__set_width_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_x", NULL, (void*)Abox__get_x_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_x", NULL, (void*)Abox__set_x_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_y", NULL, (void*)Abox__get_y_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_y", NULL, (void*)Abox__set_y_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()),
        new uFunction("get_z", NULL, (void*)Abox__get_z_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_z", NULL, (void*)Abox__set_z_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Node_type* Abox_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 27;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Abox);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Controls.Abox", options);
    type->fp_build_ = Abox_build;
    type->fp_ctor_ = (void*)Abox__New2_fn;
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

// public generated Abox() :7
void Abox__ctor_2_fn(Abox* __this)
{
    __this->ctor_2();
}

// public float get_height() :77
void Abox__get_height_fn(Abox* __this, float* __retval)
{
    *__retval = __this->height();
}

// public void set_height(float value) :81
void Abox__set_height_fn(Abox* __this, float* value)
{
    __this->height(*value);
}

// public float get_length() :91
void Abox__get_length_fn(Abox* __this, float* __retval)
{
    *__retval = __this->length();
}

// public void set_length(float value) :95
void Abox__set_length_fn(Abox* __this, float* value)
{
    __this->length(*value);
}

// public generated Abox New() :7
void Abox__New2_fn(Abox** __retval)
{
    *__retval = Abox::New2();
}

// public float get_width() :63
void Abox__get_width_fn(Abox* __this, float* __retval)
{
    *__retval = __this->width();
}

// public void set_width(float value) :67
void Abox__set_width_fn(Abox* __this, float* value)
{
    __this->width(*value);
}

// public float get_x() :18
void Abox__get_x_fn(Abox* __this, float* __retval)
{
    *__retval = __this->x();
}

// public void set_x(float value) :22
void Abox__set_x_fn(Abox* __this, float* value)
{
    __this->x(*value);
}

// public float get_y() :32
void Abox__get_y_fn(Abox* __this, float* __retval)
{
    *__retval = __this->y();
}

// public void set_y(float value) :36
void Abox__set_y_fn(Abox* __this, float* value)
{
    __this->y(*value);
}

// public float get_z() :46
void Abox__get_z_fn(Abox* __this, float* __retval)
{
    *__retval = __this->z();
}

// public void set_z(float value) :50
void Abox__set_z_fn(Abox* __this, float* value)
{
    __this->z(*value);
}

int32_t Abox::UID_POOL_;

// public generated Abox() [instance] :7
void Abox::ctor_2()
{
    uid = (Abox::UID_POOL_++);
    _type = ::STRINGS[0/*"box"*/];
    ctor_1();
}

// public float get_height() [instance] :77
float Abox::height()
{
    return _height;
}

// public void set_height(float value) [instance] :81
void Abox::height(float value)
{
    _height = value;
}

// public float get_length() [instance] :91
float Abox::length()
{
    return _length;
}

// public void set_length(float value) [instance] :95
void Abox::length(float value)
{
    _length = value;
}

// public float get_width() [instance] :63
float Abox::width()
{
    return _width;
}

// public void set_width(float value) [instance] :67
void Abox::width(float value)
{
    _width = value;
}

// public float get_x() [instance] :18
float Abox::x()
{
    return _x;
}

// public void set_x(float value) [instance] :22
void Abox::x(float value)
{
    _x = value;
}

// public float get_y() [instance] :32
float Abox::y()
{
    return _y;
}

// public void set_y(float value) [instance] :36
void Abox::y(float value)
{
    _y = value;
}

// public float get_z() [instance] :46
float Abox::z()
{
    return _z;
}

// public void set_z(float value) [instance] :50
void Abox::z(float value)
{
    _z = value;
}

// public generated Abox New() [static] :7
Abox* Abox::New2()
{
    Abox* obj1 = (Abox*)uNew(Abox_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}} // ::g::Fuse::Controls
