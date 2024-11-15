#ifndef GRAPH_H
#define GRAPH_H
#include "Node.h"

template <typename T>
class Graph {
private:
    int vertices;
    Node<T>** adjList;
public:
    Graph(int vertices) : vertices(vertices) {
        adjList = new Node<T>*[vertices];
        for(int i=0; i< vertices;i++) {
            adjList[i]= nullptr;
        }
    }
    ~Graph() {
        for(int i=0;i<vertices;i++) {
            Node<T>* tmp= adjList[i];
            while(tmp) {
                Node<T>* toDelete=tmp;
                tmp= tmp->getNext();
                delete toDelete;
            }
        }
    }
    void addEdge(int src, int dest,T valueSrc, T valueDest);
    void displayGraph();

};


#endif //GRAPH_H
