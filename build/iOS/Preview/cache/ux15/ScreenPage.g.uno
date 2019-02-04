[Uno.Compiler.UxGenerated]
public partial class ScreenPage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Reactive.EventBinding temp_eb9;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "temp_eb9"
    };
    static ScreenPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public ScreenPage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("main");
        var temp1 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp2 = new global::Fuse.Controls.Image();
        temp_eb9 = new global::Fuse.Reactive.EventBinding(temp);
        var temp3 = new global::Fuse.Drawing.StaticSolidColor(float4(0.8627451f, 0.8823529f, 0.8901961f, 1f));
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/ScreenPage.ux";
        temp1.LineNumber = 3;
        temp1.FileName = "Pages/ScreenPage.ux";
        temp1.SourceLineNumber = 3;
        temp1.SourceFileName = "Pages/ScreenPage.ux";
        temp1.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/ScreenPage.js"));
        temp2.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        temp2.Padding = float4(0f, 0f, 0f, 0f);
        temp2.Layer = Fuse.Layer.Layout;
        temp2.SourceLineNumber = 5;
        temp2.SourceFileName = "Pages/ScreenPage.ux";
        global::Fuse.Gestures.Clicked.AddHandler(temp2, temp_eb9.OnEvent);
        temp2.File = new global::Uno.UX.BundleFileSource(import("../../../../../Images/logo3.png"));
        temp2.Bindings.Add(temp_eb9);
        temp.SourceLineNumber = 5;
        temp.SourceFileName = "Pages/ScreenPage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(temp_eb9);
        this.Background = temp3;
        this.Children.Add(temp1);
        this.Children.Add(temp2);
    }
}
