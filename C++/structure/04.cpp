#include <iostream>
using namespace std;
/*Call by value*/
struct rectangle
{
	int length;
	int breadth;
};
int area (struct rectangle);
int main ()
{
	struct rectangle R = {10,5};
	cout<<"Area : "<<area(R)<<endl;
	return 0;
}
int area (struct rectangle R1)
{
	return (R1.length * R1.breadth);
}
