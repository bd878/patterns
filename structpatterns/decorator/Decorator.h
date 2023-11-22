class Decorator : public VisualComponent {
public:
  Decorator(VisualComponent*);

  virtual void Draw();
  virtual void Resize();
  // ...
private:
  VisualComponent* _component;
};

void Decorator::Draw() {
  _component->Draw();
}

void Decorator::Resize() {
  _component->Resize();
}
