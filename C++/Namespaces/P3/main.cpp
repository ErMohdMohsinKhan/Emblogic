/*Using the same namespace in different files*/
#include "headers.h"
using namespace std;
#include "A.h"
#include "B.h"
using namespace alpha;

int main()
{
	funA();
	funB();
	return 0;
}
