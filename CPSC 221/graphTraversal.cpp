// Online C++ compiler to run C++ program online
#include <iostream>
#include <stack>
#include <queue>

using namespace std;


class Graph {
public:


    Graph(int numNodes) {
        _numNodes = numNodes;
        _data = new int[_numNodes*_numNodes];
    }
    
    void addEdge(int n1, int n2) {
        writeEdge(n1,n2, 1);
    }
    
    void removeEdge(int n1, int n2) {
        writeEdge(n1, n2, 0);
    }
    
    
    void printMat() {
        for (int i=0; i<_numNodes; i++) {
            for (int j=0; j<_numNodes; j++) {
                std::cout << _data[i*_numNodes+j] << " ";
            }
            std::cout << std::endl;
        }
    }
    
    
    
    void traverse_DFS() {
        stack<int> st;
        int visited[_numNodes] = {0};

        
        st.push(0);
        visited[0] = 1;
        
        while(!st.empty()) {
            int node = st.top();
            st.pop();
            cout << node << " ";
            
            for (int i=0; i<_numNodes; i++) {
                if (_data[node*_numNodes+i]==1 && visited[i]==0) {
                    visited[i]=1;
                    st.push(i);
                }
            } 
        }
        cout << endl;
    }
    
    
    void traverse_BFS() {
        queue<int> qu;
        int visited[_numNodes] = {0};

        
        qu.push(0);
        visited[0] = 1;
        
        while(!qu.empty()) {
            int node = qu.front();
            qu.pop();
            cout << node << " ";
            
            for (int i=0; i<_numNodes; i++) {
                if (_data[node*_numNodes+i]==1 && visited[i]==0) {
                    visited[i]=1;
                    qu.push(i);
                }
            } 
        }
        cout << endl;
    }
        
    

private:
    int _numNodes;
    int* _data;
    
    void writeEdge(int n1, int n2, int value) {
        _data[n1*_numNodes+n2] = value;
        _data[n2*_numNodes+n1] = value;
    }

};

int main() {
    
    Graph g(16);
    // g.addEdge(0,1);
    // g.addEdge(0,2);
    // g.addEdge(0,3);
    // g.addEdge(2,3);
    
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            g.addEdge(4*i+j, 4*i+j+1 );
        }
    }
    
    for (int i=0; i<4; i++) {
        for (int j=0; j<3; j++) {
            g.addEdge(i+4*j, i+4*(j+1) );
        }
    }
    
    // g.printMat();
    
    // g.traverse_BFS();
    g.traverse_DFS();
    

    return 0;
}











