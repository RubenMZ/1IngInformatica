#include<stdio.h>
#include<stdlib.h>

/*!
\brief actividad 2
\author ruben
\date 25-3
*/


///esto es una prueba
int * impares(int * vector, int nEle);
void rellenarVector(int* vector, int nEle);
void mostrarVector(int* vector, int nEle);

void liberarVector(int ** vector);

int main(){

	int nEle, *vector, *aux;

	printf("Introduce el numero de elementos del vector: ");
	scanf("%d", &nEle);


	if((vector=(int*)malloc(nEle*sizeof(int)))==NULL){
		printf("Error en el primer vector\n\n");
		exit(-1);
	}

	rellenarVector(vector,nEle);

	mostrarVector(vector, nEle);

	aux= impares(vector, nEle);

	mostrarVector(aux,nEle);

	liberarVector(&vector);
	liberarVector(&aux);

return 0;
}


int * impares(int * vector, int nEle){

	int i,j=0;
	int* ptr;

	if((ptr=(int*)malloc(nEle*sizeof(int)))==NULL){
		printf("Error en segundo vector\n\n");
		exit(-1);
	}

	for(i=0; i<nEle; i++)

		if((vector[i]%2)==1){//impares
		ptr[j]=vector[i];
		j++;
		}


	if((ptr=(int*)realloc(ptr, j*sizeof(int)))==NULL){
		printf("Error en realloc\n\n");
		exit(-1);
	}
	
return (ptr);
}


void rellenarVector(int* vector, int nEle){
	
	int i;
	for(i=0; i<nEle; i++){
		printf("Inserte el elemento %d: ", i+1);
		scanf("%d", &vector[i]);
	}

}

void mostrarVector(int* vector, int nEle){

	int i;
	printf("TU VECTOR ES:\n\n ");
	for(i=0; i<nEle; i++){
	printf("  %d  ", vector[i]);
	}
	printf("\n");

}

void liberarVector(int ** vector){

free(*vector);

*vector=NULL;

}
