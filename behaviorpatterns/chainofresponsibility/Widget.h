class Widget : public HelpHandler {
protected:
  Widget(Widget* parent, Topic t = NO_HELP_TOPIC);
private:
  Widget* _parent;
};

Widget::Widget(Widget* w, Topic t) : HelpHandler(w, t) {
  _parent = w;
}