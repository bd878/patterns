void example() {
  Equipment* component;
  InventoryVisitor visitor;

  component->Accept(visitor);
  cout << "Inventory record "
    << component->Name()
    << visitor.GetInventory();
}