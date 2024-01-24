#include"headers.h"
#include"class.h"
int main()
{
	Test t1;
	t1.myFunc();
	t1.myFunc(5);
	t1.myFunc(5, 10);
	t1.myFunc(5, 10, 15);
	t1.myFunc(5, 10, 15, 20);
	return 0;
}
