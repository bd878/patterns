void Application::OpenDocument(const char* name) {
  if (!CanOpenDocument(name)) {
    return;
  }

  Document* doc = DoCreateDocument();

  if (doc) {
    _docs->AddDocument(doc);
    AbountToOpenDocument(doc);
    doc->Open();
    doc->DoRead();
  }
}

void DerivedClass::Operation() {
  ParentClass::Operation();
  // расширенное поведение DerivedClass
}

void ParentClass::Operation() {
  // поведение родительского ParentClass
  HookOperation();
}

void ParentClass::HookOperation() {}

void DerivedClass::HookOperation() {
  // расширение в производном классе
}

void View::DoDisplay() {}

void MyView::DoDisplay() {}
