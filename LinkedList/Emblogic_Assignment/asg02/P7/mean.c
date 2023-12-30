#include "headers.h"
#include "declarations.h"

void mean(Node *start)
{
	printf("%s : Begin\n", __func__);
	float mean = 0.0;
	int count = 0;
	Node *crr = start->next;
	while(crr)
	{
		mean = mean + crr->data;
		count++;
		crr = crr->next;
	}
	printf("%s : Total->%3d\n", __func__, (int)mean);
	printf("%s : Mean->%.2f\n", __func__, (mean/count));
	printf("%s : End\n", __func__);
}
