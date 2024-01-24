#! /bin/bash
CC = g++
CF = -c
CO = -o

stack: main.o constStack.o deconstStack.o conststackImp.o deconststackImp.o creatStack.o mainMenu.o creatStackImp.o pushStackImp.o popStackImp.o displayStackImp.o constStackCond.o deconstStackCond.o pushStackCondn.o popStackCondn.o creatStackCondn.o
	${CC} ${CO} stack main.o constStack.o deconstStack.o creatStack.o conststackImp.o deconststackImp.o mainMenu.o creatStackImp.o pushStackImp.o popStackImp.o displayStackImp.o constStackCond.o deconstStackCond.o pushStackCondn.o popStackCondn.o creatStackCondn.o

main.o: main.cpp headers.h class.h declarations.h
	${CC} ${CF}  main.cpp

constStack.o: constStack.cpp headers.h class.h declarations.h
	${CC} ${CF} constStack.cpp

deconstStack.o: deconstStack.cpp headers.h class.h declarations.h
	${CC} ${CF} deconstStack.cpp

conststackImp.o: conststackImp.cpp headers.h class.h declarations.h
	${CC} ${CF} conststackImp.cpp

conststackCondn.o: conststackCondn.cpp headers.h class.h declarations.h
	${CC} ${CF} conststackCondn.cpp

deconststackImp.o: deconststackImp.cpp headers.h class.h declarations.h
	${CC} ${CF} deconststackImp.cpp

deconststackCondn.o: deconststackCondn.cpp headers.h class.h declarations.h
	${CC} ${CF} deconststackCondn.cpp

creatStack.o: creatStack.cpp headers.h class.h declarations.h
	${CC} ${CF} creatStack.cpp

creatStackImp.o: creatStackImp.cpp headers.h class.h declarations.h
	${CC} ${CF} creatStackImp.cpp

mainMenu.o: mainMenu.cpp headers.h class.h declarations.h
	${CC} ${CF} mainMenu.cpp
	
pushStackImp.o: pushStackImp.cpp headers.h class.h declarations.h
	${CC} ${CF} pushStackImp.cpp

popStackImp.o: popStackImp.cpp headers.h class.h declarations.h
	${CC} ${CF} popStackImp.cpp

displayStackImp.o: displayStackImp.cpp headers.h class.h declarations.h
	${CC} ${CF} displayStackImp.cpp

pushStackCondn.o: pushStackCondn.cpp headers.h class.h declarations.h
	${CC} ${CF} pushStackCondn.cpp

popStackCondn.o: popStackCondn.cpp headers.h class.h declarations.h
	${CC} ${CF} popStackCondn.cpp

creatStackCondn.o: creatStackCondn.cpp headers.h class.h declarations.h
	${CC} ${CF} creatStackCondn.cpp
clean:
	-@rm -f stack
	-@rm -f *.o
