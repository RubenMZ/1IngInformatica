/* 3.  Un programa de C contiene las siguientes sentencias
int i, j = 25;
int *pi, *pj = &i:
*pj = j + 5;
i = *pj + 5:
pi = pj;
*pi = i + j;
Si el valor asignado a i empieza en la dirección F9C (hexadecimal) y el valor asignado a j empieza 
en FE9 entonces:
a) ¿Qué valor es representado por &i?--->3996
b) ¿Qué valor es representado por &j?--->4073
c) ¿Qué valor es asignado a pj?--->&i=3996
d) ¿Qué valor es asignado a *pj? --->30
e) ¿Qué valor es asignado a i?--->35
f) ¿Qué valor es representado por pi?--->pj=3996
g) ¿Qué valor es asignado a *pi?--->60
h) ¿Qué valor es representado por la expresión (*pi + 2)?--->62
*/


//PASTO

#include<stdio.h>


int main(){

int i, j = 25;
int *pi, *pj = &i:
*pj = j + 5;
i = *pj + 5:
pi = pj;
*pi = i + j;



return 0;
}
