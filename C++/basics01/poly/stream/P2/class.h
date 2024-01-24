using namespace std;
class Distance
{
	private:
		int feet;
		float inch;
	public:
		Distance(); //Zero
		Distance(int, float); //Two arg
		int display();
		friend istream& operator >> (istream&, Distance&);	
		friend ostream& operator << (ostream&, const Distance&);	
};
