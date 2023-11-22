// фасад
class Compiler {
public:
  Compiler();

  virtual void Compile(istream& BytecodeStream&);
};