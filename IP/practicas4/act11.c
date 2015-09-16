#include <stdio.h>
#include <string.h>
#define TAM 1000

int main(){

char cadena[TAM];
double num;

printf("Inserte una cifra para transformar la cadena a un double:");
gets(cadena);

sscanf(cadena, "%lf", &num);

printf("Tu cadena en forma double es: %lf.\n", num);

return 0;
}
