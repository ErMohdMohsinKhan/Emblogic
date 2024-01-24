using namespace std;
class Stack
{
	protected:
		int stackTop;
		int *stackArray;
	public:
		Stack();
		int creatStack();
		~Stack();
};

class StackImp:public Stack
{
	public:
		StackImp();
		~StackImp();
		int creatStack();
		int push();
		int pop();
		int display();
};
class StackCondn:public StackImp
{
	public:
		StackCondn();
		~StackCondn();
		int creatStack();
		int push();
		int pop();
};
int mainMenu();
