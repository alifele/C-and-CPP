import numpy as np

class Node:
    def __init__(self, low, high):
        self.low = low
        self.high = high
        self.average = None
        self.children = []

    def addChild(self,node):
        self.children.append(node)

    def setAvg(self,value):
        self.average = value


    def __repr__(self):
        return f"Node({self.low}, {self.high}, avg={self.average:.2f})"
    




class Tree:
    def __init__(self, arr):
        self.root = Node(0,len(arr))
        self.arr = arr
        self.buildTree()
        self.resampleArray = []

    def buildTree(self):
        self.buildTree_Helper(self.arr, self.root)

    def buildTree_Helper(self,arr, node):
        if (node.low > node.high):
            return

        node.setAvg(arr[node.low: node.high].mean())
        if (node.high - node.low > 1):
            mid = (node.low+node.high+1)//2
            child1 = self.buildTree_Helper(arr,Node(node.low, mid))
            child2 = self.buildTree_Helper(arr,Node(mid, node.high))
            node.addChild(child1)
            node.addChild(child2)
            return node

        node.addChild(None)
        return node


    def print(self):
        self.print_helper(self.root)

    def print_helper(self,node):
        if node == None:
            return

        print(node)
        for child in node.children:
            self.print_helper(child)

    def resample(self,tol):
        self.resample_helper(self.root, tol)

        values = self.arr * 0
        for node in self.resampleArray:
            values[node.low: node.high] = node.average

        return values


    def resample_helper(self, node, tol):
        if node == None:
            return
            
        if (np.abs(self.arr[node.low: node.high] - node.average)).max() < tol:
            self.resampleArray.append(node)
            return

        for child in node.children:
            self.resample_helper(child, tol)
            
            
        
        


if __name__ == "__main__":

"""
this builds a quad tree on a 1d array and then uses that to resample a sine curve with different 
telorance values

"""


    tList = np.linspace(0,np.pi*2, 100)
    a = np.sin(tList)       
    tree = Tree(a)
    values = tree.resample(0.04)

    plt.plot(tList, values)
        
