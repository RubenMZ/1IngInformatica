#include <stdio.h>
#include "cabecera3.h"
#define TAM 100

void main(){
	
	int Matriz1[TAM][TAM], Matriz2[TAM][TAM], Matrizsuma[TAM][TAM];
	int nfil, ncol, columna, suma;

	printf("Inserte el numero de filas de la matriz: ");
	scanf("%d", &nfil);
	printf("Inserte el numero de columnas de la matriz: ");
	scanf("%d", &ncol);

	printf("\n*****Leer Matriz 1.*****\n");
	leerMatriz(Matriz1, nfil, ncol);
	printf("\n*****Leer Matriz 2.*****\n");
	leerMatriz(Matriz2, nfil, ncol);

	sumarMatrices(Matriz1, Matriz2, Matrizsuma, nfil, ncol);

	printf("\n***Matriz 1.***\n");
	imprimirMatriz(Matriz1, nfil, ncol);
	printf("\n***Matriz 2.***\n");
	imprimirMatriz(Matriz2, nfil, ncol);
	printf("\n***Matriz suma.***\n");
	imprimirMatriz(Matrizsuma, nfil, ncol);
	
	printf("Inserte la columna que desea sumar:");
	scanf("%d", &columna);
	suma = sumarColumna(Matrizsuma, nfil, (columna-1));
	
	printf("El resultado de la suma es: %d\n\n", suma);
	
}

