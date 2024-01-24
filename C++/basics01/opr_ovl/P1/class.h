class Counter
{
	private:
		unsigned int count;
	public:
		Counter();
		unsigned int get_count();
		int operator++();
};
