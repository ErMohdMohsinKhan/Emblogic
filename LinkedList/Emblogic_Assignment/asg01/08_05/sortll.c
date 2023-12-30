#include "headers.h"
#include "declarations.h"

void sortll(Node* start)
{
	Node *sort = start;
	Node *sort_sl = NULL;
	Node *outer = start->next;
	printf("%s : Begin\n", __func__);
	int temp = '\0';
	printf("%s : Sorting begin\n", __func__);
	while(outer)
	{
		sort = start->next;
		sort_sl = sort;
		sort = sort->next;
	while(sort)
	{
		if(sort_sl->data > sort->data)
		{
			temp = sort_sl->data;
			sort_sl->data = sort->data;
			sort->data = temp;
		}
		sort_sl = sort;
		sort = sort->next;
	}
	outer = outer->next;
	}
	printf("%s : Result after sorting\n", __func__);
	(*dsp)(start);  //display
	printf("%s : End\n", __func__);
}
