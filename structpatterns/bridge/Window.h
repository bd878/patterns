#pragma once

class Window {
public:
  Window(View* contents);

  // window own requests
  virtual void DrawContents();

  virtual void Open();
  virtual void Close();
  virtual void Iconify();
  virtual void Deiconify();

  // implementation-redirected requests
  virtual void SetOrigin(const Point& at);
  virtual void SetExtent(const Point& extent);
  virtual void Raise();
  virtual void Lower();

  virtual void DrawLine(const Point&, const Point&);
  virtual void DrawRect(const Point&, const Point&);
  virtual void DrawPolygon(const Point[], int h);
  virtual void DrawText(const char*, const Point&);

protected:
  WindowImp* GetWindowImp();
  View* GetView();

private:
  WindowImp* _imp;
  View* _contents;
};

void Window::DrawRect(const Point& p1, const Point& p2) {
  WindowImp* imp = GetWindowImp();
  imp->DeviceRect(p1.X(), p1.Y(), p2.X(), p2.Y());
}

WindowImp* Window::GetWindowImp() {
  if (_imp == 0) {
    _imp = WindowSystemFactory::Instance()->MakeWindowImp();
  }
  return _imp;
}