CC = gcc

priorityQueue: main.o init.o exitProg.o mainMenu.o creatPriorityQueue.o enqueue.o dequeue.o display.o destroy.o
	${CC} -o priorityQueue main.o init.o exitProg.o mainMenu.o creatPriorityQueue.o enqueue.o dequeue.o display.o destroy.o

exitProg.o: exitProg.c headers.h declarations.h
	${CC} -c exitProg.c

main.o: main.c headers.h dataStruct.h declarations.h
	${CC} -c  main.c

init.o: init.c headers.h dataStruct.h declarations.h
	${CC} -c init.c

mainMenu.o: mainMenu.c headers.h dataStruct.h declarations.h
	${CC} -c mainMenu.c

creatPriorityQueue.o: creatPriorityQueue.c headers.h dataStruct.h declarations.h
	${CC} -c creatPriorityQueue.c

enqueue.o: enqueue.c headers.h dataStruct.h declarations.h
	${CC} -c enqueue.c

dequeue.o: dequeue.c headers.h dataStruct.h declarations.h
	${CC} -c dequeue.c

destroy.o: destroy.c headers.h dataStruct.h declarations.h
	${CC} -c destroy.c

clean:
	-@rm -f *.o
	-@rm -f priorityQueue
