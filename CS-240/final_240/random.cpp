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

using namespace std;

void Hotel::addRandomRooms()
{

    Hotel &hotel = *this;
    cout<<"here(0)\n";
    int floors = hotel.getNumFloor();
    vector<int> tmp;
    cout<<"here(1)\n";
    for (int i = 0; i < floors; i++)
    {
        if (hotel.rooms[i].size() == 0)
        {
            tmp.push_back(i);
        }
    }
    cout<<"here(2)\n";

    if (tmp.size() > 1)
        hotel.roomAdd(tmp[rand() % tmp.size()], new Penthouse);
    Roomtype type;

    cout<<"here(3)\n";

    while (!isFull())
    {
        cout<<type<<endl;

        type = (Roomtype)(rand() % 3);
        bool *checks = checkFloor(type);
        tmp.clear();
        for (int i = 0; i < numFloor; i++)
        {
            if (checks[i])
                tmp.push_back(i);
        }
        //delete[] checks;


if(tmp.size() > 0){
        switch (type)
        {
        case SINGLE:
            hotel.roomAdd(tmp[rand() % tmp.size()], new Single());
            break;
        case DOUBLE:
            hotel.roomAdd(tmp[rand() % tmp.size()], new Double());
            break;
        case SUITE:
            hotel.roomAdd(tmp[rand() % tmp.size()], new Suite(rand() % 2 == 1 ? new Single() : new Double(), rand() % 2 == 1 ? new Double() : new Single()));
            break;
        default:
            break;
        }
}
    }
}
bool Hotel ::isFull()
{
    int temp;
    for (int i = 0; i < numFloor; i++)
    {
        if (rooms[i].size() >= maxRoomsPerFloor)
        {
            temp++;
        }
    }
    return temp >= numFloor;
}