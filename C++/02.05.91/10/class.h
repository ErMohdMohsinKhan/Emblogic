class Count
{
	private:
		static int ct;
	public:
		Count();
		Count(int);
		Count(const Count&);
		int getCount();
};
