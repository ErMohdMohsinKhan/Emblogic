#include "headers.h"
#include "class.h"

int main (void)
{
	cout<<__func__<<": Begin"<<endl;
	Convert n1;
	n1.display();
	cout<<endl;
	n1.trs();
//	n1.display();
  //      cout<<endl;
	cout<<__func__<<": End"<<endl;
}
