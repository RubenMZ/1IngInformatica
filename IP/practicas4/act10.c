#include<stdio.h>
#include<string.h>
#define TAM 1000

int main(){

	char mander[TAM], meleon[TAM];

	printf("Inserta dos nombres para ordenarlos alfabeticamente.\n");
	printf("Inserta el primer nombre:");
	gets(mander);

	printf("Inserta el segundo nombre:");
	gets(meleon);

		printf("El orden albetico de los nombres es:\n");

		if(strcmp(mander, meleon)==0){
		printf("\nLos nombres son iguales: %s = %s.\n\n", mander, meleon);}

		if(strcmp(mander, meleon)<0){
		printf("\n 1. %s \n 2. %s\n\n", mander, meleon);}

		if(strcmp(mander, meleon)>0){
		printf("\n 1. %s \n 2. %s\n\n", meleon, mander);}

return 0;
}
