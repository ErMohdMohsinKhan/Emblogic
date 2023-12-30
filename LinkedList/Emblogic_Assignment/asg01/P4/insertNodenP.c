#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* insertNodenP (void* arg)
{
	Node *str, *new;
	int pos, count;
	count = 0;
	printf("%s : Begin\n", __func__);
	printf("%s : %s : Enter the Position to insert a Node\n", __FILE__, __func__);
	scanf("%d", &pos);
	str = (Node*)arg;
	while(str->next)
	{
		str = str->next;
		count++;
		if(pos == count)
		{
			new = (Node*)(*fptr[3])(arg); //CreatNode
			new->next = str->next;
			str->next = new;
			return 0;
		}
	}
	printf("%s : End\n", __func__);
	return (void*)arg;
}
