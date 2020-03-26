#include "linkedList.h"

using namespace std;

LinkedList::LinkedList() {
    head = nullptr;
    last = nullptr;
    size = 0;
}
LinkedList::~LinkedList() {
    if(head != nullptr) {
        deleteList();
    }
}
void LinkedList::addNode(Node* node) {
    if(node == nullptr) {
        return;
    }
    size++;
    if(head == nullptr) {
        head = node;
        last = node;
        return;
    }
    node->parent = last;
    last->next = node;
    last = node;
}

void LinkedList::addBook(string book) {
    size++;
    if(head == nullptr) {
        head = new Node(book);
        last = head;
        return;
    }
    last->next = new Node(book, last);
    last = last->next;
}
void LinkedList::removeLast() {
    string temp = last->book;
    if(size == 0) {
        delete last;
        head = nullptr;
        last = nullptr;
    }
    else {
        last = last->parent;
        delete last->next;
    }
    size--;
}
void LinkedList::displayList() {
    Node* cursor = head;
    cout << endl << "List of Books: " << endl;;
    for(int i = 0; cursor != nullptr; i++) {
        cout << i + 1 << ".) ";
        cout << cursor->book << endl;
        cursor = cursor->next;
    }
    cout << endl;
}
void LinkedList::deleteList() {
    last = last->parent;
    while(last != nullptr) {
        delete last->next;
        last = last->parent;
    }
}
int LinkedList::getSize() {
    return size;
}
void LinkedList::operator+(Node* node) {
    addNode(node);
}
void LinkedList::operator+(string book){
    addBook(book);
}