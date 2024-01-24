using namespace std;

class Weight
{
	private:
		int kg;
		int gram;
	public:
		Weight();
		Weight(int, int);
		Weight(const Weight &);
		int display();
		int operator=(const Weight &);
};
