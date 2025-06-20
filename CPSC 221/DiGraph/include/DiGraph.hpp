#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <SDL2/SDL.h>
#include <vector>
#include <iostream>

using namespace std;

/*
TODO: add removeNode support to current implementation
TODO: make each node to be a general data type (like struct Node)
TODO: list based implementation
*/


class DiGraph {
public:

    DiGraph(int value);

    ~DiGraph();

    void addEdge(int n1, int n2, int value);

    void removeEdge(int n1, int n2);

    void traverseGraph_BFS();

    void traverseGraph_DFS();

    void printMat();


    void topolSort();

    void printOutDeg();
    void printInDeg();

    // void drawSDL(SDL_Renderer* renderer, int width, int height);

private:

    class Edge {
    public:

        Edge() {
            this->id = NO_ID;
            this->startNode = NO_NODE;
            this->endNode = NO_NODE;
            this->weight = NO_EDGE;
            spanEdge = false;
        }


        Edge& operator=(int value) {
            this->weight = value;
            return *this;
        } 

        bool isSpanEdge() {
            return spanEdge;
        }


        void setSpanEdge() {
            spanEdge = true;
        }




        bool operator==(int value) {
            return weight == value;
        }

        bool operator!=(int value) {
            return weight != value;
        }


        void setID(int value) {
            id = value;
        }


        int getWeight() {
            return weight;
        }

        int getID() {
            return id;
        }

        friend ostream& operator<<(ostream& os, const Edge& edgeObj) {
            os << edgeObj.weight;
            return os;
        }

        // static bool comparator(Edge first, Edge second) {

        // }
        

    private:
        int id;
        int startNode;
        int endNode;
        int weight;
        bool spanEdge;        
    };


    class Node {
    public:
        Node() {
            id=-1;
        }

        Node& operator=(int value) {
            id = value;
            return *this;
        }



        // edge enters this node
        Node& operator<<(Edge edge) {
            inEdgeList.push_back(edge);
            return *this;
        }

        // edge leaves this node
        Node& operator>>(Edge edge) {
            outEdgeList.push_back(edge);
            return *this;
        }


        int operator*(int value) {
            return value*id;
        }

        int operator+(int value) {
            return value+id;
        }



        int getOutDegree() {
            return outEdgeList.size();
        }

        int getInDegree() {
            return inEdgeList.size();
        }

        int getID() {
            return id;
        }


        friend ostream& operator<<(ostream& os, Node& nodeObj) {
            os << nodeObj.getID();
            return os;
        }


        
        
    private:
        int id;
        vector<Edge> outEdgeList;
        vector<Edge> inEdgeList;
    };


    int _numNodes;
    int _numEdges;
    Edge* mat; 
    Node* nodeList;


    enum edgeStates {
        NO_EDGE = -1,
        NO_NODE = -1,
        NO_ID = -1
    };


};



#endif