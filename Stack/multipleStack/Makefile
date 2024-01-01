CC = gcc
CF = -c

multipleStack: main.o pushA.o pushB.o popA.o popB.o displayA.o displayB.o clearA.o clearB.o
	${CC} -o multipleStack main.o pushA.o pushB.o popA.o popB.o displayA.o displayB.o clearA.o clearB.o

main.o: main.c headers.h declarations.h
	${CC} ${CF} main.c

exitProg.o: exitProg.c headers.h declarations.h
	${CC} ${CF} exitProg.c

pushA.o: pushA.c headers.h declarations.h
	${CC} ${CF} pushA.c

pushB.o: pushB.c headers.h declarations.h
	${CC} ${CF} pushB.c

popA.o: popA.c headers.h declarations.h
	${CC} ${CF} popA.c

popB.o: popB.c headers.h declarations.h
	${CC} ${CF} popB.c

displayA.o: displayA.c headers.h declarations.h
	${CC} ${CF} displayA.c

displayB.o: displayB.c headers.h declarations.h
	${CC} ${CF} displayB.c

clearA.o: clearA.c headers.h declarations.h
	${CC} ${CF} clearA.c

clearB.o: clearB.c headers.h declarations.h
	${CC} ${CF} clearB.c

clean:
	-@rm -f *.o
	-@rm -f multipleStack
