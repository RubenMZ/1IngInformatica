#include<stdio.h>

void recursivaPares(int num, int *cont);

int main(){

	int contador=0, numero;

	printf("Introduce un numero entero para ver los pares que tiene: ");
	scanf("%d", &numero);

	recursivaPares(numero, &contador);

	printf("El numero %d tiene %d digitos pares\n", numero, contador);


return 0;
}

void recursivaPares(int num, int *cont){


	if(num!=0){

		if(num%2==0){
		(*cont)++;
		recursivaPares(num/10, cont);
		}
		else{		
		recursivaPares(num/10, cont);
		}
	}
}

