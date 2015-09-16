/*!
@author Raven
@date 7 de marzo de 2mil14
@brief Este es el ejercicio 8


*/

/*8.  Se desea codificar un programa que permita gestionar los datos de personas:

nombre: array de N caracteres
apellidos: array de M caracteres
edad: entero
sexo: carácter 
a) Implementa una función denominada leer_persona, que reciba una estructura pasada por 
referencia y permita leer los datos de una persona.
b) Implementa una función denominada escribir_persona, que reciba una estructura y escriba 
los datos de una persona.
c) Utilizando las  funciones  anteriores, en el programa principal lee y escribe un vector de 
personas. 
d) Crea una función que usando paso de parámetros por referencia, devuelva los datos de la 
persona con mayor edad y los de la persona con menor edad. Utilízala en tu programa
e) Crea un función que calcule la edad media de las personas. Utilízala en tu programa.*/


#include<stdio.h>
#define TAM 1000

//ESTRUCTURA PERSONAS

typedef struct persona{

char nombre[TAM];
char apellidos[TAM];
int edad;
char sexo;
}pers;

//PROTOTIPOS

void leer_persona(pers * persona);
void escribir_persona(pers * persona);
void maxyminpersona(pers * persona, pers* maxima, pers* minima);
void edadmedia(pers * persona, float* suma);

//MAIN

int main(){

	pers personas[TAM], maxima, minima;
	float suma, num;
	int i;
	maxima.edad=0;
	minima.edad=1000;


	printf("Introduce el numero de personas: ");
	scanf("%f", &num);

	for(i=0;i<num; i++)
	leer_persona(&personas[i]);

	for(i=0;i<num; i++)
	escribir_persona(&personas[i]);

	for(i=0;i<num; i++)
	maxyminpersona(&personas[i], &maxima, &minima);


	for(i=0;i<num; i++)
	edadmedia(&personas[i], &suma);

	printf("\nLa persona con edad maxima es <%s> <%s> con edad <%d> y sexo <%c>.\n", maxima.nombre, maxima.apellidos, maxima.edad, maxima.sexo);
	printf("La persona con edad minima es <%s> <%s> con edad <%d> y sexo <%c>.\n", minima.nombre, minima.apellidos, minima.edad, minima.sexo);
	printf("La edad media de todas las personas es: %.2f.\n\n", suma/num);

	return 0;
}



//FUNCIONES

//funcion leerpersona
	void leer_persona(pers * persona){
		printf("Introduce nombre: ");
		getchar();
		gets((*persona).nombre);
		printf("Introduce apellidos: ");
		gets((*persona).apellidos);
		printf("Introduce edad: ");
		scanf("%d", &(*persona).edad);
		printf("Introduce sexo (H/M): ");
		getchar();
		scanf("%c", &(*persona).sexo);
	}


//funcion escribirpersona

void escribir_persona(pers * persona){

printf("La persona con nombre <%s>, apellidos<%s>, edad<%d>, y sexo <%c>.\n", (*persona).nombre,(*persona).apellidos,(*persona).edad,(*persona).sexo);

}


//funcion para la persona con mas y con menos edad.

void maxyminpersona(pers * persona, pers* maxima, pers* minima){
if((*maxima).edad<(*persona).edad)
*maxima=*persona;

if((*minima).edad>(*persona).edad)
*minima=*persona;
}



//Edad media

void edadmedia(pers *persona, float *suma){


*suma=(*suma)+(*persona).edad;

}
