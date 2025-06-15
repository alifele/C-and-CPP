// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <stack>

using namespace std;


class UnionFind {
public:

    UnionFind(int size): _size(size) {
        _data.resize(_size);
        _rank.resize(_size);
        _sizeList.resize(_size);
        
        int i=0;
        for (int& value: _data) {
            value = i++;
        }
        
        for (int& value: _rank) {
            value = 0;
        }
        
        for (int& value: _sizeList) {
            value = 1;
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
        // Union_rank(v1, v2);
        Union_size(v1, v2);
    }
    
    

    



private:
    vector<int> _data;
    vector<int> _rank;
    vector<int> _sizeList;
    int _size;
    
    
    int find_helper(int value, stack<int>& st) {
        if (_data[value] == value) {
            return value;
        }
        st.push(value);
        return find_helper(_data[value], st);
    }
    
    void Union_rank(int v1, int v2) {
        int root1 = find(v1);
        int root2 = find(v2);
        
        int biggerRankRoot;
        int otherRoot;
        if (_rank[root1] == _rank[root2]) {
            biggerRankRoot = root1;
            otherRoot = root2;
            _rank[biggerRankRoot] += 1;
        } else {
            biggerRankRoot = root1;
            otherRoot = root2;
            if (_rank[root2] >= _rank[root1]) {
                biggerRankRoot = root2;
                otherRoot = root1;
            }
        }
        
        _data[otherRoot] = _data[biggerRankRoot];
    }
    
    
    void Union_size(int v1, int v2) {
        int root1 = find(v1);
        int root2 = find(v2);
        
        
        if (_sizeList[root1]<_sizeList[root2]) {
            _data[root1] = root2;
            _sizeList[root2] += _sizeList[root1];
        }
        else {
            _data[root2] = root1;
            _sizeList[root1] += _sizeList[root2];
        }
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

    
    
    



    
}




















