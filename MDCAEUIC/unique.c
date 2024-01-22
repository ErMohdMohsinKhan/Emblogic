#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* unique(void* arg)
{
	printf("%s : Begin\n", __func__);
	DSUnique *dun;
	dun = (DSUnique*)arg; 
	if (dun->noc == 0 || dun->ma == NULL)
	{
		var = 1;
		return (void*)&var;
	}
	int i;
	for (i=0; i< dun->noc; i++)
	{
		if (dun->ch == *(dun->ma + i))
		{
			var = 0;
			return (void*)&var;
		}
	}
	var = 1;
	return (void*)&var;
	printf("%s : End\n", __func__);
}
