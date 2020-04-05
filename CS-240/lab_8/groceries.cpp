#include "groceries.h"

Groceries ::Groceries()
{
    description = " ";
}
Groceries ::Groceries(string description)
{
    this->description = description;
}
Groceries ::~Groceries()
{
}
Vegtables ::Vegtables() : Groceries()
{
    name = " ";
    num = 0;
}
Vegtables ::Vegtables(string description) : Groceries(description)
{
}
Vegtables ::Vegtables(string name, string description, int num)
{
    this->name = name;
    this->description = description;
    this->num = num;
}
Vegtables ::~Vegtables()
{
    cout << "deconstructor" << endl;
}
string Vegtables ::getDescription()
{
    return description;
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
Peppers ::Peppers(string description) : Vegtables(description){};
Peppers ::Peppers(string name, string description, int num) : Vegtables(name, description, num){};
Peppers ::~Peppers(){};


