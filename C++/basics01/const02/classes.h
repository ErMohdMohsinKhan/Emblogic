class Distance
{
	private:
		int feet;
		float inch;
	public:
		Distance(); //Declared constructor
		Distance(float); //Declared constructor
		//void getDistance();
		Distance addDistance(Distance);
		void display();
};
