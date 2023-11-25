class DigitalClock : public Widget, public Observer {
public:
  DigitalClock(ClockTimer*);
  virtual ~DigitalClock();

  virtual void Update(Subject*);
  // заместить операцию класса Observer
  virtual void Draw();
  // заместить операцию класса Widget
  // определить способ изображения часов
private:
  ClockTimer* _subject;
};

DigitalClock::DigitalClock(ClockTimer* s) {
  _subject = s;
  _subject->Attach(this);
}

DigitalClock::~DigitalClock() {
  _subject->Detach(this);
}

void DigitalClock::Update(Subject* theChangedSubject) {
  if (theChangedSubjet == _subject) {
    Draw();
  }
}

void DigitalClock::Draw() {
  int hour = _subject->GetHour();
  int minute = _subject->GetMinute();
  // итд.

  // нарисовать часы
}
