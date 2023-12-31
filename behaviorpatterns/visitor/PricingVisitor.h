class PricingVisitor : public EquipmentVisitor {
public:
  PricingVisitor();

  Currency& GetTotalPrice();

  virtual void VisitFloppyDisk(FloppyDisk*);
  virtual void VisitCard(Card*);
  virtual void VisitChassis(Chassis*);
  virtual void VisitBus(Bus*);
  // ...
private:
  Currency _total;
};

void PricingVisitor::VisitFloppyDisk(FloppyDisk* e) {
  _total += e->NetPrice();
}

void PricingVisitor::VisitChassis(Chassis* e) {
  _total += e->DiscountPrice();
}