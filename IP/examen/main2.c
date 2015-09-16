#include<stdio.h>
#include"cabecera2.h"
#define TAM 1000

struct notas{
double practica;
double teoria;
double final;
};



int main(){

	struct notas Vector[TAM], alumno;
	int num, i;

	printf("Introduce el numero de alumnos: ");
	scanf("%d", &num);

	for(i=0; i<num; i++){
	Vector[i]=pedirNotas(i);
	}

	for(i=0; i<num; i++){
	alumno=Vector[i];
	printf("Alumno %d\n", i+1);
	imprimirNotas(alumno);
	}

	for(i=0; i<num; i++){
	alumno=Vector[i];
	Vector[i]=calcularFinal(alumno);	
	}

	for(i=0; i<num; i++){
	alumno=Vector[i];
	printf("Alumno %d\n", i+1);
	imprimirNotas(alumno);
	}

	return 0;
}


