sealed class AR_example_accessor_countButton_Text: global::Uno.UX.PropertyAccessor
{
    public static global::Uno.UX.PropertyAccessor Singleton = new AR_example_accessor_countButton_Text();
    public override global::Uno.UX.Selector Name { get { return _name; } }
    static global::Uno.UX.Selector _name = "Text";
    public override global::Uno.Type PropertyType { get { return typeof(string); } }
    public override object GetAsObject(global::Uno.UX.PropertyObject obj) { return ((global::countButton)obj).Text; }
    public override void SetAsObject(global::Uno.UX.PropertyObject obj, object v, global::Uno.UX.IPropertyListener origin) { ((global::countButton)obj).SetText((string)v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class AR_example_FuseControlsTextControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextControl _obj;
    public AR_example_FuseControlsTextControl_Value_Property(Fuse.Controls.TextControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
sealed class AR_example_FuseControlsTextInputControl_Value_Property: Uno.UX.Property<string>
{
    [Uno.WeakReference] readonly Fuse.Controls.TextInputControl _obj;
    public AR_example_FuseControlsTextInputControl_Value_Property(Fuse.Controls.TextInputControl obj, global::Uno.UX.Selector name) : base(name) { _obj = obj; }
    public override global::Uno.UX.PropertyObject Object { get { return _obj; } }
    public override string Get(global::Uno.UX.PropertyObject obj) { return ((Fuse.Controls.TextInputControl)obj).Value; }
    public override void Set(global::Uno.UX.PropertyObject obj, string v, global::Uno.UX.IPropertyListener origin) { ((Fuse.Controls.TextInputControl)obj).SetValue(v, origin); }
    public override bool SupportsOriginSetter { get { return true; } }
}
