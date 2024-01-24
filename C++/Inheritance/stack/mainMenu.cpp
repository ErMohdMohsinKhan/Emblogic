#include "headers.h"
#include "class.h"
int mainMenu()
{
	int choice;
	cout<<__func__<<" : Begin"<<endl;
	cout<<__func__<<" : <<< MAIN MENU >>>"<<endl;
	cout<<__func__<<" : 1-> Create Stack"<<endl;
	cout<<__func__<<" : 2-> Push Element from the Stack"<<endl;
	cout<<__func__<<" : 3-> Pop Element in the Stack"<<endl;
	cout<<__func__<<" : 4-> Display elements of the Stack"<<endl;
	cout<<__func__<<" : 0-> Exit"<<endl;

	cout<<__func__<<" : Enter your choice"<<endl;
	cin>>choice;

	cout<<__func__<<" : End"<<endl;
	return choice;
}
