using namespace std;
class Bclass
{
	private:
		int ba;
	protected:
		int bb;
	public:
		Bclass(); //ZAC
		bool funcBC();
		int displayB();
};
class Dclass:public Bclass
{
	private:
		int da;
	public:
		Dclass(); //ZAC
		int funcDC();
		int display();
};
