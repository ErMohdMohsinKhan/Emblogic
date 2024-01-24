#include "headers.h"
#include "class.h"

int Weight::operator=(const Weight &w)
{
	kg = w.kg;
	gram = w.gram;
	return 0;
}
