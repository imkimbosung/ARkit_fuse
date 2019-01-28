// This file was generated based on /Users/kbs/Fuse/AR_example/socket.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.Native-fa549b97.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Uno{namespace Net{namespace Sockets{struct Socket;}}}}
namespace g{struct MySocket;}

namespace g{

// public sealed class MySocket :10
// {
::g::Fuse::Scripting::NativeModule_type* MySocket_typeof();
void MySocket__ctor_3_fn(MySocket* __this);
void MySocket__Connect_fn(MySocket* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uString** __retval);
void MySocket__Disconnect_fn(MySocket* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uString** __retval);
void MySocket__New3_fn(MySocket** __retval);
void MySocket__Read_fn(MySocket* __this);
void MySocket__Send_fn(MySocket* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uString** __retval);

struct MySocket : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    static uSStrong<MySocket*> _instance_;
    static uSStrong<MySocket*>& _instance() { return _instance_; }
    uStrong< ::g::Uno::Net::Sockets::Socket*> socket;

    void ctor_3();
    uString* Connect(::g::Fuse::Scripting::Context* c, uArray* args);
    uString* Disconnect(::g::Fuse::Scripting::Context* c, uArray* args);
    void Read();
    uString* Send(::g::Fuse::Scripting::Context* c, uArray* args);
    static MySocket* New3();
};
// }

} // ::g
