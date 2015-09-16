#include<stdio.h>
#include<math.h>

float funcionf(float x);
float funciong(float x);
float funcionz(float x);


int main(){

	float (*pf)(float);
	float (*pg)(float);
	float (*pz)(float);

	float x, i;

	int opcion;


	pf=&funcionf;
	pg=&funciong;
	pz=&funcionz;

	printf("Introduce el valor maximo: ");
	scanf("%f", &x);
	
	do{

		printf("Introduce una opcion: \n");
		printf("1. f(x) = 3* e^x - 2x\n");
		printf("2. g(x) = -x * sin(x) + 1.5\n");
		printf("3. z(x) = x³ - 2x + 1\n");
		printf("4. Salir\n");
		printf("Opcion: ");
		scanf("%d", &opcion);

		switch(opcion){

			case 1: printf("Para  f(x) = 3* e^x - 2x\n");

				for(i=0; i<x; i=i+0.2)
				{
				printf("Para x = %f ->  Resultado = %f\n\n", i, pf(i));
				}

				break;


			case 2:	printf("Para g(x) = -x * sin(x) + 1.5\n");

				for(i=0; i<x; i=i+0.2)
				{

				printf("Para x = %f ->  Resultado = %f\n\n", i, pg(i));
				}

				break;
		

			case 3: printf("Para z(x) = x³ - 2x + 1\n");

				for(i=0; i<x; i=i+0.2)
				{
				printf("Para x = %f ->  Resultado = %f\n\n", i, pz(i));
				}

				break;

			case 4: printf("Gracias por su visita\n\n");
				break;
		
			default: printf("Introduce un valor valido\n");
				break;
		}

	}while(opcion!=4);

	return 0;
}

float funcionf(float x){

	return(3*exp(x)-2*x);
}

float funciong(float x){
	
	return(-x*sin(x)+1.5);
}


float funcionz(float x){

	return(pow(x,3)-2*x+1);

}

