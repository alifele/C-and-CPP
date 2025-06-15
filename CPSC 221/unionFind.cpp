// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class UnionFind {
public:

    UnionFind(int size): _size(size) {
        _data.resize(_size);
        
        int i=0;
        for (int& value: _data) {
            value = i++;
        }
    }
    
    
    
    void print() {
        // cout << _size;
        for (const int& value: _data) {
            cout << value << " ";
        }
        
        cout << endl;
    }
    
    
    int find(int value) {
        stack<int> st;
        
        int returnValue = find_helper(value, st);
        while (!st.empty()) {
            int thisValue = st.top();
            st.pop();
            _data[thisValue] = returnValue;
        }

        return returnValue;
        
    }
    
    void Union(int v1, int v2) {
        int root1 = find(v1);
        int root2 = find(v2);
        
        
        if (root1 == root2) {
            return;
        } else {
            _data[root2] = _data[root1];
        }
    }

    



private:
    vector<int> _data;
    int _size;
    
    
    int find_helper(int value, stack<int>& st) {
        if (_data[value] == value) {
            return value;
        }
        st.push(value);
        return find_helper(_data[value], st);
    }
    
    
};


int main() {
    
    UnionFind uf(12);
    uf.print();
    
    
    uf.Union(1,11);
    uf.Union(7,5);
    uf.Union(0,10);
    uf.Union(5,11);
    uf.Union(5,10);
    
    uf.Union(2,4);
    uf.Union(4,8);
    
    uf.Union(3,6);
    uf.Union(6,9);
    
    
    // uf.Union(2,4);
    // uf.Union(4,8);
    
    // uf.Union(3,6);
    // uf.Union(6,9);
    
    cout << uf.find(10) << endl;
    // cout << uf.find(11) << endl;

    
    
    uf.print();

    
    
    // with path compression: 7 7 2 3 2 7 3 7 2 3 0 1 



    
}




















