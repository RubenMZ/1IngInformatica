#include<stdio.h>
#include"cabecera3.h"
#define TAM 100

void sumarMatrices(int Matriz1[][TAM], int Matriz2[][TAM], int Matrizsuma[][TAM], int nFil, int nCol){
	int i,j;
	for(i=0;i<nFil; i++){
		for(j=0; j<nCol; j++){
			Matrizsuma[i][j]=Matriz1[i][j] + Matriz2[i][j];
	}	
	}

}

void imprimirMatriz(int Matriz[][TAM], int nFil, int nCol){
	int i,j;
	for(i=0; i<nFil; i++){
		printf("| ");
		for(j=0; j<nCol; j++){
			printf("  %d  ", Matriz[i][j]);
		}
		printf(" |\n");
	}
}

void leerMatriz(int Matriz[][TAM], int nFil, int nCol){
	int i,j;
	for(i=0; i<nFil; i++){
		for(j=0; j<nCol; j++){
			printf("Posicion %dx%d: ", i+1, j+1);
			scanf("%d", &Matriz[i][j]);
		}
	}
}

int sumarColumna(int Matriz[][TAM], int nFil, int c){
	int i,j, suma;
	suma=0;
	for(i=0; i<nFil; i++){
		suma+=Matriz[i][c];
	}
return suma;
}
