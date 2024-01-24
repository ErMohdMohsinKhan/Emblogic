class Time
{
	private:
		typedef struct
		{
			int hr;
			int mm;
			int ss;
		}T1;
		typedef struct
		{
			int hr;
			int mm;
			int ss;
		}T2;
		T1 t1;
		T2 t2;

	public:
		Time(); //ZC
		Time(int, int, int);
		void getTime1();
		void getTime2();
		void display();
		void calTime();
};
