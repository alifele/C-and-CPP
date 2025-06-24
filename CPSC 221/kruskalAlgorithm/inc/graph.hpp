#ifndef GRAPH_HPP
#define GPRAH_HPP

#include <vector>
#include <utility>
#include <iostream>
#include <unordered_map>


class Node;


class Edge {
public:

    Node* start;
    Node* end;
    bool inMinSpanTree;

    struct comparator;

    Edge(std::pair<Node*, Node*> startEndNodes, int id, int weight);
    friend std::ostream& operator<<(std::ostream& os, Edge& edge);
    void removeEdge();
    int getId();
    void setMinSpanTree();

private:
    int id;
    int weight;
    


};

class Node{
public:

    Node(int id);


    // node << &edge adds one incomming edge
    void operator<<(Edge* edge);
    int getID();
    void printEdgeList();
    const std::vector<Edge*>& getEdges();
    void removeEdge(int id);


private:
    int id;
    std::vector<Edge*> edgeList;
};







class Graph {
public:

    // ====== fields
    


    // ====== methods
    Graph();
    void addNode(int id);
    // void removeNode(int id);
    void addEdge(int node1, int node2, int id, int weight);
    // void removeEdge(int node1, int node2, int id);
    void BFS();
    void DFS();
    void findMinSpanTree();
    void printMinSpanningTree();







private:
    std::unordered_map<int, Node*> nodes;
    std::unordered_map<int, Edge*> edges;
    int numNodes;
    // vector<Node> nodesList;
    // vector<Edge> edgesList; 



};



class UnionFind {
public:


    void addElem(Node* node);

    void unite(Node* node1, Node* node2);
    Node* find(Node* node);
    Node* operator()(Node* node);




private:
    std::unordered_map<Node*, Node*> parentMap;
};


#endif