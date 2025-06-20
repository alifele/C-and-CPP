#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <SDL2/SDL.h>
#include <vector>

/*
TODO: add removeNode support to current implementation
TODO: make each node to be a general data type (like struct Node)
TODO: list based implementation
*/


class Graph {
public:

    Graph(int value);

    ~Graph();

    void addEdge(int n1, int n2);

    void removeEdge(int n1, int n2);

    void traverseGraph_BFS();

    void traverseGraph_DFS();

    void printMat();

    // void drawSDL(SDL_Renderer* renderer, int width, int height);

private:
    const int _numNodes;
    int* mat;

    void writeMat(int n1, int n2, int value) {
        mat[n1*_numNodes + n2] = value;
    }

    enum edgeStates {
        NOT_EDGE = 0,
        IS_EDGE = 1,
        SPAN_EDGE = 2,
        BRIDGE = 3
    };


};



#endif