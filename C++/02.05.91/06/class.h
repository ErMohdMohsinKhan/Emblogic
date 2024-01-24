class Recursion
{
	private:
		string str;
	public:
		Recursion();  //Constructor
		void getString();  //To accept a string
		void reverse(); //Initializing paramters which are required to be sent as argument to below Recursive fn
		string revRec(string, int, int, int); //Recursive function
};
