class State;

class Originator {
public:
  Memento* CreateMemento();
  void SetMemento(const Memento*);
  // ...
private:
  State*; _state; // внутренние структуры данных
  // ...
};

class Memento {
public:
  // узкий открытый интерфейс
  virtual ~Memento();
private:
  // закрытые члены доступны только хозяину Originator
  friend class Originator;
  Memento();

  void SetState(State*);
  State* GetState();
  // ...
private:
  State* _state;
  // ...
};