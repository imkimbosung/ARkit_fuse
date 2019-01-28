[Uno.Compiler.UxGenerated]
public partial class CounterPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb1",
        "temp_eb2"
    };
    static CounterPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public CounterPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp1 = new global::Fuse.Reactive.Data("back");
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new AR_example_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Data("received");
        var temp3 = new global::Fuse.Reactive.Data("counter");
        var temp4 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp5 = new global::Fuse.Controls.Image();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp6 = new global::Fuse.Controls.StackPanel();
        var temp7 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Default);
        var temp8 = new global::countButton();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp3);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/CounterPage.ux";
        temp4.LineNumber = 3;
        temp4.FileName = "Pages/CounterPage.ux";
        temp4.SourceLineNumber = 3;
        temp4.SourceFileName = "Pages/CounterPage.ux";
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/CounterPage.js"));
        temp5.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp5.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp5.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp5.Margin = float4(20f, 20f, 0f, 0f);
        temp5.Padding = float4(0f, 0f, 0f, 0f);
        temp5.Layer = Fuse.Layer.Layout;
        temp5.SourceLineNumber = 5;
        temp5.SourceFileName = "Pages/CounterPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp5, temp_eb1.OnEvent);
        temp5.File = new global::Uno.UX.BundleFileSource(import("../../../../../Images/back.png"));
        temp5.Bindings.Add(temp_eb1);
        temp1.SourceLineNumber = 5;
        temp1.SourceFileName = "Pages/CounterPage.ux";
        temp6.SourceLineNumber = 7;
        temp6.SourceFileName = "Pages/CounterPage.ux";
        temp6.Children.Add(temp);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Y = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp.SourceLineNumber = 8;
        temp.SourceFileName = "Pages/CounterPage.ux";
        temp.Bindings.Add(temp7);
        temp2.SourceLineNumber = 8;
        temp2.SourceFileName = "Pages/CounterPage.ux";
        temp8.Text = "Click count";
        temp8.SourceLineNumber = 18;
        temp8.SourceFileName = "Pages/CounterPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp8, temp_eb2.OnEvent);
        temp8.Bindings.Add(temp_eb2);
        temp3.SourceLineNumber = 18;
        temp3.SourceFileName = "Pages/CounterPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb1);
        __g_nametable.Objects.Add(temp_eb2);
        this.Children.Add(temp4);
        this.Children.Add(temp5);
        this.Children.Add(temp6);
        this.Children.Add(temp8);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
