#include "Nodes.h"
#include <stdlib.h>
#include <stdio.h>

void Nodes_setHeader(NodesClass *addr ,Node *header){

  addr->firstNode = header;

}

void Nodes_setTail(NodesClass *addr ,Node *tail){
  addr->lastNode = tail;
}


void Nodes_List(NodesClass *addr){
  Node * currentnode;
  currentnode = addr->firstNode;

  while (currentnode!= NULL){
    printf("data: %d\n",currentnode->data);
    currentnode = currentnode->next;
  }
}

void Nodes_addNode(NodesClass *addr, int value){
  Node *newnode = NULL;
  newnode = (Node *)malloc(sizeof(Node));

  newnode->data = value;
  newnode->next = NULL;
  addr->lastNode->next = newnode;
}
