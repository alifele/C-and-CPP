// Online C++ compiler to run C++ program online
#include <iostream>

template <typename T>
class maxHeap {
public:
    
    maxHeap() {
        _maxSize = 16;
        _index = 0;
        _data = new T[_maxSize];
    }
    
    void insert(T value) {
        _data[_index++] = value;
        heapUp(_index-1);
    }
    
    void insertFromArray(const T* arr, int size) {
        for (int i=0; i<size; i++) {
            insert(arr[i]);
        }
    }
    
    T pop() {
        T returnValue = _data[0];
        _index--;
        _data[0] = _data[_index];
        heapDown(0);
        return returnValue;
    }
    
    void print() {
        for (int i=0; i<_index; i++) {
            std::cout << _data[i] << " ";
        }
        std::cout << std::endl;
    }
    
    
    void heapfy(T* values, int size) {
        delete[] _data;
        _data = values;
        _index += size;
        for (int i=(size-1)/2; i>=0; --i) {
            heapDown(i);
        }
        
    }
    


private:
    T* _data;
    int _index;
    int _maxSize;
    
    
    void heapUp(int index) {
        if (index == 0) {
            return;
        }
        
        if (_data[index] >= _data[parent(index)]) {
            T temp = _data[parent(index)];
            _data[parent(index)] = _data[index];
            _data[index] = temp;
            heapUp(parent(index));
            return;
        }
    }
    
    
    void heapDown(int index) {
        if (isLeafNode(index)) {
            return;
        }
        int bigChild = lchild(index);
        
        // if node is not a leaf node, then a left child always exists, but a right child might not exist.
        if ( _data[rchild(index)] >= _data[bigChild] && rchild(index)<_index ) {
            bigChild = rchild(index);
        }
        
        if (_data[bigChild] >= _data[index]) {
            T temp = _data[index];
            _data[index] = _data[bigChild];
            _data[bigChild] = temp;
            index = bigChild;
            heapDown(index);
            return;
        }
    }
    
    
    
    int parent(int index) {
        return (index-1)/2;
    }
    
    int isLeafNode(int index) {
        if (index >= (_index+1)/2) {
            return true;
        }
        return false;
    }
    
    int lchild(int index) {
        return index*2 + 1;
    }
    
    int rchild(int index) {
        return index*2 + 2;
    }
    
    
    

};


int main() {
    
    
    maxHeap<int> heap;
    
    int values[] = {79,76,49,59,20,30,72,55,12,88};
    // 88 79 72 59 76 30 49 55 12 20 

    
    heap.insertFromArray(values, 10);
    heap.print();
    
    // heap.heapfy(values, 10);
    // heap.print();
    // 88 79 72 59 76 30 49 55 12 20 
    
    
    // for (int i=0; i<10; i++) {
    //     heap.pop();
    //     heap.print();
    // }
    
    

    return 0;
}
















