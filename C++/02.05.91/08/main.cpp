#include "headers.h"
#include "class.h"

int main (void)
{
	cout<<__func__<<": Begin"<<endl;
	Time ta;
	Time tb(15, 20, 25);
	ta.display();
	ta.calTime();
	cout<<__func__<<": End"<<endl;
}

