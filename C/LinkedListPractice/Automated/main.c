#include <stdio.h>
#include <stdlib.h>
#include "Nodes.h"


int main(){

  NodesClass myLinkedList;

  Node *node1 = NULL;
  Node *node2 = NULL;
  Node *node3 = NULL;

  node1 = (Node *)malloc(sizeof(Node));
  node2 = (Node *)malloc(sizeof(Node));
  node3 = (Node *)malloc(sizeof(Node));

  node1->data = 1;
  node1->next = node2;

  node2->data =  2;
  node2->next = node3;

  node3->data = 3;
  node3->next = NULL;


  Nodes_setHeader(&myLinkedList, node1);
  Nodes_setTail(&myLinkedList, node3);

  Nodes_addNode(&myLinkedList, 123);



  Nodes_List(&myLinkedList);


}
