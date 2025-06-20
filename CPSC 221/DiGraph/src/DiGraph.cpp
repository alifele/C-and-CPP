#include "DiGraph.hpp"
#include <queue>
#include <vector>
#include <cmath>
#include <stack>
#include <SDL2/SDL.h>


using namespace std;

DiGraph::DiGraph(int numNodes): _numNodes(numNodes) {
    mat = new Edge[_numNodes*_numNodes];
    nodeList = new Node[_numNodes];
    for (int i=0; i<_numNodes; i++) {
        nodeList[i] = i;
    }
    // for (int i=0; i<_numNodes*_numNodes;++i) {
    //     mat[i] = NOT_EDGE;
    // }
}   

DiGraph::~DiGraph() {
    delete[] mat;
    delete[] nodeList;
}


void DiGraph::addEdge(int n1, int n2, int value) {
    mat[n1*_numNodes + n2] = value;
    mat[n1*_numNodes + n2].setID(_numEdges++);
    nodeList[n1] >> mat[n1*_numNodes + n2];
    nodeList[n2] << mat[n1*_numNodes + n2];
}




void DiGraph::printMat() {

    cout << "---- matrix is:------" << endl;
    for (int i=0; i<_numNodes; i++) {
        for (int j=0; j<_numNodes; j++) {
            int value = mat[i*_numNodes+j]==-1 ? 0 : mat[i*_numNodes+j].getWeight();
            cout << value << "   ";
        }
        cout << endl;
    }
}


void DiGraph::topolSort() {
    stack<Node> qu;
    vector<int> queued(_numNodes,0);
    vector<int> inDegrees(_numNodes,0);

    // copy the inDegree values to the inDegrees list
    for (int i=0; i<_numNodes; i++) {
        inDegrees[i] = nodeList[i].getInDegree();
    }


    // queue all nodes that has indegree 0
    for (int i=0; i<_numNodes; i++) {
        if (inDegrees[i] == 0 && queued[i]==0 ) {
            qu.push(nodeList[i]);
            queued[i] = 1;
        }
    }


    cout << "----------topol sort values are:" << endl;

    while(!qu.empty()) {
        
        // get one element from queue
        // Node thisNode = qu.front();
        Node thisNode = qu.top();
        qu.pop();
        cout << thisNode << "  ";

        for (int i=0; i<_numNodes; i++) {
            // for all adjacent nodes:
            if (mat[thisNode.getID()*_numNodes+i]!=NO_EDGE) {
                inDegrees[i] --;        // reduce their inDegree

                // if they get zero indegree:
                if (inDegrees[i]==0) {
                    // put it in the queue and mark it as queued!
                    qu.push(nodeList[i]);
                    queued[i] = 1;
                }
            }
        }
    }

    cout << endl;

}



void DiGraph::printOutDeg() {
    cout << "------Node Ids are:" << std::endl;
    for (int i=0; i<_numNodes; i++) {
        std::cout << nodeList[i].getID() << "   ";
    }
    cout << endl;
    cout << "-------------------------------" << std::endl;

    for (int i=0; i<_numNodes; i++) {
        std::cout << nodeList[i].getOutDegree() << "   ";
    }

    cout << endl;
}


void DiGraph::printInDeg() {
    cout << "------Node Ids are:" << std::endl;
    for (int i=0; i<_numNodes; i++) {
        std::cout << nodeList[i].getID() << "   ";
    }
    cout << endl;
    cout << "-------------------------------" << std::endl;

    for (int i=0; i<_numNodes; i++) {
        std::cout << nodeList[i].getInDegree() << "   ";
    }

    cout << endl;
}







// void DiGraph::traverseGraph_BFS() {
//     queue<Node> qu;
//     vector<int> visited(_numNodes, 0);

//     qu.push(nodeList[0]);
//     visited[nodeList[0].getID()] = 1;

//     cout << "values traversed BFS: " << endl;
//     while (!qu.empty()) {
//         Node node = qu.front();
//         qu.pop();
//         cout << node << " ";
//         for (int i=0;i<_numNodes;++i) {
//             Edge& edge = mat[node*_numNodes+i];
//             Edge& revEdge = mat[node + i*_numNodes];
//             if (!(edge==NO_EDGE)) {
//                 if (visited[i]==0) {
//                     visited[i] = 1;
//                     qu.push(nodeList[i]);
                    
//                 } 
//             }
//         }
//     }
//     cout << endl;
// }

// void DiGraph::traverseGraph_DFS() {
//     vector<int> visited(_numNodes, 0);
//     stack<int> st;

//     st.push(0);
//     visited[0]=1;

//     cout << "values traversed DFS: " << endl;
//     while (!st.empty()) {
//         int node = st.top();
//         st.pop();
//         cout << node << " ";
//         for (int i=0;i<_numNodes;++i) {
//             int& edge = mat[node*_numNodes+i];
//             if (!(edge==NOT_EDGE)) {
//                 if (visited[i]==0) {
//                     visited[i] = 1;
//                     st.push(i);

//                     // the the edge is a regular edge, i.e. not corssed before
//                     if (edge==IS_EDGE) {
//                         edge = SPAN_EDGE;
//                     }
//                 } 
//                 // else {
//                 //     if (edge==IS_EDGE) {
//                 //         edge = BRIDGE;
//                 //     }
//                 // }
//             }
//         }
//     }

//     cout << endl;

// }



// void Graph::drawSDL(SDL_Renderer* renderer, int width, int height) {
//     int radius = std::min(width, height) / 3;
//     int nodeRadius = 20;
//     int cx = width / 2;
//     int cy = height / 2;
//     std::vector<std::pair<int, int>> positions(_numNodes);
//     for (int i = 0; i < _numNodes; ++i) {
//         double angle = 2 * M_PI * i / _numNodes;
//         int x = cx + (int)(radius * cos(angle));
//         int y = cy + (int)(radius * sin(angle));
//         positions[i] = {x, y};
//     }
//     // Draw edges
//     for (int i = 0; i < _numNodes; ++i) {
//         for (int j = i + 1; j < _numNodes; ++j) {
//             if (mat[i * _numNodes + j] == IS_EDGE) {
//                 SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255); // black for normal edge
//                 SDL_RenderDrawLine(renderer, positions[i].first, positions[i].second, positions[j].first, positions[j].second);
//             } else if (mat[i * _numNodes + j] == SPAN_EDGE) {
//                 SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255); // red for spanning tree edge
//                 SDL_RenderDrawLine(renderer, positions[i].first, positions[i].second, positions[j].first, positions[j].second);
//             }
//         }
//     }
//     // Draw nodes
//     for (int i = 0; i < _numNodes; ++i) {
//         SDL_SetRenderDrawColor(renderer, 0, 128, 255, 255);
//         for (int w = 0; w < nodeRadius * 2; w++) {
//             for (int h = 0; h < nodeRadius * 2; h++) {
//                 int dx = nodeRadius - w;
//                 int dy = nodeRadius - h;
//                 if ((dx*dx + dy*dy) <= (nodeRadius * nodeRadius)) {
//                     SDL_RenderDrawPoint(renderer, positions[i].first + dx, positions[i].second + dy);
//                 }
//             }
//         }
//     }
// }


