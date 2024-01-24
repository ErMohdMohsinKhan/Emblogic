#include <iostream>
using namespace std;
int main()
{
	int i;
	cout<<"Enter an integer"<<endl;
	cin.unsetf(ios::skipws);
	cin>>i;
	if(cin.good())
	{
		cout<<"No Error"<<endl;
		return 0;
	}
	cout<<"Error"<<endl;
	return 0;
}
