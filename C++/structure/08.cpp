#include <iostream>
using namespace std;
// Define a Rectangle class with private attributes length and breadth
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		// Constructor to initialize length and breadth by user input
		Rectangle()
		{
			cout<<"Enter Length and Breadth : "<<endl;
			cin >> length >> breadth;
		}
		int area ()
		{
			return (length * breadth);
		}
		int peri ()
		{
			return 2 * (length + breadth);
		}
};
int main ()
{
	Rectangle r;   // Create a Rectangle object
	cout<<"Area : "<<r.area()<<endl;;
	cout<<"Perimeter : "<<r.peri()<<endl;;
	return 0;
}
