void PrintEmployees(Iterator<Employee*>& i) {
  for (i.First(); !i.IsDone(); i.Next()) {
    i.CurrentItem()->Print();
  }
}

void example() {
  List<Employee*>* employees;

  ListIterator<Employee*> forward(employees);
  ReverseListIterator<Employee*> backward(employees);

  PrintEmployees(forward);
  PrintEmployees(backward);
}

void example2() {
  AbstractList<Employee*>* employees;
  // ...
  Iterator<Employee*>* iterator = employees->CreateIterator();
  PrintEmployees(*iterator);
  delete iterator;
}

void example3() {
  AbstractList<Employee*>* employees;
  // ...
  
  IteratorPtr<Employee*> iterator(employees->CreateIterator());
  PrintEmployees(*iterator);
}

void example4() {
  List<Employee*>* employees;
  // ...
  
  PrintNEmployees pa(employees, 10);
  pa.Traverse();
}