using namespace std;

class Mult
{
	private:
		int num;
	public:
		Mult();
		Mult(int);
		Mult(Mult&);
		~Mult();
		int show();
		Mult operator*(const Mult) const;
		Mult operator+(const Mult) const;
};
