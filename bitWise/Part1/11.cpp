#include <iostream>
using namespace std;
/*WAP to two's complement a number*/
int twoComp(unsigned int num)
{
	int no, rem, a, b;
	int count = -1;
	no = num;
	while(1)
	{
		count++;
		a = 1<<count;
		b = a & num;
		if(b)
		{
			no = b;
		}

	}
}
int main ()
{
	unsigned int num, comp;
	cout<<"Enter a number"<<endl;
	cin>>num;
	comp = twoComp(num);
	cout<<"Two's complement of "<<num<<" is "<<comp<<endl;
	return 0;
}
