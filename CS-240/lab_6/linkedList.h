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
#pragma once
#include <iostream>
#include "node.h"

using namespace std;

class LinkedList
{
    Node *head;
    Node *last;

    int size;

public:
    LinkedList();
    ~LinkedList();

    void addNode(Node *node);
    void addBook(string book);
    void removeLast();
    void displayList();
    void deleteList();
    int getSize();
    void operator+(Node *node);
    void operator+(string book);
};
