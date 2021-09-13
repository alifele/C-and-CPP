struct Node{
  int data;
  struct Node *next;
};
typedef struct Node Node;


typedef struct NodesClass{
  Node *firstNode;
  Node *lastNode;
}NodesClass;



void Nodes_setHeader(NodesClass *addr ,Node *header);
void Nodes_setTail(NodesClass *addr ,Node *tail);
void Nodes_List(NodesClass *addr);
