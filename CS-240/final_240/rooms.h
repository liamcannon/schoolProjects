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

#ifndef ROOMS_H
#define ROOMS_H

#include <tuple>
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <ostream>
#include "log.h"

using namespace std;

enum Roomtype
{
    SINGLE,
    DOUBLE,
    SUITE,
    PENTHOUSE
};

const string ROOMTYPE_STRINGS[4] = {
    "Single",
    "Double",
    "Suite",
    "Penthouse"};

class Room
{
protected:
    Roomtype type;
    int numBed;
    bool ocupied;
    double pricePerNight;
    vector<string> amenities;

public:
    Room();
    virtual ~Room();
    int setBed(int numBed);
    int getBed();
    void setPrice(double pricePerNight);
    double getPrice();
    void changeOcupancy(bool ocupancy);
    void addAmenities(string amenity);
    void removeAmenities(string amenity);
    virtual string toString();
};
class Single : public Room
{
protected:
public:
    Single();
    ~Single();
    virtual string toString();
};
class Double : public Single
{
protected:
public:
    Double();
    ~Double();
    string toString();

};
class Suite : public Room
{
protected:
    Room *roomOne;
    Room *roomTwo;

public:
    Suite(Room *room, Room *roomTwo);
    ~Suite();
    string toString();

};
class Penthouse : public Room
{
protected:
    vector<string> rooms;

public:
    Penthouse();
    ~Penthouse();
    string toString();

};
class Hotel
{
private:
    int numFloor;
    static const int maxRoomsPerFloor = 6;
    string name;
    vector<Room *> *rooms;

public:
    // Hotel();
    Hotel(int numFloor, string name);


    void roomAdd(int floor, Penthouse *room);
    void roomAdd(int floor, Suite *room);
    void roomAdd(int floor, Double *room);
    void roomAdd(int floor, Single *room);
    void roomRemove(int floor, int roomNum);
    void addRandomRooms();
    bool *checkFloor(Roomtype type);
    bool isFull();
    int getNumFloor();

    string getName();
    Hotel &operator+(tuple<int, Room &> tup);
    Hotel &operator-(std::tuple<int, int> tup);
    ~Hotel();
    friend ostream &operator<<(ostream &stream, Hotel &hotel);
};

#endif