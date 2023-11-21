#pragma once

#include "Shape.h"
#include "TextView.h"

// Shape - интерфейс, TextView - реализация
class TextShape : public Shape, private TextView {
public:
  TextShape();

  virtual void BoundingBox(
    Point& bottomLeft, Point& topRight
  ) const;
  virtual bool IsEmpty() const;
  virtual Manipulator* CreateManipulator() const;
};