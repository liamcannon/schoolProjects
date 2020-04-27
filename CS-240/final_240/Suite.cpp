#include "rooms.h"

Suite ::Suite(Room *roomOne, Room *roomTwo)
{
    this->roomOne = roomOne;
    this->roomTwo = roomTwo;
    numBed = roomOne->getBed() + roomTwo->getBed();
    ocupied = false;
    pricePerNight = 200;
    amenities = vector<string>();
}
Suite ::~Suite() {}