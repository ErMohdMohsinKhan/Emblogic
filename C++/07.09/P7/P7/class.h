using namespace std;
class distMiles;
class distKM
{
	private:
		float kms;
		int meters;
	public:
		distKM(); //One arg
		int displayKM();
		friend distKM convert(distMiles, distKM);
};

class distMiles
{
	private:
		float miles;
		int meters;
	public:
		distMiles();
		int displayMiles();
		friend distKM convert(distMiles, distKM);
};
