#pragma once

#include "MazeGame.h"
#include "Wall.h"
#include "BombedWall.h"
#include "Room.h"
#include "RoomWithABomb.h"

class BombedMazeGame : public MazeGame {
public:
  BombedMazeGame();

  virtual Wall* MakeWall() const
    { return new BombedWall; }
  virtual Room* MakeRoom(int n) const
    { return new RoomWithABomb(n)l }
};
