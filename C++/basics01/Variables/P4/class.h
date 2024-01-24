class Distance
{
	private:
		int feet;
		float inch;
		static int count;
	public:
		Distance();
		Distance(float);
		Distance(int, float);
		void getDistance();
		void display();
       		Distance addDistance(Distance);
};
