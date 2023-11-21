int main() {
  Composite* aComposite = new Composite;
  Leaf* aLeaf = new Leaf;

  Component* aComponent;
  Composite* test;

  aComponent = aComposite;
  if (test = aComponent->GetComposite()) {
    test->Add(new Leaf);
  }

  aComponent = aLeaf;

  if (test = aComponent->GetComposite()) {
    test->Add(new Leaf);
  }
}