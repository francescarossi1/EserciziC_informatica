somma: main.o matrici.o
	gcc -g -o somma main.o matrici.o

main.o: main.c matrici.h
	gcc -g -c main.c 

matrici.o: matrici.c matrici.h 
	gcc -g -c matrici.c