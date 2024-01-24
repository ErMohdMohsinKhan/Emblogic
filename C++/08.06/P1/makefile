#! /bin/bash

CC = g++
CF = -c

p1: main.o defaultconst.o oneArgConst.o contents.o
	${CC} -o p1 main.o defaultconst.o oneArgConst.o contents.o

main.o: main.cpp headers.h classes.h
	${CC} ${CF} main.cpp

defaultconst.o: defaultconst.cpp headers.h classes.h
	${CC} ${CF} defaultconst.cpp

oneArgConst.o: oneArgConst.cpp headers.h classes.h
	${CC} ${CF} oneArgConst.cpp

contents.o: contents.cpp headers.h classes.h
	${CC} ${CF} contents.cpp

clean:
	-@rm -f *.o
	-@rm -f p1
