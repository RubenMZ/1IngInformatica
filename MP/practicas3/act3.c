#include<stdio.h>
#include<string.h>
#define TAM 1000


/*3.  Dada una cadena c, diseña una función recursiva que cuente la cantidad de veces que aparece un 
carácter x en c. Ej: para c = “elementos de programación” y x = 'e', el resultado es 4.*/

int recursivaCaracter(char* cadena, char c, int longitud);

int main(){

	char cadena[TAM], c;
	int contador=0;

	printf("Introduce una palabra: ");
	gets(cadena);
	printf("Introduce el caracter para contar en la palabra: ");
	scanf("%c", &c);
	
	contador=recursivaCaracter(cadena, c, strlen(cadena)-1);

	if(*cadena!=' '){	
		if(contador==0)
			printf("\nLa cadena <%s> no tiene el caracter <%c>\n\n", cadena, c);
		else
			printf("\nLa cadena <%s> tiene %d veces el caracter <%c>\n\n", cadena, contador, c);
	}else{
		printf("\nError la cadena es un espacio en blanco.\n\n");
	}


return 0;

}


int recursivaCaracter(char* cadena, char c, int longitud){

	int contador;

	if(longitud<0){
		contador=0;
	}else{

		if(*(cadena+longitud)==c)
		{
			contador=1+recursivaCaracter(cadena, c, longitud-1);
		}else{
			contador=recursivaCaracter(cadena, c, longitud-1);
		}
		
	}
	return (contador);
}



