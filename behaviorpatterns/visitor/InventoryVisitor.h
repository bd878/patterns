class InventoryVisitor : public EquipmentVisitor {
public:
  InventoryVisitor();

  Inventory& GetInventory();

  virtual void VisitFloppyDisk(FloppyDisk*);
  virtual void VisitCard(Card*);
  virtual void VisitChassis(Chassis*);
  virtual void VisitBus(Bus*);
  // ...

private:
  Inventory _inventory;
};

void InventoryVisitor::VisitFloppyDisk(FloppyDisk* e) {
  _inventory.Accumulate(e);
}

void InventoryVisitor::VisitChassis(Chassis* e) {
  _inventory.Accumulate(e);
}