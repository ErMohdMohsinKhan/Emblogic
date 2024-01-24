class Counter
{
	private:
		int count;
	public:
		Counter();
		Counter(int);
		int get_count();
		Counter operator++();
};
