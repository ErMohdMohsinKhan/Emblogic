#include"headers.h"
#include"declarations.h"
#include"classes.h"
Book::Book()
{
//	cout<<__func__<<" : Begin (Zero Arg Const)"<<endl;
/*	author = new char[SIZE];
        if(!author)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }*/
        memset(author, '\0', SIZE);
	pblDate.day = 0;
	pblDate.month = 0;
	pblDate.year = 0;
/*	title = new char[SIZE];
        if(!title)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }*/
       // memset(title, '\0', SIZE);
/*	pblocn = new char[SIZE];
        if(!pblocn)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }*/
        //memset(pblocn, '\0', SIZE);
/*	pbName= new char[SIZE];
        if(!pbName)
        {
                cerr<<__func__<<"Error : Memory Allocation Failure"<<endl;
        }*/
        //memset(pbName, '\0', SIZE);
	state = ON_SHLF;
/*	pblDate.day = 0;
    	pblDate.month = 0;
    	pblDate.year = 0;
    	state = ON_SHLF;*/
//	cout<<__func__<<" : End (Zero Arg Const)"<<endl;
}
