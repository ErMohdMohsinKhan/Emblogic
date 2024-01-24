using namespace std;

class Time
{
	private:
		int hr;
		int min;
		int sec;
	public:
		Time();
		Time(int, int, int);
		int getdata();
		int display();
		Time addTime(const Time) const;
};
