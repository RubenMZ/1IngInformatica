#include<stdio.h>
#include"cabecera2.h"

struct notas{
double practica;
double teoria;
double final;
};


struct notas pedirNotas(int i){
	struct notas alumno;
	printf("Introduce tu nota practica %d: ", (i+1));
	scanf("%lf", &alumno.practica);
	printf("Introduce tu nota teorica %d: ", (i+1));
	scanf("%lf", &alumno.teoria);
	alumno.final=0;

	return alumno;
}

void imprimirNotas(struct notas alumno){
	printf("Practica %.2lfx0.7 y teorica %.2lfx0.3 con nota final de: %.2lf\n", alumno.practica, alumno.teoria, alumno. final);
}


struct notas calcularFinal(struct notas alumno){
	alumno.final = alumno.teoria*0.3 + 0.7*alumno.practica;
	return alumno;
}


