#include "headers.h"
using namespace std;
int main()
{
	char ch;
	int i;
	string str1;
	double d;
	string str2;
	ifstream infile("my.txt"); //create ofstream object
	infile >> ch
		>> i
		>> str1
		>> d
		>> str2;
	cout << "Content read from the file" <<endl;
	cout<<ch<<i<<str1<<d<<str2<<endl;
	return 0;
}
