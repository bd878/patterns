class ListBOx : public Widget {
public:
  ListBox(DialogDirector*);

  virtual const char* GetSelection();
  virtual void SetList(LIst<char*>* listItems);
  virtual void HandleMouse(MouseEvent& event);
  // ...
};