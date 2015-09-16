/* -------------------------------------
   Fichero de cabecera de la biblioteca
   pilas.a

   Metodología de la Programación
   Práctica 4
   Curso 2013-2014
   ------------------------------------*/


//Definición de la estructura nodo
struct nodo {
   int numero;           //Campo que almacena un numero
   struct nodo * sig;		//Dirección del siguiente elemento
};

/* --------------------------------------------
   Introduce un elemento en la cima de la pila

   Se le pasa: cima -> cima de la pila
               num -> elemento a insertar
   
   Devuelve: nada

   Utiliza: nuevoElemento
   --------------------------------------------*/
void push (struct nodo ** cima, int num);

/* -------------------------------------------
   Reserva memoria para un nuevo elemento de 
   tipo nodo

   Se le pasa: nada
   Devuelve: la direcció de inicio de la memoria
             reservada
   Utiliza: nada
   -------------------------------------------*/
struct nodo * nuevoElemento ();

/* -----------------------------------------------
   Saca un elemento de la lista
   
   Se le pasa: cima -> cima de la pila (referencia)
               
   Devuelve: elemento de la cima
   
   Utiliza: nada

   Precondicion: la pila debe tener al menos un
                  elemento
  -----------------------------------------------*/
int pop(struct nodo ** cima);

/* -----------------------------------------
   Comprueba si la pila esta vacia
   Se le pasa: cima -> cima de la pila
   Devuelve: 1 si la pila esta vacia
             0 en otro caso
   Utiliza:
   ------------------------------------------*/
int pilaVacia(struct nodo * cima);

