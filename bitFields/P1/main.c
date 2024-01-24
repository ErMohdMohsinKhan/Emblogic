#include "headers.h"
#include "dataStruct.h"

int main()
{
	time t;
	int hr, mm, s;
	printf("Enter time in (hr:mm:s)\n");
	scanf("%d%d%d", &hr, &mm, &s);
	t.hours = hr;
	t.minutes = mm;
	t.seconds = s;
	printf("Time entered->>");
	printf("%2u:%2u:%2u\n\n", t.hours, t.minutes, t.seconds);
	return 0;
}
