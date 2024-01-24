#include "headers.h"
#include "class.h"
int main()
{
	const int SIZE = 50;
	char buff[SIZE];
	ifstream input("of.txt");
	while(!input.eof())
	{
		input.getline(buff, SIZE); //reads a line
		cout<<buff<<endl; //displays it
	}
	return 0;
}
