#include "rooms.h"
#include <tuple>
const int baseSeparator = 5;
int hotelCreation();

int main()
{
    int temp = 0;
    cout << "Welcome to the Hotel Manager" << endl;
    temp = hotelCreation();

    switch (temp) {
    
        case 1:

        case 2:

        case 3:

        case 4:
            break;
        default:
            break;
    }

}

int hotelCreation() {
    int temp = 0;
    do{
    cout << setw(baseSeparator) << right << "[Hotel Creation Menu]" << endl;
    cout << setw(baseSeparator) << right << "[1. Set Hotel Info]" << endl;
    cout << setw(baseSeparator) << right << "[2. Set Floor Amount]" << endl;
    cout << setw(baseSeparator) << right << "[3. Create a Room]" << endl;
    cout << setw(baseSeparator) << right << "[4. Exit]" << endl;

    cin >> temp;
    }while(temp <= 0 || temp > 4);

    return temp; 
}
void hotelInfo() {
    string name;
    cout << "Enter the Name of your new Hotel" << endl;

}

