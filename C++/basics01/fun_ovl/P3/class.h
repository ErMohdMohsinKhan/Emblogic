class Counter
{
	private:
		int count;
	public:
		Counter();
		Counter(int);
		Counter(Counter&);
		//~Coumter();
		int get_count();
		Counter operator++();
};
