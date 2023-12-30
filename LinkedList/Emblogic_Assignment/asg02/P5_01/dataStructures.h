typedef struct node
{
        struct node *next;
        int data;
}Node;
typedef struct
{
        int size;
        int *skptr;
        int top;
}Stack;
