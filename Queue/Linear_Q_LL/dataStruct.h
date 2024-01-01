typedef struct node
{
	int data;
	struct node *next;
}Node;
typedef struct queue
{
	struct node *front;
	struct node *rear;
}Queue;
