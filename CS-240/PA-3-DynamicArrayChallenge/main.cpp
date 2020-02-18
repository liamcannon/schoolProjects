/*
Author: Liam Cannon
Class : CSI-240
Assignment : Module-05-Programming Assignment 3 - Dynamic Array Challenge
Date Due: 2/18/20

  Description : To gather data from a document and put it into an array using classes and dynamic arrays
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

#include "functions.h"


int main() {
    string fileName;

    cout << "Enter File Name: ";

    cin >> fileName;

    DynamicArray dArray(fileName);
    dArray.fillArrayFile(fileName);
    cout << dArray.displayInfo();

}

