#include "headers.h"
#include "classes.h"
#include "declarations.h"
int Inventory::displayInv()
{
//	Inventory inv;
	oBook.displayBooks();
	oDvd.displayDvd();
	oPrd.displayPer();
	return 0;
}
