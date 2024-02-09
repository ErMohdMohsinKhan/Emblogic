#include <iostream>
using namespace std;
/*Call by refrence and call by address*/
struct rectangle
{
	int length;
	int breadth;
};
void modLength (struct rectangle *);
int area (struct rectangle &);
int main ()
{
	struct rectangle R = {10,5};
	modLength(&R);
	cout<<"Area : "<<area(R)<<endl;
	return 0;
}
void modLength (struct rectangle *R1)
{
	R1->length++;
}
int area (struct rectangle &R1)
{
	return (R1.length * R1.breadth);
}
