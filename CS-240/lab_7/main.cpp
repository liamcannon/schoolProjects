/*
Author: Liam Cannon
Class : CSI-240
Assignment : Module-08-Lab Assignment 7 - Inheritance - The Basics 
Date Due: 3/25/20

  Description : Introduction to inheritance in classes and implimenting that
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
#include <string>

using namespace std;

enum Discipline
{
    COMPUTER_SCIENCE,
    COMPUTER_SCIENCE_INNOVATION
};
const string DISCIPLINE_STRINGS[2] = {
    "Computer Science", "Computer Science & Innovation"};

class Person
{
protected:
    string name;

public:
    Person()
    {
        name = " ";
        cout << "Person object created using the default Person constructor" << endl;
    }
    Person(string name)
    {
        this->name = name;
        cout << "Person object created using the alternate Person constructor" << endl;
    }
    ~Person()
    {
        cout << "Person object destroyed" << endl;
    }
    string getName()
    {
        return name;
    }
    void setName(string name)
    {
        this->name = name;
    }
};
class Faculty : public Person
{
protected:
    Discipline department;

public:
    Faculty() : Person()
    {
        department = COMPUTER_SCIENCE;
        cout << "Faculty Object created using the default Faculty constructor" << endl;
    }
    Faculty(string name, Discipline department)
    {
        this->name = name;
        this->department = department;
        cout << "Faculty Object created using alternate Faculty Constructor" << endl;
    }
    ~Faculty()
    {
        cout << "Faculty object destroyed" << endl;
    }
    string getDepartment()
    {
        return DISCIPLINE_STRINGS[department];
    }
    void setDepartment(Discipline department)
    {
        this->department = department;
    }
};
class Student : public Person
{
protected:
    Discipline major;

public:
    Student() : Person()
    {
        major = COMPUTER_SCIENCE;
        cout << "Student object created using the default Student constructor" << endl;
    }
    Student(string name, Discipline major)
    {
        this->name = name;
        this->major = major;
        cout << "Student object created using the alternate Student constructor" << endl;
    }
    ~Student()
    {
        cout << "Student object destroyed" << endl;
    }
    string getMajor()
    {
        return DISCIPLINE_STRINGS[major];
    }
    void setMajor(Discipline major)
    {
        this->major = major;
    }
};
int main()
{
    Faculty prof("Christopher DeGuise", COMPUTER_SCIENCE);
    Student stu("Liam Cannon", COMPUTER_SCIENCE);

    cout << endl
         << "I, " << stu.getName() << ", am majoring in " << stu.getMajor() << "." << endl;
    cout << "I am taking CSI 240 with Prof. " << prof.getName() << ", who teaches " << prof.getDepartment() << " courses." << endl
         << endl;
}