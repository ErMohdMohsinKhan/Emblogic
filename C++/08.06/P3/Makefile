#! /bin/bash
CC = g++
CF = -c

p2: main.o const.o print.o print1.o
	${CC} -o p2 main.o const.o print.o print1.o

main.o: main.cpp headers.h classes.h
	${CC} ${CF} main.cpp

const.o: const.cpp headers.h classes.h
	${CC} ${CF} const.cpp

print.o: print.cpp headers.h classes.h
	${CC} ${CF} print.cpp

print1.o: print1.cpp headers.h classes.h
	${CC} ${CF} print1.cpp

clean:
	-@rm -f *.o
	-@rm -f p2
