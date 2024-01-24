#include <iostream>
using namespace std;
int main()
{
	int i;
	while(true)
	{
		cout<<"Enter an integer : "<<endl;
		cin >> i;
		if(cin.good())
		{
			cin.ignore(10, '\n');
			break;
		}
		cin.clear();
		cout << "Incorrect output"<<endl;
		cin.ignore(10, '\n');
	}
	cout<<"Integer entered is "<<i<<endl;
	return 0;
}
