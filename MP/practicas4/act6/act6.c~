#include<stdio.h>
#include<stdlib.h>
#include"cabeceraPilas.h"

/*	FUNCIONES DE LA LIBRERIA


struct nodo {
   int numero;           //Campo que almacena un numero
   struct nodo * sig;		//Dirección del siguiente elemento
};

void push (struct nodo ** cima, int num);
struct nodo * nuevoElemento ();
int pop(struct nodo ** cima);
int pilaVacia(struct nodo * cima);
*/


void creaPila(struct nodo ** cabeza, int num);
int contarContenedores(struct nodo * cabeza);
int buscarCodigo(struct nodo* cabeza, int codigo);
void sacarContenedor(struct nodo* cabeza, int codigo);
void meterContenedor(struct nodo* cabeza, int codigo, int x);
void imprimirContenedor(struct nodo* cabeza);

struct nodo * nuevoElemento ();

int main(){
	
	struct nodo * cabeza=NULL;
	int contenedor=0, registros=0, codigo=0, N, opcion;
	
	do{

	printf("Introduce la capacidad maxima de la pila: ");
	scanf("%d", &N);

	do{
	printf("Inserta el numero inicial de contenedores: ");
	scanf("%d", &contenedor);
	}while(contenedor<=0);	

	if(contenedor>N)
		printf("La pila es demasiado pequeña para tantos contenedores\n");

	}while(contenedor>N);

	creaPila(&cabeza, contenedor);

	printf("TU PILA ES:\n");
	imprimirContenedor(cabeza);

	do{
		printf("\nIntroduzca una opcion:\n");
		printf("1. Apilar un contenedor\n");
		printf("2. Contar el numero de contenedores\n");
		printf("3. Ver si un contenedor existe\n");
		printf("4. Borrar un contenedor\n");
		printf("5. Ver lista\n");
		printf("6. Salir\n");

		scanf("%d", &opcion);

		switch(opcion){

			case 1: break;
		
			case 2:	break;
		
			case 3:	break;

			case 4: break;

			case 5: break;

			default: break;

		}
	}while(opcion!=6);

	printf("Gracias por su visita\n");

	return 0;

}

//FUNCIONES

/*Funcion para crear una pila: 
Recibe: cabecera y numero de contenedores
Devuelve:  nada
Funcion: lee por teclado cada codigo y lo mete en la pila
*/

	void creaPila(struct nodo ** cabeza, int num){

		int codigo,i;

		

		for(i=1;i<=num;i++){
			printf("Introduce el codigo del contenedor %d: ", i);
			scanf("%d", &codigo);
			push (cabeza, codigo);
		}
		
	}

/*Funcion para contar el numero de contenedores
Recibe: cabecera
Devuelve: el numero de registros que tiene la pila
Funcion: realiza un sumatorio de los contenedores que tiene la pila y los devuelve
*/

	int contarContenedores(struct nodo * cabeza){
		int registros=0;
		struct nodo* aux;
	
		while(cabeza!=NULL){
			push(&aux, pop(&cabeza));
			registros++;	
			
			
		}

		while(aux!=NULL){
			push(&cabeza, pop(&aux));
		
		}

		
		return (registros);
	}


/*Funcion para buscar el codigo de un contenedor
Recibe: cabecera y el codigo
Devuelve: 0 si no lo encuentra y 1 si esta en la pila
Funcion: desapila la pila comparando los codigo mientras cabeza apunte a algo y no se active encontrado
*/


	int buscarCodigo(struct nodo* cabeza, int codigo){

		int cont=0, encontrado=0;
		struct nodo* aux=NULL;

		while((cabeza!=NULL)&&(encontrado==0)){
				cont = pop(&cabeza);
				push(&aux, cont);
				if(cont==codigo){
					encontrado=1;

				}
		}

			
		while(aux!=NULL){
			push(&cabeza, pop(&aux));
		
		}


		return(encontrado);
		
	}



/*Funcion para sacar de la pila un contenedor 
Recibe: cabecera y codigo del contenedor
Devuelve: nada
Funcion: compara los codigos mientras cabeza sea distinto de NULL y no se encuentre, cuando el elemento se encuentra no se copia en aux y se queda borrado. Finalmente, se vuelve a pasar la pila para cabeza.
*/

	void sacarContenedor(struct nodo* cabeza, int codigo){

		struct nodo* aux=NULL;
		int codaux, encontrado=0;

		while((cabeza!=NULL)&&(encontrado==0)){
			codaux = pop(&cabeza);
	
			if(codaux==codigo){
				encontrado=1;
				printf("Elemento encontrado\n");
			}else{
				push(&aux, codaux);
	
			}

		}

		while(aux!=NULL){
			codaux = pop(&aux);
			push(&cabeza, codaux);

		}

		if(encontrado==0)
		printf("Lo siento, el elemento no se encontro.\n");
		else
		printf("Elemento borrado con exito\n");

	}

/*Funcion para sacar de la pila un contenedor 
Recibe: cabecera y codigo del contenedory el numero maximo de elementos en la pila x
Devuelve: nada
Funcion: añade el nuevo contenedor a la pila si los registros es menor al numero maximo de espacio.
*/

	void meterContenedor(struct nodo* cabeza, int codigo, int x){
		
		if(contarContenedores(cabeza)<x){
			push(&cabeza, codigo);
			printf("Contenedor ingresado con exito\n");

		}else{

			printf("La pila esta llena, vacie algun contenedor.\n");
		}
	}

/*Funcion para imprimir la pila:
Recibe: cabecera
Devuelve:  nada
Funcion: desapila la pila y va imprimiendo cada codigo mientras que cabeza no apunte a NULL
*/

	void imprimirContenedor(struct nodo* cabeza){

		int codigo;
		struct nodo* aux=NULL;

		while(cabeza!=NULL){
			codigo = pop(&cabeza);
			printf("%d\t", codigo);
			push(&aux, codigo);
		}

		while(aux!=NULL){
			push(&cabeza, pop(&aux));
		
		}



	}

/*Funcion para reservar memoria
Recibe: nada
Devuelve: puntero al elemento
Funcion: reserva memoria para un nuevo elemento de la pila
*/


	struct nodo * nuevoElemento (){

		return((struct nodo*)malloc(sizeof(struct nodo)));
	}
