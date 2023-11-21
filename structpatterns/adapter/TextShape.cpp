#include "TextShape.h"

void TextShape::BoundingBox(
  Point& bottomLeft, Point& topRight
) const {
  Coord bottom, left, width, height;

  GetOrigin(bottom, left); // from TextView
  GetExtent(width, height); // from TextView

  bottomLeft = Point(bottom, left);
  topRight = Point(bottom + height, left + width);
}

void TextShape::IsEmpty() const {
  return TextView::IsEmpty();
}

Manipulator* TextShape::CreateManipulator() const {
  return new TextManipulator(this);
}