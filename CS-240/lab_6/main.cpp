#include <iostream>

using namespace std;

struct ListNode {
    ListNode() {
        data = "";
        next = nullptr;
    }
    ListNode(string num, ListNode* p = NULL) {
        data = num;
        next = p;
    }
    string data;
    ListNode* next;
};

int main() {
    ListNode* p;
    string book = "Book";
    p = new ListNode(book);
    
    int count = 0; 

    while(p->next != NULL) {
        p = p->next;
        p->next = new ListNode(book);
    }
    while(p != NULL) {
        count++;
        cout << p->data << endl;
        p = p->next;
    }
    cout << "Size: " << count << endl;

    delete (p->next);

    while(p != NULL) {
         = p->next;
    }
}