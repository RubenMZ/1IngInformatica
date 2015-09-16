#include"prot5.h"

void rellenaMatriz(int ** matriz, int nFil, int nCol){

	int i, j;
	
	for(i=0; i<nFil; i++){
		for(j=0; j<nCol; j++){

			matriz[i][j]=i+j;

		}
	}

}
