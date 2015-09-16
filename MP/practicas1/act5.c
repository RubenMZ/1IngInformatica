/*

5.  Un programa en C contiene la siguiente declaración:
int x[8] = {10, 20, 30, 40, 50, 60, 70, 80};
a) ¿Cuál es el significado de x?--->direccion de memoria inicial del vector, es decir, x[0]
b) ¿Cuál es el significado de (x + 2) ?--->direccion de memoria de la tercera posicion del vector, es decir, x[2]
c) ¿Cuál es el valor de *x?--->10
d) ¿Cuál es el valor de (*x+2) ?--->12
e) ¿Cuál es el valor de *(x+2)?--->30

*/

#include<stdio.h>

int main(){

int x[8] = {10, 20, 30, 40, 50, 60, 70, 80};

printf("*x: %d  , (*x+2): %d  , *(x+2): %d \n\n", *x, (*x+2), *(x+2));

return 0;
}

