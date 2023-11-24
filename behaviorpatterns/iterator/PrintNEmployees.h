class PrintNEmployees : public ListTraverse<Employee*> {
public:
  PrintNEmployees(List<Employee*>* aList, int n) :
    ListTraverser<Employee*>(aList),
    _total(n), _count(0) {}

protected:
  bool ProcessItem(Employee* const&);
private:
  int _total;
  int _count;
};

bool PrintNEmployees::ProcessItem(Employee* const& e) {
  _count++;
  e->Print();
  return _count < _total;
}