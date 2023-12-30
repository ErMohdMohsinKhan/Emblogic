#include "headers.h"
#include "declarations.h"

void nLast(Node *start)
{
	int num;
	int lc = 0;
	Node *crr = start->next;
	 printf("%s : Begin\n", __func__);
	 printf("%s : Enter the nth Node number to display its element(from the last)\n", __func__);
	 scanf("%d", &num);
	 num = count - num;
	 while(crr)
	 {
		lc++;
		if(lc == (num+1))
		{
			printf("%s : %2d\n", __func__, crr->data);
			break;
		}	
		crr = crr->next;
	 }
	 printf("%s : End\n", __func__);
}
