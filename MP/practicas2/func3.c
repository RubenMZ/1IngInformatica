#include"prot3.h"

jug * reservarvector(int njug){

	jug* vector;
	if((vector=(jug*)malloc(njug*sizeof(jug)))==NULL){
		printf("ERROR CHUNGO\n");
		exit(-1);
	}
	return (vector);
}


void leerjugador(jug* persona){

	getchar();
	printf("Introduce el nombre del jugador: ");
	gets((*persona).nombre);
	printf("Introduce el dorsal: ");
	scanf("%d", &((*persona).dorsal));
	printf("Introduce el peso (kilos): ");
	scanf("%f", &((*persona).peso));
	printf("Introduce la estatura (cm): ");
	scanf("%d", &((*persona).estatura));

}


void rellenarvector(jug * vector, int njug){

	int i;
	for(i=0; i<njug; i++){
	leerjugador(&(vector[i]));
	}	

}



void imprimirvector(jug * vector, int njug){

	int i;
	printf("\nTU EQUIPO ESTA FORMADO POR: \n\n");

	for(i=0; i<njug; i++){
		if((vector+i)!=NULL)
		printf("Nombre: %s\nDorsal: %d\nPeso: %.2f kilos\nEstatura: %d cm\n\n", (*(vector+i)).nombre, (*(vector+i)).dorsal, (*(vector+i)).peso, (*(vector+i)).estatura);

	}

}

int borrarjugador(jug* vector, char c, int *njug){

	int i, j=0;
	jug *aux;
	int contador=0;;
	void* ptr;
	
	if((aux=(jug*)malloc((*njug)*sizeof(jug)))==NULL){
		printf("ERRATA Auxiliar\n");
		exit(-1);
	}
	
	for(i=0; i< (*njug); i++){
		ptr=strrchr((vector[i].nombre), c);
	
		if(ptr!=NULL){
			contador++;	
			
		}else{
			
			aux[j]=vector[i];
			j++;	
		}
	
	}
	
	(*njug)=(*njug)-contador;

	

	for(i=0; i<(*njug); i++)
	{	
		vector[i]=aux[i];
	}
	

	if((vector=(jug*)realloc(vector, (*njug)*sizeof(jug)))==NULL){
		printf("ERROR FATALITY\n");
		exit(-1);
	}	
	


	free(aux);
	return(contador);
}


void liberarvector(jug **vector){

	free(*vector);
	(*vector)=NULL;

}




