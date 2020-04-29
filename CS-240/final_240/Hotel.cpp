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

// Hotel ::Hotel()
// {
//     numFloor = 1;
//     rooms = new vector<Room *>[numFloor]();
//     name = "";
// }
Hotel ::Hotel(int numFloor, string name)
{
    this->numFloor = numFloor;
    this->name = name;
    rooms = new vector<Room *>[numFloor];
    for (int i = 0; i < numFloor; i++)
    {
        rooms[i] = vector<Room *>();
    }
}
void Hotel ::roomAdd(int floor, Penthouse *room)
{
    log("Adding Penthouse to floor " + to_string(floor));
    if (rooms[floor].empty())
    {
        for (int i = 0; i < maxRoomsPerFloor; i++)
        {
            rooms[floor].push_back(room);
        }
    }
    else
    {
        cout << "Floor can't hold penthouse" << endl;
        log("Penthouse Failed");
    }
}
void Hotel ::roomAdd(int floor, Suite *room)
{
    log("Adding Suite to floor " + to_string(floor));
    if (rooms[floor].size() <= maxRoomsPerFloor - 2)
    {
        rooms[floor].push_back(room);
        rooms[floor].push_back(room);
    }
    else
    {
        cout << "Floor can't hold Suite" << endl;
        log("Suite Failed");
    }
}
void Hotel ::roomAdd(int floor, Double *room)
{
    log("Adding Double to floor " + to_string(floor));
    if (rooms[floor].size() <= maxRoomsPerFloor - 1)
    {
        rooms[floor].push_back(room);
    }
    else
    {
        cout << "Floor is full" << endl;
        log("Room Failed");
    }
}
void Hotel ::roomAdd(int floor, Single *room)
{
    log("Adding Single to floor " + to_string(floor));
    if (rooms[floor].size() <= maxRoomsPerFloor - 1)
    {
        rooms[floor].push_back(room);
    }
    else
    {

        cout << "Floor is full" << endl;
        log("Room Failed on floor " + to_string(floor));
        log("floor size: " + to_string(rooms[floor].size()));
    }
}
bool *Hotel ::checkFloor(Roomtype type)
{
    bool *availFloors = new bool[numFloor];
    int temp = 0;
    for (int i = 0; i < numFloor; i++)
    {
        if (type == PENTHOUSE)
        {
            if (rooms[i].size() > 0)
                availFloors[i] = false;
            else
                availFloors[i] = true;
            continue;
        }
        if ((rooms[i].size() + ((type == SUITE) ? 2 : 1)) <= maxRoomsPerFloor)
        {
            availFloors[i] = true;
        }
        else
        {
            availFloors[i] = false;
        }
    }
    return availFloors;
}
string Hotel ::getName()
{
    return name;
}
int Hotel ::getNumFloor()
{
    return numFloor;
}
void Hotel ::roomRemove(int floor, int roomNum)
{
    rooms[floor].erase(rooms[floor].begin() + roomNum);
}
Hotel &Hotel ::operator+(tuple<int, Room &> tup)
{
    //roomAdd(get<0>(tup), get<1>(tup));
    return *this;
}
Hotel &Hotel::operator-(std::tuple<int, int> tup)
{
    roomRemove(get<0>(tup), get<1>(tup));
    return *this;
}
ostream &operator<<(ostream &stream, Hotel &hotel)
{
    int temp = 0;
    for (int i = 0; i < hotel.getNumFloor(); i++)
    {
        for (int j = 0; j < hotel.rooms[i].size(); j++)
        {
            temp++;
            stream << hotel.rooms[i][j]->toString();
            // if (temp >= 6)
            // {
            //     stream << endl;
            //     temp = 0;
            // }
        }
        stream << endl;
    }
    return stream;
}
Hotel ::~Hotel()
{
    delete[] rooms;
}
