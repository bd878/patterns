class EntryField : public Widget {
public:
  EntryField(DialogDirector*);

  virtual void SetText(const char* text);
  virtual const char* GetText();
  virtual void HandleMouse(MouseEvent& event);
};
