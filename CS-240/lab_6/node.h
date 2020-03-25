#pragma once
#include <iostream>

using namespace std;

struct Node {
    string book;
    Node* next;
    Node* parent;

    Node(string book, Node* last = nullptr, Node* next = nullptr);
    ~Node();
};