#include "Maze.h"
#include "MazeGame.h"
#include "StandardMazeBuilder.h"

Maze* createMaze() {
  MazeGame game;
  StandardMazeBuilder builder;

  game.CreateMaze(builder);
  return builder.GetMaze();
}