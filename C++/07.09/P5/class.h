using namespace std;
class Rectangle
{
	private:
		int length;
		int breadth;
	public:
		Rectangle(); //Zero Arg const
		Rectangle(int, int); //Tow arg const
		Rectangle(Rectangle &);  //Copy Const
		int display();
		int operator<(const Rectangle)const;
};
