CC = gcc
CF = -c

InfixPrefixPostfix: main.o getString.o revString.o creatStack.o isOpening.o pushStack.o isOperand.o isClosing.o popStack.o isOperator.o isEmpty.o compare.o
	${CC} -o InfixPrefixPostfix main.o getString.o revString.o creatStack.o isOpening.o pushStack.o isOperand.o isClosing.o popStack.o isOperator.o isEmpty.o compare.o


main.o: main.c headers.h declarations.h
	${CC} ${CF} main.c

compare.o: compare.c headers.h declarations.h
	${CC} ${CF} compare.c

creatStack.o: creatStack.c headers.h declarations.h
	${CC} ${CF} creatStack.c

getString.o: getString.c headers.h declarations.h
	${CC} ${CF} getString.c

pushElement.o: pushElement.c headers.h declarations.h
	${CC} ${CF} pushElement.c

popElement.o: popElement.c headers.h declarations.h
	${CC} ${CF} popElement.c

revString.o: revString.c headers.h declarations.h
	${CC} ${CF} revString.c

isOpening.o: isOpening.c headers.h declarations.h
	${CC} ${CF} isOpening.c

isClosing.o: isClosing.c headers.h declarations.h
	${CC} ${CF} isClosing.c

isOperand.o: isOperand.c headers.h declarations.h
	${CC} ${CF} isOperand.c

isOperator.o: isOperator.c headers.h declarations.h
	${CC} ${CF} isOperator.c

isEmpty.o: isEmpty.c headers.h declarations.h
	${CC} ${CF} isEmpty.c

clean:
	-@rm -f *.o
	-@rm -f InfixPrefixPostfix
