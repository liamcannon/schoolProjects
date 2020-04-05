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
#include "groceries.h"

Groceries ::Groceries()
{
    description = "";
    num = 0;
}
Groceries ::Groceries(string description)
{
    this->description = description;
}
Groceries ::~Groceries()
{
}

Vegtables ::Vegtables()
{
    description = "";
    name = "";
    num = 0;
}
Vegtables ::Vegtables(string name, string description, int num)
{
    this->name = name;
    this->description = description;
    this->num = num;
}
Vegtables ::~Vegtables()
{
}
string Vegtables ::getDescription()
{
    return description + ", Count: " + to_string(num);
}
string Vegtables ::getName()
{
    return name;
}
void Vegtables ::setName(string name)
{
    this->name = name;
}
int Vegtables ::getNum()
{
    return num;
}
void Vegtables ::setNum(int num)
{
    this->num = num;
}

Peppers ::Peppers() : Vegtables(){};
Peppers ::Peppers(string name, string description, int num) : Vegtables(name, description, num){};
Peppers ::~Peppers()
{
}
string Peppers ::getDescription() {
    return description + ", Count: " + to_string(num);
}
