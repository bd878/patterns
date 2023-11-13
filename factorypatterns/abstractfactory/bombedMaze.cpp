#include "Maze.h"
#include "MazeGame.h"
#include "BombedMazeFactory.h"

Maze* create() {
  MazeGame game;
  BombedMazeFactory factory;

  return game.CreateMaze(factory);
}