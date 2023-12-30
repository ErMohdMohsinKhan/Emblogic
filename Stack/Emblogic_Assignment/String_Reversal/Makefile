CC = gcc
CF = -c

string_Reversal: main.o init.o  creatStack.o getString.o pushElement.o popElement.o display.o
	${CC} -o string_Reversal main.o init.o creatStack.o getString.o pushElement.o popElement.o display.o

main.o: main.c headers.h declarations.h
	${CC} ${CF} main.c

init.o: init.c headers.h declarations.h
	${CC} ${CF} init.c

creatStack.o: creatStack.c headers.h declarations.h
	${CC} ${CF} creatStack.c

getString.o: getString.c headers.h declarations.h
	${CC} ${CF} getString.c

pushElement.o: pushElement.c headers.h declarations.h
	${CC} ${CF} pushElement.c

popElement.o: popElement.c headers.h declarations.h
	${CC} ${CF} popElement.c

display.o: display.c headers.h declarations.h
	${CC} ${CF} display.c

clean:
	-@rm -f *.o
	-@rm -f string_Reversal
