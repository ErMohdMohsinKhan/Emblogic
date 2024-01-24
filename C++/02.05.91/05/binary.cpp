#include "headers.h"
#include "class.h"
void Convert::binary(int)
{
	int rem, i, c;
	i=c=0;
	while(number != 0)
	{
		rem = number%2;
		ptr[i++] = rem;
		number = number/2;
		c++;
	}
	for(i=c-1; i>=0; i--)
	{
		cout<<ptr[i];
	}
	cout<<endl;
}
