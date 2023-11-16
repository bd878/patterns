#pragma once

#include "Wall.h"
#include "Door.h"
#include "Room.h"

class MazeGame {
public:
  Maze* CreateMaze();

  virtual Maze* MakeMaze() const
    { return new Maze; }
  virtual Room* MakeRoom(int n) const
    { return new Room(n); }
  virtual Wall* MakeWall() const
    { return new Wall; }
  virtual Door* MakeDoor(Room* r1, Room* r2) const
    { return new Door(r1, r2); }
};