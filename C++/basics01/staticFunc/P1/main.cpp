#include "headers.h"
#include "class.h"
int Room::count_ob = 0;
int main ()
{
	cout<<"Count : "<<Room::getCount()<<endl;
	Room r1(5.4, 2.5, 1.1);
	Room r2(4.4, 2.1, 1.1);
	cout<<"Updated count : "<<Room::getCount()<<endl;
	return 0;
}
