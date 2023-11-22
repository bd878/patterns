class ProgramNode {
public:
  virtual void GetSourcePosition(int& line, int& index);
  // ...


  // манипулирование потомками
  virtual void Add(ProgramNode*);
  virtual void Remove(ProgramNode*);
  // ...

  virtual void Traverse(CodeGenerator&);
protected:
  ProgramNode();
};