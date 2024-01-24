class DistMeter;  //forward declaration
class DistFeet
{
	private:
		float feet;
		float inch;
	public:
		DistFeet();
		DistFeet(float, float);
	//	DistFeet(const DistFeet&);
		void getDistFeet();
		void displayDistFeet();
		friend DistMeter operator = (DistFeet, DistMeter);
};
class DistMeter
{
	private:
		float meter;
		float cmeter;
	public:
		DistMeter();
		DistMeter(float, float);
	//	DistMeter(const DistMeter&);
		void getDistMeter();
		void displayDistMeter();
		friend DistMeter operator = (DistFeet, DistMeter);
};
