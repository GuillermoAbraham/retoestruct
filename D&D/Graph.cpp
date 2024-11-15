#include <iostream>
#include "Graph.h"
#include <string>
using namespace std;
template <typename T>
void Graph<T>::addEdge(int src, int dest,T valueSrc, T valueDest) {
    Node<T>* newNode = new Node<T>(valueDest);
    newNode->setNext(adjList[src]);
    adjList[src]= newNode;

    newNode= new Node<T>(valueSrc);
    newNode->setNext(adjList[dest]);
    adjList[dest]= newNode;
}

template <typename T>
void Graph<T>::displayGraph() {
    for(int i=0;i<vertices;i++) {
        Node<T>* temp = adjList[i];
        std::cout <<"Vertex pos: "<<i<<": ";
        while(temp) {
            std::cout << "->" <<temp->getData();
            temp = temp->getNext();
        }
        std::cout <<std::endl;
    }
}
template class Graph<int>;
template class Graph<string>;
