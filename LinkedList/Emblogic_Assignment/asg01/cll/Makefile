#!/bin/bash

cll: main.o init.o exitProg.o mainMenu.o creatLinklist.o creatNode.o insertNode.o displayLinklist.o copyll.o
	gcc -o cll main.o init.o exitProg.o mainMenu.o creatLinklist.o creatNode.o insertNode.o displayLinklist.o copyll.o

main.o: main.c headers.h declarations.h
	gcc -c main.c

init.o: init.c headers.h declarations.h
	gcc -c init.c

mainMenu.o: mainMenu.c headers.h declarations.h
	gcc -c mainMenu.c

exitProg.o: exitProg.c headers.h declarations.h
	gcc -c exitProg.c

creatLinklist.o: creatLinklist.c headers.h declarations.h
	gcc -c creatLinklist.c

insertNode.o: insertNode.c headers.h declarations.h
	gcc -c insertNode.c

creatNode.o: creatNode.c headers.h declarations.h
	gcc -c creatNode.c

displayLinklist.o: displayLinklist.c headers.h declarations.h
	gcc -c displayLinklist.c

copyll.o: copyll.c headers.h declarations.h
	gcc -c copyll.c

clean:
	-@rm -f *.o
	-@rm -f cll
