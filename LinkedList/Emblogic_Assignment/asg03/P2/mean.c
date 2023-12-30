#include "headers.h"
#include "declarations.h"

void mean(Node *start)
{
	printf("%s : Begin\n", __func__);
	Node *crr = start;
	int count = 0;
	float mean = 0.0;
	while(crr->next)
	{
		crr = crr->next;
		mean = mean + crr->data;
		count++;
	}
	printf("%s : Sum->%.2f\n", __func__, mean);
	printf("%s : Mean->%.2f\n", __func__, (mean/count));
	printf("%s : End\n", __func__);
}
