#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"

void* displaylinkList (void *arg)
{
	Node *start, *cir;
	start = cir = (Node*)arg;
	int i = 1;
	printf("%s : Begin\n", __func__);
/*	while(start->next)
	{
		start = start->next;
		printf("%2d : %3d\n", i, start->data);
		i++;
	}  */
	if(start->next == NULL)
        {
                printf("%s : %s : No elements to display\n", __FILE__, __func__);
                return arg;
        }
        start = start->next;
        printf("%2d : %3d\n", i, start->data);
        i++;
        while(start->next != cir->next)
        {
                start = start->next;
                printf("%2d : %3d\n", i, start->data);
                i++;
        }

	printf("%s : End\n", __func__);
	return (void*)arg;
}
