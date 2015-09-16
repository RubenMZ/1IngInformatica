#include<stdio.h>
#include<math.h>

int main ()

{
float valor1, valor2;

printf("Introduzca el primer valor:");
scanf("%f",&valor1);
printf("Introduzca el segundo valor:");
scanf("%f",&valor2);

printf("El valor mayor es: %f\n", valor1>valor2?valor1:valor2);

return 0;
}

