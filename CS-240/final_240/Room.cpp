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
Room ::Room() {}
Room ::~Room() {}
int Room ::setBed(int numBed)
{
    this->numBed = numBed;
    return numBed;
}
int Room ::getBed()
{
    return numBed;
}
void Room ::setPrice(double pricePerNight)
{
    this->pricePerNight = pricePerNight;
}
double Room ::getPrice()
{
    return pricePerNight;
}
void Room ::changeOcupancy(bool ocupancy)
{
    this->ocupied = ocupancy;
}
void Room ::addAmenities(string amenity)
{
    amenities.push_back(amenity);
}
void Room ::removeAmenities(string amenity)
{
    for (int i = 0; i < amenities.size(); i++)
    {
        if (amenities[i] == amenity)
        {
            amenities.erase(amenities.begin() + i);
        }
    }
}
string Room ::toString(){
    return "";
}
