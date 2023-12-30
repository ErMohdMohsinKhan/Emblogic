#include "headers.h"
#include "declarations.h"

void* merge (void* arg)
{
	NodeM* start;
	start = (NodeM*)arg;
	printf("%s : Begin\n", __func__);
	printf("%s : End\n", __func__);
}
