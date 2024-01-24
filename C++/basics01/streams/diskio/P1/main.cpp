#include "headers.h"
using namespace std;
int main()
{
	char ch = 'a';
	int i = 75;
	string str1 = "Hello";
	double d = 6.2;
	string str2 = "World!";
	ofstream outfile("my.txt"); //create ofstream object
	outfile << ch
		<< ' ' 
		<< i
		<< ' ' 
		<< str1
		<< ' ' 
		<< d
		<< ' ' 
		<< str2;
	cout << "Content is written to the file" <<endl;
	return 0;
}
