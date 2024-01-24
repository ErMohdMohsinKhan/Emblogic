#include<iostream>
using namespace std;
class Room
{
	private:
	int length;
	int breadth;
	int height;
	public:
	Room(int l, int b, int h)
	{
		length = l;
		breadth = b;
		height = h;
	}
	int display()
	{
		cout<<"Length " <<length<<" Breadth "<<breadth<<" Height "<<height<<endl;
		return 0;
	}
};
int main()
{
	Room r1(10,8,6);
	r1.display();
	return 0;
}
