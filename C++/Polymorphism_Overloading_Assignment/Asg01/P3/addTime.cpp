#include "headers.h"
#include "class.h"

Time Time::addTime(const Time ta) const
{
	Time tl;
	tl.hr = ta.hr + hr;
	tl.min = ta.min + min;
	tl.sec = ta.sec + sec;
	if(tl.sec >= 60)
	{
		tl.sec = tl.sec - 60;
		tl.min++;
	}
	else if(tl.min >= 60)
	{
		tl.min = tl.min - 60;
                tl.hr++;
	}
	return Time(tl.hr, tl.min, tl.sec);
}
