package com.foreign.Uno.Permissions;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.Bindings.UnoHelper;
import com.Bindings.UnoWrapped;
import com.Bindings.ExternedBlockHost;

public class Permissions
{
    static void debug_log(Object message)
    {
        android.util.Log.d("AR_example", (message==null ? "null" : message.toString()));
    }

    public static void permissionRequestFailed(final UnoObject x)
    {
        ExternedBlockHost.callUno_Uno_Permissions_Permissions_Failed62((UnoObject)x);
    }
    
    public static void permissionRequestSucceeded(final UnoObject x)
    {
        ExternedBlockHost.callUno_Uno_Permissions_Permissions_Succeeded63((UnoObject)x);
    }
    
    public static void requestPermission64(final UnoObject promise,final String permissionName)
    {
        com.fuse.Permissions.startPermissionRequest((UnoObject)promise, permissionName);
    }
    
    public static void requestPermissions65(final UnoObject promise,final com.uno.StringArray permissionNames)
    {
        com.fuse.Permissions.startPermissionRequest((UnoObject)promise, permissionNames.copyArray());
    }
    
    public static boolean shouldShowInformation66(final String x)
    {
        return com.fuse.Permissions.shouldShowInformation(x);
    }
    
}
