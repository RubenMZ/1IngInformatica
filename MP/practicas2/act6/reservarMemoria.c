#include"prot5.h"

int ** reservarMemoria(int nFil, int nCol){

	int **matriz, i;

	if((matriz=(int**)malloc(nFil*sizeof(int*)))==NULL){
		printf("ERROR EN LA RESERVA DE MATRIZ");
		exit(-1);
	}

	for(i=0; i<nFil; i++){
		matriz[i]=(int*)malloc(nCol*sizeof(int));
	}

	return(matriz);
}
