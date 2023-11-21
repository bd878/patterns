void Window::SetContents(VisualComponent* contents) {
  // ...
}

void create() {
  Window* window = new Window;
  TextView* textView = new TextView;

  window->SetContents(
    new BorderDecorator(
      new ScrollDecorator(textView), 1
    )
  );
}