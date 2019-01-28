[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Controls.Text ARscreen;
    internal global::Fuse.Controls.Rectangle ARrect;
    internal global::Fuse.Drawing.SolidColor ARrectColor;
    internal global::Fuse.Drawing.Stroke ARrectStroke;
    internal global::Fuse.Drawing.SolidColor ARrectStrokeColor;
    internal global::Fuse.Reactive.EventBinding temp_eb1;
    internal global::Fuse.Controls.Text Counter;
    internal global::Fuse.Controls.Rectangle CTrect;
    internal global::Fuse.Drawing.SolidColor CTrectColor;
    internal global::Fuse.Drawing.Stroke CTrectStroke;
    internal global::Fuse.Drawing.SolidColor CTrectStrokeColor;
    internal global::Fuse.Reactive.EventBinding temp_eb2;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "ARscreen",
        "ARrect",
        "ARrectColor",
        "ARrectStroke",
        "ARrectStrokeColor",
        "temp_eb1",
        "Counter",
        "CTrect",
        "CTrectColor",
        "CTrectStroke",
        "CTrectStrokeColor",
        "temp_eb2"
    };
    static HomePage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public HomePage(
		[global::Uno.UX.UXParameter("router")] Fuse.Navigation.Router router)
    {
        this.router = router;
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new global::Fuse.Reactive.Data("ARscreen");
        var temp1 = new global::Fuse.Reactive.Data("CounterPage");
        var temp2 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp3 = new global::Fuse.Controls.Panel();
        ARscreen = new global::Fuse.Controls.Text();
        ARrect = new global::Fuse.Controls.Rectangle();
        ARrectColor = new global::Fuse.Drawing.SolidColor();
        ARrectStroke = new global::Fuse.Drawing.Stroke();
        ARrectStrokeColor = new global::Fuse.Drawing.SolidColor();
        var temp4 = new global::Fuse.Gestures.WhilePressed();
        var temp5 = new global::Fuse.Animations.Scale();
        var temp6 = new global::Fuse.Gestures.Clicked();
        var temp7 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb1 = new global::Fuse.Reactive.EventBinding(temp);
        var temp8 = new global::Fuse.Controls.Panel();
        Counter = new global::Fuse.Controls.Text();
        CTrect = new global::Fuse.Controls.Rectangle();
        CTrectColor = new global::Fuse.Drawing.SolidColor();
        CTrectStroke = new global::Fuse.Drawing.Stroke();
        CTrectStrokeColor = new global::Fuse.Drawing.SolidColor();
        var temp9 = new global::Fuse.Gestures.WhilePressed();
        var temp10 = new global::Fuse.Animations.Scale();
        var temp11 = new global::Fuse.Gestures.Clicked();
        var temp12 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb2 = new global::Fuse.Reactive.EventBinding(temp1);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/HomePage.ux";
        temp2.LineNumber = 3;
        temp2.FileName = "Pages/HomePage.ux";
        temp2.SourceLineNumber = 3;
        temp2.SourceFileName = "Pages/HomePage.ux";
        temp2.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/HomePage.js"));
        temp3.SourceLineNumber = 5;
        temp3.SourceFileName = "Pages/HomePage.ux";
        temp3.Children.Add(ARscreen);
        temp3.Children.Add(ARrect);
        temp3.Children.Add(temp4);
        temp3.Children.Add(temp6);
        ARscreen.Value = "AR Start";
        ARscreen.FontSize = 16f;
        ARscreen.Color = float4(0f, 0.6f, 0f, 1f);
        ARscreen.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        ARscreen.Y = new Uno.UX.Size(220f, Uno.UX.Unit.Unspecified);
        ARscreen.Name = __selector0;
        ARscreen.SourceLineNumber = 6;
        ARscreen.SourceFileName = "Pages/HomePage.ux";
        ARrect.CornerRadius = float4(30f, 30f, 30f, 30f);
        ARrect.Width = new Uno.UX.Size(146f, Uno.UX.Unit.Unspecified);
        ARrect.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        ARrect.Y = new Uno.UX.Size(200f, Uno.UX.Unit.Unspecified);
        ARrect.Name = __selector1;
        ARrect.SourceLineNumber = 8;
        ARrect.SourceFileName = "Pages/HomePage.ux";
        ARrect.Fills.Add(ARrectColor);
        ARrect.Strokes.Add(ARrectStroke);
        ARrectColor.Color = float4(1f, 1f, 1f, 1f);
        ARrectStroke.Width = 4f;
        ARrectStroke.Alignment = Fuse.Drawing.StrokeAlignment.Center;
        ARrectStroke.Brush = ARrectStrokeColor;
        ARrectStrokeColor.Color = float4(0f, 0.6f, 0f, 1f);
        temp4.SourceLineNumber = 15;
        temp4.SourceFileName = "Pages/HomePage.ux";
        temp4.Animators.Add(temp5);
        temp5.Factor = 0.9f;
        temp5.Duration = 0.05;
        temp5.Target = ARscreen;
        temp6.SourceLineNumber = 19;
        temp6.SourceFileName = "Pages/HomePage.ux";
        temp6.Actions.Add(temp7);
        temp6.Bindings.Add(temp_eb1);
        temp7.SourceLineNumber = 20;
        temp7.SourceFileName = "Pages/HomePage.ux";
        temp7.Handler += temp_eb1.OnEvent;
        temp.SourceLineNumber = 20;
        temp.SourceFileName = "Pages/HomePage.ux";
        temp8.SourceLineNumber = 24;
        temp8.SourceFileName = "Pages/HomePage.ux";
        temp8.Children.Add(Counter);
        temp8.Children.Add(CTrect);
        temp8.Children.Add(temp9);
        temp8.Children.Add(temp11);
        Counter.Value = "Counter";
        Counter.FontSize = 16f;
        Counter.Color = float4(0f, 0.6f, 0f, 1f);
        Counter.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        Counter.Y = new Uno.UX.Size(420f, Uno.UX.Unit.Unspecified);
        Counter.Name = __selector2;
        Counter.SourceLineNumber = 25;
        Counter.SourceFileName = "Pages/HomePage.ux";
        CTrect.CornerRadius = float4(30f, 30f, 30f, 30f);
        CTrect.Width = new Uno.UX.Size(146f, Uno.UX.Unit.Unspecified);
        CTrect.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        CTrect.Y = new Uno.UX.Size(400f, Uno.UX.Unit.Unspecified);
        CTrect.Name = __selector3;
        CTrect.SourceLineNumber = 27;
        CTrect.SourceFileName = "Pages/HomePage.ux";
        CTrect.Fills.Add(CTrectColor);
        CTrect.Strokes.Add(CTrectStroke);
        CTrectColor.Color = float4(1f, 1f, 1f, 1f);
        CTrectStroke.Width = 4f;
        CTrectStroke.Alignment = Fuse.Drawing.StrokeAlignment.Center;
        CTrectStroke.Brush = CTrectStrokeColor;
        CTrectStrokeColor.Color = float4(0f, 0.6f, 0f, 1f);
        temp9.SourceLineNumber = 34;
        temp9.SourceFileName = "Pages/HomePage.ux";
        temp9.Animators.Add(temp10);
        temp10.Factor = 0.9f;
        temp10.Duration = 0.05;
        temp10.Target = Counter;
        temp11.SourceLineNumber = 38;
        temp11.SourceFileName = "Pages/HomePage.ux";
        temp11.Actions.Add(temp12);
        temp11.Bindings.Add(temp_eb2);
        temp12.SourceLineNumber = 39;
        temp12.SourceFileName = "Pages/HomePage.ux";
        temp12.Handler += temp_eb2.OnEvent;
        temp1.SourceLineNumber = 39;
        temp1.SourceFileName = "Pages/HomePage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(ARscreen);
        __g_nametable.Objects.Add(ARrect);
        __g_nametable.Objects.Add(ARrectColor);
        __g_nametable.Objects.Add(ARrectStroke);
        __g_nametable.Objects.Add(ARrectStrokeColor);
        __g_nametable.Objects.Add(temp_eb1);
        __g_nametable.Objects.Add(Counter);
        __g_nametable.Objects.Add(CTrect);
        __g_nametable.Objects.Add(CTrectColor);
        __g_nametable.Objects.Add(CTrectStroke);
        __g_nametable.Objects.Add(CTrectStrokeColor);
        __g_nametable.Objects.Add(temp_eb2);
        this.Children.Add(temp2);
        this.Children.Add(temp3);
        this.Children.Add(temp8);
    }
    static global::Uno.UX.Selector __selector0 = "ARscreen";
    static global::Uno.UX.Selector __selector1 = "ARrect";
    static global::Uno.UX.Selector __selector2 = "Counter";
    static global::Uno.UX.Selector __selector3 = "CTrect";
}
