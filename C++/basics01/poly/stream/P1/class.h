using namespace std;

class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance();
		Distance(int ft, float in);
		friend istream& operator >> (istream&, Distance&);
		friend ostream& operator << (ostream&, const Distance&);
};
