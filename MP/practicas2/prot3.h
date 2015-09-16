#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct Ficha_jugador{

	char nombre[50];
	int dorsal;
	/* Num entero */
	float peso;
	/* Expresado en kilos */
	int estatura;
	/* Expresado en centímetros*/

}jug;


jug * reservarvector(int njug);
void leerjugador(jug* persona);
void rellenarvector(jug * vector, int njug);
void imprimirvector(jug * vector, int njug);
int borrarjugador(jug* vector, char c, int *njug);
void liberarvector(jug **vector);
