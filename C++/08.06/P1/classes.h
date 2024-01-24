using namespace std;
class Text
{
	private:
    		string arg;

	public:
    		Text();            // Default constructor
    		Text(string fn);   // Constructor that takes a file name
    		string contents(); // Member function to return the string
};
