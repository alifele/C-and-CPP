#include "Node.h"
#include <stdio.h>
#include <stdlib.h>

void Node_ListNode(Node *header){
  Node *currentnode = NULL;
  currentnode = header;
  while (currentnode->nextNode != NULL){
    printf("currnet node value is: %d\n", currentnode->data);
    currentnode = currentnode->nextNode;
  }
  printf("currnet node value is: %d\n", currentnode->data);
}
