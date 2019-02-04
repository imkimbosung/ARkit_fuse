[Uno.Compiler.UxGenerated]
public partial class ARscreen: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Controls.ARView ARView;
    internal global::Fuse.Reactive.EventBinding temp_eb0;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "ARView",
        "temp_eb0"
    };
    static ARscreen()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ARscreen(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("back");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.ClientPanel();
        var temp3 = new global::Fuse.Controls.NativeViewHost();
        ARView = new global::Fuse.Controls.ARView();
        var temp4 = new global::Fuse.Controls.Image();
        temp_eb0 = new global::Fuse.Reactive.EventBinding(temp);
        var temp5 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        this.SourceLineNumber = 2;
        this.SourceFileName = "Pages/ARscreen.ux";
        temp1.LineNumber = 4;
        temp1.FileName = "Pages/ARscreen.ux";
        temp1.SourceLineNumber = 4;
        temp1.SourceFileName = "Pages/ARscreen.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/ARscreen.js"));
        temp2.SourceLineNumber = 6;
        temp2.SourceFileName = "Pages/ARscreen.ux";
        temp2.Children.Add(temp3);
        temp3.SourceLineNumber = 8;
        temp3.SourceFileName = "Pages/ARscreen.ux";
        temp3.Children.Add(ARView);
        temp3.Children.Add(temp5);
        ARView.ShowStatistics = true;
        ARView.Debug = true;
        ARView.Name = __selector0;
        ARView.SourceLineNumber = 10;
        ARView.SourceFileName = "Pages/ARscreen.ux";
        ARView.Children.Add(temp4);
        temp4.Width = new Uno.UX.Size(30f, Uno.UX.Unit.Unspecified);
        temp4.Height = new Uno.UX.Size(40f, Uno.UX.Unit.Unspecified);
        temp4.Alignment = Fuse.Elements.Alignment.TopLeft;
        temp4.Margin = float4(20f, 20f, 0f, 0f);
        temp4.Padding = float4(0f, 0f, 0f, 0f);
        temp4.Layer = Fuse.Layer.Layout;
        temp4.SourceLineNumber = 11;
        temp4.SourceFileName = "Pages/ARscreen.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp4, temp_eb0.OnEvent);
        temp4.File = new global::Uno.UX.BundleFileSource(import("../../../../../Images/back.png"));
        temp4.Bindings.Add(temp_eb0);
        temp.SourceLineNumber = 11;
        temp.SourceFileName = "Pages/ARscreen.ux";
        temp5.Code = "\n\t\t\t\tconsole.log(JSON.stringify(ARView));\n\t\t\t";
        temp5.LineNumber = 14;
        temp5.FileName = "Pages/ARscreen.ux";
        temp5.SourceLineNumber = 14;
        temp5.SourceFileName = "Pages/ARscreen.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(ARView);
        __g_nametable.Objects.Add(temp_eb0);
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
    static global::Uno.UX.Selector __selector0 = "ARView";
}
