#include "headers.h"
#include "declarations.h"

void delt(Node *start)
{
	int n_nod, m_nod;
	int count = 0;
	int nde = 0;
	printf("%s : Begin\n", __func__);
	printf("%s : How many Nodes you want to delete\n", __func__);
	scanf("%d", &n_nod);
	printf("%s : After which node\n", __func__);
	scanf("%d", &m_nod);
	Node *crr = start->next;
	Node *prev = start;
	while(crr)
	{
		if(count == m_nod)
		{
			while(nde < n_nod)
			{
				prev->next = crr->next;
				free(crr);
				crr = prev->next;
				nde++;
			}
		}
		prev = prev->next;
		crr = crr->next;
		count++;
	}
	printf("%s : %d nodes are successfully deleted after %d node\n", __func__, n_nod, m_nod);
	printf("%s : End\n", __func__);
}
