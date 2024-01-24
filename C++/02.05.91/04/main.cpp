#include "headers.h"
#include "class.h"

int main()
{
	cout<<__func__<<": Begin"<<endl;
	Roots r;
	r.display();
	r.getroots();
	Roots r2(2,6,3);
	r2.display();
	r2.getroots();
	cout<<__func__<<": End"<<endl;
	return 0;
}
