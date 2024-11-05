//
// Created by stanl on 29/10/2024.
//

#include "LinkedList.h"
#include <iostream>
#include "LinkedList.h"
#include "Monster.h"
using namespace std;
template<typename T>
LinkedList<T>::LinkedList() {
    head=nullptr;
}

template<typename T>
void LinkedList<T>::insertAtStart(T value) {
    Node<T>* n= new Node(value);
    if(head==nullptr) {
        head= n;
    }else {
        n->setNext(head);
        head=n;
    }
}

template<typename T>
void LinkedList<T>::insertAtFinish(T value) {
    Node<T>* n= new Node(value);
    if(head==nullptr) {
        head=n;
    }else {
        Node<T>* current= head;
        while(current->getNext()!= nullptr) {
            current= current->getNext();
        }
        current->setNext(n);
    }
}

template<typename T>
void LinkedList<T>::displayList() {
    Node<T>* current=head;
    cout<<"[";
    while(current!= nullptr) {
        cout<<current->getData()<<" ,";
        current= current->getNext();
    }
    cout<<"]"<<endl;
}

template<typename T>
int LinkedList<T>::findElement(T value) {
    Node<T>* current=head;
    int index=0;
    while(current!= nullptr) {
        if(current->getData()==value) {
            return index;
        }
        current= current->getNext();
        index+=1;
    }
    return -1;
}
template<typename T>
void LinkedList<T>::deleteElement(T value) {
    if (head==nullptr) {
        return;
    }
    if(head->getData()==value) {
        Node<T>* temp= head;
        head= head->getNext();
        delete temp;
        return;
    }
    Node<T>* current= head;
    while(current->getNext()!= nullptr && current->getNext()->getData()!=value) {
        current=current->getNext();
    }
    if(current->getNext()!=nullptr) {
        Node<T>* temp= current->getNext();
        current->setNext(current->getNext()->getNext());
        delete temp;
    }
}

template class LinkedList<int>;
template class LinkedList <std::string>;
template class LinkedList<Monster>;