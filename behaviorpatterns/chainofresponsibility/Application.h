class Application : public HelpHandler {
public:
  Application(Topic t) : HelpHandler(0, t) {}
  virtual void HandleHelp();
  // операции самого приложения
};

void Application::HandleHelp() {
  // список разделов справки
}