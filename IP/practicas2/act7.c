#include<stdio.h>

int main()
{
float precio;
int tipo;
printf("General (1)\nReducido (2)\nReducido que pasa a General (3)\nSuperreducido que pasa a General (4)\nTipo superreducido(5)\n");
printf("Introduce el tipo de iva que se le aplicará: ");
scanf("%d", &tipo);
printf("Introduce el precio del producto:");
scanf("%f", &precio);
switch(tipo)
{
case 1: printf("Antes costaba %f y ahora cuesta %f\n", precio+0.18*precio, precio+0.21*precio);
break;
case 2: printf("Antes costaba %f y ahora cuesta %f\n", precio+0.08*precio, precio+0.1*precio);
break;
case 3: printf("Antes costaba %f y ahora cuesta %f\n", precio+0.08*precio, precio+0.21*precio);
break;
case 4: printf("Antes costaba %f y ahora cuesta %f\n", precio+0.04*precio, precio+0.21*precio);
break;
case 5: printf("Antes costaba %f y ahora cuesta %f\n", precio, precio);
break;

}


return 0;
}
