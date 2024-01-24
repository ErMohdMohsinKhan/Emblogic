class Distance
{
	private:
		float x;
		float y;
		//float x2;
		//float y2;
	public:
		Distance();
		Distance(float, float); //Two argument Constructor
		Distance(const Distance &obj);
		void display();
		float caldst(Distance);
		void setX(float);
		float getX();
		
};
