#include "headers.h"
#include "dataStruct.h"
#include "declarations.h"
void* deleteNodeKy (void* arg)
{
	Node *start = (Node*)arg;
	printf("%s : %s : Begin\n", __FILE__, __func__);
	int key;
	printf("%s : %s : Enter a key value\n", __FILE__, __func__);
	scanf("%d", &key);
	Node *crr = start;
	Node *prev = start;
	Node *tmp = NULL;
	Node *tmp2 = NULL;
	while(crr->next)
	{
		tmp2 = prev;  //To restore to same position, in case of multiple nodes having same key value
		prev = crr;
		crr = crr->next;
		if(crr->value == key)
		{
			printf("%s : %s : Key value is matched, now deleting\n", __FILE__, __func__);
			if(crr->next)
			{
				tmp = prev;
				prev->next = crr->next;
				prev = tmp2;
				crr= tmp;

			}
			else
				prev->next = NULL;
		}
	}
	printf("%s : %s : End\n", __FILE__, __func__);
	return arg; 
}
