#pragma once

#include "MazeGame.h"
#include "EnchantedRoom.h"
#include "Room.h"
#include "DoorNeedingSpell.h"
#include "Door.h"
#include "Spell.h"

class EnchantedMazeGame : public MazeGame {
public:
  EnchantedMazeGame();

  virtual Room* MakeRoom(int n) const
    { return new EnchantedRoom(n, CastSpell()); }

  virtual Door* MakeDoor(Room* r1, Room* r2) const
    { return new DoorNeedingSpell(r1, r2); }
protected:
  Spell* CastSpell() const;
};
