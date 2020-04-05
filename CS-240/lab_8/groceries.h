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
#pragma once
#include <iostream>

using namespace std;

class Groceries
{
protected:
    string description;
    int num;
public:
    Groceries();
    Groceries(string description);
    virtual ~Groceries();
    virtual string getDescription() = 0;
};
class Vegtables : public Groceries
{
protected:
    string name;
    int num;

public:
    Vegtables();
    Vegtables(string name, string description, int num);
    ~Vegtables();
    virtual string getDescription();
    string getName();
    void setName(string name);
    int getNum();
    void setNum(int num);
};
class Peppers : public Vegtables
{
public:
    Peppers();
    Peppers(string name, string description, int num);
    ~Peppers();
    virtual string getDescription();
    string getName();
    void setName(string name);
    int getNum();
    void setNum();
};