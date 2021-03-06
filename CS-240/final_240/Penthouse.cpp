/*
Author: Liam Cannon
Class : CSI-240
Assignment : CS-240 FINAL
Date Due: 4/28/20

  Description : Hotel Creation Text based
  Certification of Authenticity :
    I certify that this is entirely my own work, except where I have given
    fully - documented references to the work of others.I understand the
    definitionand consequences of plagiarismand acknowledge that the assessor
    of this assignment may, for the purpose of assessing this assignment :
    -Reproduce this assignmentand provide a copy to another member of
    academic staff;and /or
    -Communicate a copy of this assignment to a plagiarism checking
    service(which may then retain a copy of this assignment on its
      database for the purpose of future plagiarism checking)
*/
#include "rooms.h"

Penthouse ::Penthouse()
{
    pricePerNight = 1000;
    ocupied = false;
    amenities = vector<string>();
    rooms = vector<string>();
}
string Penthouse ::toString(){
    return "[Penthouse]";
}
Penthouse ::~Penthouse() {}