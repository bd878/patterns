class ElementA : public Element {
public:
  ElementA();
  virtual void Accept(Visitor& v) { v.VisitElementA(this); }
};

class ElementB : public Element {
public:
  ElementB();
  virtual void Accept(Visitor& v) { v.VisitElementB(this); }
};