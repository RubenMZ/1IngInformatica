#include"prot7.h"
#include<stdio.h>
#include<stdlib.h>

/**
@file main.c
@brief Programa principal .c
@author Raven
@date 3 de abril del 2014
@version 1.0
*/


/**
@mainpage Producto de Matrices
@brief Programa para probar el producto de matrices con punteros, dinamica y bibliotecas, ademas de comentar con Doxygen
@author Raven
@version 1.0
*/

int main(){
	
	int nFil, nCol, fila_borrada;
	int** matriz1, **matriz2, **producto;

	printf("Introduce el numero de filas: ");	
	scanf("%d", &nFil);
	printf("Introduce el numero de columnas: ");
	scanf("%d", &nCol);
	
	matriz1 = reservarMemoria(nFil,nCol);

	rellenaMatriz(matriz1, nFil, nCol);
	
	printf("TU MATRIZ 1 ES: \n\n");

	imprimeMatriz(matriz1, nFil, nCol);
	
	matriz2 = reservarMemoria(nFil,nCol);

	rellenaMatriz(matriz2, nFil, nCol);
	
	printf("TU MATRIZ 2 ES: \n\n");

	imprimeMatriz(matriz2, nFil, nCol);

	producto = productoMatrices(matriz1, matriz2, nFil , nCol);

	printf("TU MATRIZ PRODUCTO ES: \n\n");
	imprimeMatriz(producto, nFil, nCol);

	liberarMemoria(&matriz1, nFil);
	liberarMemoria(&matriz2, nFil);
	liberarMemoria(&producto, nFil);


return 0;
}

