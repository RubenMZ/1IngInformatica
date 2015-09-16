/**9.  Implementa una función que responda al siguiente prototipo: int es_prefijo(char *cadena, char  
*prefijo, que compruebe si una cadena es prefijo de otra. La función devolverá 1 si es prefijo y 0 
en otro caso. Utiliza la función strstr de la bibliotecas <string.h> .*/

/**
\author ruben medina
\brief la act 9 del prefijo pae
\date 7 de marzo me han dicho
\version 1.0.0.0.0.0.0

*/

#include<stdio.h>
#include "prot9.h"
#define TAM 1000

int main(){

	char cadena[TAM], prefijo[TAM];

printf("Introduce la cadena:");
gets(cadena);
printf("Introduce el prefijo: ");
gets(prefijo);

if(es_prefijo(cadena,prefijo))
printf("%s es prefijo de %s\n\n", prefijo, cadena);
else
printf("%s no es prefijo de %s\n\n", prefijo, cadena);

return 0;
}
