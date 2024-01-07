CC = gcc
CF = -c

P2: main.o exit_Func.o nonRep.o
	${CC} -o P2 main.o exit_Func.o nonRep.o

main.o: main.c headers.h declarations.h
	${CC} ${CF} main.c

exit_Func.o: exit_Func.c headers.h declarations.h
	${CC} ${CF} exit_Func.c

nonRep.o: nonRep.c headers.h declarations.h
	${CC} ${CF} nonRep.c

clean:
	-@rm -f *.o
	-@rm -f P2
