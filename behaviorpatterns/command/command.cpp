void command() {
  MyClass* receiver = new MyClass;
  Command* aCommand =
    new SimpleCommand<MyClass>(receiver, &MyClass::Action);

  aCommand->Execute();
}