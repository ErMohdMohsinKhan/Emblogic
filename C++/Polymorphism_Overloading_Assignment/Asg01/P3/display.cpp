#include "headers.h"
#include "class.h"

int Time::display()
{
	if(hr >= 24)
	{
		cout<<"It is more than a day and ";
		hr = hr - 24;
	}
        cout<<hr<<":"<<min<<":"<<sec;
	return 0;
}
