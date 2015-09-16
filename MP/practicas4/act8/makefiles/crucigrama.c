/* ---------------------------------------
    Programa principal que permite resolver
    un crucigrama
   -------------------------------------*/
#include <stdio.h>
#include "ficheros.h"
#include "memoria.h"
#include "crucigrama.h"


int main(){

   existeFichero();
   cargaFicheroBinario();
   reservaCrucigrama();
   creaCrucigrama();
   imprimeCrucigrama(); 
   liberaCrucigrama();  
      
   return 0;
}   

void imprimeCrucigrama(){
   printf("Imprime un crucigrama\n");
}

void creaCrucigrama(){
   printf("Crea un crucigrama\n");
}
