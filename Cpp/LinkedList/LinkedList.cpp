#include "LinkedList.h"
#include "Nodes.h"
#include <iostream>

LinkedList::LinkedList(Nodes* firstNode){
  this->firstNode = firstNode;
  this->lastNode = this->firstNode;
}

void LinkedList::addNodes(Nodes* newNode){
  this->lastNode->next = newNode;
  this->lastNode = newNode;
  this->lastNode->next = NULL;
}


void LinkedList::listNodes(){
  Nodes* currentNode = NULL;
  currentNode = this->firstNode;
  while (currentNode!=NULL){
    std::cout << currentNode->data << "\n";
    currentNode = currentNode->next;
  }
}
