#pragma once

#include "Maze.h"

class MazeBuilder {
protected:
  MazeBuilder();
public:
  virtual void BuildMaze() {}
  virtual void BuildRoom(int room) {}
  virtual void BuildDoor(int roomFrom, int roomTo) {}

  virtual Maze* GetMaze() { return 0; }
};