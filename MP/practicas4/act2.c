#include<stdio.h>
#include<stdlib.h>


typedef struct Ficha_alumno{

	char nombre[50];
	int DNI;
	float nota;

}ficha;

//PROTOTIPOS

ficha* reservarVector(int num);
void rellenarVector(ficha* vector, int num);
void ordenarVector(ficha* vector, int num ,int (*ptr)(int, int));
void liberarMemoria(ficha** vector);
void imprimirVector(ficha * vector, int num);

int ascendente(int a, int b);
int descendente(int a, int b);


//MAIN

int main(int argc, char ** argv){

	int alumnos;
	ficha* vector;
	int (*ptr)(int, int);

	if(argc!=2){
		printf("Error en el numero de parametros\n");
		printf("<ejecutable><modo>\n");
		printf("modo: 0 si ordena ascendente y 1 si ordena descendente segun DNI\n");
		exit(-1);
	}

	if(argv[1]){
		ptr = &descendente;
	}else{
		ptr = &ascendente;
	}


	printf("Introduce un numero de alumnos: "),
	scanf("%d", &alumnos);

	vector = reservarVector(alumnos);
	rellenarVector(vector, alumnos);
	
	imprimirVector(vector, alumnos);

	ordenarVector(vector, alumnos , ptr);

	imprimirVector(vector, alumnos);

	liberarMemoria(&vector);


return 0;
}


//FUNCIONES

ficha* reservarVector(int num){

	ficha* ptr;

	if((ptr=(ficha*)malloc(num*sizeof(ficha)))==NULL){
		printf("No se pudo reservar el vector de jugadores\n\n");
		exit(-1);
	}

	return (ptr);
}



void rellenarVector(ficha* vector, int num){

	int i;

	for(i=0;i<num; i++){
		getchar();
		printf("Introduce el nombre del %d alumno: ", i+1);
		gets(vector[i].nombre);
		printf("Introduce el DNI del %d alumno: ", i+1);
		scanf("%d", &(vector[i].DNI));
		printf("Introduce la nota del %d alumno: ", i+1);
		scanf("%f", &(vector[i].nota));
	}

}

void imprimirVector(ficha * vector, int num){
	
	int i;

	for(i=0;i<num;i++ ){
	printf("Alumno: <%s> con DNI: <%d> tiene una calificacion de <%.2f>\n", vector[i].nombre, vector[i].DNI, vector[i].nota );

	}

}


void ordenarVector(ficha* vector, int num, int (* ptr)(int, int)){

	int i, j, izda, dcha;
	ficha aux;

	izda=1;
	dcha=num-1;

	for(i=izda; i<=dcha; i++){

		for(j=dcha; j>=i; j--){
			if((*ptr)(vector[j-1].DNI, vector[j].DNI)){
				aux= vector[j-1];
				vector[j-1] = vector[j];
				vector[j] = aux;
			}
		}
	}


}

int ascendente(int a, int b){
	return(a>b);
}

int descendente(int a, int b){
	return(a<b);
}


void liberarMemoria(ficha** vector){

	free(*vector);
	*vector=NULL;

}
