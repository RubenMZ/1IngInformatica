#include <stdio.h>
#include <stdlib.h>
#include "cabecera.h"

/* --------------------------------------------------------------------
   Inserta un elemento en la cola
   Se le pasa: cola -> dirección de inicio de la cola (referencia)
               elemento -> elemento a insertar
   Devuelve: nada

   Utiliza:
   --------------------------------------------------------------------*/
void insertaCola(struct nodo ** cola, struct trabajo elemento){
   struct nodo * nuevo;
   struct nodo * aux;

   nuevo=nuevoElemento();
   nuevo -> elemento=elemento;
   nuevo->sig=NULL;

   if (*cola==NULL){
      *cola=nuevo;
   }
   else {
      aux=*cola;
      while (aux->sig!=NULL){
         aux=aux->sig;
      }
      aux->sig=nuevo;
   }
}


/* -----------------------------------------------
   Saca un elemento de la cola

   Se le pasa: cola -> dirección de inicio de la cola (referencia)

   Devuelve: elemento sacado de la cola
 
   Utiliza: nada
 
   Precondición: la cola tiene elementos
   ----------------------------------------------*/
struct trabajo sacaCola(struct nodo ** cola ){
   struct nodo * aux;
   struct trabajo n;

   aux=*cola;
   *cola=aux->sig;
   n=aux->elemento;
   free(aux);
   return n;     
}

/* ---------------------------------------------
   Comprueba si la cola tiene elementos

   Se le pasa: cola -> dirección de inicio de la cola

   Devuelve: 1 si la cola está vacia
             0 en otro caso.

   Utiliza: nada
   ---------------------------------------------*/
int colaVacia(struct nodo * cola){
   if (cola==NULL){
      return 1;
   }
   else {
      return 0;
   }
}

