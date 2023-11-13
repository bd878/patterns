#include <iostream>

#include "CountingMazeBuilder.h"
#include "MazeGame.h"

void countMaze() {
  int rooms, doors;
  MazeGame game;
  CountingMazeBuilder builder;

  game.CreateMaze(builder);
  builder.GetCounts(rooms, doors);

  std::cout << "Gibt es im labirinth "
    << rooms << " Zimmers  und "
    << doors << " Turen" << std::endl;
}