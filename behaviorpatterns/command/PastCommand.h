class PasteCommand : public Command {
public:
  PasteCommand(Document*);
  virtual void Execute();
private:
  Document* _document;
};

PasteCommand::PasteCommand(Document* doc) {
  _document = doc;
}

void PasteCommand::Execute() {
  _document->Paste();
}