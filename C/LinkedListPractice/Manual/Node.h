struct Node{
  int data;
  struct Node *nextNode;
};
typedef struct Node Node;


void Node_addNode();
void Node_removeNode();
void Node_ListNode(Node *header);
