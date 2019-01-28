// This file was generated based on /usr/local/share/uno/Packages/Fuse.Platform/1.9.0/iOS/SystemUI.uno.
// WARNING: Changes might be lost if you edit this file directly.

#include <AppDelegateSoftKeyboard.h>
#include <CoreGraphics/CoreGraphics.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.StatusBarAnimation.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Platform.SystemUIResizeReason.h>
#include <ObjC.Object.h>
#include <objc/message.h>
#include <Uno.Action.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.Display.h>
#include <Uno.Platform.Displays.h>
#include <Uno.Platform.iOS.Application.h>
#include <Uno.Platform.iOS.Support.h>
#include <Uno.Platform.iOS.uCGRect1.h>
#include <Uno.Platform.iOS.uCGSize1.h>
#include <Uno.Platform.iOSDisplay.h>
#include <Uno-iOS/AppDelegate.h>
#include <uObjC.Foreign.h>
#include <Uno.Float4.h>
#include <Uno.Int3.h>
#include <Uno.Rect.h>
static uType* TYPES[3];

namespace g{
namespace Fuse{
namespace Platform{

// internal static extern class SystemUI :30
// {
// static generated SystemUI() :30
static void SystemUI__cctor__fn(uType* __type)
{
    SystemUI::_isTopFrameVisible_ = true;
}

static void SystemUI_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Platform::iOSDisplay_typeof();
    ::TYPES[1] = ::g::Uno::EventHandler_typeof();
    ::TYPES[2] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::Platform::Displays_typeof(),
        ::g::Uno::EventArgs_typeof(),
        ::g::Fuse::Platform::Lifecycle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), (uintptr_t)&SystemUI::_bottomFrame_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&SystemUI::_isTopFrameVisible_, uFieldFlagsStatic,
        ::g::Fuse::Platform::StatusBarStyle_typeof(), (uintptr_t)&SystemUI::_style_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&SystemUI::_Frame_, uFieldFlagsStatic,
        ::g::Fuse::Platform::StatusBarAnimation_typeof(), (uintptr_t)&SystemUI::_uStatusBarAnimation_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.EventHandler*/], (uintptr_t)&SystemUI::FrameChanged1_, uFieldFlagsStatic,
        ::TYPES[2/*Uno.Action*/], (uintptr_t)&SystemUI::MarginsChanged1_, uFieldFlagsStatic);
}

uClassType* SystemUI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.DependencyCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.SystemUI", options);
    type->fp_build_ = SystemUI_build;
    type->fp_cctor_ = SystemUI__cctor__fn;
    return type;
}

// private static void _statusBarDidChangeFrame(Uno.Platform.iOS.uCGRect _endFrame) :273
void SystemUI___statusBarDidChangeFrame_fn(CGRect* _endFrame)
{
    SystemUI::_statusBarDidChangeFrame(*_endFrame);
}

// private static void _statusBarWillChangeFrame(Uno.Platform.iOS.uCGRect _endFrame, double animationDuration) :266
void SystemUI___statusBarWillChangeFrame_fn(CGRect* _endFrame, double* animationDuration)
{
    SystemUI::_statusBarWillChangeFrame(*_endFrame, *animationDuration);
}

// public static float4 get_DeviceMargins() :38
void SystemUI__get_DeviceMargins_fn(::g::Uno::Float4* __retval)
{
    *__retval = SystemUI::DeviceMargins();
}

// private static void DisableKeyboardResizeNotifications() :110
void SystemUI__DisableKeyboardResizeNotifications_fn()
{
    SystemUI::DisableKeyboardResizeNotifications();
}

// private static void EnableKeyboardResizeNotifications() :94
void SystemUI__EnableKeyboardResizeNotifications_fn()
{
    SystemUI::EnableKeyboardResizeNotifications();
}

// public static void EnterFullscreen() :317
void SystemUI__EnterFullscreen_fn()
{
    SystemUI::EnterFullscreen();
}

// public static generated Uno.Rect get_Frame() :34
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::Frame();
}

// private static generated void set_Frame(Uno.Rect value) :34
void SystemUI__set_Frame_fn(::g::Uno::Rect* value)
{
    SystemUI::Frame(*value);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) :68
void SystemUI__add_FrameChanged_fn(uDelegate* value)
{
    SystemUI::add_FrameChanged(value);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) :68
void SystemUI__remove_FrameChanged_fn(uDelegate* value)
{
    SystemUI::remove_FrameChanged(value);
}

// private static void GetOSVersion(int& major, int& minor, int& revision) :183
void SystemUI__GetOSVersion_fn(int32_t* major, int32_t* minor, int32_t* revision)
{
    SystemUI::GetOSVersion(major, minor, revision);
}

// private static void GetSafeArea(float& l, float& t, float& r, float& b) :250
void SystemUI__GetSafeArea_fn(float* l, float* t, float* r, float* b)
{
    SystemUI::GetSafeArea(l, t, r, b);
}

// private static float4 GetSafeFrame() :233
void SystemUI__GetSafeFrame_fn(::g::Uno::Float4* __retval)
{
    *__retval = SystemUI::GetSafeFrame();
}

// private static Uno.Rect GetStatusBarFrame() :225
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::GetStatusBarFrame();
}

// public static bool get_IsBottomFrameVisible() :204
void SystemUI__get_IsBottomFrameVisible_fn(bool* __retval)
{
    *__retval = SystemUI::IsBottomFrameVisible();
}

// public static bool get_IsTopFrameVisible() :127
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval)
{
    *__retval = SystemUI::IsTopFrameVisible();
}

// public static void set_IsTopFrameVisible(bool value) :128
void SystemUI__set_IsTopFrameVisible_fn(bool* value)
{
    SystemUI::IsTopFrameVisible(*value);
}

// public static generated void add_MarginsChanged(Uno.Action value) :63
void SystemUI__add_MarginsChanged_fn(uDelegate* value)
{
    SystemUI::add_MarginsChanged(value);
}

// public static generated void remove_MarginsChanged(Uno.Action value) :63
void SystemUI__remove_MarginsChanged_fn(uDelegate* value)
{
    SystemUI::remove_MarginsChanged(value);
}

// public static void OnCreate() :81
void SystemUI__OnCreate_fn()
{
    SystemUI::OnCreate();
}

// public static void OnDestroy() :88
void SystemUI__OnDestroy_fn()
{
    SystemUI::OnDestroy();
}

// private static void OnFrameChanged(object s, object a) :69
void SystemUI__OnFrameChanged_fn(uObject* s, uObject* a)
{
    SystemUI::OnFrameChanged(s, a);
}

// private static void OnWillResize() :219
void SystemUI__OnWillResize_fn()
{
    SystemUI::OnWillResize();
}

// public static int3 get_OSVersion() :174
void SystemUI__get_OSVersion_fn(::g::Uno::Int3* __retval)
{
    *__retval = SystemUI::OSVersion();
}

// public static extern Uno.Platform.iOS.uCGSize Pre_iOS8_HandleDeviceOrientation_Size(Uno.Platform.iOS.uCGSize cgsize, ObjC.Object view) :159
void SystemUI__Pre_iOS8_HandleDeviceOrientation_Size_fn(CGSize* cgsize, ::g::ObjC::Object* view, CGSize* __retval)
{
    *__retval = SystemUI::Pre_iOS8_HandleDeviceOrientation_Size(*cgsize, view);
}

// public static ObjC.Object get_RootView() :209
void SystemUI__get_RootView_fn(::g::ObjC::Object** __retval)
{
    *__retval = SystemUI::RootView();
}

// public static void set_RootView(ObjC.Object value) :210
void SystemUI__set_RootView_fn(::g::ObjC::Object* value)
{
    SystemUI::RootView(value);
}

// public static float4 get_SafeMargins() :45
void SystemUI__get_SafeMargins_fn(::g::Uno::Float4* __retval)
{
    *__retval = SystemUI::SafeMargins();
}

// public static float4 get_StaticMargins() :55
void SystemUI__get_StaticMargins_fn(::g::Uno::Float4* __retval)
{
    *__retval = SystemUI::StaticMargins();
}

// private static void uKeyboardWillChangeFrame(Uno.Platform.iOS.uCGRect frameBegin, Uno.Platform.iOS.uCGRect frameEnd, double animationDuration, int animationCurve, Fuse.Platform.SystemUIResizeReason reason) :277
void SystemUI__uKeyboardWillChangeFrame1_fn(CGRect* frameBegin, CGRect* frameEnd, double* animationDuration, int32_t* animationCurve, int32_t* reason)
{
    SystemUI::uKeyboardWillChangeFrame1(*frameBegin, *frameEnd, *animationDuration, *animationCurve, *reason);
}

// public static generated Fuse.Platform.StatusBarAnimation get_uStatusBarAnimation() :66
void SystemUI__get_uStatusBarAnimation_fn(int32_t* __retval)
{
    *__retval = SystemUI::uStatusBarAnimation1();
}

// public static generated void set_uStatusBarAnimation(Fuse.Platform.StatusBarAnimation value) :66
void SystemUI__set_uStatusBarAnimation_fn(int32_t* value)
{
    SystemUI::uStatusBarAnimation1(*value);
}

// public static Fuse.Platform.StatusBarStyle get_uStatusBarStyle() :300
void SystemUI__get_uStatusBarStyle_fn(int32_t* __retval)
{
    *__retval = SystemUI::uStatusBarStyle1();
}

// public static void set_uStatusBarStyle(Fuse.Platform.StatusBarStyle value) :301
void SystemUI__set_uStatusBarStyle_fn(int32_t* value)
{
    SystemUI::uStatusBarStyle1(*value);
}

::g::Uno::Rect SystemUI::_bottomFrame_;
bool SystemUI::_isTopFrameVisible_;
int32_t SystemUI::_style_;
::g::Uno::Rect SystemUI::_Frame_;
int32_t SystemUI::_uStatusBarAnimation_;
uSStrong<uDelegate*> SystemUI::FrameChanged1_;
uSStrong<uDelegate*> SystemUI::MarginsChanged1_;

// private static void _statusBarDidChangeFrame(Uno.Platform.iOS.uCGRect _endFrame) [static] :273
void SystemUI::_statusBarDidChangeFrame(CGRect _endFrame)
{
    SystemUI_typeof()->Init();
}

// private static void _statusBarWillChangeFrame(Uno.Platform.iOS.uCGRect _endFrame, double animationDuration) [static] :266
void SystemUI::_statusBarWillChangeFrame(CGRect _endFrame, double animationDuration)
{
    uStackFrame __("Fuse.Platform.SystemUI", "_statusBarWillChangeFrame(Uno.Platform.iOS.uCGRect,double)");
    SystemUI_typeof()->Init();

    if (::g::Fuse::Platform::Lifecycle::State() == 0)
        return;

    SystemUI::OnWillResize();
}

// private static void DisableKeyboardResizeNotifications() [static] :110
void SystemUI::DisableKeyboardResizeNotifications()
{
    SystemUI_typeof()->Init();
    @autoreleasepool
    {
        uAppDelegate* _delegate = (uAppDelegate*)[UIApplication sharedApplication].delegate;
        
        [[NSNotificationCenter defaultCenter]
         removeObserver:_delegate
         name:UIKeyboardWillShowNotification object:nil];
        
        [[NSNotificationCenter defaultCenter]
         removeObserver:_delegate
         name:UIKeyboardWillHideNotification object:nil];
    }
    
}

// private static void EnableKeyboardResizeNotifications() [static] :94
void SystemUI::EnableKeyboardResizeNotifications()
{
    SystemUI_typeof()->Init();
    @autoreleasepool
    {
        uAppDelegate* _delegate = (uAppDelegate*)[UIApplication sharedApplication].delegate;
        
        [[NSNotificationCenter defaultCenter]
         addObserver:_delegate selector:@selector(uKeyboardWillChangeFrame:)
         name:UIKeyboardWillShowNotification object:nil];
        
        [[NSNotificationCenter defaultCenter]
         addObserver:_delegate
         selector:@selector(uKeyboardWillChangeFrame:)
         name:UIKeyboardWillHideNotification object:nil];
    }
    
}

// public static void EnterFullscreen() [static] :317
void SystemUI::EnterFullscreen()
{
    SystemUI_typeof()->Init();
    SystemUI::IsTopFrameVisible(false);
}

// private static void GetOSVersion(int& major, int& minor, int& revision) [static] :183
void SystemUI::GetOSVersion(int32_t* major, int32_t* minor, int32_t* revision)
{
    SystemUI_typeof()->Init();
    @autoreleasepool
    {
        if (NSFoundationVersionNumber < NSFoundationVersionNumber_iOS_8_0)
        {
        	//we don't really need specifics before this point
        	*major = (int)NSFoundationVersionNumber;
        	*minor = ((int)NSFoundationVersionNumber * 10) % 10;
        	*revision = 0;
        }
        else
        {
        	NSOperatingSystemVersion ver = [[NSProcessInfo processInfo] operatingSystemVersion];
        	*major = ver.majorVersion;
        	*minor = ver.minorVersion;
        	*revision = ver.patchVersion;
        }
    }
    
}

// private static void GetSafeArea(float& l, float& t, float& r, float& b) [static] :250
void SystemUI::GetSafeArea(float* l, float* t, float* r, float* b)
{
    SystemUI_typeof()->Init();
    @autoreleasepool
    {
        UIView* view = [UIApplication sharedApplication].keyWindow.rootViewController.view;
        
        #if defined(__IPHONE_11_0) && __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_11_0
        //Only on iOS11, taken care of in the GetSafeFrame code (we don't use @available in order to support older XCode version)
        UIEdgeInsets insets = view.safeAreaInsets;
        *l = insets.left;
        *t = insets.top;
        *r = insets.right;
        *b = insets.bottom;
        #else
        *l = *t = *r = *b = 0;
        #endif
    }
    
}

// private static float4 GetSafeFrame() [static] :233
::g::Uno::Float4 SystemUI::GetSafeFrame()
{
    SystemUI_typeof()->Init();
    int32_t major, minor, revision;
    SystemUI::GetOSVersion(&major, &minor, &revision);

    if (major >= 11)
    {
        float l, t, r, b;
        SystemUI::GetSafeArea(&l, &t, &r, &b);
        return ::g::Uno::Float4__New2(l, t, r, b);
    }

    return ::g::Uno::Float4__New1(0.0f);
}

// private static Uno.Rect GetStatusBarFrame() [static] :225
::g::Uno::Rect SystemUI::GetStatusBarFrame()
{
    SystemUI_typeof()->Init();
    return ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect([UIApplication sharedApplication].statusBarFrame, NULL), 1.0f);
}

// public static void OnCreate() [static] :81
void SystemUI::OnCreate()
{
    uStackFrame __("Fuse.Platform.SystemUI", "OnCreate()");
    SystemUI_typeof()->Init();
    uPtr(uCast< ::g::Uno::Platform::iOSDisplay*>(::g::Uno::Platform::Displays::MainDisplay(), ::TYPES[0/*Uno.Platform.iOSDisplay*/]))->add_FrameChanged(uDelegate::New(::TYPES[1/*Uno.EventHandler*/], (void*)SystemUI__OnFrameChanged_fn));
    SystemUI::OnFrameChanged(NULL, NULL);
    SystemUI::EnableKeyboardResizeNotifications();
}

// public static void OnDestroy() [static] :88
void SystemUI::OnDestroy()
{
    SystemUI_typeof()->Init();
    SystemUI::DisableKeyboardResizeNotifications();
}

// private static void OnFrameChanged(object s, object a) [static] :69
void SystemUI::OnFrameChanged(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Platform.SystemUI", "OnFrameChanged(object,object)");
    SystemUI_typeof()->Init();
    ::g::Uno::Platform::iOSDisplay* iDisplay = uCast< ::g::Uno::Platform::iOSDisplay*>(::g::Uno::Platform::Displays::MainDisplay(), ::TYPES[0/*Uno.Platform.iOSDisplay*/]);
    SystemUI::Frame(uPtr(iDisplay)->Frame());
    uDelegate* handler = SystemUI::FrameChanged1_;

    if (::g::Uno::Delegate::op_Inequality(handler, NULL))
        uPtr(handler)->Invoke(2, NULL, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private static void OnWillResize() [static] :219
void SystemUI::OnWillResize()
{
    uStackFrame __("Fuse.Platform.SystemUI", "OnWillResize()");
    SystemUI_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(SystemUI::MarginsChanged1_, NULL))
        uPtr(SystemUI::MarginsChanged1_)->InvokeVoid();
}

// public static extern Uno.Platform.iOS.uCGSize Pre_iOS8_HandleDeviceOrientation_Size(Uno.Platform.iOS.uCGSize cgsize, ObjC.Object view) [static] :159
CGSize SystemUI::Pre_iOS8_HandleDeviceOrientation_Size(CGSize cgsize, ::g::ObjC::Object* view)
{
    SystemUI_typeof()->Init();
    if (NSFoundationVersionNumber <= NSFoundationVersionNumber_iOS_7_1
    	&& ::g::Uno::Platform::iOS::Application::IsLandscape()
    	&& (!view || ::g::Uno::Platform::iOS::Application::IsRootView(view)))
    {
    	// Transpose dimensions
    	return CGSizeMake(cgsize.height, cgsize.width);
    }
    
    return cgsize;
}

// private static void uKeyboardWillChangeFrame(Uno.Platform.iOS.uCGRect frameBegin, Uno.Platform.iOS.uCGRect frameEnd, double animationDuration, int animationCurve, Fuse.Platform.SystemUIResizeReason reason) [static] :277
void SystemUI::uKeyboardWillChangeFrame1(CGRect frameBegin, CGRect frameEnd, double animationDuration, int32_t animationCurve, int32_t reason)
{
    uStackFrame __("Fuse.Platform.SystemUI", "uKeyboardWillChangeFrame(Uno.Platform.iOS.uCGRect,Uno.Platform.iOS.uCGRect,double,int,Fuse.Platform.SystemUIResizeReason)");
    SystemUI_typeof()->Init();
    SystemUI::_bottomFrame_ = ::g::Uno::Platform::iOS::Support::CGRectToUnoRect(::g::Uno::Platform::iOS::Support::Pre_iOS8_HandleDeviceOrientation_Rect(frameEnd, NULL), 1.0f);
    SystemUI::OnWillResize();
}

// public static float4 get_DeviceMargins() [static] :38
::g::Uno::Float4 SystemUI::DeviceMargins()
{
    SystemUI_typeof()->Init();
    return SystemUI::GetSafeFrame();
}

// public static generated Uno.Rect get_Frame() [static] :34
::g::Uno::Rect SystemUI::Frame()
{
    SystemUI_typeof()->Init();
    return SystemUI::_Frame_;
}

// private static generated void set_Frame(Uno.Rect value) [static] :34
void SystemUI::Frame(::g::Uno::Rect value)
{
    SystemUI_typeof()->Init();
    SystemUI::_Frame_ = value;
}

// public static bool get_IsBottomFrameVisible() [static] :204
bool SystemUI::IsBottomFrameVisible()
{
    SystemUI_typeof()->Init();
    return (SystemUI::_bottomFrame_.Top - SystemUI::_bottomFrame_.Bottom) > 0.0f;
}

// public static bool get_IsTopFrameVisible() [static] :127
bool SystemUI::IsTopFrameVisible()
{
    SystemUI_typeof()->Init();
    return SystemUI::_isTopFrameVisible_;
}

// public static void set_IsTopFrameVisible(bool value) [static] :128
void SystemUI::IsTopFrameVisible(bool value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "set_IsTopFrameVisible(bool)");
    SystemUI_typeof()->Init();

    if (value == SystemUI::_isTopFrameVisible_)
        return;

    SystemUI::_isTopFrameVisible_ = value;
    CGRect endFrame = ::g::Uno::Platform::iOS::uCGRect1::Zero();
    double animationDuration = 0.5;

    if (!value)
    {
        CGSize screenSize = SystemUI::Pre_iOS8_HandleDeviceOrientation_Size([UIScreen mainScreen].bounds.size, NULL);
        endFrame = CGRectMake(0., 0., screenSize.width, 20.);
        animationDuration = 0.25;
    }

    if (SystemUI::uStatusBarAnimation1() == (int)UIStatusBarAnimationNone)
        animationDuration = 0.0;

    SystemUI::_statusBarWillChangeFrame(endFrame, animationDuration);
    [UIApplication sharedApplication].statusBarHidden = !value;
    [UIView animateWithDuration:animationDuration animations:^{ [(::uAppDelegate*)[UIApplication sharedApplication].delegate setNeedsStatusBarAppearanceUpdate]; }];
}

// public static int3 get_OSVersion() [static] :174
::g::Uno::Int3 SystemUI::OSVersion()
{
    SystemUI_typeof()->Init();
    int32_t m, n, r;
    SystemUI::GetOSVersion(&m, &n, &r);
    return ::g::Uno::Int3__New2(m, n, r);
}

// public static ObjC.Object get_RootView() [static] :209
::g::ObjC::Object* SystemUI::RootView()
{
    SystemUI_typeof()->Init();
    return ::g::Uno::Platform::iOS::Application::GetRootView();
}

// public static void set_RootView(ObjC.Object value) [static] :210
void SystemUI::RootView(::g::ObjC::Object* value)
{
    SystemUI_typeof()->Init();
    ::g::Uno::Platform::iOS::Application::SetRootView(value);
}

// public static float4 get_SafeMargins() [static] :45
::g::Uno::Float4 SystemUI::SafeMargins()
{
    SystemUI_typeof()->Init();
    ::g::Uno::Float4 sf = SystemUI::GetSafeFrame();
    sf.Y = ::g::Uno::Math::Max1(sf.Y, SystemUI::GetStatusBarFrame().Height());
    sf.W = ::g::Uno::Math::Max1(sf.W, SystemUI::_bottomFrame_.Height());
    return sf;
}

// public static float4 get_StaticMargins() [static] :55
::g::Uno::Float4 SystemUI::StaticMargins()
{
    SystemUI_typeof()->Init();
    ::g::Uno::Float4 sm = SystemUI::GetSafeFrame();
    sm.Y = ::g::Uno::Math::Max1(sm.Y, SystemUI::GetStatusBarFrame().Height());
    return sm;
}

// public static generated Fuse.Platform.StatusBarAnimation get_uStatusBarAnimation() [static] :66
int32_t SystemUI::uStatusBarAnimation1()
{
    SystemUI_typeof()->Init();
    return SystemUI::_uStatusBarAnimation_;
}

// public static generated void set_uStatusBarAnimation(Fuse.Platform.StatusBarAnimation value) [static] :66
void SystemUI::uStatusBarAnimation1(int32_t value)
{
    SystemUI_typeof()->Init();
    SystemUI::_uStatusBarAnimation_ = value;
}

// public static Fuse.Platform.StatusBarStyle get_uStatusBarStyle() [static] :300
int32_t SystemUI::uStatusBarStyle1()
{
    SystemUI_typeof()->Init();
    return SystemUI::_style_;
}

// public static void set_uStatusBarStyle(Fuse.Platform.StatusBarStyle value) [static] :301
void SystemUI::uStatusBarStyle1(int32_t value)
{
    SystemUI_typeof()->Init();

    if (value == SystemUI::_style_)
        return;

    SystemUI::_style_ = value;

    if ([[UIApplication sharedApplication].delegate respondsToSelector:@selector(setNeedsStatusBarAppearanceUpdate)])
    {
        if (SystemUI::uStatusBarAnimation1() == (int)UIStatusBarAnimationNone)
            [(::uAppDelegate*)[UIApplication sharedApplication].delegate setNeedsStatusBarAppearanceUpdate];
        else
            [UIView animateWithDuration:0.33 animations:^{ [(::uAppDelegate*)[UIApplication sharedApplication].delegate setNeedsStatusBarAppearanceUpdate]; }];
    }
}

// public static generated void add_FrameChanged(Uno.EventHandler value) [static] :68
void SystemUI::add_FrameChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "add_FrameChanged(Uno.EventHandler)");
    SystemUI_typeof()->Init();
    SystemUI::FrameChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::FrameChanged1_, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) [static] :68
void SystemUI::remove_FrameChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "remove_FrameChanged(Uno.EventHandler)");
    SystemUI_typeof()->Init();
    SystemUI::FrameChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::FrameChanged1_, value), ::TYPES[1/*Uno.EventHandler*/]);
}

// public static generated void add_MarginsChanged(Uno.Action value) [static] :63
void SystemUI::add_MarginsChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "add_MarginsChanged(Uno.Action)");
    SystemUI_typeof()->Init();
    SystemUI::MarginsChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::MarginsChanged1_, value), ::TYPES[2/*Uno.Action*/]);
}

// public static generated void remove_MarginsChanged(Uno.Action value) [static] :63
void SystemUI::remove_MarginsChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Platform.SystemUI", "remove_MarginsChanged(Uno.Action)");
    SystemUI_typeof()->Init();
    SystemUI::MarginsChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::MarginsChanged1_, value), ::TYPES[2/*Uno.Action*/]);
}
// }

}}} // ::g::Fuse::Platform
