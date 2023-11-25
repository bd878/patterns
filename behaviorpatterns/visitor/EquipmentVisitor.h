class EquipmentVisitor {
public:
  virtual ~EquipmentVisitor();

  virtual void VisitFloppyDisk(FloppyDisk*);
  virtual void VisitCard(Card*);
  virtual void VisitChassis(Chassis*);
  virtual void VisitBus(Bus*);

  // итд для всех конкретных подклассов Equipment
protected:
  EquipmentVisitor();
};

void FloppyDisk::Accept(EquipmentVisitor& visitor) {
  visitor.VisitFloppyDisk(this);
}

void Chassis::Accept(EquipmentVisitor& visitor) {
  for (
    ListITerator<Equipment*> i(_parts);
    !i.IsDone();
    i.Next()
  ) {
    i.CurrentItem()->Accept(visitor);
  }
  visitor.VisitChassis(this);
}