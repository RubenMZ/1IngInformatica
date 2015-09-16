#fichero de calculadora


calculadora.exe: main.o stack.o getop.o getch.o
	gcc -o calculadora.exe main.o stack.o getop.o getch.o

main.o: main.c calc.h
	gcc -c main.c

stack.o: stack.c calc.h
	gcc -c stack.c

getop.o: getop.c
	gcc -c getop.c

getch.o: getch.c calc.h
	gcc -c getch.c

clean:
	rm *.o
