#include "node.h"

Node::Node(string book, Node* last, Node* next) {
    parent = last;
    this->next = next;
    this->book = book;
    
    if(last != nullptr) {
        last->next = this;
    }
    if(next != nullptr) {
        next->parent = this;
    }
}

Node::~Node() {
    if(parent != nullptr) {
        parent->next = next;
    }
    if(next != nullptr) {
        next->parent = parent;
    }
}