using namespace std;

class Sub
{
	private:
		int num;
	public:
		Sub();
		Sub(int);
		Sub(Sub&);
		~Sub();
		int show();
		Sub operator-(const Sub) const;
};
