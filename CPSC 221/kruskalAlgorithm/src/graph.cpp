#include "graph.hpp"
#include <utility>
#include <queue>
#include <stack>


using namespace std;



// ===========================================
// =     Node class
// ===========================================

Node::Node(int id) {
    this->id = id;
}

void Node::operator<<(Edge* edge) {
    edgeList.push_back(edge);
}



int Node::getID() {
    return this->id;
}

void Node::printEdgeList() {
    for (Edge* edge: edgeList) {
        std::cout << *edge << " ";
    }
    std::cout << std::endl;
}

const std::vector<Edge*>& Node::getEdges() {
    return this->edgeList;
}





// ===========================================
// =     Edge class
// ===========================================


Edge::Edge(pair<Node*, Node*> startEndNodes, int id, int weight) {
    start = startEndNodes.first;
    end = startEndNodes.second;

    (*start) << this;
    (*end) << this;

    this->id = id;
    this->weight = weight;
}


std::ostream& operator<<(std::ostream& os, Edge& edge) {
    os << edge.id;
    // os << "hello htere";
    return os;
}


int Edge::getId() {
    return id;
}



// ===========================================
// =     Graph calss
// ===========================================


Graph::Graph() {
    numNodes = 0;
}


// REQUIRES: assumes node with this id does not exists
void Graph::addNode(int id) {
    Node* node = new Node(id);
    nodes.insert({id, node});
    numNodes ++;
}


void Graph::addEdge(int n1, int n2, int id, int weight) {
    Node* node1 = nodes[n1];
    Node* node2 = nodes[n2];
    Edge* edge = new Edge(make_pair(node1, node2), id, weight);
    edges.insert({id, edge});
}

void Graph::BFS() {
    queue<Node*> qu;
    // vector<bool> visited(numNodes, false);
    unordered_map<Node*, bool> visited;
    for (auto elem: nodes) {
        visited.insert({elem.second, false});
    }


    auto it = nodes.begin();
    qu.push(it->second);
    visited[it->second]= true;

    while (! qu.empty()) {
        Node* thisNode = qu.front();
        qu.pop();
        cout << thisNode->getID() << " ";

        for (Edge* edge: thisNode->getEdges()) {
            Node* endNode = (thisNode==edge->start) ? endNode=edge->end : endNode=edge->start;
            if (visited[endNode] == false) {
                qu.push(endNode);
                visited[endNode] = true;
            }
        }
    }
    cout << endl;
}


void Graph::DFS() {
    stack<Node*> st;
    unordered_map<Node*, bool> visited;

    for (auto elem: nodes) {
        visited[elem.second] = false;
    }

    auto it = nodes.begin();
    st.push(it->second);
    visited[it->second] = true;


    while(! st.empty()) {
        Node* thisNode = st.top();
        st.pop();
        cout << thisNode->getID() << " ";

        for (Edge* edge: thisNode->getEdges()) {
            Node* otherNode = (thisNode == edge->start)? edge->end : edge->start;
            if (visited[otherNode] == false ){
                st.push(otherNode);
                visited[otherNode] = true;
            }
        }
    }
    cout << endl;
}



// ===========================================
// =     UnionFind class
// ===========================================


void UnionFind::addElem(Node* node) {
    parentMap.insert({node, node});
}


Node* UnionFind::find(Node* node) {
    if (parentMap[node]==node) {
        return node;
    }

    return find(parentMap[node]);
}


Node* UnionFind::operator()(Node* node) {
    return find(node);
}


void UnionFind::unite(Node* node1, Node* node2) {
    parentMap[node1] = node2;
}

