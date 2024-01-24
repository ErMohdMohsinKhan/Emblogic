using namespace std;
class Circle
{
	private:
		int rad;
	public:
		Circle();
		Circle(int); //One Arg constant
		Circle(Circle &);
		int display();
		Circle operator+(const Circle) const;
};
