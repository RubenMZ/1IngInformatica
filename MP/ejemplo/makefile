
CFLAGS = -g -Wall -ansi 
LFLAGS = -lm

principal_punto.exe: principal_punto.o punto2D.o  
	gcc -o principal_punto.exe $(LFLAGS) principal_punto.o punto2D.o  

principal_punto.o: principal_punto.c punto2D.h 
	gcc -c $(CFLAGS) principal_punto.c    

punto2D.o: punto2D.c punto2D.h
	gcc -c $(CFLAGS) punto2D.c   

clean:
	rm -f principal_punto.o punto2D.o 

