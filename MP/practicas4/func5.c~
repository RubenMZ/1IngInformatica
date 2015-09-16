#include"prot5.h"
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

//RESERVA MONOMIO

struct lista* nuevoMonomio(){
	return((struct lista*)malloc(sizeof(struct lista)));
}

//CREA POLINOMIO

void crearPolinomio(struct lista** cabeza, int grado){
	struct lista* nuevo=NULL;
	int i;

	
	for(i=0; i<=grado;i++){
		
		nuevo=nuevoMonomio();
		printf("Introduce el coeficiente del elemento x^%d: ", i);
		scanf("%f", &(nuevo->coef));
		nuevo->exp=i;	
		
		nuevo->sig=*cabeza;
		*cabeza=nuevo;		
		
		
				
	}
//free(nuevo);
}

//IMPRIME EL POLINOMIO

void muestraPolinomio(struct lista*  cabeza)
{
	struct lista * aux=cabeza;

	//printf("%d %d\n", cabeza->coef, cabeza->exp);

	while(aux!=NULL){
	
		if((aux->sig)==NULL){


			printf(" %.2f\n", aux->coef);

		}else{
			printf(" %.2f*(X^%d) + ", aux->coef, aux->exp);
		}

		aux=aux->sig;
	}

}

//EVALUAR POLINOMIO
float evaluarPolinomio(struct lista * cabeza, float x){
	struct lista* aux=cabeza;
	float resultado=0;
	int expo;

	while(aux!=NULL){
		expo=aux->exp;
		resultado+= (aux->coef)*pow(x,expo);
		aux=aux->sig;
	}
	return resultado;
}

//AÑADE MONOMIO
void anadeMonomio(struct lista ** cabeza, float coefi, int expo){

	struct lista* nuevo;

	nuevo = nuevoMonomio();
	nuevo->coef=coefi;
	nuevo->exp=expo;
	nuevo->sig=*cabeza;
	*cabeza=nuevo;

}


//ELIMINAR MONOMIO

void eliminaMonomio(struct lista ** cabeza, float coefi, int grado){

	struct lista *ant=NULL, *aux = *cabeza;
	int encontrado=0;

	while((aux!=NULL)&&(encontrado==0)){
	
		if((aux->coef==coefi)&&(aux->exp==grado)){
			if(aux==*cabeza){
				*cabeza=aux->sig;
				free(aux);
			}else{
				encontrado=1;
				ant->sig=aux->sig;
				free(aux);
			}
		}else{
			ant=aux;
			aux=aux->sig;

		}		
	}

	if(encontrado){

		printf("Elemento encontrado y borrado con exito\n");
	}else{

		printf("Lo siento, el elemento no se encontro\n");
	}
	

}

