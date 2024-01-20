#include "declarations.h"
using namespace std;
typedef struct date
{
	unsigned short day;
	unsigned short month;
	unsigned short year;
}Date;
typedef struct pagerange
{
	short beg;
	short end;
}PageRange;
enum status{ON_SHLF, CHK_OUT};
class Library
{
	protected:
		char *libName;
		/*Book oBook;
		Dvd oDvd;
		Periodical oPrd;
		Inventory oInv;*/
	public:
		Library();
		int mainMenu();
		fstream openFile();
};
class Book:public Library
{
	private:
		char author[SIZE];
		Date pblDate;
		char title[SIZE];
		char pblocn[SIZE];
		char pbName[SIZE];
		enum status state;
		int fd;
	public:
		Book();
		int creatInvBook();
		int displayBooks();
	//	int checkInBooks();
		int checkOutBooks();
		int checkInBooks();
		friend istream& operator>> (istream& s, Book& b);
                friend ostream& operator<< (ostream& s, Book& b);

};
class Dvd:public Library
{
	private:
		char artist[SIZE];
		char title[SIZE];
		char label[SIZE];
		Date lnchDate;
		enum status state;
		int fd;
	public:
		Dvd();
		int creatInvDvd();
                int displayDvd();
		int checkInDvd();
		int checkOutDvd();
                friend istream& operator>> (istream&, Dvd&);
                friend ostream& operator<< (ostream&, Dvd&);
};
class Periodical:public Library
{
	private:
		char author[SIZE];
		Date pblDate;
                char title[SIZE];
                char prdName[SIZE];
		PageRange pr;
                enum status state;
		int fd;
	public:
		Periodical();
		int creatInvPer();
                int displayPer();
		int checkInPer();
		int checkOutPer();
                friend istream& operator>> (istream&, Periodical&);
                friend ostream& operator<< (ostream&, Periodical&);
};
class Inventory:public Library
{
	private:
    		Book oBook;
    		Dvd oDvd;
    		Periodical oPrd;
	public:
		int displayInv();
};
