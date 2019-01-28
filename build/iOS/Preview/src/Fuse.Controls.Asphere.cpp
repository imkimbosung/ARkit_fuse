// This file was generated based on /Users/kbs/Fuse/AR_example/iOS/Asphere.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.Asphere.h>
#include <Uno.Float.h>
#include <Uno.String.h>
static uString* STRINGS[1];

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class Asphere :7
// {
static void Asphere_build(uType* type)
{
    ::STRINGS[0] = uString::Const("sphere");
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), NULL), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(23,
        ::g::Uno::String_typeof(), offsetof(Asphere, _type1), 0,
        ::g::Uno::Float_typeof(), offsetof(Asphere, _radius), 0);
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Asphere__New3_fn, 0, true, type, 0),
        new uFunction("get_radius", NULL, (void*)Asphere__get_radius_fn, 0, false, ::g::Uno::Float_typeof(), 0),
        new uFunction("set_radius", NULL, (void*)Asphere__set_radius_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float_typeof()));
}

::g::Fuse::Node_type* Asphere_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::ARNodes_typeof();
    options.FieldCount = 25;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Asphere);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Controls.Asphere", options);
    type->fp_build_ = Asphere_build;
    type->fp_ctor_ = (void*)Asphere__New3_fn;
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

// public generated Asphere() :7
void Asphere__ctor_3_fn(Asphere* __this)
{
    __this->ctor_3();
}

// public generated Asphere New() :7
void Asphere__New3_fn(Asphere** __retval)
{
    *__retval = Asphere::New3();
}

// public float get_radius() :14
void Asphere__get_radius_fn(Asphere* __this, float* __retval)
{
    *__retval = __this->radius();
}

// public void set_radius(float value) :18
void Asphere__set_radius_fn(Asphere* __this, float* value)
{
    __this->radius(*value);
}

// public generated Asphere() [instance] :7
void Asphere::ctor_3()
{
    _type1 = ::STRINGS[0/*"sphere"*/];
    ctor_2();
}

// public float get_radius() [instance] :14
float Asphere::radius()
{
    return _radius;
}

// public void set_radius(float value) [instance] :18
void Asphere::radius(float value)
{
    _radius = value;
    Draw();
}

// public generated Asphere New() [static] :7
Asphere* Asphere::New3()
{
    Asphere* obj1 = (Asphere*)uNew(Asphere_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

}}} // ::g::Fuse::Controls
