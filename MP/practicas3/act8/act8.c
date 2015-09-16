#include"prot8.h"
#include<stdio.h>

int main(){

	char fichero[]="libros.txt", titulo[100];
	int encontrado, libros;


	printf("Introduce el libro para buscar: ");
	gets(titulo);

	encontrado = comprobarLibro(fichero, titulo);
	if(encontrado==0){
		printf("Encontrado.\n");
	}else{
		printf("No encontrado.\n");
	}

	imprimir(fichero);
	libros = registros(fichero);

	printf("Tenemos %d libros.\n", libros);

}




