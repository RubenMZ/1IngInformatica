#ifndef PROT5_H
#define PROT5_H

#include<stdio.h>

struct lista{

	float coef;
	int exp;
	struct lista* sig;

};


void crearPolinomio(struct lista** cabeza, int grado);
float evaluarPolinomio(struct lista * cabeza, float x);
void anadeMonomio(struct lista ** cabeza, float coefi, int expo);
void eliminaMonomio(struct lista ** cabeza, float coefi, int grado);
void muestraPolinomio(struct lista*  cabeza);
struct lista* nuevoMonomio();







#endif
