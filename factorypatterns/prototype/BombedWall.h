#pragma once

#include "Wall.h"

class BombedWall : public Wall {
public:
  BombedWall();
  BombedWall(const BombedWall&);

  virtual Wall* Clone() const;
  bool HasBomb();
private:
  bool _bomb;
};

BombedWall::BombedWall(const BombedWall& other) : Wall(other) {
  _bomb = other._bomb;
}

Wall* BombedWall::Clone() const {
  return new BombedWall(*this);
}