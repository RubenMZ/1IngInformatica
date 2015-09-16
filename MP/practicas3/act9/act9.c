#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct libro{
	char titulo[100];
	char autor[50];
	float unidades;
	float precio;

}libro;

//PROTOTIPOS

void crearFichero(char * fichero, int numero);
int comprobarFichero(char* fichero);
int comprobarLibro(char * fichero, char * titulo);
void meterLibro(char * fichero, char* titulo, char * autor, float precio, float unidades);
int contarLibros(char * nombre);
void verLibros(char * fichero);//Almacenar en un vector dinamico
void venderLibro(char * fichero, char * titulo);
void sinUnidades(char* fichero );





//MAIN

int main(){
    
    int opcion,abrir, encontrado=0, num=0, libroencontrado=0, registros=0;
    char fichero[100], titulo[100], autor[50], vender[100];
	float unidades, precio;
    
    do{
    
    printf("Introduce el nombre de tu fichero de libros: ");
    gets(fichero);

	encontrado= comprobarFichero(fichero);

    if(encontrado==0){
                   printf("El fichero no existe.\n");   
                   printf("Desea crear uno nuevo?\n1.Si\n2.No\n");
                   printf("Opcion: ");
                   scanf("%d", &abrir);
			getchar();
	
                   if(abrir==1){
                      printf("Introduce el numero de libros: ");
                      scanf("%d", &num); 
			         
                      crearFichero(fichero, num);          
                   }                                
    }else{

                   printf("El fichero esta disponible.\n\n");      
    }
    
    }while(comprobarFichero(fichero)==0);
    
    
    do{
    
    printf("\nIntroduce una de las siguientes opciones: \n");
    printf("1. Comprobar libro.\n");
    printf("2. Introducir libro.\n");
    printf("3. Contar libros.\n");
    printf("4. Mostrar libros.\n");
    printf("5. Vender libros.\n");
    printf("6. Salir.\n");
    printf("Opcion:  ");
    scanf("%d", &opcion);
    
    
    switch(opcion){
                   
                   case 1: 	getchar();

				printf("\nIntroduce el libro para buscar: ");
				gets(titulo);
				
				libroencontrado = comprobarLibro(fichero, titulo);

				if(libroencontrado==0)
					printf("El libro no se encuentra.\n\n");
				
				break;


                   case 2: 
				getchar();
			      printf("\nIntroduce el titulo del libro: ");
			      gets(titulo);
			      printf("Introduce el autor del libro <%s>: ",titulo); 
			      gets(autor);
			      printf("Introduce el precio del libro <%s>: ", titulo);
			      scanf("%f", &precio);
			      printf("Introduce las unidades del libro <%s>: ", titulo);
				scanf("%f", &unidades);        
				meterLibro(fichero, titulo, autor, precio, unidades);

			 	break;  



              
                   case 3: 	registros = contarLibros(fichero);
				printf("\nTienes <%d> registros en stock.\n\n", registros);
				break;


                   case 4: 	verLibros(fichero);
				

				break;

                   case 5: 	
				getchar();
				printf("\nQue libro quieres vender?: ");
				gets(vender);
	
				venderLibro(fichero, vender);
				sinUnidades(fichero);


				break;



                   case 6: 

				printf("\nGracias por su visita, le esperamos pronto.\n\n");
				break;

                   default: 	printf("\n\nIntroduce un valor correcto por favor.\n\n");

				break;
    }
    
    }while(opcion!=6);
    
    return 0;
    }
    
    
    
//FUNCIONES

//crea un fichero nuevo para iniciar los libros

void crearFichero(char * fichero, int numero){
     
     FILE* f;
     libro aux;
	int i;
     
     
     if((f=fopen(fichero, "wb"))==NULL){
                          printf("Error al abrir el fichero para crear fichero.\n\n");
                          exit(-1);                                      
     }     
     
     for(i=0; i<numero; i++){
              

		getchar();
              printf("Introduce el titulo del libro: ");
              gets(aux.titulo);
              printf("Introduce el autor del libro <%s>: ", aux.titulo); 
              gets(aux.autor);
              printf("Introduce el precio del libro <%s>: ", aux.titulo);
              scanf("%f", &(aux.precio));
              printf("Introduce las unidades del libro <%s>: ", aux.titulo);
		scanf("%f", &(aux.unidades));              
	
              fwrite(&aux, sizeof(libro), 1, f);
     }
     
     printf("Fichero inicial creado con exito.\n\n");
     
     
     fclose(f);
}
//comprueba si existe el fichero

	int comprobarFichero(char* fichero){
	    
	    int encontrado=0;
	    FILE* f;

	    if((f=fopen(fichero, "rb"))!=NULL){
		                 encontrado=1;

		                 }
	   
	    
		//fclose(f);

	    return(encontrado);
	    }

//busca un libro en stock

	int comprobarLibro(char * fichero, char * titulo){
	    
	    FILE* f;
	    libro aux;
	    int encontrado=0;
	    
	    if((f=fopen(fichero, "rb"))==NULL){
		                 printf("Error al abrir el fichero para comprobar libro.\n\n");
		                 exit(-1);
	    }
		                 
	    while(fread(&aux, sizeof(libro), 1, f)==1){
				
		              if(strcmp(aux.titulo,titulo)==0){
		                                encontrado=1;
		                                printf("Encontrado con exito.\n");
						printf("Tu libro <%s> de <%s> cuesta %.2f € y quedan %.0f unidades.\n\n", aux.titulo, aux.autor, aux.precio, aux.unidades);
		              }                  
		              
	    }
	    
	    fclose(f);                     
	    return(encontrado);    
	}

//mete un libro en el fichero

	void meterLibro(char * fichero, char* titulo, char * autor, float precio, float unidades){
	     
	     FILE* f;
	     int encontrado=0;
	     libro aux;
	     
	     encontrado= comprobarLibro(fichero, titulo);
	     
	     if(encontrado==0){
	     
	     if((f=fopen(fichero, "ab"))==NULL){
		                  printf("Error al abrir el fichero para meter libro.\n\n");                     
		                  exit(-1);
	     }
	     
	     strcpy(aux.titulo, titulo);
	     strcpy(aux.autor, autor);
	     aux.precio= precio;
	     aux.unidades =  unidades;
	     
	     fwrite(&aux, sizeof(libro), 1, f);     
	     printf("\nIntroducido con exito\n");
		printf("El libro <%s> de <%s> a %.2f€ con %.0f unidades.\n\n", aux.titulo, aux.autor, aux.precio, aux.unidades);
	     }else{
		   printf("Ya existen unidades de <%s>\n\n", titulo);      
	     }
	    fclose(f); 
	}

//cuenta registos en stock

	int contarLibros(char * nombre){
	    FILE* f;
	    libro aux;
	    int registros=0;
	    
	    if((f=fopen(nombre, "rb"))==NULL){
		                 printf("Error al abrir el fichero para comprobar libro.\n\n");
		                 exit(-1);
	    }
		                 
	    while(fread(&aux, sizeof(libro), 1, f)==1){
		            registros++;                  
	    }
	    
	    fclose(f);                     
	    return(registros);
	    
	}

//imprime los libros en stock

	void verLibros(char * fichero){
	       FILE* f;
	       libro * vector; 
	       int i=0, registros=0;
	       
	       
	       registros=contarLibros(fichero);
	       
	       if((vector=(libro*)malloc(registros*sizeof(libro)))==NULL){
		     printf("Error al reservar vector dinamico.\n");
		     exit(-1);
	       }                         
	       
	       
	       if((f=fopen(fichero, "rb"))==NULL){
		     printf("Error al abrir el fichero para ver libros.\n");
		     exit(-1);
	       }
	       
	       while(fread(&vector[i], sizeof(libro), 1, f)==1){
	       i++;                        
	       }
	       
	       for(i=0; i<registros; i++){
		        printf("Libro: <%s> del autor <%s> a precio de %.2f € quedan  %.0f  unidades.\n", vector[i].titulo, vector[i].autor, vector[i].precio, vector[i].unidades);         
	       }
	       
	       fclose(f);
	       
	}//Almacenar en un vector dinamico

//elimina una unidad al libro introducido
	void venderLibro(char * fichero, char * titulo){
	     
	     FILE* f;
	     libro aux;
	     int encontrado=0;
	     
	     if((f=fopen(fichero, "r+b"))==NULL){
		                  printf("Error al abrir el fichero para vender libro.\n");
		                  exit(-1);                     
	     }
	     
	     encontrado = comprobarLibro(fichero, titulo);
	     
	     if(encontrado){
		            printf("El libro <%s> esta disponible.\n", titulo);               
	     }else{
		            printf("El libro <%s> esta agotado.\n", titulo);
	     }
	     
	     
	     encontrado=0;
	     
	     while((fread(&aux, sizeof(libro), 1, f)==1)&&(encontrado==0)){
		               if(strcmp(aux.titulo,titulo)==0){
		                                      aux.unidades--;                       
		                                      fseek(f, -1*sizeof(libro) ,SEEK_CUR);
		                                      encontrado=1;
		                                      fwrite(&aux, sizeof(libro), 1, f);
		                                      printf("Libro vendido al cliente, son  %.2f €\n", aux.precio);
							printf("Quedan %.0f unidades del libro <%s> , autor <%s>\n\n", aux.unidades, aux.titulo, aux.autor);
		               }
		               
	     }
	     
	     fclose(f);
	}
     
//borra los libros que no tienen unidades.
     
	void sinUnidades(char* fichero){
	     
	     FILE* f, *g;
	     libro aux;     
	     
	     if((f=fopen(fichero, "rb"))==NULL){
		                  printf("Error al abrir el fichero <%s> de sin unidades.\n\n", fichero);
	     }
	     
	     if((g=fopen("temporal.bin", "wb"))==NULL){
		                  printf("Error al abrir el fichero <%s> de sin unidades.\n\n", "temporal.bin");                            
	     }
	     
	     while(fread(&aux, sizeof(libro), 1, f)==1){
		               if(aux.unidades!=0)
		               {
		               fwrite(&aux, sizeof(libro), 1, g);
		               }else{
		               printf("Se ha agotado el libro <%s> del autor <%s> a precio %.2f €\n\n", aux.titulo, aux.autor, aux.precio);      
		               }                  
	     
	     
	     }
	     
	     fclose(f);
	     fclose(g);
	     
	     remove(fichero);
	     rename("temporal.bin", fichero);

	}
