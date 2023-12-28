CC = gcc
CF = -c

sll: main.o init.o mainMenu.o exitProg.o creatLinkedlist.o creatNode.o insertNodeMenu.o insertNodeBeg.o insertNodeEnd.o insertNodeNp.o insertNodeKy.o deleteNodeMenu.o deleteNodeBeg.o deleteNodeEnd.o deleteNodeNp.o deleteNodeKy.o display.o sortAsc.o sortDsc.o findSml.o findLar.o prtNEnd.o rev.o cirLl.o
	${CC} -o sll main.o init.o mainMenu.o exitProg.o creatLinkedlist.o creatNode.o insertNodeMenu.o insertNodeBeg.o insertNodeEnd.o insertNodeNp.o insertNodeKy.o deleteNodeMenu.o deleteNodeBeg.o deleteNodeEnd.o deleteNodeNp.o deleteNodeKy.o display.o sortAsc.o sortDsc.o findSml.o findLar.o prtNEnd.o rev.o cirLl.o

cirLl.o: cirLl.c headers.h declarations.h
	 ${CC} ${CF} cirLl.c 

rev.o: rev.c headers.h declarations.h
	 ${CC} ${CF} rev.c 

prtNEnd.o: prtNEnd.c headers.h declarations.h
	 ${CC} ${CF} prtNEnd.c 

sortAsc.o: sortAsc.c headers.h declarations.h
	 ${CC} ${CF} sortAsc.c 

sortDsc.o: sortDsc.c headers.h declarations.h
	${CC} ${CF} sortDsc.c 

findSml.o: findSml.c headers.h declarations.h
	${CC} ${CF} findSml.c
	
findLar.o: findLar.c headers.h declarations.h
	${CC} ${CF} findLar.c

insertNodeMenu.o: insertNodeMenu.c headers.h declarations.h 
	${CC} ${CF} insertNodeMenu.c

insertNodeBeg.o: insertNodeBeg.c headers.h declarations.h 
	${CC} ${CF} insertNodeBeg.c

insertNodeEnd.o: insertNodeEnd.c headers.h declarations.h 
	${CC} ${CF} insertNodeEnd.c

insertNodeNp.o: insertNodeNp.c headers.h declarations.h 
	${CC} ${CF} insertNodeNp.c

insertNodeKy.o: insertNodeKy.c headers.h declarations.h 
	${CC} ${CF} insertNodeKy.c

deleteNodeMenu.o: deleteNodeMenu.c headers.h declarations.h 
	${CC} ${CF} deleteNodeMenu.c

deleteNodeBeg.o: deleteNodeBeg.c headers.h declarations.h 
	${CC} ${CF} deleteNodeBeg.c

deleteNodeEnd.o: deleteNodeEnd.c headers.h declarations.h 
	${CC} ${CF} deleteNodeEnd.c

deleteNodeNp.o: deleteNodeNp.c headers.h declarations.h 
	${CC} ${CF} deleteNodeNp.c

deleteNodeKy.o: deleteNodeKy.c headers.h declarations.h 
	${CC} ${CF} deleteNodeKy.c

main.o: main.c headers.h declarations.h
	${CC} ${CF} main.c

init.o: init.c headers.h declarations.h
	${CC} ${CF} init.c

mainMenu.o: mainMenu.c headers.h declarations.h
	${CC} ${CF} mainMenu.c

exitProg.o: exitProg.c headers.h declarations.h
	${CC} ${CF} exitProg.c

creatLinkedlist.o: creatLinkedlist.c headers.h declarations.h
	${CC} ${CF} creatLinkedlist.c

creatNode.o: creatNode.c headers.h declarations.h
	${CC} ${CF} creatNode.c

display.o: display.c headers.h declarations.h
	${CC} ${CF} display.c

clean:
	-@rm -f *.o
	-@rm -f sll
