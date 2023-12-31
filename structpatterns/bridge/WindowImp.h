#pragma once

class WindowImp {
public:
  virtual void ImpTop() = 0;
  virtual void ImpBottom() = 0;
  virtual void ImpSetExtent(const Point&) = 0;
  virtual void ImpSetOrigin(const Point&) = 0;

  virtual void DeviceRect(Coord, Coord, Coord, Coord) = 0;
  virtual void DeviceText(const char*, Coord, Coord) = 0;
  virtual void DeviceBitmap(const char*, Coord, Coord) = 0;
  // ...другие
protected:
  WindowImp();
};