#pragma once

class IconWindow : public Window {
public:
  // ...
  virtual void DrawContents();
private:
  const char* _bitmapName;
};

void IconWindow::DrawContents() {
  WindowImp* imp = GetWindowImp();
  if (imp != 0) {
    imp->DeviceBitmap(_bitmapName, 0.0, 0.0);
  }
}