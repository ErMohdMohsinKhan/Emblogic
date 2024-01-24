using namespace std;
class String
{
	private:
		char *str;
	public:
		String();  //Zero arg const
		String(char *s);
		~String();
		int display();
};
