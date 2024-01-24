#include "headers.h"
using namespace std;
int main()
{
	fstream file;
	file.open("p6.txt", ios::in|ios::out|ios::trunc);
	if(!file)
	{
		cerr<<"File is not opened"<<endl;
		return 1;
	}
	file<<"Hello World!";
	file.seekg(0, ios::beg);
	string read;
//	char read[100];
	getline(file, read);
	cout<<read;
	file.close();
	return 0;
}
