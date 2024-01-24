#! bin/bash

output : main.o DataZ.o menu.o display.o getValue.o add.o res_ds.o
	g++ -o output main.o DataZ.o menu.o display.o getValue.o add.o res_ds.o

main.o: main.cpp headers.h classes.h
	g++ -c main.cpp headers.h classes.h

DataZ.o: DataZ.cpp headers.h classes.h
	g++ -c DataZ.cpp

display.o: display.cpp headers.h classes.h
	g++ -c display.cpp

getValue.o: getValue.cpp headers.h classes.h
	g++ -c getValue.cpp

add.o: add.cpp headers.h classes.h
	g++ -c add.cpp

res_ds.o: res_ds.cpp headers.h classes.h
	g++ -c res_ds.cpp

menu.o: menu.cpp headers.h classes.h
	g++ -c menu.c
clean:
	-@rm -f *.o
	-@rm -f output
