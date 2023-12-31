class Chassis : public CompositeEquipment {
public:
  Chassis(const char*);
  virtual ~Chassis();

  virtual Watt Power();
  virtual Currency NetPrice();
  virtual Currency DiscountPrice();
};
