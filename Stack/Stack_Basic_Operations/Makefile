CC = gcc
CF = -c

stack: main.o init.o mainMenu.o exitProg.o creatStack.o creatNode.o pushEle.o popEle.o peekEle.o display.o flushStack.o destroyStack.o
	${CC} -o stack main.o init.o mainMenu.o exitProg.o creatStack.o creatNode.o pushEle.o popEle.o peekEle.o display.o flushStack.o destroyStack.o

main.o: main.c headers.h declarations.h
	${CC} ${CF} main.c

destroyStack.o: destroyStack.c headers.h declarations.h
	${CC} ${CF} destroyStack.c

flushStack.o: flushStack.c headers.h declarations.h
	${CC} ${CF} flushStack.c

init.o: init.c headers.h declarations.h
	${CC} ${CF} init.c

mainMenu.o: mainMenu.c headers.h declarations.h
	${CC} ${CF} mainMenu.c

exitProg.o: exitProg.c headers.h declarations.h
	${CC} ${CF} exitProg.c

creatStack.o: creatStack.c headers.h declarations.h
	${CC} ${CF} creatStack.c

creatNode.o: creatNode.c headers.h declarations.h
	${CC} ${CF} creatNode.c

pushEle.o: pushEle.c headers.h declarations.h
	${CC} ${CF} pushEle.c

popEle.o: popEle.c headers.h declarations.h
	${CC} ${CF} popEle.c

peekEle.o: peekEle.c headers.h declarations.h
	${CC} ${CF} peekEle.c

display.o: display.c headers.h declarations.h
	${CC} ${CF} display.c

clean:
	-@rm -f *.o
	-@rm -f stack
