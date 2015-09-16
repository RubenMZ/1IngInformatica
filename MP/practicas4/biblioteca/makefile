#Makefile para crear las bibliotecas de la práctica 4
bib: pilas.a colas.a

colas.a: colas.o
	ar -rsv colas.a colas.o
	
pilas.a: pilas.o
	ar -rsv pilas.a pilas.o

pilas.o: pilas.c cabeceraPilas.h
	gcc -c pilas.c

colas.o: colas.c cabecera.h
	gcc -c colas.c


