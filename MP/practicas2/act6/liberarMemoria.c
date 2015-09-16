#include"prot5.h"

void liberarMemoria(int *** matriz, int nFil){

	int i;

	for(i=0; i< nFil; i++)
		free((*matriz)[i]);

	free(*matriz);

	*matriz=NULL;
}
