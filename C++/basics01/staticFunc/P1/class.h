class Room
{
	private:
		double len;
		double brd;
		double hgt;

	public:
		static int count_ob;
		Room(double l=5.1, double b=2.5, double h=1.2);
		double volume();
		static int getCount(); //static func
};
