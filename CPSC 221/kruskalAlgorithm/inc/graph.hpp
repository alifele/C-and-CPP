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

    Edge(std::pair<Node*, Node*> startEndNodes, int id, int weight);
    friend std::ostream& operator<<(std::ostream& os, Edge& edge);
    void removeEdge();
    int getId();

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

    Graph();
    void addNode(int id);
    // void removeNode(int id);
    void addEdge(int node1, int node2, int id, int weight);
    // void removeEdge(int node1, int node2, int id);

    void BFS();
    void DFS();
    void findMinSpanTree();







private:
    std::unordered_map<int, Node*> nodes;
    std::unordered_map<int, Edge*> edges;
    int numNodes;
    // vector<Node> nodesList;
    // vector<Edge> edgesList; 



};




#endif