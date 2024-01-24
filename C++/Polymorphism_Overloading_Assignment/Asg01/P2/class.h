using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(); //Zero Arg Const
		Rectangle(int, int); //One Arg Const
		Rectangle(Rectangle&); //Copy Const
		int display();
		Rectangle operator+ (const Rectangle) const;
};
