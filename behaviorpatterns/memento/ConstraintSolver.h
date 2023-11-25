class ConstraintSolver {
public:
  static ConstraintSolver* Instance();

  void Solve();
  void AddConstraint(
    Graphic* startConnection, Graphic* endConnection
  );
  void RemoveConstraint(
    Graphic* startConnection, Graphic* endConnection
  );

  ConstraintSolverMemento* CreateMemento();
  void SetMemento(ConstraintSolverMemento*);
private:
  // нетривиальное состояние и операции
  // для поддержки семантики связанности
};

class ConstraintSolverMemento {
public:
  virtual ~ConstraintSolverMemento();
private:
  friend class ConstraintSolver;
  ConstraintSolverMemento();
  // закрытое состояние Solver
};

