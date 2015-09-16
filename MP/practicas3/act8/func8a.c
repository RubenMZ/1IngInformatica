#include"prot8.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

lib* reservar(char* fichero){

	lib* vector; 
	int tam;

	tam= registros(fichero);

	if((vector=(lib*)malloc(sizeof(lib)*tam))==NULL){
		printf("Error al reservar vector.\n");
		exit(-1);
	}

	return (vector);
}


int registros(char* fichero){

	int registros=0;
	FILE * f;
	char aux[100];

	if((f=fopen(fichero, "r"))==NULL){
		printf("Error al abrir fichero en funcion registros.\n");
		exit(-1);
	}


	while(fgets(aux, 100, f)!=NULL){
		fgets(aux,100,f);
		fgets(aux,100,f);
		registros++;
	}
	


	fclose(f);

	return registros;
}



void imprimir(char* fichero){

	lib* vector;
	FILE * f;
	char libro[100], nombre[50], enter;
	float precio;
	int unidades, i=0, libros=0;

	vector = reservar(fichero);

	if((f=fopen(fichero, "r"))==NULL){
		printf("Error al abrir el fichero para funcion imprimir.\n");
		exit(-1);
	}

	while(fgets(libro, 100, f)!=NULL){
		libro[strlen(libro)-1]='\0';
		fgets(nombre, 50, f);
		nombre[strlen(libro)-1]='\0';
		fscanf(f,"%f %d %c", &precio, &unidades, &enter);

		strcpy(vector[i].titulo,libro);
		strcpy(vector[i].autor,nombre);
		vector[i].precio= precio;
		vector[i].unidades = unidades;

	}

	libros = registros (fichero);
	imprimirVector(vector, libros);





}//Almacenar en un vector dinamico

void imprimirVector(lib* vector, int num){

	int i;

	for(i=0; i<num; i++){
		printf("El libro <%s> del autor <%s> tiene %d unidades a %.2f€/libro. \n", vector[i].titulo, vector[i].autor, vector[i].unidades, vector[i].precio);

	}

}

int comprobarLibro(char* fichero, char* titulo){

	int encontrado=0;
	FILE* f;
	char libro[100];

	if((f=fopen(fichero, "r"))==NULL){
		printf("Error al abrir el fichero en funcion comprobar libro.\n");
		exit(-1);
	}

	while((fgets(libro, 100, f))!=NULL){
		libro[strlen(libro)-1]='\0';
		if(strcmp(libro, titulo)==0){
			printf("Libro encontrado.\n");
			encontrado=1;
		}
		fgets(libro,100,f);
		fgets(libro,100,f);

	}


return (encontrado);
}
