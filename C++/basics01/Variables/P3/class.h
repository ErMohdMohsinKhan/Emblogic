class Distance
{
	private:
		int feet;
		float inch;
	public:
		static int count;
		Distance();
		Distance(float);
		Distance(int, float);
		void getDistance();
		void display();
       		Distance addDistance(Distance);
};
