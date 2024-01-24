class Box
{
	private:
		double length;
		double breadth;
		double height;
		double Volume;
	public:
		Box(double l=2.0, double b=2.0, double h=2.0);
		void display();
		//double Volume();
		int cmp(Box);
};
