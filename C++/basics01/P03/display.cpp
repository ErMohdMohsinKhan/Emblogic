#include <iostream>
#include "classes.h"
using namespace std;
int Distance::display(Distance da, Distance db)
{
	cout<<__func__<<" : Begin"<<endl;
	cout<<__func__<<" : "<<da.feet<<"\'"<<da.inch<<"\" + "<<db.feet<<"\'"<<db.inch<<"\" = "<<feet<<"\'"<<inch<<"\""<<endl;
	cout<<__func__<<" : End"<<endl;
	return 0;
}
