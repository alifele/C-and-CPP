#include "graph.hpp"
#include <queue>
#include <iostream>
#include <stack>
#include <cmath>
#include <SDL2/SDL.h>


using namespace std;

Graph::Graph(int numNodes): _numNodes(numNodes) {
    mat = new int[_numNodes*_numNodes];
    for (int i=0; i<_numNodes*_numNodes;++i) {
        mat[i] = NOT_EDGE;
    }
}   

Graph::~Graph() {
    delete[] mat;
}


void Graph::addEdge(int n1, int n2) {
    writeMat(n1, n2, IS_EDGE);
    writeMat(n2, n1, IS_EDGE);
}


void Graph::removeEdge(int n1, int n2) {
    writeMat(n1, n2, NOT_EDGE);
    writeMat(n2, n1, NOT_EDGE);
}

void Graph::traverseGraph_BFS() {
    queue<int> qu;
    vector<int> visited(_numNodes, 0);

    qu.push(0);
    visited[0] = 1;

    cout << "values traversed BFS: " << endl;
    while (!qu.empty()) {
        int node = qu.front();
        qu.pop();
        cout << node << " ";
        for (int i=0;i<_numNodes;++i) {
            int& edge = mat[node*_numNodes+i];
            if (!(edge==NOT_EDGE)) {
                if (visited[i]==0) {
                    visited[i] = 1;
                    qu.push(i);

                    // the the edge is a regular edge, i.e. not corssed before
                    if (edge==IS_EDGE) {
                        edge = SPAN_EDGE;
                    }
                } 
            }
        }
    }
    cout << endl;
}

void Graph::traverseGraph_DFS() {
    vector<int> visited(_numNodes, 0);
    stack<int> st;

    st.push(0);
    visited[0]=1;

    cout << "values traversed DFS: " << endl;
    while (!st.empty()) {
        int node = st.top();
        st.pop();
        cout << node << " ";
        for (int i=0;i<_numNodes;++i) {
            int& edge = mat[node*_numNodes+i];
            if (!(edge==NOT_EDGE)) {
                if (visited[i]==0) {
                    visited[i] = 1;
                    st.push(i);

                    // the the edge is a regular edge, i.e. not corssed before
                    if (edge==IS_EDGE) {
                        edge = SPAN_EDGE;
                    }
                } 
                // else {
                //     if (edge==IS_EDGE) {
                //         edge = BRIDGE;
                //     }
                // }
            }
        }
    }

    cout << endl;

}


void Graph::printMat() {

    cout << "---- matrix is:------" << endl;
    for (int i=0; i<_numNodes; i++) {
        for (int j=0; j<_numNodes; j++) {
            cout << mat[i*_numNodes+j] << " ";
        }
        cout << endl;
    }
}

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


