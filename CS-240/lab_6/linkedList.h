#pragma once
#include <iostream>
#include "node.h"

using namespace std;

class linkedList {
    Node* head;
    Node* last;

    int size;

    public:
        linkedList();
        ~linkedList();

        void addNode(Node* node);
        void addBook(string book);
        void removeLast();
        void displayList(bool temp);
        void deleteList();
        int getSize();
        void operator+(Node* node);
        void operator+(string book);
};
