using namespace std;
class Distance
{
	private:
		int feet;
		float inch;
	public:
		Distance(); //Zero Arg Const
		Distance(float); //One arg
		Distance (int, float);
		Distance(Distance&);
		int getDistance();
		int showDistance();
		Distance operator+(const Distance)const;
};
