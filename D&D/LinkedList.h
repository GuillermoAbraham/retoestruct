//
// Created by stanl on 29/10/2024.
//
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"


template <typename T>
class LinkedList {
private:
    Node<T>* head;
public:
    LinkedList();
    void insertAtStart(T value);
    void insertAtFinish(T value);
    void displayList();
    int findElement(T value);
    void deleteElement(T value);
    void read_record();
    ~LinkedList() {
        Node<T>* current=head;
        while(current!=nullptr) {
            Node<T>* temp= current;
            current=current->getNext();
            delete temp;
        }
    }
};

#endif


