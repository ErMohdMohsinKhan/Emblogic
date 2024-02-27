#include "headers.h"
#include "declarations.h"

/*WAP to create two linked lists, LL1 and LL2. From these linked lists, create another linked list, LL3, where the total number of nodes is equal to the total number of digits in the sum of LL1 and LL2. Also, reverse LL3.*/

int main ()
{
	init();
	Node *LL1, *LL2, *LL3;
	LL1 = LL2 = LL3 = NULL;
	LL1 = (Node *) fptr[0](0);
	LL2 = (Node *) fptr[0](0);
	LL3 = (Node *) fptr[0](0);
	struct nodee *LL31 = (struct nodee *) fptr[0](0);
	int i = 0;
	while(i<3)
	{
		i++;
		fptr[1]((void *)LL1);
		fptr[1]((void *)LL2);
	}
	fptr[2]((void *)LL1);
	fptr[2]((void *)LL2);
	sum = *(int *)fptr[3]((void *)LL1);
	sum = *(int *)fptr[3]((void *)LL2);
	printf("%s: Total Sum : %d\n", __func__, sum);
	int rem = 0;
	LL31->LL = LL3;

	while(sum)
	{
		rem = sum%10;
		LL31->val = rem;
		fnptr[0]((void *)LL31);
		sum = sum/10;
	}
	
	fptr[2]((void *)LL3);
	fptr[4]((void *)LL3);
	
	printf("\n");
	return 0;
}
