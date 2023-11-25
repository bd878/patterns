void example() {
  ClockTimer* timer = new ClockTimer;
  AnalogClock* analogClock = new AnalogClock(timer);
  DigitalClock* digitalClock = new DigitalClock(timer);
}