#include "rooms.h"

using namespace std;

Hotel ::Hotel()
{
    numFloor = 1;
    rooms = new vector<Room *>[numFloor];
}
Hotel ::Hotel(int numFloor, string description)
{
    this->numFloor = numFloor;
    this->description = description;
    rooms = new vector<Room *>[numFloor];
}
void Hotel ::roomAdd(int floor, Penthouse &room)
{
    log("Adding Penthouse");
    if (rooms[floor].empty())
    {
        rooms[floor].push_back(&room);
    }
    else
    {
        cout << "Floor can't hold penthouse" << endl;
        log("Penthouse Failed");
    }
}
void Hotel ::roomAdd(int floor, Suite &room)
{
    log("Adding Suite");
    if (rooms[floor].size() <= maxRoomsPerFloor - 2)
    {
        rooms[floor].push_back(&room);
    }
    else
    {
        cout << "Floor can't hold Suite" << endl;
        log("Suite Failed");
    }
}
void Hotel ::roomAdd(int floor, Room &room)
{
    log("Adding Room");
    if (rooms[floor].size() <= maxRoomsPerFloor - 1)
    {
        rooms[floor].push_back(&room);
    }
    else
    {
        cout << "Floor is full" << endl;
        log("Room Failed");
    }
}
void Hotel ::roomRemove(int floor, int roomNum)
{
    rooms[floor].erase(rooms[floor].begin() + roomNum);
}
Hotel Hotel ::operator+(tuple<int, Room &> tup)
{
    roomAdd(get<0>(tup), get<1>(tup));
}
Hotel Hotel::operator-(std::tuple<int, int> tup)
{
    roomRemove(get<0>(tup), get<1>(tup));
}
Hotel ::~Hotel()
{
    delete[] rooms;
}