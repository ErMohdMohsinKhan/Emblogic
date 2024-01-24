class DistMeter;  //forward declaration
class DistFeet
{
	private:
		int feet;
		float inch;
	public:
		DistFeet();
		DistFeet(int, float);
	//	DistFeet(const DistFeet&);
		void getDistFeet();
	//	void addDistFeets(DistFeet, DistFeet);
		void displayDistFeet();
		friend DistMeter convert(DistFeet, DistMeter);
};
class DistMeter
{
	private:
		int meter;
		int cmeter;
	public:
		DistMeter();
		DistMeter(int, float);
	//	DistMeter(const DistMeter&);
		void getDistMeter();
		void displayDistMeter();
		friend DistMeter convert(DistFeet, DistMeter);
};
