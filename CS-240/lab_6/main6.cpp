#include <iostream>
#include "linkedList.h"

using namespace std;

int displayMenu() {
    int response = 0;
    while(response <= 0 || response > 5) {
        cout << "What would you like to do" << endl;
        cout << "1.) Display the list of Books" << endl;
        cout << "2.) Enter a new Book" << endl;
        cout << "3.) Remove last Book " << endl;
        cout << "4.) Clear the list" << endl;
        cout << "5.) Quit" << endl;
        cin >> response; 
    }
    return response;
}

int main() {
    linkedList list;
    int option;

    do {
        option = displayMenu();
        string temp = "";
        switch(option) {
            case 1:
                list.displayList();
                break;
            case 2:
                cout << "Enter Book name: ";
                cin >> 
                list + temp; // operator overload add
                list.displayList();
                break;
            case 3:
                cout << "You are removing the last book" << endl;
                list.removeLast();
                list.displayList();
                break;
            case 4:
                cout << "\nYou've cleared the list\n" << endl;
                list.deleteList();
                break;
            case 5:
                break;
            default: 
                break;
        }
    }while(option != 5);
}