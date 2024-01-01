#! /bin/bash

CC = gcc

circularQueue: main.o init.o mainMenu.o creatQueue.o enqueue.o dequeue.o display.o
	${CC} -o circularQueue main.o init.o mainMenu.o creatQueue.o enqueue.o dequeue.o display.o

main.o: main.c headers.h dataStruct.h declarations.h
	${CC} -c  main.c

init.o: init.c headers.h dataStruct.h declarations.h
	${CC} -c init.c

mainMenu.o: mainMenu.c headers.h dataStruct.h declarations.h
	${CC} -c mainMenu.c

creatQueue.o: creatQueue.c headers.h dataStruct.h declarations.h
	${CC} -c creatQueue.c

enqueue.o: enqueue.c headers.h dataStruct.h declarations.h
	${CC} -c enqueue.c

dequeue.o: dequeue.c headers.h dataStruct.h declarations.h
	${CC} -c dequeue.c

display.o: display.c headers.h dataStruct.h declarations.h
	${CC} -c display.c

clean:
	-@rm -f *.o
	-@rm -f circularQueue
