/*
Author: Liam Cannon
Class : CSI-240
Assignment : Module-07-Lab Assignment 6 - Linked List
Date Due: 3/25/20

  Description : Working with linked lists to add, remove, clear, and display a list
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

#include <iostream>
#include "linkedList.h"

using namespace std;

int displayMenu()
{
    int response = 0;
    while (response <= 0 || response > 5)
    {
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
int main()
{
    LinkedList list;
    int option;
    do
    {
        option = displayMenu();
        string temp = " ";
        switch (option)
        {
        case 1:
            list.displayList();
            break;
        case 2:
            cout << "Enter Book name: ";
            cin.ignore();
            getline(cin, temp);
            list + temp; // operator overload add
            list.displayList();
            break;
        case 3:
            cout << "You are removing the last book" << endl;
            list.removeLast();
            list.displayList();
            break;
        case 4:
            cout << "\nYou've cleared the list\n"
                 << endl;
            list.deleteList();
            break;
        case 5:
            break;
        default:
            break;
        }
    } while (option != 5);
}