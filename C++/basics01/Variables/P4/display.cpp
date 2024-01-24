#include "headers.h"
#include "class.h"
int Distance::count=0;
void Distance::display()
{
	cout<<"("<<feet<<"\'"<<inch<<"\""<<")";
	cout<<"Count : "<<count;
}
