#include "headers.h"
#include "dataStructures.h"
#include "declarations.h"
void* findIndex (void* arg)
{
	DSUnique *dun;
	printf("%s : Begin\n",__func__);
	dun = (DSUnique*)arg;
	int i;
	for(i=0; i<strlen(dun->ma); i++)
	{
		if (dun->ch == *(dun->ma+i))
		{
			var = i;
			return (void*)&var;
		}
	}
	printf("%s : End\n",__func__);
	return 0;
}
