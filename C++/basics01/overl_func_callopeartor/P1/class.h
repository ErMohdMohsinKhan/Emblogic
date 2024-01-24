using namespace std;
class Distance
{
	private:
		int feet;
		float inch;
	public:
		Distance();
		Distance(int f, float i);
		Distance operator()(int, float);
		Distance operator()(int, float, int);
		int display();
};
