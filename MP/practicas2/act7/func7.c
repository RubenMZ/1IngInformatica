#include"prot7.h"

/**
@file func7.c
@brief Archivo .c que tiene las funciones
@author Raven
@date 3 de abril del 2014
*/

/**
@fn int ** productoMatrices(int ** matriz1, int** matriz2, int nFil , int nCol);
@brief Realiza el producto matricial entre dos matrices pasadas por referencia que devuelve una matriz auxiliar con el producto de matriz1 y matriz2
@param int**matriz1 primera matriz dinamica de enteros
@param int**matriz2 segunda matriz dinamica de enteros
@param int nFil numero de filas para recorrer la matriz
@param int nCol numero de columnas para recorrer la matriz
@return aux=matriz1*matriz2 
*/

int **	productoMatrices(int ** matriz1, int** matriz2, int nFil , int nCol){

	int i, j, k=0;
	int ** aux;

	aux = reservarMemoria(nFil, nCol);
	for(i=0; i<nFil; i++){
		for(j=0; j<nCol; j++){
			for(k=0; k<nCol; k++){				
					aux[i][j]+=matriz1[i][k]*matriz2[k][j];
				
			}
		}

	}
	

return (aux);
}

