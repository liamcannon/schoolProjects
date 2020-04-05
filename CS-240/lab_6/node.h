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

using namespace std;

struct Node
{
    string book;
    Node *next;
    Node *parent;

    Node(string book, Node *last = nullptr, Node *next = nullptr);
    ~Node();
};