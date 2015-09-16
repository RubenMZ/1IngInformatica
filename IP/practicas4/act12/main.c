#include<stdio.h>
#define TAM 100
#include"prototipos.h"
#include<string.h>

int main(){
    char cadena[TAM], cadena2[TAM];
    int n;

    printf("Introduce tu cadena de caracteres:");
    gets(cadena);
    printf("Introduce los n caracteres de la subcadena:");
    scanf("%d", &n);
    
    printf("Tu cadena es: %s\n\n", cadena);
    
    if(n<=strlen(cadena)){
	extraerCadena(cadena, n, cadena2);
	printf("Tu subcadena es: %s\n\n", cadena2);
	strncpy(cadena, cadena2, n);
	printf("La subcadena con strncpy es: %s\n\n", cadena2);
	}
	else{
	printf("La cadena es mas pequeña que la subcadena.\n\n");
	}
    
    

    return 0;
    }


