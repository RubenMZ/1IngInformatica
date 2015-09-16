#include"prot5.h"

int **eliminarFila(int **matriz, int nFil, int nCol, int fila_borrada){

	int i, j, k=0, l=0;
	int** matriz2;
    fila_borrada--;
	matriz2=reservarMemoria(nFil, nCol);	

	for(i=0; i<nFil; i++){		                 
                 
                 l=0;
			
                if(i!=fila_borrada){
                             
                             for(j=0; j<nCol; j++){
                     
                
                                        
				                        matriz2[k][l]=matriz[i][j];
				                        
				                        l++;	
				                        
                            }
                k++;
                }
	
	}
return(matriz2);
}
