#include "headers.h"
#include "class.h"

int main()
{
	distKM dF;
	dF.displayKM();
	cout<<endl;
	dF = dF.convert();
	return 0;
}
