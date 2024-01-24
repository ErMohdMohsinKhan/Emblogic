#include "headers.h"
#include "class.h"

int main()
{
	distMiles dM;
	dM.displayMiles();
	cout<<endl;
	distKM dK;
	dK = convert(dM, dK);
	return 0;
}
