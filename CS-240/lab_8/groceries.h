#pragma once
#include <iostream>

using namespace std;

class Groceries
{
protected:
    string description;

public:
    Groceries();
    Groceries(string description);
    ~Groceries();
    virtual string getDescription() = 0;
};
class Vegtables : public Groceries
{
protected:
    string name;
    int num;
public:
    Vegtables();
    Vegtables(string description);
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
    Peppers(string description);
    Peppers(string name, string description, int num);
    ~Peppers();
    virtual string getDescription();
    string getName();
    void setName(string name);
    int getNum();
    void setNum();
};