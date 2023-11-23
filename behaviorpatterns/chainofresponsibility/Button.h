class Button : public Widget {
public:
  Button(Widget* d, Topic t = NO_HELP_TOPIC);
  virtual void HandleHelp();
  // ... Button замещает операции Widget
};

Button::Button(Widget* h, Topic t) : Widget(h, t) {}

void Button::HandleHelp() {
  if (HasHelp()) {
    // справка по кнопке
  } else {
    HelpHandler::HandleHelp();
  }
}