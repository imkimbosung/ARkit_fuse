[Uno.Compiler.UxGenerated]
public partial class CounterPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    global::Uno.UX.Property<string> temp_Value_inst;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb0"
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
        var temp = new global::Fuse.Controls.TextInput();
        temp_Value_inst = new AR_example_FuseControlsTextInputControl_Value_Property(temp, __selector0);
        var temp1 = new global::Fuse.Reactive.Data("received");
        var temp2 = new global::Fuse.Reactive.Data("counter");
        var temp3 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp4 = new global::Fuse.Controls.StackPanel();
        var temp5 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp1, Fuse.Reactive.BindingMode.Default);
        var temp6 = new global::countButton();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp2);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/CounterPage.ux";
        temp3.LineNumber = 3;
        temp3.FileName = "Pages/CounterPage.ux";
        temp3.SourceLineNumber = 3;
        temp3.SourceFileName = "Pages/CounterPage.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/CounterPage.js"));
        temp4.SourceLineNumber = 5;
        temp4.SourceFileName = "Pages/CounterPage.ux";
        temp4.Children.Add(temp);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Y = new Uno.UX.Size(250f, Uno.UX.Unit.Unspecified);
        temp.SourceLineNumber = 6;
        temp.SourceFileName = "Pages/CounterPage.ux";
        temp.Bindings.Add(temp5);
        temp1.SourceLineNumber = 6;
        temp1.SourceFileName = "Pages/CounterPage.ux";
        temp6.Text = "Click count";
        temp6.SourceLineNumber = 20;
        temp6.SourceFileName = "Pages/CounterPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp6, temp_eb0.OnEvent);
        temp6.Bindings.Add(temp_eb0);
        temp2.SourceLineNumber = 20;
        temp2.SourceFileName = "Pages/CounterPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
        this.Children.Add(temp6);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
}
