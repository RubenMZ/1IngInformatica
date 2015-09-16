/* -------------------------------------
   Fichero de cabecera de la biblioteca
   colas.a

   Metodología de la Programación
   Práctica 4
   Curso 2013-2014
   ------------------------------------*/


//Definición de la estructura nodo
struct trabajo{
   int login;			//Campo que almacena el login de un usuario
   char nombre[25];  //Campo que almacena el nombre del fichero
};
struct nodo {
   struct trabajo elemento;   //Campo que almacena un elemento
   struct nodo * sig;		//Dirección del siguiente elemento
};


/* --------------------------------------------------------------------
   Inserta un elemento en la cola
   Se le pasa: cola -> dirección de inicio de la cola (referencia)
               elemento -> elemento a insertar
   Devuelve: nada

   Utiliza:
   --------------------------------------------------------------------*/
void insertaCola(struct nodo ** cola, struct trabajo elemento);

/* -----------------------------------------------
   Saca un elemento de la cola

   Se le pasa: cola -> dirección de inicio de la cola (referencia)

   Devuelve: elemento sacado de la cola
 
   Utiliza: nada
 
   Precondición: la cola tiene elementos
   ----------------------------------------------*/
struct trabajo sacaCola(struct nodo ** cola );

/* ---------------------------------------------
   Comprueba si la cola tiene elementos

   Se le pasa: cola -> dirección de inicio de la cola

   Devuelve: 1 si la cola está vacia
             0 en otro caso.

   Utiliza: nada
   ---------------------------------------------*/
int colaVacia(struct nodo * cola);

/* -------------------------------------------
   Reserva memoria para un nuevo elemento de 
   tipo nodo

   Se le pasa: nada
   Devuelve: la direcció de inicio de la memoria
             reservada
   Utiliza: nada
   -------------------------------------------*/
struct nodo * nuevoElemento ();




