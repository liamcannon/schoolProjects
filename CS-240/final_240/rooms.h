#ifndef ROOMS_H
#define ROOMS_H

#include <tuple>

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include "log.h"

using namespace std;

class Room{
    protected:
        int numBed;
        bool ocupied;
        double pricePerNight;
        vector<string> amenities;
    public:
        Room();
        virtual ~Room();
        int setBed(int numBed);
        int getBed();
        double setPrice(double pricePerNight);
        double getPrice();
        void changeOcupancy(bool ocupancy);
        void addAmenities(string amenity);
        void removeAmenities(string amenity);
};
class Single : public Room {
    protected:
    public:
        Single();
        ~Single();
};
class Double : public Single {
    protected:
    public:
        Double();
        ~Double();
};
class Suite : public Room {
    protected:
        Room* roomOne;
        Room * roomTwo;
    public:
        Suite(Room* room, Room* roomTwo);
        ~Suite();
};
class Penthouse : public Room {
    protected:
        vector<string> rooms;
    public:
        Penthouse();
        ~Penthouse();
};
class Hotel {
    private:
        int numFloor;
        static const int maxRoomsPerFloor = 6;
        string description;
        vector<Room*>* rooms;
    public:
        Hotel();
        Hotel(int numFloor, string description);
        void roomAdd(int floor, Penthouse& room);
        void roomAdd(int floor, Suite& room);
        void roomAdd(int floor, Room& room);
        void roomRemove(int floor, int roomNum);
        Hotel operator+ (tuple<int, Room&> tup);
        Hotel  operator- (std::tuple<int, int> tup);
        ~Hotel();
};

#endif