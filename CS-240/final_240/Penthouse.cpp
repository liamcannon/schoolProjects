#include "rooms.h"

Penthouse ::Penthouse()
{
    pricePerNight = 1000;
    ocupied = false;
    amenities = vector<string>();
    rooms = vector<string>();
}
Penthouse ::~Penthouse() {}