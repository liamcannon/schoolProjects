#include <iostream>
#include <vector>
#include "groceries.h"

using namespace std;

int main() {
    string temp = " ";
    vector<Groceries*> basket;

    basket.push_back(new Vegtables("Green beans", "A Vegtable", 1));
    basket.push_back(new Peppers("Cherry Peppers", "A Pepper", 12));

    for(int i = 0; i < basket.size(); i++) {
        temp = basket[i]->getDescription();
        cout << temp << endl;
    }
    for(int j = 0; j <basket.size(); j++) {
        delete basket[j];
    }
}