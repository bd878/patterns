#pragma once

#include "MazeFactory.h"
#include "RoomWithABomb.h"
#include "BombedWall.h"
#include "Wall.h"
#include "Room.h"

class BombedMazeFactory : public MazeFactory {
public:
  BombedMazeFactory();

  virtual Wall* MakeRoom(int n) const
    { return new RoomWithABomb(n); }
  virtual Room* MakeWall() const
    { return new BombedWall; }
};
