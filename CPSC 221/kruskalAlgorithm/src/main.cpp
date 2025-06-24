#include <iostream>
#include <utility>

#include "graph.hpp"


using namespace std;


void makeGrid(Graph& g) {
    for (int i=0; i<9; i++) {
        g.addNode(i);
    }

    g.addEdge(4,1,0,1);
    g.addEdge(4,3,1,1);
    g.addEdge(4,5,2,1);
    g.addEdge(4,7,3,1);
    g.addEdge(0,1,4,1);
    g.addEdge(1,2,5,1);
    g.addEdge(2,5,6,1);
    g.addEdge(5,8,7,1);
    g.addEdge(8,7,8,1);
    g.addEdge(7,6,9,1);
    g.addEdge(6,3,10,1);
    g.addEdge(3,0,11,1);

}


void makeSquareWithDiag(Graph& g) {
    g.addNode(0);
    g.addNode(1);
    g.addNode(2);
    g.addNode(3);

    g.addEdge(0,3,0,1);
    g.addEdge(0,1,1,1);
    g.addEdge(3,1,4,1);
    g.addEdge(3,2,3,1);
    g.addEdge(2,1,2,1);
}



int main() {

    // Graph g;
    // makeGrid(g);
    // // makeSquareWithDiag(g);
    // g.DFS();
    // // g.BFS();


    //// testing UnionFind
    Node* node0 = new Node(0);
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);

    UnionFind unfind;

    unfind.addElem(node0);
    unfind.addElem(node1);
    unfind.addElem(node2);
    unfind.addElem(node3);
    // unfind.addElem(node4);

    unfind.unite(node1,node0);
    unfind.unite(node2,node0);


    std::cout << unfind(node3)->getID() << endl;





}