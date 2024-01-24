using namespace std;
class Circle
{
	private:
		int radius;
	public:
		Circle(); //Zero Arg Const
		Circle(int); //One Arg Const
		Circle(Circle&); //Copy Const
		int display();
		Circle operator+ (const Circle) const;
};
