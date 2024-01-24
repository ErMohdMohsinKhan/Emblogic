using namespace std;
class Array
{
	private:
		int arr[10];
	public:
		Array();
		int& operator[](int i);
};
