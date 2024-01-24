#include "headers.h"
#include "class.h"

int main()
{
	Test *obj;
	obj = new Test[5];  //Now memory is allocated
	obj->display();
	cout<<endl;
	return 0;
}
