
#ifndef HASHTABLE_H
#define HASHTABLE_H
#include "Node.h"
#include <iostream>

using namespace std;
class Hashtable {
private:
    static const int capacity=10;
    Node* table[capacity];
    int hash(int key);

public:
    Hashtable() {
        for(int i=0; i< capacity;i++) {
            table[i]=nullptr;
        }
    }

    void insert(int data);
    Node* search(int data);
    void remove(int data);
    void showTable();


};



#endif //HASHTABLE_H
