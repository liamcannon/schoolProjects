#pragma once
#include <iostream>
#include "node.h"

using namespace std;

class LinkedList {
    Node* head;
    Node* last;

    int size;

    public:
        LinkedList();
        ~LinkedList();

        void addNode(Node* node);
        void addBook(string book);
        void removeLast();
        void displayList();
        void deleteList();
        int getSize();
        void operator+(Node* node);
        void operator+(string book);
};
