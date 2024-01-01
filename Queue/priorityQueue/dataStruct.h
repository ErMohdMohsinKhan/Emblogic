typedef struct data
{
	int priority;
	int value;
}Data;

typedef struct item
{
	struct item *pnext;
	Data *pdata;
}Item;

typedef struct pqueue
{
	Item *pfrst;
	int count;
}PQueue;
