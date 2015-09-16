#include"prot5.h"

int main(){
	
	int nFil, nCol, fila_borrada;
	int** matriz1, **matriz2;

	printf("Introduce el numero de filas: ");	
	scanf("%d", &nFil);
	printf("Introduce el numero de columnas: ");
	scanf("%d", &nCol);
	
	matriz1 = reservarMemoria(nFil,nCol);

	rellenaMatriz(matriz1, nFil, nCol);
	
	printf("TU MATRIZ ES: \n\n");

	imprimeMatriz(matriz1, nFil, nCol);
	
	printf("Introduce la fila que deseas borrar: ");
	scanf("%d", &fila_borrada);

	matriz2 = eliminarFila(matriz1, nFil, nCol, fila_borrada);

	printf("TU MATRIZ SIN FILA ES: \n\n");
	
	imprimeMatriz(matriz2, nFil-1, nCol);

	liberarMemoria(&matriz1, nFil);
	liberarMemoria(&matriz2, nFil-1);



return 0;
}

