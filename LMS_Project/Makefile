#! /bin/bash
CC = g++
CF=-c
DF=-DDEBUG
lms: main.o constLibZero.o constBookZero.o constDvdZero.o constPerZero.o creatInvBook.o creatInvDvd.o creatInvPer.o mainMenu.o openFile.o istreamBook.o ostreamBook.o istreamDvd.o ostreamDvd.o istreamPer.o ostreamPer.o displayBook.o displayDvd.o displayPer.o displayInv.o checkInBooks.o checkOutBooks.o checkInDvd.o checkOutDvd.o checkInPer.o checkOutPer.o
	${CC} -o lms main.o constLibZero.o constBookZero.o constDvdZero.o constPerZero.o creatInvBook.o creatInvDvd.o creatInvPer.o mainMenu.o openFile.o istreamBook.o ostreamBook.o istreamDvd.o ostreamDvd.o istreamPer.o ostreamPer.o displayBook.o displayDvd.o displayPer.o displayInv.o checkInBooks.o checkOutBooks.o checkInDvd.o checkOutDvd.o checkInPer.o checkOutPer.o

main.o: main.cpp headers.h declarations.h classes.h
	${CC} ${CF} main.cpp

openFile.o: openFile.cpp headers.h declarations.h classes.h
	${CC} ${CF} openFile.cpp

constLibZero.o: constLibZero.cpp headers.h declarations.h classes.h
	${CC} ${CF} constLibZero.cpp

constBookZero.o: constBookZero.cpp headers.h declarations.h classes.h
	${CC} ${CF} constBookZero.cpp

constDvdZero.o: constDvdZero.cpp headers.h declarations.h classes.h
	${CC} ${CF} constDvdZero.cpp

constPerZero.o: constPerZero.cpp headers.h declarations.h classes.h
	${CC} ${CF} constPerZero.cpp

creatInvBook.o: creatInvBook.cpp headers.h declarations.h classes.h
	${CC} ${CF} creatInvBook.cpp

creatInvDvd.o: creatInvDvd.cpp headers.h declarations.h classes.h
	${CC} ${CF} creatInvDvd.cpp

creatInvPer.o: creatInvPer.cpp headers.h declarations.h classes.h
	${CC} ${CF} creatInvPer.cpp

mainMenu.o: mainMenu.cpp headers.h declarations.h classes.h
	${CC} ${CF} mainMenu.cpp

displayDvd.o: displayDvd.cpp headers.h declarations.h classes.h
	${CC} ${CF} displayDvd.cpp

displayBook.o: displayBook.cpp headers.h declarations.h classes.h
	${CC} ${CF} displayBook.cpp

displayPer.o: displayPer.cpp headers.h declarations.h classes.h
	${CC} ${CF} displayPer.cpp

displayInv.o: displayInv.cpp headers.h declarations.h classes.h
	${CC} ${CF} displayInv.cpp

ostreamBook.o: ostreamBook.cpp headers.h declarations.h classes.h
	${CC} ${CF} ostreamBook.cpp

ostreamDvd.o: ostreamDvd.cpp headers.h declarations.h classes.h
	${CC} ${CF} ostreamDvd.cpp

ostreamPer.o: ostreamPer.cpp headers.h declarations.h classes.h
	${CC} ${CF} ostreamPer.cpp

istreamBook.o: istreamBook.cpp headers.h declarations.h classes.h
	${CC} ${CF} istreamBook.cpp

istreamDvd.o: istreamDvd.cpp headers.h declarations.h classes.h
	${CC} ${CF} istreamDvd.cpp

istreamPer.o: istreamPer.cpp headers.h declarations.h classes.h
	${CC} ${CF} istreamPer.cpp

checkOutBooks.o: checkOutBooks.cpp headers.h declarations.h classes.h
	${CC} ${CF} checkOutBooks.cpp

checkInBooks.o: checkInBooks.cpp headers.h declarations.h classes.h
	${CC} ${CF} checkInBooks.cpp

checkInPer.o: checkInPer.cpp headers.h declarations.h classes.h
	${CC} ${CF} checkInPer.cpp

checkInDvd.o: checkInDvd.cpp headers.h declarations.h classes.h
	${CC} ${CF} checkInDvd.cpp

checkOutDvd.o: checkOutDvd.cpp headers.h declarations.h classes.h
	${CC} ${CF} checkOutDvd.cpp

checkOutPer.o: checkOutPer.cpp headers.h declarations.h classes.h
	${CC} ${CF} checkOutPer.cpp
clean:
	-@rm -f *.o
	-@rm -f lms
