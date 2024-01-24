using namespace std;

class A
{
	private:
		int privdataA;
	protected:
		int protdataA;
	public:
		int pubFunA();
};

class C : private A
//privately-derived class
{
	  private:
		int a;
		int priFunC();
	public:
		void pubFunC()
		{
			cout<<"This is pubFuncC"<<endl;
			//a = privdataA;
			//a = protdataA; 
			//a = pubFunA;
		}
};

int C::priFunC()
{
	int val;
	cout<<"This is priFuncC"<<endl;
	val = pubFunA();
	return 0;
};
