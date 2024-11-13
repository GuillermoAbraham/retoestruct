#include "Powers.h"
#include <iostream>
using namespace std;

#include "Hashtable.h"

template <typename T>
int Hashtable<T>::hash(int key) {
    return key%10;
}

template <typename T>
void Hashtable<T>::insert(T data) {
    int index= hash(data);
    Node<T>* newNode= new Node(data);
    //implementar colisión
    newNode->setNext(table[index]);
    table[index]= newNode;
}

template <typename T>
Node<T>* Hashtable<T>::search(T data) {
    int index= hash(data);
    //implementar colisión
    return table[index];
}

template <typename T>
void Hashtable<T>::remove(T data) {
    int index= hash(data);
    //implementar colision
    table[index]= nullptr;
}

template <typename T>
void Hashtable<T>::showTable() {
    cout<<"--------Table---------"<<endl;
    for (int i=0; i< capacity; i++) {
        if(table[i]!=nullptr){
            Node<T>* temp= table[i];
            while(temp!=nullptr) {
                cout<<temp->getData()<< " "<<temp<<", ";
                temp= temp->getNext();
            }
            cout<<endl;
        }else {
            cout<<" NULL "<<endl;
        }
    }
    cout<<"--------END---------"<<endl;
}
