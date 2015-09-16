#fichero de calculadora


calculadora.exe: main.o stack.o getop.o libPila.a
	@echo generando calculadora juas juas equisde lol 
	gcc -o calculadora.exe main.o stack.o libPila.a

libPila.a: getch.o getop.o
	ar -rsv libPila.a getch.o getop.o

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
