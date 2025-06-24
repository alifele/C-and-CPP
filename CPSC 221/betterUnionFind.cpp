// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map>



template <typename T>
class UnionFind {
public:


    void addElem(T* node) {
        parentMap.insert({node, node});
    }

    void unite(T* node1, T* node2) {
        parentMap[node1] = node2;
    }
    
    
    T* find(T* node) {
        if (parentMap[node]==node) {
            return node;
        }
        return find(parentMap[node]);
    }
    
    
    T* operator()(T* node) {
        return find(node);
    }




private:
    std::unordered_map<T*, T*> parentMap;
};



class Dog {
public:
    int age;
    Dog(int age) {
        this->age = age;
    }
};


int main() {
    UnionFind<Dog> unfind;
    
    Dog* a0 = new Dog(0);
    Dog* a1 = new Dog(1);
    Dog* a2 = new Dog(2);
    Dog* a3 = new Dog(3);
    
    
    unfind.addElem(a0);
    unfind.addElem(a1);
    unfind.addElem(a2);
    unfind.addElem(a3);
    
    
    unfind.unite(a1,a0);
    unfind.unite(a2,a0);
    
    
    std::cout << unfind(a3)->age;
    
}







