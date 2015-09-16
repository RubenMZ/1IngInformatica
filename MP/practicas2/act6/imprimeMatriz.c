#include"prot5.h"

void imprimeMatriz(int **matriz, int nFil, int nCol){

	int i, j;

	for(i=0; i< nFil; i++){
		printf("%df. |", i+1);
		for(j=0; j< nCol; j++){
			printf(" %d ", *(*(matriz+i)+j));
		}
		printf("|\n");
	}	

}
