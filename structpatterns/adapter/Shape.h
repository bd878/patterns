#pragma once

class Shape {
public:
  Shape();
  virtual void BoundingBox(
    Point& bottomLeft, Point& topRight
  ) const;
  virtual Manipulator* CreateManipulator() const;
};
