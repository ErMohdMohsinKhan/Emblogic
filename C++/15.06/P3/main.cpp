#include"headers.h"
using namespace std;
int main()
{
	if (filesystem::exists("p3.txt"))
		cout<<"File Exist"<<endl;
	else
		cout<<"Sorry, file doesn't Exist"<<endl;
	return 0;
}
