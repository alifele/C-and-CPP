#include <iostream>
#include "Nodes.h"
#include "LinkedList.h"

int main(){


    // Nodes* node1;
    // Nodes* node2;
    //
    // node1 = new Nodes(1);  // note that the "new Nodes(dataval)" will return pointer (Nodes node(dataval))
    // node2 = new Nodes(2);

    // node1->next = node2;
    // node2->next = NULL;


    LinkedList linkedList(new Nodes(1));
    linkedList.addNodes(new Nodes(2));
    linkedList.addNodes(new Nodes(3));


    linkedList.listNodes();

}
