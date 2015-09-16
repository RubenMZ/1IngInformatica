#include<stdio.h>
#define TAM 1000

typedef struct complejo{
	float real;
	float imag;
}comp;
	
void leerComplejo(comp Vector[], float n);
void imprimirComplejo(comp Vector[], float n);
comp sumaComplejos(comp Vector[], float n, comp suma);

int main(){
	comp Vector[TAM];
	comp suma;
	comp res;
	float n;
	

	printf("Introduce el numero de complejos:");
	scanf("%f", &n);
	
	leerComplejo(Vector, n);
	imprimirComplejo(Vector, n);
	suma=sumaComplejos(Vector, n, suma);
	
	res.real=(suma.real)/n;
	res.imag=(suma.imag)/n;	
	
	printf("El resultado de la suma de los numeros complejos es: ( %.2f , %.2f )\n\n", suma.real, suma.imag);	

	printf("El resultado de la media de los numeros complejos es: ( %.2f , %.2f )\n\n", res.real, res.imag);	


return 0;
}


void leerComplejo(comp Vector[], float n){
	int i;
	for(i=0; i<n; i++){
	printf("Escribe la parte real %d: ", i+1);
	scanf("%f", &Vector[i].real);	
	printf("Escribe la parte imaginaria %d: ", i+1);
	scanf("%f", &Vector[i].imag);		
	}
}

void imprimirComplejo(comp Vector[], float n){
	int i;
	printf("Tus numeros complejos son:\n");
	
	for(i=0; i<n; i++){
		printf("( %.2f , %.2f )\n",Vector[i].real, Vector[i].imag);	
	}
}

comp sumaComplejos(comp Vector[], float n, comp suma){
	suma.real=0;
	suma.imag=0;
	int i;
	for(i=0; i<n; i++){
	suma.real= (suma.real) + (Vector[i].real);
	suma.imag = (suma.imag) + (Vector[i].imag);
	}


	
	return suma;
}

