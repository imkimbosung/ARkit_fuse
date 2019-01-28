[Uno.Compiler.UxGenerated]
public partial class ARscreen: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Controls.ARView ARView;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "ARView"
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
        var temp = new global::Fuse.Controls.ClientPanel();
        var temp1 = new global::Fuse.Controls.NativeViewHost();
        ARView = new global::Fuse.Controls.ARView();
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        this.SourceLineNumber = 2;
        this.SourceFileName = "Pages/ARscreen.ux";
        temp.SourceLineNumber = 6;
        temp.SourceFileName = "Pages/ARscreen.ux";
        temp.Children.Add(temp1);
        temp1.SourceLineNumber = 7;
        temp1.SourceFileName = "Pages/ARscreen.ux";
        temp1.Children.Add(ARView);
        temp1.Children.Add(temp2);
        ARView.ShowStatistics = true;
        ARView.Debug = true;
        ARView.Name = __selector0;
        ARView.SourceLineNumber = 9;
        ARView.SourceFileName = "Pages/ARscreen.ux";
        ARView.PlaneFile = new global::Uno.UX.BundleFileSource(import("../../../../../iOS/tron_grid.png"));
        temp2.Code = "\n\t\t\t\tconsole.log(JSON.stringify(ARView));\n\t\t\t";
        temp2.LineNumber = 12;
        temp2.FileName = "Pages/ARscreen.ux";
        temp2.SourceLineNumber = 12;
        temp2.SourceFileName = "Pages/ARscreen.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(ARView);
        this.Children.Add(temp);
    }
    static global::Uno.UX.Selector __selector0 = "ARView";
}
