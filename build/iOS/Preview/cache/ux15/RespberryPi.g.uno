[Uno.Compiler.UxGenerated]
public partial class RespberryPi: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<string> temp1_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
    internal global::Fuse.Reactive.EventBinding temp_eb7;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb6",
        "temp_eb7"
    };
    static RespberryPi()
    {
    }
    [global::Uno.UX.UXConstructor]
    public RespberryPi(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp2 = new global::Fuse.Reactive.Data("back");
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AR_example_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("displayText");
        var temp1 = new global::Fuse.Controls.TextInput();
        temp1_Value_inst = new AR_example_FuseControlsTextInputControl_Value_Property(temp1, __selector0);
        var temp4 = new global::Fuse.Reactive.Data("sendText");
        var temp5 = new global::Fuse.Reactive.Data("emitData");
        var temp6 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp7 = new global::Fuse.Controls.Image();
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp8 = new global::Fuse.Controls.DockPanel();
        var temp9 = new global::Fuse.Controls.StackPanel();
        var temp10 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp11 = new global::Fuse.Controls.StackPanel();
        var temp12 = new global::Fuse.Reactive.DataBinding(temp1_Value_inst, temp4, Fuse.Reactive.BindingMode.Default);
        var temp13 = new global::Fuse.Controls.Rectangle();
        var temp14 = new global::Fuse.Controls.Button();
        temp_eb7 = new global::Fuse.Reactive.EventBinding(temp5);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/RespberryPi.ux";
        temp6.LineNumber = 3;
        temp6.FileName = "Pages/RespberryPi.ux";
        temp6.SourceLineNumber = 3;
        temp6.SourceFileName = "Pages/RespberryPi.ux";
        temp6.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/RespberryPi.js"));
        temp7.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp7.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp7.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp7.Margin = float4(20f, 20f, 0f, 0f);
        temp7.Padding = float4(0f, 0f, 0f, 0f);
        temp7.Layer = Fuse.Layer.Layout;
        temp7.SourceLineNumber = 5;
        temp7.SourceFileName = "Pages/RespberryPi.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb6.OnEvent);
        temp7.File = new global::Uno.UX.BundleFileSource(import("../../../../../Images/back.png"));
        temp7.Bindings.Add(temp_eb6);
        temp2.SourceLineNumber = 5;
        temp2.SourceFileName = "Pages/RespberryPi.ux";
        temp8.SourceLineNumber = 6;
        temp8.SourceFileName = "Pages/RespberryPi.ux";
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp11);
        temp9.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp9.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        temp9.Alignment = Fuse.Elements.Alignment.Top;
        temp9.Margin = float4(10f, 10f, 10f, 10f);
        temp9.SourceLineNumber = 8;
        temp9.SourceFileName = "Pages/RespberryPi.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp9, Fuse.Layouts.Dock.Top);
        temp9.Children.Add(temp);
        temp.FontSize = 18f;
        temp.Color = float4(0f, 0f, 0f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.SourceLineNumber = 9;
        temp.SourceFileName = "Pages/RespberryPi.ux";
        temp.Bindings.Add(temp10);
        temp3.SourceLineNumber = 9;
        temp3.SourceFileName = "Pages/RespberryPi.ux";
        temp11.Width = new Uno.UX.Size(100f, Uno.UX.Unit.Percent);
        temp11.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        temp11.Alignment = Fuse.Elements.Alignment.Top;
        temp11.Margin = float4(10f, 10f, 10f, 10f);
        temp11.SourceLineNumber = 12;
        temp11.SourceFileName = "Pages/RespberryPi.ux";
        global::Fuse.Controls.DockPanel.SetDock(temp11, Fuse.Layouts.Dock.Top);
        temp11.Children.Add(temp1);
        temp11.Children.Add(temp13);
        temp11.Children.Add(temp14);
        temp1.PlaceholderText = "Enter some text";
        temp1.PlaceholderColor = float4(0.8f, 0.8f, 0.8f, 1f);
        temp1.TextColor = float4(0f, 0f, 0f, 1f);
        temp1.CaretColor = float4(1f, 1f, 1f, 1f);
        temp1.Margin = float4(10f, 0f, 10f, 0f);
        temp1.Padding = float4(5f, 0f, 0f, 0f);
        temp1.SourceLineNumber = 13;
        temp1.SourceFileName = "Pages/RespberryPi.ux";
        temp1.Bindings.Add(temp12);
        temp4.SourceLineNumber = 13;
        temp4.SourceFileName = "Pages/RespberryPi.ux";
        temp13.Color = float4(1f, 1f, 1f, 1f);
        temp13.Height = new Uno.UX.Size(1f, Uno.UX.Unit.Unspecified);
        temp13.Alignment = Fuse.Elements.Alignment.Bottom;
        temp13.Margin = float4(10f, 10f, 10f, 10f);
        temp13.SourceLineNumber = 14;
        temp13.SourceFileName = "Pages/RespberryPi.ux";
        temp14.Text = "Send some data";
        temp14.Color = float4(0.2666667f, 0.3803922f, 0.4705882f, 1f);
        temp14.Width = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        temp14.Height = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp14.Opacity = 1f;
        temp14.SourceLineNumber = 15;
        temp14.SourceFileName = "Pages/RespberryPi.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp14, temp_eb7.OnEvent);
        temp14.Bindings.Add(temp_eb7);
        temp5.SourceLineNumber = 15;
        temp5.SourceFileName = "Pages/RespberryPi.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb6);
        __g_nametable.Objects.Add(temp_eb7);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
