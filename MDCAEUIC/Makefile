#! /bin/bash

CC = gcc 
CF = -c -Wall -Wextra

mdcaeuit : main.o init.o exitProg.o mainMenu.o compressFile.o compStats.o decompressFile.o decompStats.o openFile.o createMasterArray.o unique.o codelength.o compress2.o compress3.o compress4.o compress5.o compress6.o compress7.o decompress2.o decompress3.o decompress4.o decompress5.o decompress6.o decompress7.o findIndex.o
	$(CC) -o mdcaeuit main.o init.o  exitProg.o mainMenu.o compressFile.o compStats.o decompressFile.o decompStats.o openFile.o createMasterArray.o unique.o codelength.o compress2.o compress3.o compress4.o compress5.o compress6.o compress7.o decompress2.o decompress3.o decompress4.o decompress5.o decompress6.o decompress7.o findIndex.o

main.o : main.c headers.h declarations.h
	$(CC) $(CF) main.c

init.o : init.c headers.h declarations.h
	gcc -c init.c

exitProg.o : exitProg.c headers.h declarations.h
	$(CC) $(CF) exitProg.c

mainMenu.o : mainMenu.c headers.h declarations.h
	$(CC) $(CF) mainMenu.c

openFile.o : openFile.c headers.h declarations.h
	gcc -c openFile.c

compressFile.o : compressFile.c headers.h declarations.h
	gcc -c compressFile.c

compStats.o : compStats.c headers.h declarations.h
	gcc -c compStats.c

decompressFile.o : decompressFile.c headers.h declarations.h 
	gcc -c decompressFile.c

decompStats.o : decompStats.c headers.h declarations.h
	gcc -c decompStats.c

createMasterArray.o : createMasterArray.c headers.h declarations.h 
	gcc -c createMasterArray.c

unique.o : unique.c headers.h declarations.h
	gcc -c unique.c

codelength.o : codelength.c headers.h declarations.h
	gcc -c codelength.c

compress2.o : compress2.c headers.h declarations.h
	gcc -c compress2.c

compress3.o : compress3.c headers.h declarations.h
	gcc -c compress3.c

compress4.o : compress4.c headers.h declarations.h
	gcc -c compress4.c

compress5.o : compress5.c headers.h declarations.h
	gcc -c compress5.c

compress6.o : compress6.c headers.h declarations.h
	gcc -c compress6.c

compress7.o : compress7.c headers.h declarations.h
	gcc -c compress7.c

decompress2.o : decompress2.c headers.h declarations.h
	gcc -c decompress2.c

decompress3.o : decompress3.c headers.h declarations.h
	gcc -c decompress3.c

decompress4.o : decompress4.c headers.h declarations.h
	gcc -c decompress4.c

decompress5.o : decompress5.c headers.h declarations.h
	gcc -c decompress5.c

decompress6.o : decompress6.c headers.h declarations.h
	gcc -c decompress6.c

decompress7.o : decompress7.c headers.h declarations.h
	gcc -c decompress7.c

findIndex.o : findIndex.c headers.h declarations.h
	gcc -c findIndex.c
clean : 
	-rm *.o
	-rm mdcaeuit
