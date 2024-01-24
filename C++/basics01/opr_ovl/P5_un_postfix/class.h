using namespace std;
class Counter
{
	private:
		int count;
	public:
		Counter();  //Zero Arg Construcor
		Counter(int); //One Arg Constructor
		int getCount() const;
		Counter operator++ (int);  //int differentiates it as Postfix
		Counter operator++ ();  //Prefix
};
