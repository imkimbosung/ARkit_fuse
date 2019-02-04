[Uno.Compiler.UxGenerated]
public partial class RespberryPi: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb6;
    internal global::Fuse.Reactive.EventBinding temp_eb7;
    internal global::Fuse.Reactive.EventBinding temp_eb8;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb6",
        "temp_eb7",
        "temp_eb8"
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
        var temp1 = new global::Fuse.Reactive.Data("back");
        var temp2 = new global::Fuse.Reactive.Data("back");
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new AR_example_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp3 = new global::Fuse.Reactive.Data("received");
        var temp4 = new global::Fuse.Reactive.Data("sensorData");
        var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp6 = new global::Fuse.Controls.Image();
        temp_eb6 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp7 = new global::Fuse.Controls.Image();
        temp_eb7 = new global::Fuse.Reactive.EventBinding(temp2);
        var temp8 = new global::Fuse.Controls.StackPanel();
        var temp9 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp3, Fuse.Reactive.BindingMode.Default);
        var temp10 = new global::sensorButton();
        temp_eb8 = new global::Fuse.Reactive.EventBinding(temp4);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/RespberryPi.ux";
        temp5.LineNumber = 3;
        temp5.FileName = "Pages/RespberryPi.ux";
        temp5.SourceLineNumber = 3;
        temp5.SourceFileName = "Pages/RespberryPi.ux";
        temp5.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/RespberryPi.js"));
        temp6.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp6.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp6.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp6.Margin = float4(20f, 20f, 0f, 0f);
        temp6.Padding = float4(0f, 0f, 0f, 0f);
        temp6.Layer = Fuse.Layer.Layout;
        temp6.SourceLineNumber = 5;
        temp6.SourceFileName = "Pages/RespberryPi.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb6.OnEvent);
        temp6.File = new global::Uno.UX.BundleFileSource(import("../../../../../Images/back.png"));
        temp6.Bindings.Add(temp_eb6);
        temp1.SourceLineNumber = 5;
        temp1.SourceFileName = "Pages/RespberryPi.ux";
        temp7.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp7.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp7.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp7.Margin = float4(20f, 20f, 0f, 0f);
        temp7.Padding = float4(0f, 0f, 0f, 0f);
        temp7.Layer = Fuse.Layer.Layout;
        temp7.SourceLineNumber = 21;
        temp7.SourceFileName = "Pages/RespberryPi.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp7, temp_eb7.OnEvent);
        temp7.File = new global::Uno.UX.BundleFileSource(import("../../../../../Images/back.png"));
        temp7.Bindings.Add(temp_eb7);
        temp2.SourceLineNumber = 21;
        temp2.SourceFileName = "Pages/RespberryPi.ux";
        temp8.SourceLineNumber = 23;
        temp8.SourceFileName = "Pages/RespberryPi.ux";
        temp8.Children.Add(temp);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Y = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp.SourceLineNumber = 24;
        temp.SourceFileName = "Pages/RespberryPi.ux";
        temp.Bindings.Add(temp9);
        temp3.SourceLineNumber = 24;
        temp3.SourceFileName = "Pages/RespberryPi.ux";
        temp10.Text = "Click";
        temp10.SourceLineNumber = 34;
        temp10.SourceFileName = "Pages/RespberryPi.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp10, temp_eb8.OnEvent);
        temp10.Bindings.Add(temp_eb8);
        temp4.SourceLineNumber = 34;
        temp4.SourceFileName = "Pages/RespberryPi.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb6);
        __g_nametable.Objects.Add(temp_eb7);
        __g_nametable.Objects.Add(temp_eb8);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp7);
        this.Children.Add(temp8);
        this.Children.Add(temp10);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
