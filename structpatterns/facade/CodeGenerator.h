class CodeGenerator {
public:
  virtual void Visit(StatementNode*);
  virtual void Visit(ExpressionNode*);
  // ...
protected:
  CodeGenerator(BytecodeStream&);
protected:
  BytecodeStream& _output;
};