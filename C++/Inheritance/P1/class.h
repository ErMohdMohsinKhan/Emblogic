using namespace std;
class BaseClass
{
	private:
		int objpB; 
	protected:
		int objpoB;
	public:
		BaseClass();
		BaseClass(int, int);
};
class DerivedClass:public BaseClass
{
	private:
		int objpD;
	public:
		DerivedClass();
		DerivedClass(int, int, int);
		int display();
};
