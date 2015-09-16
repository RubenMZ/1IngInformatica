#fichero de calculadora
CC = gcc
OBJ =  main.o stack.o getop.o getch.o

calculadora.exe: $(OBJ)
	@echo generando calculadora juas juas equisde lol 
	gcc -o calculadora.exe $(OBJ)

main.o: main.c calc.h
	gcc -c main.c

stack.o: stack.c calc.h
	gcc -c stack.c

getop.o: getop.c
	gcc -c getop.c

getch.o: getch.c calc.h
	gcc -c getch.c

clean:
	@echo borrando los fichericos .o jiji
	rm *.o
