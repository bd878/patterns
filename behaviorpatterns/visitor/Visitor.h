class Visitor {
public:
  virtual void VisitElementA(ElementA*);
  virtual void VisitElementB(ElementB*);

  // итд для остальных конкретных элементов
protected:
  Visitor();
};