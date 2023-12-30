#include "headers.h"
#include "declarations.h"

void palindrome(Node *start)
{
	int flag = 0;
	printf("%s : Begin\n", __func__);
	Node *fast = start->next;  //Runs twice as *slow
	Node *slow = start->next;
	while(fast->next)
	{
		fast = fast->next;
		slow = slow->next;
		if(fast->next)
			fast = fast->next;
	} //At end, *slow points to the centre of Linked List

	Node *ff = start->next;  //*ff points to First Node (Not Dummy Node)
	Node *new = (*rev)(slow); //*new points to the second half reversed linkedlist
	
	while(new != slow) //When *slow points to *new, exit the loop
	{
		if(new->data == ff->data)
		{
			new = new->next;
			ff = ff->next;
		}
		else
		{
			flag = 1;
			break;
		}
		if(count%2 == 0)
		{
			if(new->data != ff->data)
                       		flag = 1;
		}

	}
	if(flag == 1)
		printf("%s : Sorry, Enterd LinkList is NOT a palindrome\n", __func__);
	else
		printf("%s : Hurrah, Entered LinkList is a palindrome\n", __func__);
	printf("%s : End\n", __func__);
	return;
}
