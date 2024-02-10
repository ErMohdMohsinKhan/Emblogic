#include <iostream>
using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(int l, int b)
		{
			length = l;
			breadth = b;
		}
		int area ()
		{
			return (length * breadth);
		}
		int peri ()
		{
			return 2* (length + breadth);
		}
};
int main ()
{
	int len, brd;
	while(1)
	{
		cout<<"Enter Length and Breadth : "<<endl;
		cin >> len >> brd;
		if ( (len > 0) && (brd > 0) )
			break;
		cout<<"Please Enter values greater than zero "<<endl;
	}
	Rectangle r (len, brd);  // Create a Rectangle object with user-provided values
	cout<<"Area : "<<r.area()<<endl;;
	cout<<"Perimeter : "<<r.peri()<<endl;
	return 0;
}
