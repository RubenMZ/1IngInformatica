#include<stdio.h>
#include<string.h>
#define TAM 1000

void eliminar(char cadena1[]);

int main(){

char cadena1[TAM];
printf("Introduce una palabra por teclado: ");
gets(cadena1);

printf("La cadena introducida es %s\n", cadena1);
eliminar(cadena1);
printf("La cadena sin s quedaria: %s\n\n", cadena1);

return 0;
}

void eliminar(char cadena1[]){

	if(cadena1[strlen(cadena1)-1]=='s'){
	cadena1[strlen(cadena1)-1]='\0';
	}

}
