/*6.  Codifica  un  programa   en  C  que,  utilizando   funciones,  abra   un  fichero  en  modo  texto,  cuyo 
nombre   se   pedirá   al   usuario,   y   genere   un   nuevo   fichero   llamado   “mayusculas­
nombreFicheroDeEntrada.txt”, que tenga el mismo contenido que el fichero original pero en 
mayúsculas.*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void mostrarFichero(char* nombref);
void copiarFichero(char* nombref, char*auxf);


int main(int argc, char ** argv){

	char fichero[10000];
	char auxf[]= "mayusculas-nombreFicheroDeEntrada.txt";
	int i;

	printf("Tenemos %d argumentos\n\n", argc);

	for(i=0; i<argc; i++){
		printf("Argumento %d: %s\n", i, argv[i]);
	}


	//printf("¿Como se llama el fichero para copiar en mayusculas?: ");
	//gets(fichero);
	strcpy(fichero, argv[1]);

	copiarFichero(fichero,auxf);

	mostrarFichero(fichero);

	mostrarFichero(auxf);


return 0;
}



void copiarFichero(char* nombref, char* auxf){

	
	char c;
	FILE* f,*g;

	if((f=(fopen(nombref, "r")))==NULL){
		printf("Error en el fichero <%s>, no existe\n\n", nombref);
		exit(-1);
	}


	
	if((g=(fopen(auxf, "w")))==NULL){
		printf("Error en el fichero <%s>, no existe\n\n", auxf);
		exit(-1);
	}

	while((c=getc(f))!=EOF){
		c=toupper(c);
		fputc(c,g);
		
	}

	fclose(f);
	fclose(g);

}

void mostrarFichero(char* nombref){

	FILE* f;
	char cadena[10000];
	
	if((f=(fopen(nombref, "r")))==NULL){
		printf("Error en el fichero <%s>, no existe\n\n", nombref);
		exit(-1);
	}

	while(fgets(cadena,10000,f)!=NULL){

		if(cadena[strlen(cadena)-1]=='\n'){
			cadena[strlen(cadena)-1]='\0';
		}	

	printf("%s\n", cadena);

	}

fclose(f);
	

}
