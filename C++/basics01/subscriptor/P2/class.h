using namespace std;
const int MAX = 10;
class Array
{
	private:
		int arr[MAX];
	public:
		int& operator [](int n);
};
