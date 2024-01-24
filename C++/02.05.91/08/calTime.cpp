#include "headers.h"
#include "class.h"

void Time::calTime()
{
//	cout<<"Time 1->"<<t1.hr<<":"<<t1.mm<<":"<<t1.ss<<endl;
	if(t2.hr >= t1.hr)
	{
	t2.ss = t2.ss-t1.ss;
	t2.mm = t2.mm-t1.mm;
	t2.hr = t2.hr-t1.hr;
	cout<<"Time Difference->"<<t2.hr<<":"<<t2.mm<<":"<<t2.ss<<endl;
	}
	else
	{
	t1.ss = t1.ss-t2.ss;
        t1.mm = t1.mm-t2.mm;
        t1.hr = t1.hr-t2.hr;
        cout<<"Time Difference->"<<t1.hr<<":"<<t1.mm<<":"<<t1.ss<<endl;
	}

}
