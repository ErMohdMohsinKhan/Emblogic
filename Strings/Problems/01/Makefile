CC = gcc
CF = -c

P1: main.o exit_Func.o dup.o
	${CC} -o P1 main.o exit_Func.o dup.o

main.o: main.c headers.h declarations.h
	${CC} ${CF} main.c

exit_Func.o: exit_Func.c headers.h declarations.h
	${CC} ${CF} exit_Func.c

dup.o: dup.c headers.h declarations.h
	${CC} ${CF} dup.c

clean:
	-@rm -f *.o
	-@rm -f P1
