/*
Author: Liam Cannon
Class : CSI-240
Assignment : Module-09-Lab Assignment 8 - Polymorphism
Date Due: 4/5/20

  Description : Using Polymorphism to create a basket example
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
#include <vector>
#include "groceries.h"

using namespace std;

int main()
{
    
    string temp = " ";
    int tmp = 0;
    vector<Groceries*> basket;

    basket.push_back(new Vegtables("Green beans", "Fresh Green Beans", 1));
    basket.push_back(new Peppers("Cherry Peppers", "Fresh Cherry Peppers", 12));
    
    cout << "The Groceries in my basket are: " << endl;
    for (int i = 0; i < basket.size(); i++)
    {
        temp = basket[i]->getDescription();
        cout << temp << endl;
    }

    for (int j = 0; j < basket.size(); j++)
    {
        delete basket[j];
    }
    
}