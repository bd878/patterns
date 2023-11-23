class Dialog : public Widget {
public:
  Dialog(HelpHandler* h, Topic t = NO_HELP_TOPIC);
  virtual void HandleHelp();
  // операции Widget, которые замещает Dialog
};

Dialog::Dialog(HelpHandler* h, Topic t): Widget(0) {
  SetHandler(h, t);
}

void Dialog::HandleHelp() {
  if (HasHelp()) {
    // справка по диаологовому окну
  } else {
    HelpHandler::HandleHelp();
  }
}