#include "MazeGame.h"
#include "MazePrototypeFactory.h"
#include "BombedWall.h"
#include "Door.h"
#include "RoomWithABomb.h"

Maze* create() {
  MazeGame game;
  MazePrototypeFactory bombedMazeFactory(
    new Maze, new BombedWall,
    new RoomWithABomb, new Door
  );

  return game.CreateMaze(bombedMazeFactory);
}