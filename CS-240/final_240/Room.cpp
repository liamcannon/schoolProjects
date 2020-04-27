#include "rooms.h"

int Room ::setBed(int numBed)
{
    this->numBed = numBed;
    return numBed;
}
int Room ::getBed()
{
    return numBed;
}
double Room ::setPrice(double pricePerNight)
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