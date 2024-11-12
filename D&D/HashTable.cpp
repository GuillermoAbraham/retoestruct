#include "Hashtable.h"

int Hashtable::hash(int key) {
    return key%10;
}

void Hashtable::insert(int data) {
    int index= hash(data);  
    Node* newNode= new Node(data);      //implementar colisión
    newNode->setNext(table[index]);
    table[index]= newNode;
}

Node* Hashtable::search(int data) {
    int index= hash(data);              //implementar colisión
    return table[index];
}

void Hashtable::remove(int data) {
    int index= hash(data);              //implementar colision
    table[index]= nullptr;
}

void Hashtable::showTable() {
    cout<<"--------Table---------"<<endl;
    for (int i=0; i< capacity; i++) {
        if(table[i]!=nullptr){
            Node* temp= table[i];
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
