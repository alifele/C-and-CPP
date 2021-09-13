#include <stdio.h>
#include <stdlib.h>
#include "Node.h"


// My implementation:
/*
int main(){

  Node node1;
  Node node2;
  Node node3;

  node1.data = 1;
  node2.data = 2;
  node3.data = 3;

  node1.nextNode = &node2;
  node2.nextNode = &node3;


  printf("node1 data: %d\n", node1.data);
}

*/

// Standard way to implement:

int main(){


  Node *node1=NULL;
  Node *node2=NULL;
  Node *node3=NULL;

  node1 = (Node *)malloc(sizeof(Node));
  node2 = (Node *)malloc(sizeof(Node));
  node3 = (Node *)malloc(sizeof(Node));

  node1->data=1;
  node1->nextNode = node2;

  node2->data=2;
  node2->nextNode = node3;

  node3->data = 3;
  node3->nextNode=NULL;


  Node_ListNode(node1);

}
