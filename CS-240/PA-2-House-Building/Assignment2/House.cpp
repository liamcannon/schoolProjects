/*
Author: Liam Cannon
Class : CSI-240
Assignment : Module-03-Programming-Assignment-2-House Building
Date Due: 2/7/20

  Description : To determine if the rooms can fit in the house, the size of the rooms, the type of room, and if they’re too many of said room
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

#include <sstream>
#include "House.h"

using namespace std;

House::House()
{
	roomCount = 0;
	//stub
}

//return false if room has too low a height, too small an area or the house already is at max for that type of room
bool House::addRoom(const Room &theRoom)
{

	int countOfType = 0, maxCount;
	switch (theRoom.getType())
	{
	case KITCHEN:
		countOfType = getNumKitchens();
		maxCount = MAX_KITCHENS;
		break;
	case BATHROOM:
		countOfType = getNumBathrooms();
		maxCount = MAX_BATHROOMS;
		break;
	case LIVINGROOM:
		countOfType = getNumLivingrooms();
		maxCount = MAX_LIVINGROOMS;
		break;
	case BEDROOM:
		countOfType = getNumBedrooms();
		maxCount = MAX_BEDROOMS;
		break;
	default:
		return false;
	}
	if (theRoom.getHeight() < MIN_HEIGHT || theRoom.getSquareFootage() < MIN_AREA || countOfType >= maxCount)
	{
		return false;
	}
	rooms[roomCount] = theRoom;
	roomCount++;
	return true;
}

int House::getNumBedrooms()
{
	int count = 0;
	for (int i = 0; i < roomCount; i++)
	{
		if (rooms[i].getType() == BEDROOM)
			count++;
	}
	return count;
}

int House::getNumBathrooms()
{
	int count = 0;
	for (int i = 0; i < roomCount; i++)
	{
		if (rooms[i].getType() == BATHROOM)
			count++;
	}
	return count;
}

int House::getNumKitchens()
{
	int count = 0;
	for (int i = 0; i < roomCount; i++)
	{
		if (rooms[i].getType() == KITCHEN)
			count++;
	}
	return count;
}

int House::getNumLivingrooms()
{
	int count = 0;
	for (int i = 0; i < roomCount; i++)
	{
		if (rooms[i].getType() == LIVINGROOM)
			count++;
	}
	return count;
}

int House::getTotalSquareFootage()
{
	int squareFoot = 0;
	for (int i = 0; i < roomCount; i++)
	{
		squareFoot += rooms[i].getSquareFootage();
	}
	return squareFoot;
}

int House::getTotalVolume()
{
	int volume = 0;
	for (int i = 0; i < roomCount; i++)
	{
		volume += rooms[i].getVolume();
	}
	return volume;
}

bool House::isValid()
{
	int kitchenCount = 0;
	int bathroomCount = 0;
	int livingroomCount = 0;
	int bedroomCount = 0;

	for (int i = 0; i < roomCount; i++)
	{
		switch (rooms[i].getType())
		{
		case KITCHEN:
			kitchenCount++;
			break;
		case BATHROOM:
			bathroomCount++;
			break;
		case LIVINGROOM:
			livingroomCount++;
			break;
		case BEDROOM:
			bedroomCount++;
			break;
		default:
			return false;
		}
	}
	if (kitchenCount < MIN_KITCHENS || kitchenCount > MAX_KITCHENS || bathroomCount < MIN_BATHROOMS || bathroomCount > MAX_BATHROOMS || livingroomCount < MIN_LIVINGROOMS || livingroomCount > MAX_LIVINGROOMS || bedroomCount < MIN_BEDROOMS || bedroomCount > MAX_BEDROOMS)
	{
		return false;
	}
	else
	{
		return true;
	}
}

string House::enumerateRooms()
{
	stringstream ss("These are the rooms in the house:\n");

	for(int i = 0; i < roomCount; i++) {
		ss << rooms[i].getDescription() << endl;
	}

	return ss.str();
}

string House::getDescription()
{
	stringstream theStream;

	theStream
		<< "House has:\n"
		<< getNumBedrooms() << " Bedrooms\n"
		<< getNumBathrooms() << " Bathrooms\n"
		<< getNumKitchens() << " Kitchens\n"
		<< getNumLivingrooms() << " Livingrooms\n\n"
		<< getTotalSquareFootage() << " Square feet total\n"
		<< getTotalVolume() << " Cubic feet total volume\n";

	if (isValid())
	{
		theStream << "House is Valid!\n\n";
	}
	else
	{
		theStream << "House is not Valid!\n\n";
	}

	return theStream.str();
}
