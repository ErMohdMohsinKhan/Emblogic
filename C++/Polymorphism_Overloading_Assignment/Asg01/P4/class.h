using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
		int area;
	public:
		Rectangle(); //Zero Arg Const
		Rectangle(int, int); //One Arg Const
		Rectangle(Rectangle&); //Copy Const
		int display();
		int operator< (const Rectangle) const;
};
