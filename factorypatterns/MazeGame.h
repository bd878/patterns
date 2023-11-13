#pragma once

#include "Maze.h"

enum Direction {North, South, East, West};

class MazeGame {
public:
  Maze* CreateMaze();
};
