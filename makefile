all: remove vec main clear

remove:
	rm -f main

clear:
	rm -f *.o

main:
	gcc main.c -o main vec.o -Wall

vec:
	gcc -c vec.c vec.h -Wall
