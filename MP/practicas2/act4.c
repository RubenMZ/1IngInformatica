#include<stdio.h>
#include<stdlib.h>

//PROTOTIPOS

int ** reservarMemoria(int nFil, int nCol);
void rellenaMatriz(int **matriz, int nFil, int nCol);
void imprimeMatriz(int **matriz, int nFil, int nCol);
int ** eliminarFila(int **matriz, int nFil, int nCol, int fila_borrada);
void liberarMemoria(int ***matriz, int nFil);

//MAIN

int main(){

	int ** matriz, nFil, nCol, **matriz2, fila_borrada;
	
	printf("Introduce el numero de filas: ");
	scanf("%d", &nFil);
	printf("Introduce el numero de columnas: ");
	scanf("%d", &nCol);


	matriz = reservarMemoria(nFil, nCol);

	
	rellenaMatriz(matriz, nFil, nCol);
	
	imprimeMatriz(matriz, nFil, nCol);

	printf("¿Que fila desea borrar?: ");
	scanf("%d", &fila_borrada);

	matriz2 = eliminarFila(matriz, nFil, nCol,fila_borrada);
	imprimeMatriz(matriz, nFil, nCol);

	liberarMemoria(&matriz, nFil);
	liberarMemoria(&matriz2, nFil-1);


return 0;
}

//FUNCIONES

int ** reservarMemoria(int nFil, int nCol){

	int i, **matriz;

	if((matriz=(int**)malloc(nFil*sizeof(int*)))==NULL){
		printf("ERROR filas\n");
		exit(-1);
	}

	for(i=0; i<nFil;i++ ){
		if((matriz[i]=(int*)malloc(nCol*sizeof(int)))==NULL){
			printf("ERROR columnas\n");
			exit(-1);
		}
	}

 return matriz;

}	


void rellenaMatriz(int **matriz, int nFil, int nCol){

	int i, j;

	for(i=0; i<nFil; i++){

		for(j=0; j<nCol; j++){
			
			printf("Introduce el elemento %dx%d: ", i, j);

			scanf("%d", &(matriz[i][j]));
		}
	}

}


void imprimeMatriz(int **matriz, int nFil, int nCol){

int i, j;

	printf("TU MATRIZ ES: \n\n");
	for(i=0; i<nFil; i++){
		printf("|");		
		for(j=0; j<nCol; j++){
			printf(" %d ", matriz[i][j]);
		}
		printf("|\n");
	}

}


int ** eliminarFila(int **matriz, int nFil, int nCol, int fila_borrada){

	int** aux, i, j, k=0, l=0;
	aux=reservarMemoria(nFil,nCol);

	for(i=0; i<nFil; i++){
			
		if(fila_borrada!= (i+1)){

			for(j=0; j<nCol; j++){
				aux[k][l]=matriz[i][j];
				l++;		
			}
			
		}
	k++;
	}

	return (aux);
}


void liberarMemoria(int ***matriz, int nFil){

	int i;
	for(i=0; i<nFil;i++){
		free((*matriz)[i]);
	}

	free(*matriz);
	*matriz=NULL;

}
