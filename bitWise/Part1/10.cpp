#include <iostream>
using namespace std;
/*WAP to two's complement a number*/
int twoComp(unsigned int num)
{
	num = (num ^ 0xFFFFFFFF) + 1;
	return num;
}
int main ()
{
	unsigned int num, comp;
	cout<<"Enter a number"<<endl;
	cin>>num;
	comp = twoComp(num);
	cout<<"Two's complement of "<<num<<" is "<<static_cast<int>(comp)<<endl;
	return 0;
}
