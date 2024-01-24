#include "headers.h"
#include "class.h"
#include "declarations.h"
int main()
{
	int choice;
	cout<<__func__<<" : Begin"<<endl;
	StackCondn stk;
	while(1)
	{
		choice = mainMenu();
		cout<<__func__<<" : You Entered " <<choice<<endl;
		switch(choice)
		{
			case 0:
				cout<<__func__<<" : Exiting the Program"<<endl;
				exit(EXIT_SUCCESS);
				break;
			case 1:
				stk.creatStack();
				break;
			case 2:
				stk.push();
				break;
			case 3:
				stk.pop();
				break;
			case 4:
				stk.display();
				break;
		}
	}
	cout<<__func__<<" : End"<<endl;
	return 0;
}
