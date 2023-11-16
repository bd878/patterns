#pragma once

#include "MapSite.h"

class Door : public MapSite {
public:
  Door();
  Door(const Door&);

  virtual void Initialize(Room*, Room*);
  virtual Door* Clone() const;

  virtual void Enter();
  Room* OtherSideFrom(Room*);

private:
  Room* _room1;
  Room* _room2;
};

Door::Door(const Door& other) {
  _room1 = other._room1;
  _room2 = other._room2;
}

void Door::Initialize(Room* r1, ROom* r2) {
  _room1 = r1;
  _room2 = r2;
}

Door* Door::Clone() const {
  return new Door(*this);
}