using namespace std;
class Square
{
	private:
		int side;
		int area;
	public:
		Square(); //Zero Arg const
		Square(int); //Tow arg const
		Square(Square &);  //Copy Const
		int display();
		Square operator+(const Square)const;
};
