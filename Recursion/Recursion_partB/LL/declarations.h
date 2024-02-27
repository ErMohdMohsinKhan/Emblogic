typedef struct node
{
	int data;
	struct node *next;
}Node;
void insertNode (Node*);
void displayLL (Node*);
Node* revLL (Node*);
