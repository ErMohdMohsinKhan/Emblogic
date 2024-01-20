#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Library:: mainMenu()
{
	int choice;
	cout<<__func__<<" : Begin"<<endl;
	Book oBook;
	Dvd oDvd;
	Periodical oPrd;
	Inventory oInv;
	cout<<__func__<<"<<<-MAIN MENU->>"<<endl;
	cout<<__func__<<" 1 : Create Inventory - Book"<<endl;
	cout<<__func__<<" 2 : Create Inventory - DVD"<<endl;
	cout<<__func__<<" 3 : Create Inventory - Periodical"<<endl;
	cout<<__func__<<" 4 : Display complete Inventory"<<endl;
	cout<<__func__<<" 5 : Display Inventory - Books"<<endl;
	cout<<__func__<<" 6 : Display Inventory - DVDs"<<endl;
	cout<<__func__<<" 7 : Display Inventory - Periodicals"<<endl;
	cout<<__func__<<" 8 : Check-In - Book"<<endl;
	cout<<__func__<<" 9 : Check-Out - Book"<<endl;
	cout<<__func__<<" 10 : Check-In - DVD"<<endl;
	cout<<__func__<<" 11 : Check-Out - DVD"<<endl;
	cout<<__func__<<" 12 : Check-In - Periodical"<<endl;
	cout<<__func__<<" 13 : Check-Out - Periodical"<<endl;
	cout<<__func__<<" 0 : Exit the Program"<<endl;

	cout<<__func__<<" : Please enter your choice"<<endl;
	cin >> choice;
	switch(choice)
	{
		case 1:
			oBook.creatInvBook();
			break;
		case 2:
			oDvd.creatInvDvd();
			break;
		case 3:
			oPrd.creatInvPer();
			break;
		case 4:
			oInv.displayInv();
			break;
		case 5:
			oBook.displayBooks();
			break;
		case 6:
			oDvd.displayDvd();
			break;
		case 7:
			oPrd.displayPer();
			break;
		case 8:
			oBook.checkInBooks();
			break;
		case 9:
			oBook.checkOutBooks();
			break;
		case 10:
			oDvd.checkInDvd();
			break;
		case 11:
			oDvd.checkOutDvd();
			break;
		case 12:
			oPrd.checkInPer();
			break;
		case 13:
			oPrd.checkOutPer();
			break;
		case 0:
			exit(EXIT_SUCCESS);
		default:
			cout<<__func__<<" : Sit tight, WIP, Inconvenience is regretted"<<endl;
	}
	cout<<__func__<<" : End"<<endl;
	return 0;
}
