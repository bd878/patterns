class Graphic;
// базовый класс графических объектов

class MoveCommand {
public:
  MoveCommand(Graphic* target, const Point& delta);
  void Execute();
  void Unexecute();
private:
  ConstraintSolverMemento* _state;
  Point _delta;
  Graphic* _target;
};

void MoveCommand::Execute() {
  ConstraintSolver* sovler = ConstraintSolver::Instance();
  _state = sovler->CreateMemento(); // создание хранителя
  _target->Move(_delta);
  solver->Solve();
}

void MoveCommand::Unexecute() {
  ConstraintSolver* solver = ConstraintSolver::Instance();
  _target->Move(_delta);
  solver->SetMemento(_state); // восстановление состояния хозяина
  solver->Solve();
}