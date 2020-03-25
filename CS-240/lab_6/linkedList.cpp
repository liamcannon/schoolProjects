#include "linkedList.h"

using namespace std;

linkedList::linkedList() {
    head = nullptr;
    last = nullptr;
    size = 0;
}
linkedList::~linkedList() {
    if(head != nullptr) {
        deleteList();
    }
}
void linkedList::addNode(Node* node) {
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

void linkedList::addBook(string book) {
    size++;
    if(head == nullptr) {
        head = new Node(book);
        last = head;
        return;
    }
    last->next = new Node(book, last);
    last = last->next;
}
void linkedList::removeLast() {
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
void linkedList::displayList(bool temp) {
    Node* cursor = head;
    if(!temp) {
            cout << "List Size: " << size << endl;
            
        }
    cout << endl << "List of Books: " << endl;;
    
    for(int i = 0; cursor != nullptr; i++) {
        if(temp) {
            cout << i + 1 << ".) ";
        }
        cout << cursor->book << endl;
        cursor = cursor->next;
    }
    cout << endl;
}
void linkedList::deleteList() {
    last = last->parent;
    while(last != nullptr) {
        delete last->next;
        last = last->parent;
    }
}
int linkedList::getSize() {
    return size;
}

void linkedList::operator+(Node* node) {
    addNode(node);
}
void linkedList::operator+(string book){
    addBook(book);
}