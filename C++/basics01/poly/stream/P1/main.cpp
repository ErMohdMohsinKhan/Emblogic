#include "headers.h"
#include "class.h"

int main ()
{
	Distance dist1, dist2;
	Distance dist3(15, 2.25);
	cout << "Enter distance in feet/inch :" <<endl;
	cin >> dist1 >> dist2;
	cout << "dist1 = " << dist1 << endl
	 << "dist2 = " <<dist2 << endl
	 << "dist3 = " << dist3 << endl;
	return 0;
}
