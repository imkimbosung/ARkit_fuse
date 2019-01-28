[Uno.Compiler.UxGenerated]
public partial class HomePage: Fuse.Controls.Page
{
    readonly Fuse.Navigation.Router router;
    internal global::Fuse.Controls.Text ARscreen;
    internal global::Fuse.Controls.Rectangle ARrect;
    internal global::Fuse.Drawing.SolidColor ARrectColor;
    internal global::Fuse.Drawing.Stroke ARrectStroke;
    internal global::Fuse.Drawing.SolidColor ARrectStrokeColor;
    internal global::Fuse.Reactive.EventBinding temp_eb3;
    internal global::Fuse.Controls.Text RespberryPi;
    internal global::Fuse.Controls.Rectangle Pirect;
    internal global::Fuse.Drawing.SolidColor PirectColor;
    internal global::Fuse.Drawing.Stroke PirectStroke;
    internal global::Fuse.Drawing.SolidColor PirectStrokeColor;
    internal global::Fuse.Reactive.EventBinding temp_eb4;
    internal global::Fuse.Controls.Text Counter;
    internal global::Fuse.Controls.Rectangle CTrect;
    internal global::Fuse.Drawing.SolidColor CTrectColor;
    internal global::Fuse.Drawing.Stroke CTrectStroke;
    internal global::Fuse.Drawing.SolidColor CTrectStrokeColor;
    internal global::Fuse.Reactive.EventBinding temp_eb5;
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
        "router",
        "ARscreen",
        "ARrect",
        "ARrectColor",
        "ARrectStroke",
        "ARrectStrokeColor",
        "temp_eb3",
        "RespberryPi",
        "Pirect",
        "PirectColor",
        "PirectStroke",
        "PirectStrokeColor",
        "temp_eb4",
        "Counter",
        "CTrect",
        "CTrectColor",
        "CTrectStroke",
        "CTrectStrokeColor",
        "temp_eb5"
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
        var temp1 = new global::Fuse.Reactive.Data("RespberryPi");
        var temp2 = new global::Fuse.Reactive.Data("CounterPage");
        var temp3 = new global::Fuse.Reactive.JavaScript(__g_nametable);
        var temp4 = new global::Fuse.Controls.Panel();
        ARscreen = new global::Fuse.Controls.Text();
        ARrect = new global::Fuse.Controls.Rectangle();
        ARrectColor = new global::Fuse.Drawing.SolidColor();
        ARrectStroke = new global::Fuse.Drawing.Stroke();
        ARrectStrokeColor = new global::Fuse.Drawing.SolidColor();
        var temp5 = new global::Fuse.Gestures.WhilePressed();
        var temp6 = new global::Fuse.Animations.Scale();
        var temp7 = new global::Fuse.Gestures.Clicked();
        var temp8 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb3 = new global::Fuse.Reactive.EventBinding(temp);
        var temp9 = new global::Fuse.Controls.Panel();
        RespberryPi = new global::Fuse.Controls.Text();
        Pirect = new global::Fuse.Controls.Rectangle();
        PirectColor = new global::Fuse.Drawing.SolidColor();
        PirectStroke = new global::Fuse.Drawing.Stroke();
        PirectStrokeColor = new global::Fuse.Drawing.SolidColor();
        var temp10 = new global::Fuse.Gestures.WhilePressed();
        var temp11 = new global::Fuse.Animations.Scale();
        var temp12 = new global::Fuse.Gestures.Clicked();
        var temp13 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb4 = new global::Fuse.Reactive.EventBinding(temp1);
        var temp14 = new global::Fuse.Controls.Panel();
        Counter = new global::Fuse.Controls.Text();
        CTrect = new global::Fuse.Controls.Rectangle();
        CTrectColor = new global::Fuse.Drawing.SolidColor();
        CTrectStroke = new global::Fuse.Drawing.Stroke();
        CTrectStrokeColor = new global::Fuse.Drawing.SolidColor();
        var temp15 = new global::Fuse.Gestures.WhilePressed();
        var temp16 = new global::Fuse.Animations.Scale();
        var temp17 = new global::Fuse.Gestures.Clicked();
        var temp18 = new global::Fuse.Triggers.Actions.Callback();
        temp_eb5 = new global::Fuse.Reactive.EventBinding(temp2);
        this.SourceLineNumber = 1;
        this.SourceFileName = "Pages/HomePage.ux";
        temp3.LineNumber = 3;
        temp3.FileName = "Pages/HomePage.ux";
        temp3.SourceLineNumber = 3;
        temp3.SourceFileName = "Pages/HomePage.ux";
        temp3.File = new global::Uno.UX.BundleFileSource(import("../../../../../Pages/HomePage.js"));
        temp4.SourceLineNumber = 5;
        temp4.SourceFileName = "Pages/HomePage.ux";
        temp4.Children.Add(ARscreen);
        temp4.Children.Add(ARrect);
        temp4.Children.Add(temp5);
        temp4.Children.Add(temp7);
        ARscreen.Value = "AR Start";
        ARscreen.FontSize = 16f;
        ARscreen.Color = float4(0f, 0.6f, 0f, 1f);
        ARscreen.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        ARscreen.Y = new Uno.UX.Size(170f, Uno.UX.Unit.Unspecified);
        ARscreen.Name = __selector0;
        ARscreen.SourceLineNumber = 6;
        ARscreen.SourceFileName = "Pages/HomePage.ux";
        ARrect.CornerRadius = float4(30f, 30f, 30f, 30f);
        ARrect.Width = new Uno.UX.Size(146f, Uno.UX.Unit.Unspecified);
        ARrect.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        ARrect.Margin = float4(0f, 0f, 0f, 0f);
        ARrect.Y = new Uno.UX.Size(150f, Uno.UX.Unit.Unspecified);
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
        temp5.SourceLineNumber = 15;
        temp5.SourceFileName = "Pages/HomePage.ux";
        temp5.Animators.Add(temp6);
        temp6.Factor = 0.9f;
        temp6.Duration = 0.05;
        temp6.Target = ARscreen;
        temp7.SourceLineNumber = 19;
        temp7.SourceFileName = "Pages/HomePage.ux";
        temp7.Actions.Add(temp8);
        temp7.Bindings.Add(temp_eb3);
        temp8.SourceLineNumber = 20;
        temp8.SourceFileName = "Pages/HomePage.ux";
        temp8.Handler += temp_eb3.OnEvent;
        temp.SourceLineNumber = 20;
        temp.SourceFileName = "Pages/HomePage.ux";
        temp9.SourceLineNumber = 24;
        temp9.SourceFileName = "Pages/HomePage.ux";
        temp9.Children.Add(RespberryPi);
        temp9.Children.Add(Pirect);
        temp9.Children.Add(temp10);
        temp9.Children.Add(temp12);
        RespberryPi.Value = "Sensor";
        RespberryPi.FontSize = 16f;
        RespberryPi.Color = float4(0f, 0.6f, 0f, 1f);
        RespberryPi.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        RespberryPi.Y = new Uno.UX.Size(340f, Uno.UX.Unit.Unspecified);
        RespberryPi.Name = __selector2;
        RespberryPi.SourceLineNumber = 25;
        RespberryPi.SourceFileName = "Pages/HomePage.ux";
        Pirect.CornerRadius = float4(30f, 30f, 30f, 30f);
        Pirect.Width = new Uno.UX.Size(146f, Uno.UX.Unit.Unspecified);
        Pirect.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        Pirect.Y = new Uno.UX.Size(320f, Uno.UX.Unit.Unspecified);
        Pirect.Name = __selector3;
        Pirect.SourceLineNumber = 27;
        Pirect.SourceFileName = "Pages/HomePage.ux";
        Pirect.Fills.Add(PirectColor);
        Pirect.Strokes.Add(PirectStroke);
        PirectColor.Color = float4(1f, 1f, 1f, 1f);
        PirectStroke.Width = 4f;
        PirectStroke.Alignment = Fuse.Drawing.StrokeAlignment.Center;
        PirectStroke.Brush = PirectStrokeColor;
        PirectStrokeColor.Color = float4(0f, 0.6f, 0f, 1f);
        temp10.SourceLineNumber = 34;
        temp10.SourceFileName = "Pages/HomePage.ux";
        temp10.Animators.Add(temp11);
        temp11.Factor = 0.9f;
        temp11.Duration = 0.05;
        temp11.Target = RespberryPi;
        temp12.SourceLineNumber = 38;
        temp12.SourceFileName = "Pages/HomePage.ux";
        temp12.Actions.Add(temp13);
        temp12.Bindings.Add(temp_eb4);
        temp13.SourceLineNumber = 39;
        temp13.SourceFileName = "Pages/HomePage.ux";
        temp13.Handler += temp_eb4.OnEvent;
        temp1.SourceLineNumber = 39;
        temp1.SourceFileName = "Pages/HomePage.ux";
        temp14.SourceLineNumber = 43;
        temp14.SourceFileName = "Pages/HomePage.ux";
        temp14.Children.Add(Counter);
        temp14.Children.Add(CTrect);
        temp14.Children.Add(temp15);
        temp14.Children.Add(temp17);
        Counter.Value = "Counter";
        Counter.FontSize = 16f;
        Counter.Color = float4(0f, 0.6f, 0f, 1f);
        Counter.Alignment = Fuse.Elements.Alignment.HorizontalCenter;
        Counter.Y = new Uno.UX.Size(510f, Uno.UX.Unit.Unspecified);
        Counter.Name = __selector4;
        Counter.SourceLineNumber = 44;
        Counter.SourceFileName = "Pages/HomePage.ux";
        CTrect.CornerRadius = float4(30f, 30f, 30f, 30f);
        CTrect.Width = new Uno.UX.Size(146f, Uno.UX.Unit.Unspecified);
        CTrect.Height = new Uno.UX.Size(56f, Uno.UX.Unit.Unspecified);
        CTrect.Y = new Uno.UX.Size(490f, Uno.UX.Unit.Unspecified);
        CTrect.Name = __selector5;
        CTrect.SourceLineNumber = 46;
        CTrect.SourceFileName = "Pages/HomePage.ux";
        CTrect.Fills.Add(CTrectColor);
        CTrect.Strokes.Add(CTrectStroke);
        CTrectColor.Color = float4(1f, 1f, 1f, 1f);
        CTrectStroke.Width = 4f;
        CTrectStroke.Alignment = Fuse.Drawing.StrokeAlignment.Center;
        CTrectStroke.Brush = CTrectStrokeColor;
        CTrectStrokeColor.Color = float4(0f, 0.6f, 0f, 1f);
        temp15.SourceLineNumber = 53;
        temp15.SourceFileName = "Pages/HomePage.ux";
        temp15.Animators.Add(temp16);
        temp16.Factor = 0.9f;
        temp16.Duration = 0.05;
        temp16.Target = Counter;
        temp17.SourceLineNumber = 57;
        temp17.SourceFileName = "Pages/HomePage.ux";
        temp17.Actions.Add(temp18);
        temp17.Bindings.Add(temp_eb5);
        temp18.SourceLineNumber = 58;
        temp18.SourceFileName = "Pages/HomePage.ux";
        temp18.Handler += temp_eb5.OnEvent;
        temp2.SourceLineNumber = 58;
        temp2.SourceFileName = "Pages/HomePage.ux";
        __g_nametable.This = this;
        __g_nametable.Objects.Add(router);
        __g_nametable.Objects.Add(ARscreen);
        __g_nametable.Objects.Add(ARrect);
        __g_nametable.Objects.Add(ARrectColor);
        __g_nametable.Objects.Add(ARrectStroke);
        __g_nametable.Objects.Add(ARrectStrokeColor);
        __g_nametable.Objects.Add(temp_eb3);
        __g_nametable.Objects.Add(RespberryPi);
        __g_nametable.Objects.Add(Pirect);
        __g_nametable.Objects.Add(PirectColor);
        __g_nametable.Objects.Add(PirectStroke);
        __g_nametable.Objects.Add(PirectStrokeColor);
        __g_nametable.Objects.Add(temp_eb4);
        __g_nametable.Objects.Add(Counter);
        __g_nametable.Objects.Add(CTrect);
        __g_nametable.Objects.Add(CTrectColor);
        __g_nametable.Objects.Add(CTrectStroke);
        __g_nametable.Objects.Add(CTrectStrokeColor);
        __g_nametable.Objects.Add(temp_eb5);
        this.Children.Add(temp3);
        this.Children.Add(temp4);
        this.Children.Add(temp9);
        this.Children.Add(temp14);
    }
    static global::Uno.UX.Selector __selector0 = "ARscreen";
    static global::Uno.UX.Selector __selector1 = "ARrect";
    static global::Uno.UX.Selector __selector2 = "RespberryPi";
    static global::Uno.UX.Selector __selector3 = "Pirect";
    static global::Uno.UX.Selector __selector4 = "Counter";
    static global::Uno.UX.Selector __selector5 = "CTrect";
}
