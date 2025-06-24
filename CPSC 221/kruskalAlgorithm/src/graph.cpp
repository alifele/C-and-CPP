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
    this->inMinSpanTree = false;
}


std::ostream& operator<<(std::ostream& os, Edge& edge) {
    os << edge.id;
    // os << "hello htere";
    return os;
}


int Edge::getId() {
    return id;
}

struct Edge::comparator {
    bool operator()(Edge* edge1, Edge* edge2) const {
        return edge1->weight >= edge2->weight;
    }
};

void Edge::setMinSpanTree() {
    inMinSpanTree = true;
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
    unordered_map<Node*, bool> visited;
    for (auto elem: nodes) {
        visited.insert({elem.second, false});
    }


    auto it = nodes.begin();
    qu.push(it->second);
    visited[it->second]= true;


    cout << "A BFS is:\n";
    while (! qu.empty()) {
        Node* thisNode = qu.front();
        qu.pop();
        cout << thisNode->getID() << " ";

        for (Edge* edge: thisNode->getEdges()) {
            Node* endNode = (thisNode==edge->start) ? edge->end : edge->start;
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
        visited.insert({elem.second, false});
    }

    auto it = nodes.begin();
    st.push(it->second);
    visited[it->second] = true;


    cout << "A DFS is:\n"; 

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


void Graph::findMinSpanTree() {
    priority_queue<Edge*, vector<Edge*>, Edge::comparator> edgeMinHeap;
    UnionFind clusters;

    for (auto elem: edges) {
        edgeMinHeap.push(elem.second);
    }

    for (auto elem: nodes) {
        clusters.addElem(elem.second);
    }


    while(!edgeMinHeap.empty()) {
        Edge* thisEdge = edgeMinHeap.top();
        edgeMinHeap.pop();
        if (clusters.find(thisEdge->start) != clusters.find(thisEdge->end)) {
            thisEdge->setMinSpanTree();
            clusters.unite(thisEdge->start, thisEdge->end);
        }
    }

}


void Graph::printMinSpanningTree() {
    cout << "a minimum spanning tree is:" << endl;
    for (auto elem: edges) {
        if (elem.second->inMinSpanTree==true) {
            cout << elem.second->getId() << " ";
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
    if (parentMap[node] != node) {
        parentMap[node] = find(parentMap[node]);  // path compression
    }
    return parentMap[node];
}


Node* UnionFind::operator()(Node* node) {
    return find(node);
}


void UnionFind::unite(Node* node1, Node* node2) {
    Node* root1 = find(node1);
    Node* root2 = find(node2);
    if (root1 != root2) {
        parentMap[root1] = root2;
    }
}

