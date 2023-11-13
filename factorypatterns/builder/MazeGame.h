#pragma once

#include "Maze.h"
#include "MazeBuilder.h"

enum Direction {North, South, East, West};

class MazeGame {
public:
  Maze* CreateMaze(MazeBuilder&);
  Maze* CreateComplexMaze(MazeBuilder&);
};
