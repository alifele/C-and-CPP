#include <iostream>
#include <utility>

#include "graph.hpp"


using namespace std;




/*
    4          5
0 ------- 1 ------- 2
|11       |0        |6
|    1    |    2    |
3 ------- 4 ------- 5 
|10       |3        |7
|         |         |
6 ------- 7 ------- 8
    9          8

*/


void makeGrid(Graph& g) {
    for (int i=0; i<9; i++) {
        g.addNode(i);
    }

    g.addEdge(4,1,0,0);
    g.addEdge(4,3,1,1);
    g.addEdge(4,5,2,2);
    g.addEdge(4,7,3,3);
    g.addEdge(0,1,4,4);
    g.addEdge(1,2,5,5);
    g.addEdge(2,5,6,6);
    g.addEdge(5,8,7,7);
    g.addEdge(8,7,8,8);
    g.addEdge(7,6,9,9);
    g.addEdge(6,3,10,10);
    g.addEdge(3,0,11,11);

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


// Example: Ring with chords
void makeRingWithChords(Graph& g) {
    int n = 8;

    for (int i = 0; i < n; i++){
        g.addNode(i);
    }

    for (int i = 0; i < n; ++i) {
        g.addEdge(i, (i+1)%n, i, i);
    }

    g.addEdge(0, 4, n,n);
    g.addEdge(1, 5, n+1,n+1);
    g.addEdge(2, 6, n+2,n+2);
    g.addEdge(3, 7, n+3,n+3);
}



int main() {

    Graph g;
    // makeGrid(g);
    // makeSquareWithDiag(g);
    makeRingWithChords(g);
    g.DFS();
    // g.BFS();
    g.findMinSpanTree();
    g.printMinSpanningTree();






    // ======= testing UnionFind
    // Node* node0 = new Node(0);
    // Node* node1 = new Node(1);
    // Node* node2 = new Node(2);
    // Node* node3 = new Node(3);
    // Node* node4 = new Node(4);

    // UnionFind unfind;

    // unfind.addElem(node0);
    // unfind.addElem(node1);
    // unfind.addElem(node2);
    // unfind.addElem(node3);
    // // unfind.addElem(node4);

    // unfind.unite(node1,node0);
    // unfind.unite(node2,node0);
    // std::cout << unfind(node3)->getID() << endl;





}