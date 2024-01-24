class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance();
		Distance(int i, float f);
		int displayDistance();
		Distance operator -- ();
};
