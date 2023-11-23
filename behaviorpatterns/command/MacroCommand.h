class MacroCommand : public Command {
public:
  MacroCommand();
  virtual ~MacroCommand();
  virtual void Add(Command*);
  virtual void Remove(Command*);
  virtual void Execute();
private:
  List<Command*>* _cmds;
};

void MacroCommand::Execute() {
  ListIterator<Command*> i(_cmds);
  for (i.First(); !i.IsDone(); i.Next()) {
    Command* c = i.CurrentItem();
    c->Execute();
  }
}

void MacroComand::Add(COmmand* c) {
  _cmds->Append(c);
}

void MacroComand::Remove(Command* c) {
  _cmds->Remove(c);
}