// This file was generated based on /Users/kbs/Fuse/AR_example/socket.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.MySocket.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Net.Sockets.AddressFamily.h>
#include <Uno.Net.Sockets.ProtocolType.h>
#include <Uno.Net.Sockets.Socket.h>
#include <Uno.Net.Sockets.SocketException.h>
#include <Uno.Net.Sockets.SocketFlags.h>
#include <Uno.Net.Sockets.SocketType.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Threading.Thread.h>
#include <Uno.Threading.ThreadStart.h>
#include <Uno.UX.Resource.h>
static uString* STRINGS[11];
static uType* TYPES[6];

namespace g{

// public sealed class MySocket :10
// {
static void MySocket_build(uType* type)
{
    ::STRINGS[0] = uString::Const("onMessageReceived");
    ::STRINGS[1] = uString::Const("onConnected");
    ::STRINGS[2] = uString::Const("onDisconnected");
    ::STRINGS[3] = uString::Const("onError");
    ::STRINGS[4] = uString::Const("MySocket");
    ::STRINGS[5] = uString::Const("connect");
    ::STRINGS[6] = uString::Const("disconnect");
    ::STRINGS[7] = uString::Const("send");
    ::STRINGS[8] = uString::Const("Connected");
    ::STRINGS[9] = uString::Const("");
    ::STRINGS[10] = uString::Const("Disconnected");
    ::TYPES[0] = uObject_typeof()->Array();
    ::TYPES[1] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[2] = ::g::Uno::String_typeof();
    ::TYPES[3] = ::g::Uno::Net::Sockets::SocketException_typeof();
    ::TYPES[4] = ::g::Uno::Threading::ThreadStart_typeof();
    ::TYPES[5] = ::g::Uno::Byte_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        ::g::Uno::Net::Sockets::Socket_typeof(), offsetof(MySocket, socket), 0,
        type, (uintptr_t)&MySocket::_instance_, uFieldFlagsStatic);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MySocket__New3_fn, 0, true, type, 0));
}

::g::Fuse::Scripting::NativeModule_type* MySocket_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MySocket);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("MySocket", options);
    type->fp_build_ = MySocket_build;
    type->fp_ctor_ = (void*)MySocket__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public MySocket() :15
void MySocket__ctor_3_fn(MySocket* __this)
{
    __this->ctor_3();
}

// private string Connect(Fuse.Scripting.Context c, object[] args) :44
void MySocket__Connect_fn(MySocket* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uString** __retval)
{
    *__retval = __this->Connect(c, args);
}

// private string Disconnect(Fuse.Scripting.Context c, object[] args) :62
void MySocket__Disconnect_fn(MySocket* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uString** __retval)
{
    *__retval = __this->Disconnect(c, args);
}

// public MySocket New() :15
void MySocket__New3_fn(MySocket** __retval)
{
    *__retval = MySocket::New3();
}

// private void Read() :70
void MySocket__Read_fn(MySocket* __this)
{
    __this->Read();
}

// private string Send(Fuse.Scripting.Context c, object[] args) :31
void MySocket__Send_fn(MySocket* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uString** __retval)
{
    *__retval = __this->Send(c, args);
}

uSStrong<MySocket*> MySocket::_instance_;

// public MySocket() [instance] :15
void MySocket::ctor_3()
{
    uStackFrame __("MySocket", ".ctor()");
    ctor_2(true, uArray::Init<uObject*>(::TYPES[0/*object[]*/], 4, ::STRINGS[0/*"onMessageRe...*/], ::STRINGS[1/*"onConnected"*/], ::STRINGS[2/*"onDisconnec...*/], ::STRINGS[3/*"onError"*/]));

    if (MySocket::_instance_ != NULL)
        return;

    MySocket::_instance_ = this;
    ::g::Uno::UX::Resource::SetGlobalKey(MySocket::_instance_, ::STRINGS[4/*"MySocket"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"connect"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)MySocket__Connect_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"disconnect"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)MySocket__Disconnect_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[7/*"send"*/], uDelegate::New(::TYPES[1/*Fuse.Scripting.NativeCallback*/], (void*)MySocket__Send_fn, this)));
}

// private string Connect(Fuse.Scripting.Context c, object[] args) [instance] :44
uString* MySocket::Connect(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("MySocket", "Connect(Fuse.Scripting.Context,object[])");
    socket = ::g::Uno::Net::Sockets::Socket::New1(2, 1, 6);
    uString* address = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*string*/]);
    int32_t port = ::g::Uno::Int::Parse(uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[2/*string*/]));

    try
    {
        {
            uPtr(socket)->Connect(address, port);
            Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[1/*"onConnected"*/], ::STRINGS[8/*"Connected"*/]));
            ::g::Uno::Threading::Thread* t = ::g::Uno::Threading::Thread::New2(uDelegate::New(::TYPES[4/*Uno.Threading.ThreadStart*/], (void*)MySocket__Read_fn, this));
            t->Start();
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[3/*Uno.Net.Sockets.SocketException*/]))
        {
            ::g::Uno::Net::Sockets::SocketException* e = (::g::Uno::Net::Sockets::SocketException*)__t.Exception;
            Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[3/*"onError"*/], (uString*)uPtr(uPtr(e)->Message())->ToString()));
        }
        else         throw __t;
    }

    return ::STRINGS[9/*""*/];
}

// private string Disconnect(Fuse.Scripting.Context c, object[] args) [instance] :62
uString* MySocket::Disconnect(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("MySocket", "Disconnect(Fuse.Scripting.Context,object[])");
    uPtr(socket)->Close();
    return ::STRINGS[9/*""*/];
}

// private void Read() [instance] :70
void MySocket::Read()
{
    uStackFrame __("MySocket", "Read()");
    bool loop = true;

    while (loop)

        try
        {
            {
                uArray* read = uArray::New(::TYPES[5/*byte[]*/], 1024);
                int32_t r = uPtr(socket)->Receive1(read, 0, read->Length(), 0);

                if (r == 0)
                    loop = false;

                Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[0/*"onMessageRe...*/], (uString*)::g::Uno::Text::Ascii::GetString(read)));
            }
        }

        catch (const uThrowable& __t)
        {
            if (uIs(__t.Exception, ::TYPES[3/*Uno.Net.Sockets.SocketException*/]))
            {
                ::g::Uno::Net::Sockets::SocketException* e = (::g::Uno::Net::Sockets::SocketException*)__t.Exception;
                Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[3/*"onError"*/], (uString*)uPtr(uPtr(e)->Message())->ToString()));
            }
            else             throw __t;
        }

    Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[2/*"onDisconnec...*/], ::STRINGS[10/*"Disconnected"*/]));
}

// private string Send(Fuse.Scripting.Context c, object[] args) [instance] :31
uString* MySocket::Send(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uStackFrame __("MySocket", "Send(Fuse.Scripting.Context,object[])");
    uString* message = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[2/*string*/]);

    try
    {
        {
            uPtr(socket)->Send(::g::Uno::Text::Ascii::GetBytes(message));
        }
    }

    catch (const uThrowable& __t)
    {
        if (uIs(__t.Exception, ::TYPES[3/*Uno.Net.Sockets.SocketException*/]))
        {
            ::g::Uno::Net::Sockets::SocketException* e = (::g::Uno::Net::Sockets::SocketException*)__t.Exception;
            Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[3/*"onError"*/], (uString*)uPtr(uPtr(e)->Message())->ToString()));
        }
        else         throw __t;
    }

    return ::STRINGS[9/*""*/];
}

// public MySocket New() [static] :15
MySocket* MySocket::New3()
{
    MySocket* obj1 = (MySocket*)uNew(MySocket_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

} // ::g
