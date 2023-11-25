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

  // поместить в список названия шрифтов
  // разместить все виджеты в диалоговом окне
}

void FontDialogDirector::WidgetChanged (
  Widget* theChangedWidget
) {
  if (theChangedWidget == _fontList) {
    _fontName->SetText(_fontList->GetSelection());
  } else if (theChangedWidget == _ok) {
    // изменить шрифт, уничтожить диалоговое окно
  } else if (theChangedWidget == _cancel) {
    // уничтожить диалоговое окно
  }
}