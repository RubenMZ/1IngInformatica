/*

4.  Un programa de C contiene las siguientes sentencias
float a = 0.001;
float b = 0.003;
float c, *pa, *pb
pa = &a;
*pa = 2 * a;
pb = &b;
c = 3 * (*pb - *pa ); 
Si el valor asignado a “a” empieza en la dirección 1130 (hexadecimal) y el valor asignado a “b” 
empieza en 1134 y el valor asignado a “c” empieza en 1138, entonces:

a) ¿Qué valor es representado por &a?--->4400
b) ¿Qué valor es representado por &b?--->4404
c) ¿Qué valor es representado por &c?--->4408
d) ¿Qué valor es asignado a pa?--->&a=4400
e) ¿Qué valor es representado por *pa?--->2*a=0.002
f) ¿Qué valor es representado por &(*pa)?--->4400
g) ¿Qué valor es asignado a pb?--->&b=4404
h) ¿Qué valor es representado por *pb?--->b=0.003
i) ¿Qué valor es asignado a c?--->3*(*pb-*pa)=0.003

*/
#include<stdio.h>

int main(){
float a = 0.001;
float b = 0.003;
float c, *pa, *pb;
pa = &a;
(*pa) = 2*a;
pb = &b;
c = 3 * (*pb - *pa );


printf("El valor de a: %f , b: %f , c: %f\n\n", a, b,c);

return 0;
}
