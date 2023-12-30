#include "headers.h"
#include "dataStructures.h"
Node *start;
Node *start2;
Node* creatLinkList(Node*);
Node* creatNode(Node *);
void display(Node *);
void merge(Node *, Node *);
int choice;
Node* creatLinkList(Node* start)
{
	if(!start)
		return creatNode(start); 
	else
	{
		return start;
	}
	return start;
}
Node* creatNode(Node *start)
{
	Node *new_node;
	Node *current; 		
	new_node = (Node*)malloc(sizeof(Node));
        if (!new_node)
        {
                perror("malloc");
                exit(EXIT_FAILURE);
        }
        new_node->next = NULL;
        printf("%s : Enter the value\n", __func__);
        scanf("%d", &new_node->data);
	if(!start)
	{
		start = new_node;
	}
	else
	{
		current = start;
		while(current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return start;
}
void display(Node *start)
{
        int i = 1;
	Node *dsp = start;
        printf("%s : Begin\n", __func__);
        while(dsp->next)
        {
                dsp = dsp->next;
                printf("%2d : %3d\n", i, dsp->data);
                i++;
        }
}
void merge(Node *start, Node *start2)
{
        int i = 1;
	Node *dsp = start;
	Node *dsp2 = start2;
        printf("%s : Begin\n", __func__);
        while(dsp->next)
        {
                dsp = dsp->next;
                printf("%2d : %3d\n", i, dsp->data);
                i++;
        }
        while(dsp2->next)
        {
                dsp2 = dsp2->next;
                printf("%2d : %3d\n", i, dsp2->data);
                i++;
        }

}
int main(void)
{
	start = NULL;	
	start2 = NULL;	
	
	while(1)
	{
	printf("<<MENU>>\n");
	printf("1 : CreatLinkList1\n");
	printf("2 : CreatNode1\n");
	printf("3 : Display1\n");
	printf("4 : CreatLinkList2\n");
	printf("5 : CreatNode2\n");
	printf("6 : Display2\n");
	printf("7 : Merge the two LinkList\n");
	printf("0 : Exit\n");
	printf("Enter your choice\n");
	scanf("%d", &choice);
	if(choice == 1)
	{
		start = creatLinkList(start); //
	}
	else if(choice == 2)
	{
		creatNode(start);
	}
	else if(choice == 3)
	{
		display(start);
	}
	else if(choice == 4)
	{
		start2 = creatLinkList(start2);
	}
	else if(choice == 5)
        {
                creatNode(start2);
        }
        else if(choice == 6)
        {
                display(start2);
        }
	else if(choice == 7)
	{
		merge(start, start2);
	}
	else 
		exit(EXIT_SUCCESS);
	}
	return 0;
}
