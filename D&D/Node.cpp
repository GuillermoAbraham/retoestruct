//
// Created by stanl on 29/10/2024.
//
#include "Node.h"
#include <iostream>
#include "Monster.h"
template<typename T>
Node<T>::Node(T data) {
    this->data=data;
    next=nullptr;
}
template<typename T>
T Node<T>::getData() {
    return data;
}
template<typename T>
void Node<T>::setData(T data) {
    this->data=data;
}
template<typename T>
Node<T>* Node<T>::getNext() {
    return next;
}
template<typename T>
void Node<T>::setNext(Node<T> *next) {
    this->next=next;
}

template class Node<int>;
template class Node<std::string>;
template class Node<Monster>;