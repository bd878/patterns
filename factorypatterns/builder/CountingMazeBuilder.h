#pragma once

#include "MazeBuilder.h"

class CountingMazeBuilder : public MazeBuidler {
public:
  CountingMazeBuilder();

  virtual void BuildMaze();
  virtual void BuildRoom(int);
  virtual void BuildDoor(int, int);
  virtual void AddWall(int, Direction);

  void GetCounts(int&, int&) const;
private:
  int _doors;
  int _rooms;
};