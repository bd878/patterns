#pragma once

#include "Maze.h"
#include "MazeFactory.h"

enum Direction {North, South, East, West};

class MazeGame {
public:
  Maze* CreateMaze(MazeFactory&);
};
