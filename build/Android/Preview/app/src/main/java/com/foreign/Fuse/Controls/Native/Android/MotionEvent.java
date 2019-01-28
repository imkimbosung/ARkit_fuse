package com.foreign.Fuse.Controls.Native.Android;

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

public class MotionEvent
{
    static void debug_log(Object message)
    {
        android.util.Log.d("AR_example", (message==null ? "null" : message.toString()));
    }

    public static boolean Compare159(final Object handle1,final Object handle2)
    {
        return (((android.view.MotionEvent)handle1) == ((android.view.MotionEvent)handle2));
    }
    
    public static int GetAction160(final UnoObject _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getAction();
    }
    
    public static int GetActionMasked161(final UnoObject _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getActionMasked();
    }
    
    public static long GetEventTime162(final UnoObject _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getEventTime();
    }
    
    public static void GetLocationOnScreen1163(final UnoObject _this, final Object viewHandle,final com.uno.IntArray result)
    {
        int[] array = new int[2];
        ((android.view.View)viewHandle).getLocationOnScreen(array);
        result.set(0, array[0]);
        result.set(1, array[1]);
    }
    
    public static int GetPointerCount164(final UnoObject _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getPointerCount();
    }
    
    public static int GetPointerId1165(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return ((android.view.MotionEvent)handle).getPointerId(pointerIndex);
    }
    
    public static int GetPointerIndexMask166()
    {
        return android.view.MotionEvent.ACTION_POINTER_INDEX_MASK;
    }
    
    public static int GetPointerIndexShift167()
    {
        return android.view.MotionEvent.ACTION_POINTER_INDEX_SHIFT;
    }
    
    public static float GetX168(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return ((android.view.MotionEvent)handle).getX(pointerIndex);
    }
    
    public static float GetXPrecision169(final UnoObject _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getXPrecision();
    }
    
    public static float GetY170(final UnoObject _this, final Object handle,final int pointerIndex)
    {
        return ((android.view.MotionEvent)handle).getY(pointerIndex);
    }
    
    public static float GetYPrecision171(final UnoObject _this, final Object handle)
    {
        return ((android.view.MotionEvent)handle).getYPrecision();
    }
    
}
