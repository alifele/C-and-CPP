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



int main() {

    Graph g;
    makeGrid(g);

    // g.addNode(0);
    // g.addNode(1);
    // g.addNode(2);
    // g.addNode(3);

    // g.addEdge(0,3,0,1);
    // g.addEdge(0,1,1,1);
    // g.addEdge(3,1,4,1);
    // g.addEdge(3,2,3,1);
    // g.addEdge(2,1,2,1);

    g.DFS();
    
    // g.BFS();





}