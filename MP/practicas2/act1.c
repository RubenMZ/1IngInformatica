/*1. Cuestiones sobre punteros y matrices dinámicas
Supón una matriz dinámica (float ** tabla) de 2x3 elementos, con los siguientes valores.
{ {1.1, 1.2, 1.3}, {2.1.,2.2, 2.3}}
a)¿Cual es el significado de tabla? ---> Representa la direccion de memoria inicial de tabla &(tabla[0][0])
b)¿Cual es el significado de (tabla+1)? ---> Representa la direccion de memoria de la segunda posicion &(tabla[0][1])
c)¿Cual es el significado de *(tabla+1)? ---> &tabla[1][1]
d)¿Cual es el significado de (*(tabla+1)+1)? --->
e)¿Cual es el significado de (*(tabla)+1)? --->
f)¿Cual es el valor de *(*(tabla+1)+1)? --->
g)¿Cual es el valor de *(*(tabla)+1)? --->
h)¿Cual es el valor de *(*(tabla+1))? --->Es el elemento tabla[1][1]
*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 100

int main(){

float tabla1[TAM][TAM]= {{1.1, 1.2, 1.3}, {2.1,2.2, 2.3}};
float ** tabla;

tabla=(float **)malloc(sizeof(float*)*2);
tabla[0]=(float *)malloc(sizeof(float)*3);
tabla[1]=(float *)malloc(sizeof(float)*3);

tabla[0][0]=1.1;
tabla[0][1]=1.2;
tabla[0][2]=1.3;
tabla[1][0]=2.1;
tabla[1][1]=2.2;
tabla[1][2]=2.3;


printf("a) %p = %p\n", tabla, &(tabla[0][0]));
printf("b) %p = %p\n", (tabla+1), &(tabla[1]) );
printf("c) %p = %p\n", *(tabla+1), &(tabla[1][0]) );
printf("d) %p = %p\n",(*(tabla+1)+1), &(tabla[1][1]) );
printf("e) %p = %p\n",(*(tabla)+1), &(tabla[0][1]) );
printf("f) %f = %f\n",*(*(tabla+1)+1), tabla[1][1] );
printf("g) %f = %f\n", *(*(tabla)+1), tabla[0][1]);
printf("h) %f = %f\n", *(*(tabla+1)), tabla[1][0]);
return 0;

}
