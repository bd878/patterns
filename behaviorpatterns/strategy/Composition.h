class Composition {
public:
  Composition(Compositor*);
  void Repair();
private:
  Compositor* _compositor;
  Component* _components;
  int _componentCount;
  int _lineWidth;
  int* _lineBreaks;

  int _lineCount;
};

void Composition::Repair() {
  Coord* natural;
  Coord* stretchability;
  Coord* shrinkability;
  int componentCount;
  int* breaks;
  // подготовить массивы с характеристиками компонентов
  // ...
  // определить, где должны быть точки разрыва
  int breakCount;
  breakCount = _compositor->Compose(
    natural, stretchability, shrinkability,
    componentCount, _lineWidth, breaks
  );
  // разместить компоненты с учётом точек разрыва
  // ...
}
