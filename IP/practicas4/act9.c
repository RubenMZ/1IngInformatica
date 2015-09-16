#include<stdio.h>
#include<string.h>
#define TAM 1000

void concatenar(char nombre[], char apellidos[], char cadena[]);

int main(){

char nombre[TAM], apellidos[TAM], cadena[TAM];

printf("Escribe tu nombre: ");
gets(nombre);

printf("Escribe tus apellidos:	");
gets(apellidos);

concatenar(nombre, " ", cadena);
concatenar(cadena, apellidos, cadena);

printf("Tu nombre y apellidos son --> %s\n", cadena);

strcat(nombre, " ");

printf("Tu nombre y apellidos por strcat son --> %s\n", strcat(nombre ,apellidos));


return 0;
}



void concatenar(char nombre[], char apellidos[], char cadena[]){
	
	int i, j;

	for(i=0; i<strlen(nombre); i++){
	cadena[i]=nombre[i];
	}

	for(i=strlen(nombre), j=0; i<(strlen(nombre)+strlen(apellidos)); j++, i++){
	cadena[i]=apellidos[j];
	}

}
