#include<stdio.h>

int main()
{
float valor1, valor2;

printf("Introduzca el primer valor:");
scanf("%f",&valor1);
printf("Introduzca el segundo valor:");
scanf("%f",&valor2);

if(valor1>valor2)
{
printf("El valor 1 es el mayor: %f\n", valor1);
}
else
{
printf("El valor 2 es el mayor: %f\n", valor2);
}

return 0;
}
