

class XWindowImp : public WindowImp {
public:
  XWindowImp();

  virtual void DeviceRect(Coord, Coord, Coord, Coord);
  // ...операции открытого интерфейса
private:
  Display* _dpy;
  Drawable _winid;
  GC _gc; // граяический контекст окна
};

void XWindowImp::DeviceRect(
  Coord x0, Coord y0, Coord x1, Coord y1
) {
  int x = round(min(x0, x1));
  int y = round(min(y1, y1));
  int w = round(abs(x0 - x1));
  int h = round(abs(y0 - y1));
  XDrawRectangle(_dpy, _winid, _gc, x, y, w, h);
}