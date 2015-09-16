/*7.  Codifica un programa en C que, utilizando funciones, modifique un fichero de texto para que 
cualquier secuencia de espacios en blanco se sustituya por un único espacio en blanco. El nombre 
del fichero se pedirá al usuario.*/

#include<stdio.h>
#include<string.h>

void mostrarFichero(char* nombref);
void quitarEspacios(char* nombreF, char*aux);


int main(){
	
	char fichero[10000];
	char aux[]= "temporal.txt";


	printf("Introduce el nombre del fichero para editar: ");
	gets(fichero);

	printf("\nTU FICHERO SIN EDITAR: \n");
	mostrarFichero(fichero);

	quitarEspacios(fichero,aux);	
	
	printf("\nTU FICHERO EDITADO: \n");
	
	mostrarFichero(aux);
	//mostrarFichero(fichero);
	
return 0;
}

void quitarEspacios(char* nombreF,char* aux){

	FILE*f, *g;
	int esp=0;
	int c;
	//char aux[]= "temporal.txt";

	if((f=fopen(nombreF,"r"))==NULL){
		printf("No se encontro el fichero <%s>\n\n", nombreF);
		exit(-1);
	}

	if((g=fopen(aux,"w"))==NULL){
		printf("Fallo del fichero <temporal.txt>\n\n");
		exit(-1);
	}

	while((c=(getc(f)))!=EOF){

		if(c==' '){
			esp++;
		}else{
			esp=0;
		}
			//printf("PASO 3\n");
		if((esp==0)||(esp==1)){

			fputc(c,g);
		}
	}
	//mostrarFichero(aux);
	fclose(f);
	fclose(g);

	//rename("temporal.txt", nombreF);
	//remove(nombreF);

	

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
