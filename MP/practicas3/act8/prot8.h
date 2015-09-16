#ifndef PROT8_H
#define PROT8_H

typedef struct libro{
	char titulo[100];
	char autor[50];
	float precio;
	int unidades;
}lib;


int comprobarLibro(char* fichero, char* titulo);
void introducirLibro(char* fichero, char* titulo, char* autor, float precio, int unidades);
int registros(char* fichero);
void imprimir(char* fichero);//Almacenar en un vector dinamico
void venderLibro(char* fichero, char* libro);
void borrarRegistros(char* fichero);
lib* reservar(char* fichero);
void imprimirVector(lib* vector, int num);

#endif
