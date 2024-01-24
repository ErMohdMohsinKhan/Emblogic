using namespace std;
class Shape
{
	protected:
		int width;
		int height;
	public:
		Shape(int, int); //Const
};

class Rectangle:public Shape
{
	public:
		Rectangle(); //const
		int area();
};
