#include<stdio.h>
#include"prot5.h"


int main(){

	struct lista* cabeza=NULL;
	int grado, exponente, opcion, salir=0, troll=0;
	float coeficiente, x, resultado;

	printf("***** PROGRAMA QUE ELABORA UN POLINOMIO DE GRADO n Y REALIZA VARIAS OPERACIONES CON EL *****");

	printf("Introduce el grado del polinomio: ");
	scanf("%d", &grado);


	crearPolinomio(&cabeza,grado);
	
	printf("TU POLINOMIO ES: \n\n");
	muestraPolinomio(cabeza);

	


	while(opcion!=5){
		printf("Elige una opcion para realizar: \n");
		printf("1. Añadir monomio\n");
		printf("2. Eliminar monomio\n");
		printf("3. Evaluar polinomio\n");
		printf("4. Tabla de valores de 0 a 5\n");
		printf("5. Salir\n");
		printf("Opcion: ");
		scanf("%d", &opcion);
	switch(opcion){
	
		case 1: //añadir monomio
			printf("Introduce el coeficiente para añadir el elemento: ");
			scanf("%f", &coeficiente);
			printf("Introduce el exponente para añadir el elemento: ");
			scanf("%d", &exponente);
	
			anadeMonomio(&cabeza, coeficiente, exponente);
			muestraPolinomio(cabeza);
			break;

		case 2: //eliminar monomio
			printf("Introduce el coeficiente del elemento a borrar: ");
			scanf("%f", &coeficiente);
			printf("Introduce el exponente del elemento a borrar: ");
			scanf("%d", &exponente);
			eliminaMonomio(&cabeza, coeficiente, exponente);
	
			muestraPolinomio(cabeza);

			break;

		case 3: //evaluar polinomio

			printf("Introduce el valor de x para evaluar: ");
			scanf("%f", &x);

			resultado=evaluarPolinomio(cabeza, x);

			printf("El resultado de evaluar el polinomio para x = %.2f es %.2f\n\n", x, resultado);

			break;

		case 4:	//tabla de valores

			for(x=0; x<=5; x=x+0.5){
				resultado=evaluarPolinomio(cabeza, x);
				printf("( x = %.2f | resultado = %.2f)\n", x, resultado);
			}
			break;
			
		case 5: salir=1;
			printf("Gracias por tu visita\n\n");
			break;

		default: 
			if(troll==0){
				printf("\nTe has equivocado, ingresa un valor correcto\n\n");
				troll=1;
				break;
			}

			if(troll==1){
				printf("\nOtra vez... Ingresa un valor valido entre 1 y 5\n\n");
				troll=2;
				break;
			}

			if(troll==2){
				printf("\nMe estas cansando... Quieres introducir un valor del 1 al 5??\n\n");
	
				troll=3;
				break;
			}
		
			if(troll==3){
				printf("\nYa me has cansado, nos vemos\n");
				printf("El programa se ha cerrado esperadamente\n\n");
				exit(-1);

			}	
			
			

			
	}


	}
	
	return 0;


}
