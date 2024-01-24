#include "headers.h"
using namespace std;
int main()
{
	fstream file;
	file.open("p2.txt", ios::out|ios::trunc);
	if(!file)
	{
		cerr<<"File is not opened successfully"<<endl;
		return 1;
	}
	file<<"Hello\n";
	return 0;
}
