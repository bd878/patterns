class FontDialogDirector : public DialogDirector {
public:
  FontDialogDirector();
  virtual ~FontDialogDirector();
  virtual void WidgetChanged(Widget*);

protected:
  virtual void CreateWidgets();

private:
  Button* _ok;
  Button* _cancel;
  ListBox* _fontList;
  EntryField* _fontName;
};

void FontDialogDirector::CreateWidgets() {
  _ok = new Button(this);
  _cancel = new Button(this);
  _fontList = new ListBox(this);
  _fontName = new EntryField(this);
}