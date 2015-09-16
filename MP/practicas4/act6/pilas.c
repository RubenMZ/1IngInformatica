#include <stdio.h>
#include <stdlib.h>
#include "cabeceraPilas.h"

/* --------------------------------------------
   Introduce un elemento en la cima de la pila

   Se le pasa: cima -> cima de la pila
               num -> elemento a insertar
   
   Devuelve: nada

   Utiliza: nuevoElemento
   --------------------------------------------*/
void push (struct nodo ** cima, int num) {

   struct nodo * nuevo;
   nuevo=nuevoElemento();
   nuevo->numero=num;
   nuevo->sig=*cima;
   *cima=nuevo;
}

/* -----------------------------------------------
   Saca un elemento de la lista
   
   Se le pasa: cima -> cima de la pila (referencia)
               
   Devuelve: elemento de la cima
   
   Utiliza: nada

   Precondicion: la pila debe tener al menos un
                  elemento
  -----------------------------------------------*/
int pop(struct nodo ** cima){
   int numero;
   struct nodo * aux;
   aux=(*cima);
   numero=(*cima)->numero;
   *cima=(*cima)->sig;
   free(aux);
   return numero;
}


/* -----------------------------------------
   Comprueba si la pila esta vacia
   Se le pasa: cima -> cima de la pila
   Devuelve: 1 si la pila esta vacia
             0 en otro caso
   Utiliza:
   ------------------------------------------*/
int pilaVacia(struct nodo * cima){
   if (cima==NULL)
      return 1;
   else
      return 0;
}

