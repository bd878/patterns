class AnalogClock : public Widget, public Observer {
public:
  AnalogClock(ClockTimer*);
  virtual void Update(Subject*);
  virtual void Draw();
};