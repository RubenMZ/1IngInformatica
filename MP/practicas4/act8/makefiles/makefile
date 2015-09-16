#fichero de crucigramas

crucigrama.exe: ficheros.o crucigrama.o libMemoria.a
	gcc -o crucigrama.exe ficheros.o crucigrama.o libMemoria.a

libMemoria.a: reservaMemoria.o liberaMemoria.o
	ar -rsv libMemoria.a reservaMemoria.o liberaMemoria.o

reservaMemoria.o: reservaMemoria.c memoria.h
	gcc -c reservaMemoria.c

liberaMemoria.o: liberaMemoria.c memoria.h
	gcc -c liberaMemoria.c

crucigrama.o: crucigrama.c crucigrama.h memoria.h ficheros.h
	gcc -c crucigrama.c

ficheros.o: ficheros.c ficheros.h
	gcc -c ficheros.c

clean: 
	rm *.o
