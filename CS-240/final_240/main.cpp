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
#include <tuple>
#include <random>

const int BASESEPARATOR = 5;
int hotelCreation();
void hotelInfo();
void createRoom();

void printBoolArr(bool *arr, int size);

Hotel *hotel;

int main()
{
    logProgStart();
    srand(time(NULL));
    int temp = 0;
    cout << "Welcome to the Hotel Manager" << endl;
    while (temp != 5)
    {
        temp = hotelCreation();
        switch (temp)
        {
        case 1:
            hotelInfo();
            cout << "Welcome to " << hotel->getName() << endl;
            break;
        case 2:
            createRoom();
            break;
        case 3:
            cout << *hotel;
            break;
        case 4:
            cout <<" here line "<< endl;
            hotel->addRandomRooms();
            break;
        case 5:
            break;
        default:
            break;
        }
    }
}

int hotelCreation()
{
    int temp = 0;
    do
    {
        cout << endl;
        cout << setw(BASESEPARATOR) << right << "[Hotel Creation Menu]" << endl;
        cout << setw(BASESEPARATOR) << right << "[1. Set Hotel Name]" << endl;
        cout << setw(BASESEPARATOR) << right << "[2. Create a Room]" << endl;
        cout << setw(BASESEPARATOR) << right << "[3. View Hotel]" << endl;
        cout << setw(BASESEPARATOR) << right << "[4. Randomly Populate the Hotel]" << endl;
        cout << setw(BASESEPARATOR) << right << "[5. Exit]" << endl;

        cin >> temp;
        cin.ignore(INT_MAX, '\n');
        cout << endl;
    } while (temp <= 0 || temp > 6);

    return temp;
}
void hotelInfo()
{
    string name;
    int floors;
    cout << "Enter the Name of your new Hotel" << endl;
    getline(cin, name);
    cout << "Enter the Number of Floors for the Hotel" << endl;
    cin >> floors;
    cin.ignore(INT_MAX, '\n');
    cout << endl;
    hotel = new Hotel(floors, name);
}
void createRoom()
{
    int roomName;
    int floorChoice;
    bool *quz;
    cout << "What Kind of Room would you like to create" << endl;
    cout << "There are 4 Different types of Rooms" << endl;
    cout << "1.) Single" << endl
         << "2.) Double " << endl
         << "3.) Suite" << endl
         << "4.) Penthouse" << endl;
    cin >> roomName;
    cin.ignore(INT_MAX, '\n');
    cout << endl;
    switch (roomName)
    {
    case 1:
        quz = hotel->checkFloor(SINGLE);
        printBoolArr(quz, hotel->getNumFloor());
        cout << "These are the available floors for the selected roomtype" << endl;
        cout << "Pick a floor" << endl;
        cin >> floorChoice;
        cin.ignore(INT_MAX, '\n');
        hotel->roomAdd(floorChoice, new Single());
        break;
    case 2:
        quz = hotel->checkFloor(DOUBLE);
        printBoolArr(quz, hotel->getNumFloor());
        cout << hotel->checkFloor(DOUBLE) << endl;
        cout << "These are the available floors for the selected roomtype" << endl;
        cout << "Pick a floor" << endl;
        cin >> floorChoice;
        cin.ignore(INT_MAX, '\n');
        hotel->roomAdd(floorChoice, new Double());
        break;
    case 3:
        int temp;
        quz = hotel->checkFloor(SUITE);
        printBoolArr(quz, hotel->getNumFloor());
        cout << "These are the available floors for the selected roomtype" << endl;
        cout << "Pick a floor" << endl;
        cin >> floorChoice;
        cin.ignore(INT_MAX, '\n');
        hotel->roomAdd(floorChoice, new Suite(rand() % 2 == 1 ? new Single() : new Double(), rand() % 2 == 1 ? new Double() : new Single()));
        break;
    case 4:
        quz = hotel->checkFloor(PENTHOUSE);
        printBoolArr(quz, hotel->getNumFloor());
        cout << "These are the available floors for the selected roomtype" << endl;
        cout << "Pick a floor" << endl;
        cin >> floorChoice;
        cin.ignore(INT_MAX, '\n');
        hotel->roomAdd(floorChoice, new Penthouse());
        break;
    default:
        break;
    }
    delete[] quz;
}

void printBoolArr(bool *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i << ": ";
        if (arr[i])
            cout << "Available";
        else
            cout << "Unavailable";
        cout << endl;
    }
}