#include "MazeGame.h"
#include "MazePrototypeFactory.h"
#include "Wall.h"
#include "Door.h"
#include "Room.h"

Maze* create() {
  MazeGame game;
  MazePrototypeFactory simpleMazeFactory(
    new Maze, new Wall, new Room, new Door
  );

  return game.CreateMaze(simpleMazeFactory);
}