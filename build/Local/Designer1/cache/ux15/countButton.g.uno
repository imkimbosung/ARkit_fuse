[Uno.Compiler.UxGenerated]
public partial class countButton: Fuse.Controls.Panel
{
    string _field_Text;
    [global::Uno.UX.UXOriginSetter("SetText")]
    public string Text
    {
        get { return _field_Text; }
        set { SetText(value, null); }
    }
    public void SetText(string value, global::Uno.UX.IPropertyListener origin)
    {
        if (value != _field_Text)
        {
            _field_Text = value;
            OnPropertyChanged("Text", origin);
        }
    }
    global::Uno.UX.Property<string> temp_Value_inst;
    global::Uno.UX.Property<float4> this_Color_inst;
    static countButton()
    {
    }
    [global::Uno.UX.UXConstructor]
    public countButton()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        var temp1 = new global::Fuse.Reactive.Constant(this);
        var temp = new global::Fuse.Controls.Text();
        temp_Value_inst = new AR_example_FuseControlsTextControl_Value_Property(temp, __selector0);
        var temp2 = new global::Fuse.Reactive.Property(temp1, AR_example_accessor_countButton_Text.Singleton);
        this_Color_inst = new AR_example_FuseControlsPanel_Color_Property(this, __selector1);
        var temp3 = new global::Fuse.Reactive.DataBinding(temp_Value_inst, temp2, Fuse.Reactive.BindingMode.Read);
        var temp4 = new global::Fuse.Gestures.WhilePressed();
        var temp5 = new global::Fuse.Animations.Change<float4>(this_Color_inst);
        this.Color = float4(0.1333333f, 0.3333333f, 0.6666667f, 1f);
        this.HitTestMode = Fuse.Elements.HitTestMode.LocalBounds;
        this.Height = new Uno.UX.Size(50f, Uno.UX.Unit.Unspecified);
        this.Alignment = Fuse.Elements.Alignment.BottomCenter;
        this.Margin = float4(4f, 4f, 4f, 4f);
        this.SourceLineNumber = 10;
        this.SourceFileName = "Pages/CounterPage.ux";
        temp.Color = float4(1f, 1f, 1f, 1f);
        temp.Alignment = Fuse.Elements.Alignment.Center;
        temp.Margin = float4(30f, 15f, 30f, 15f);
        temp.SourceLineNumber = 12;
        temp.SourceFileName = "Pages/CounterPage.ux";
        temp.Bindings.Add(temp3);
        temp2.SourceLineNumber = 12;
        temp2.SourceFileName = "Pages/CounterPage.ux";
        temp1.SourceLineNumber = 12;
        temp1.SourceFileName = "Pages/CounterPage.ux";
        temp4.SourceLineNumber = 14;
        temp4.SourceFileName = "Pages/CounterPage.ux";
        temp4.Animators.Add(temp5);
        temp5.Value = float4(0.06666667f, 0.2f, 0.5333334f, 1f);
        temp5.Duration = 0.05;
        temp5.DurationBack = 0.2;
        this.Children.Add(temp);
        this.Children.Add(temp4);
    }
    static global::Uno.UX.Selector __selector0 = "Value";
    static global::Uno.UX.Selector __selector1 = "Color";
}
