#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char** argv){

	char nombreF[100];

	if(argc!=2){
		printf("Numero de parametros incorrectos:\n<ejecutable><nombre ficherofichero>\n\n");
		exit(-1);
	}else{
	
		strcpy(nombreF, argv[1]);
		printf("Nombre del fichero: %s \n\n", nombreF);
	}



	return 0;
}
